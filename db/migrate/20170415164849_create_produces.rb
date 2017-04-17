class CreateProduces < ActiveRecord::Migration[5.1]
  def change
    create_table :produces do |t|
      t.string :plant_id
      t.integer :quantity
      t.string :units

      t.timestamps
    end
  end
end
