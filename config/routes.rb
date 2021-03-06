Rails.application.routes.draw do
  resources :produces
  resources :communities
  resources :plants
  resources :plots
  get 'welcome/index'


  devise_for :users, controllers: {
               sessions: 'users/sessions'
             }

  get '/user/:id', to: 'users#show', as: 'user'
  get '/plots_json', to: 'plots#index_json'
  get '/plant_json/:id', to: 'plants#show_json'
  get '/user_json/:id', to: 'users#show_json'
  get '/users_json', to: 'users#index_json'
  get '/communities_json', to: 'communities#index_json'
  get '/seed', to: 'plots#seed'

  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html
  root 'welcome#index'
end
