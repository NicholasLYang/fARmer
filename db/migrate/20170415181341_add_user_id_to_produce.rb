class AddUserIdToProduce < ActiveRecord::Migration[5.1]
  def change
    add_column :produces, :user_id, :integer
  end
end
