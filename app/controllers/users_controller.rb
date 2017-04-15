class UsersController < ApplicationController
  skip_before_action :authenticate_user!, only: [:show_json]
  def show
    @user = User.find(params[:id])
  end

  def show_json
    @user = User.find(params[:id])
    render json: @user
  end

  def index_json
    @users = User.all
    render json: @users
  end
end
