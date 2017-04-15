class CommunitiesController < ApplicationController
  skip_before_action :authenticate_user!, only: [:index, :index_json]
  before_action :set_community, only: [:show, :edit, :update, :destroy]

  # GET /communities
  # GET /communities.json
  def index
    @communities = Community.all
  end

  def index_json
    @communities = Community.all
    render json: @communities
  end
  # GET /communities/1
  # GET /communities/1.json
  def show
    @community = Community.find(params[:id])
    @user_plants = {}
    @user_produce = {}

    @community.users.each do |user|
      plots = Plot.where(user_id: user.id)
      produces = Produce.where(user_id: user.id)
      plot_plants = []
      produce_plants = []

      produces.each do |produce|
        plant_name = Plant.find(produce.plant_id).name.pluralize.downcase
        produce = "#{produce.quantity} #{produce.units} of #{plant_name}"
        produce_plants << produce
      end

      plots.each do |plot|
        plot_plants << Plant.find(plot.plant_id).name.pluralize.downcase
      end
      @user_produce[user.id] = produce_plants
      @user_plants[user.id] = plot_plants
    end
  end

  # GET /communities/new
  def new
    @community = Community.new
  end

  # GET /communities/1/edit
  def edit
  end

  # POST /communities
  # POST /communities.json
  def create
    @community = Community.new(community_params)

    respond_to do |format|
      if @community.save
        format.html { redirect_to @community, notice: 'Community was successfully created.' }
        format.json { render :show, status: :created, location: @community }
      else
        format.html { render :new }
        format.json { render json: @community.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /communities/1
  # PATCH/PUT /communities/1.json
  def update
    respond_to do |format|
      if @community.update(community_params)
        format.html { redirect_to @community, notice: 'Community was successfully updated.' }
        format.json { render :show, status: :ok, location: @community }
      else
        format.html { render :edit }
        format.json { render json: @community.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /communities/1
  # DELETE /communities/1.json
  def destroy
    @community.destroy
    respond_to do |format|
      format.html { redirect_to communities_url, notice: 'Community was successfully destroyed.' }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_community
      @community = Community.find(params[:id])
    end

    # Never trust parameters from the scary internet, only allow the white list through.
    def community_params
      params.require(:community).permit(:name, :address)
    end
end
