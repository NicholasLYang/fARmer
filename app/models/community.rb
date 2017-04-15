class Community < ApplicationRecord
  has_many :users
  has_many :plots
end
