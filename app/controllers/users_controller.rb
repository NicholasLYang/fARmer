class UsersController < ApplicationController
  def show
    @user = User.find(params[:id])
  end

  def show_json
    @user = User.find(params[:id])
    render json: @user
  end

end
