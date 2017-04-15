class Plot < ApplicationRecord
  belongs_to :user
  has_one :plant
end
