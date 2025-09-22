function insert(num) {
  document.getElementById("result").value += num;
}

function clearResult() {
  document.getElementById("result").value = "";
}

function calculate() {
  try {
    document.getElementById("result").value = eval(document.getElementById("result").value);
  } catch {
    document.getElementById("result").value = "Error";
  }
}
