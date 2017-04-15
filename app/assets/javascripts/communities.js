$('.plant-name').hover(
    function() {
        console.log("HOVERING");
        $('.hover-plant-image').show();
    },
    function() {
        console.log("NOT HOVERING");
        $('.hover-plant-image').hide();
    }
);
