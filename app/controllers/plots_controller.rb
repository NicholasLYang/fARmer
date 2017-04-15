class PlotsController < ApplicationController
  skip_before_action :authenticate_user!, only: [:index, :index_json, :create, :seed]
  skip_before_action :verify_authenticity_token, :only => [:index_json, :create]
  before_action :set_plot, only: [:show, :edit, :update, :destroy]

  # GET /plots
  # GET /plots.json
  def index
    @plots = Plot.all
    respond_to do |format|
      format.html
    end
  end

  def seed
    Rails.application.load_seed
    respond_to do |format|
      format.html {redirect_to root_path, notice: "Seeded"}
    end
  end

  def index_json
    @plots = Plot.all
    render json: @plots
  end

  # GET /plots/1
  # GET /plots/1.json
  def show
  end

  # GET /plots/new
  def new
    @plot = current_user.plots.build
    @plants = Plant.all
  end

  # GET /plots/1/edit
  def edit
  end

  # POST /plots
  # POST /plots.json
  def create
    @plot = current_user.plots.new(plot_params)

    @plot.community_id = current_user.community_id
    respond_to do |format|
      if @plot.save
        format.html { redirect_to @plot, notice: 'Plot was successfully created.' }
        format.json { render :show, status: :created, location: @plot }
      else
        format.html { render :new }
        format.json { render json: @plot.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /plots/1
  # PATCH/PUT /plots/1.json
  def update
    respond_to do |format|
      if @plot.update(plot_params)
        format.html { redirect_to @plot, notice: 'Plot was successfully updated.' }
        format.json { render :show, status: :ok, location: @plot }
      else
        format.html { render :edit }
        format.json { render json: @plot.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /plots/1
  # DELETE /plots/1.json
  def destroy
    if current_user.id == @plot.user_id
      @plot.destroy
      respond_to do |format|
        format.html { redirect_to plots_url, notice: 'Plot was successfully destroyed.' }
        format.json { head :no_content }
      end
    else
      format.html { redirect_to plots_url, alert: 'Unable to destroy plot; you do not own it' }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_plot
      @plot = Plot.find(params[:id])
    end

    # Never trust parameters from the scary internet, only allow the white list through.
    def plot_params
      params.require(:plot).permit(:user_id, :plant_id)
    end
end
