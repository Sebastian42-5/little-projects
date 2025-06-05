const zoomBtn = document.getElementById("zoom_btn");

const img = document.getElementById("the_image");

zoomBtn.addEventListener("click", () => {
    img.classList.add('zoomed')
});
