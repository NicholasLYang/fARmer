class TokensController < Devise::ConfirmationsController

  def show_json
    @token = Token.where(user_id: params[:id])
    render json: @token
  end

  def update
    @user = User.where(email: params[:email])
  end

  private
  def token_params
    params.require(:token).permit(:email)
  end
end
