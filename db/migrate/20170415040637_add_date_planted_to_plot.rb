class AddDatePlantedToPlot < ActiveRecord::Migration[5.1]
  def change
    add_column :plots, :date_planted, :datetime
  end
end
