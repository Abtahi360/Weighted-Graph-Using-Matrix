# Weighted Graph Using Matrix (C++)

This repository contains simple C++ implementations of **weighted graphs using adjacency matrix**.

It includes:

* Weighted Directed Graph
* Weighted Undirected Graph

Both programs read input from a file and display the adjacency matrix.

---

## 🚀 Features

* Adjacency matrix representation
* Weighted edges support
* Directed & Undirected graphs
* File input using `g1.txt`
* Uses `INF` for no connection

---

## 📁 Folder Structure

```
.
├── Directed/
│   ├── g1.txt
│   └── directed.cpp
├── Undirected/
│   ├── g1.txt
│   └── undirected.cpp
```

---

## 🧾 Input Format (g1.txt)

```
n m
u1 v1 w1
u2 v2 w2
...
um vm wm
```

### Example:

```
5 5
0 1 5
1 3 10
1 2 7
2 3 3
3 4 6
```

---

## ⚙️ How It Works

### Directed Graph

* Creates `n x n` matrix
* Sets all values to `INF (99999)`
* Updates: `g[u][v] = w`

### Undirected Graph

* Creates `n x n` matrix
* Sets all values to `INF (99999)`
* Updates:

  * `g[u][v] = w`
  * `g[v][u] = w`

---

## 🖥️ Output

* Displays adjacency matrix
* Connected edges → weight
* No connection → `INF`

---

## 🛠️ Technologies

* C++
* File Handling
* Graph (Adjacency Matrix)

---

## 📌 Notes

* `99999` is used as infinity
* File name is fixed (`g1.txt`)
* Good for learning graph basics

---

## 📜 License

Free for learning and educational use.
