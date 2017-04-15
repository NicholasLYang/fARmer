# This file should contain all the record creation needed to seed the database with its default values.
# The data can then be loaded with the rails db:seed command (or created alongside the database with db:setup).
#
# Examples:
#
#   movies = Movie.create([{ name: 'Star Wars' }, { name: 'Lord of the Rings' }])
#   Character.create(name: 'Luke', movie: movies.first)
users = User.create({name: "Nicholas",
                     email: "nick@nicholasyang.com",
                     password: "fucking",
                     community_id: 1})

plant = Plant.create!([
                       # { name: 'Artichokes',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000JWQs6wHUSFw/s/750/750/Jerusalem-Artichokes-8350e.jpg" },

                       # { name: 'Beans',
                       #   expected_yield: 6,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000Q9ZJAfdKcOE/s/750/750/Heirloom-Lima-Beans-34375.jpg" },

                       # { name: 'Beets',
                       #   expected_yield: 6,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000H3C5vMaaecU/s/750/750/Beetroot-Globe-41001.jpg"},

                       # { name: 'Broccoli',
                       #   expected_yield: 3,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000nvJ5ECxAVS0/s/750/750/Broccoli-JAW3335.jpg"},

                       # { name: 'Brussel Sprouts',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000qEXNF4MTbPs/s/750/750/Brussel-Sprouts-J019998.jpg"},

                       # { name: 'Cabbage',
                       #   expected_yield: 6,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000meDD0nm3EPQ/s/750/750/Cabbage-Quick-Step-14002.jpg"},

                        { name: 'Carrots',
                          expected_yield: 4,
                          image: "http://cdn.c.photoshelter.com/img-get/I0000sZw54wToLjM/s/750/750/Carrots-Growing-G019863.jpg"},

                       # { name: 'Cauliflower',
                       #   expected_yield: 4,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000uu0mFK3rrTg/s/750/750/Cauliflower-Stock-Photo-J036162.jpg"},

                       # { name: 'Celery',
                       #   expected_yield: 4,
                       #   image: "http://media.npr.org/assets/img/2016/06/13/celery_custom-f77a18ccad839316bdd9e4df3fd35f4d43fa662d-s900-c85.jpg"},

                       # { name: 'Chard',
                       #   expected_yield: 3,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000XNgQBYKIqr0/s/750/750/Rainbow-Swiss-Chard-28670.jpg" },

                       # { name: 'Collards',
                       #   expected_yield: 3,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000zhBUWupnHSA/s/750/750/Collards-36352.jpg" },

                        { name: 'Corn',
                          expected_yield: 3,
                          image: "http://cdn.c.photoshelter.com/img-get/I0000ReX_l5dDEeQ/s/750/750/Corn-Ears-JWW-5831.jpg"},

                       # { name: 'Cucumbers',
                       #   expected_yield: 5,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000HAqyNveBQY4/s/750/750/3163.jpg"},
                        { name: 'Eggplant',
                          expected_yield: 3,
                          image: "http://cdn.c.photoshelter.com/img-get/I0000dD9iEztTizs/s/750/750/Striped-Eggplants-014305.jpg"},

                       # { name: 'Garlic',
                       #   expected_yield: 1,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000joUmq37eA50/s/750/750/Garlic-Provence-Wight-Purple-39007.jpg"},

                       # { name: 'Kale',
                       #   expected_yield: 3,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000FWzKUY0HSqg/s/750/750/Kale-Lacinato-J040288.jpg"},

                       # { name: 'Kohlrabi',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000.fGawjndjPk/s/750/750/Kohlrabi-Growing-J047054.jpg"},

                       # { name: 'Leek',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000.P4tRjb8TB0/s/750/750/Leek-Edison-G012609.jpg" },

                       # { name: 'Lettuce',
                       #   expected_yield: 2,
                       #  image: "http://cdn.c.photoshelter.com/img-get/I0000O7imW5i3wXw/s/750/750/Lettuce-Vegetable-Garden-23908.jpg"},

                       # { name: 'Melons',
                       #   expected_yield: 4,
                       #   image: "https://upload.wikimedia.org/wikipedia/commons/2/2c/Cucumis_myriocarpus_-_Melons.JPG" },

                       # { name: 'Okra',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000VStH3DMUUtA/s/750/750/Okra-J014153.jpg" },

                       # { name: 'Onions',
                       #   expected_yield: 5,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000kYniSFemyyk/s/750/750/Onions-2677.jpg" },

                       # { name: 'Peas',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000k2WlGNTOzeA/s/750/750/Purple-Podded-Heirloom-Peas-JWW5547.jpg" },

                       # { name: 'Peppers',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000cEnhoYsjtQ8/s/750/750/Chocolate-Bell-Peppers-24721.jpg" },

                       # { name: 'Potatoes',
                       #   expected_yield: 5,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000pioFO.nJKgc/s/750/750/Potato-Anya-Second-Early-31751.jpg" },

                        { name: 'Pumpkins',
                          expected_yield: 12,
                          image: "http://cdn.c.photoshelter.com/img-get/I0000veE2D.UwHL4/s/750/750/Pumpkin-Baby-Bear-16472.jpg" },

                       # { name: 'Radish',
                       #   expected_yield: 1,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000_pZXoMl7zdk/s/750/750/Radishes-Annabel-J036111.jpg"},

                       # { name: 'Spinach',
                       #   expected_yield: 2,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I00001lCG3haW_Ys/s/750/750/Spinach-Growing-Toscana-20949.jpg" },

                       # { name: 'Squash',
                       #   expected_yield: 9,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I00000gKgM.EMDFo/s/750/750/Butternut-Squash-JAW3284.jpg" },

                        { name: 'Tomatoes',
                          expected_yield: 7,
                          image: "http://cdn.c.photoshelter.com/img-get/I0000EcKRgKRmLUE/s/750/750/Tomato-Marglobe-18215fc.jpg"},

                        { name: 'Turnips',
                          expected_yield: 6,
                          image: "http://cdn.c.photoshelter.com/img-get/I0000t77Kjr0XJgg/s/750/750/Turnip-Growing-10979.jpg" },

                       # { name: 'Watermelons',
                       #   expected_yield: 4,
                       #   image: "http://cdn.c.photoshelter.com/img-get/I0000alH0ON8mVkU/s/750/750/Watermelon-8462.jpg"}
                     ])

communities = Community.create!([
                                  { name: "Cliff Haven",
                                    address: "417 Riverside Drive"}
                                ])
