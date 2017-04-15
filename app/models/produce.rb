class Produce < ApplicationRecord
  belongs_to :user
  has_one :plant
end
