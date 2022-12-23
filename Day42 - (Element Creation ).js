const couses = [
  {
    name: "Complete ReactJS course",
    price: "2.3"
  },
  {
    name: "Complete Angular course",
    price: "2.1"
  },
  {
    name: "Complete MERN course",
    price: "2.7"
  },
  {
    name: "Complete C++ course",
    price: "2.8"
  },  {   name: "Complete JAVA course",   price: "2.9" }, {
    name: "Complete PYTHON course",
    price: "2.2"  },] 
function generateLIST(){
  const ul = document.querySelector(".list-group");
  ul.innerHTML = "";
  couses.forEach((course) =>{   
    const li = document.createElement("li")
    li.classList.add("list-group-item")
    const name = document.createTextNode(course.name);
    li.appendChild(name)
    const span = document.createElement("span")
    span.classList.add("float-right");
    const price = document.createTextNode("$ "+ course.price)
    span.appendChild(price);
    li.appendChild(span);
    ul.appendChild(li) });}

window.addEventListener("load", generateLIST);

const button = document.querySelector(".sort-btn")
button.addEventListener("click", () => {
  couses.sort((a,b) => a.price - b.price );
  generateLIST();
})
const but2 = document.querySelector(".sort-btnn")
but2.addEventListener("click", () => {
  couses.sort((a, b) => b.price - a.price);
  generateLIST();
})

