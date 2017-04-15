class AddExpectedYieldToPlants < ActiveRecord::Migration[5.1]
  def change
    add_column :plants, :expected_yield, :integer
  end
end
