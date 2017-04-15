Rails.application.routes.draw do
  resources :plants
  resources :plots
  get 'welcome/index'

  devise_for :users, controllers: {
               sessions: 'sessions',
               registrations: 'registrations'
             }

  get '/users/:id', to: 'users#show', as: 'user'
  get '/plots_json', to: 'plots#index_json'
  get '/plant_json/:id', to: 'plants#show_json'
  get '/user_json/:id', to: 'users#show_json'
  get '/seed', to: 'plots#seed'

  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html
  root 'welcome#index'
end
