class AddImageToCommunity < ActiveRecord::Migration[5.1]
  def change
    add_column :communities, :image, :string
  end
end
