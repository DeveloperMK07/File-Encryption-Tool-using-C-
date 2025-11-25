# 🔐 File Encryption Tool — C++

A lightweight command-line project that lets you **password‑protect and unlock files locally**. Built using C++ file handling, hashing, and reversible encryption logic — ideal for learning security fundamentals and showcasing system‑level programming in interviews.

---

## ✅ Why This Project?

We all store personal files — passwords, documents, notes, code — but not everyone wants or needs heavy encryption apps.

This tool gives you:

* Full control over file protection
* No internet dependency
* Simple, fast, and private local encryption
* Clear demonstration of C++ system programming

Perfect for interviews, resumes, and learning crypto basics.

---

## 🚀 Features

✅ Password‑protected file locking & unlocking
✅ Local encryption using hashed password key
✅ No duplicate output files — encrypts in‑place
✅ Minimal, easy‑to‑understand C++ implementation
✅ Cross‑platform support (Windows, Linux, macOS)
✅ Extendable — GUI, AES, multi‑file support, etc.

---

## 📂 Project Structure

```
📁 FileEncryptionTool
 ├── main.cpp
 ├── README.md
 └── (future) gui/
```

---

## 🛠️ Tech Stack

* C++17
* Standard Library (fstream, hashlib)
* XOR‑based encryption for reversible protection

> AES‑256 support can be added later for production‑grade security.

---

## ✅ How It Works

1. User selects **Protect** or **Access** mode
2. Enters filename and password
3. Password is hashed using **SHA‑256**
4. File contents are encrypted or decrypted using the generated key
5. Original file gets replaced safely

---

## 📥 Installation & Setup

### 1️⃣ Clone Repo

```
git clone https://github.com/your-username/file-encryption-tool.git
cd file-encryption-tool
```

### 2️⃣ Compile

```
g++ main.cpp -o protect
```

### 3️⃣ Run

```
./protect
```

---

## 🧪 Usage Example

```
1. Protect File
2. Access File
Choice: 1
Enter file name: notes.txt
Enter password: mySecurePass
✅ File protected successfully!
```

```
1. Protect File
2. Access File
Choice: 2
Enter file name: notes.txt
Enter password: mySecurePass
✅ File unlocked successfully!
```

---


## 🧩 Roadmap / Future Enhancements

* ✅ GUI using Qt/Flutter
* ✅ AES‑256 encryption mode
* ✅ Multi‑file/folder protection
* ✅ Encrypted logs & metadata
* ✅ File recovery mechanism
* ✅ Drag‑and‑drop desktop app

---

## ⚠️ Security Disclaimer

This project is built for **learning, interviews, and portfolio use**.
XOR‑based encryption is not suitable for highly sensitive or commercial security applications.
For production, upgrade to **AES‑256 + PBKDF2 + salts**.

---

## ✅ What This Project Demonstrates (for Recruiters)

✔ Strong fundamentals in C++
✔ File handling & stream operations
✔ Hashing & reversible encryption logic
✔ Secure design thinking
✔ Clean modular coding practices

---


