class CreateCommunities < ActiveRecord::Migration[5.1]
  def change
    create_table :communities do |t|
      t.string :name
      t.string :address

      t.timestamps
    end
  end
end
