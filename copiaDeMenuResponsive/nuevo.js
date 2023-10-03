const navToggle = document.querySelector(".nav-toggle")
const desorden = document.querySelector(".desorden")

navToggle.addEventListener("click", () => {
    desorden.classList.toggle(".visible")


    if (desorden.classList.contains("visible")) {
        navToggle.setAttribute("aria-label", "cerrar menu")
    }

    else {
        navToggle.setAttribute("aria-laber", "abrir menu")
    }
})
