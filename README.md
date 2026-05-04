# 🚀 Cpp-Text-Filters

A modular C++ pipeline for cleaning and analyzing text, with special support for Arabic text processing.

---

## 🧠 Overview

This project processes text step-by-step using multiple filters to transform raw HTML content into clean, analyzable text.

---

## 🔄 Processing Pipeline

1. HTML Cleaner  
   Removes <style>, <script>, and all HTML tags

2. Number Remover  
   Removes all digits from text

3. Punctuation Remover  
   Removes punctuation symbols

4. Arabic Diacritics Remover  
   Removes Arabic تشكيل (harakat)

5. Stop Words Remover  
   Removes common Arabic words like: في، من، على...

6. Word Frequency Analyzer  
   Counts occurrences of each word

7. Word Counter  
   Displays total word count

---

## 📂 Project Structure

/project  
│── html_cleaner.cpp  
│── remove_numbers.cpp  
│── remove_punctuation.cpp  
│── remove_arabic_diacritics.cpp  
│── remove_stopwords.cpp  
│── word_frequency.cpp  
│── word_counter.cpp  
│── index.html  


---

## ⚙️ Compilation

bash g++ html_cleaner.cpp -o html_cleaner g++ remove_numbers.cpp -o remove_numbers g++ remove_punctuation.cpp -o remove_punctuation g++ remove_arabic_diacritics.cpp -o remove_arabic_diacritics g++ remove_stopwords.cpp -o remove_stopwords g++ word_frequency.cpp -o word_frequency g++ word_counter.cpp -o word_counter 

---

## ▶️ Execution Order

bash ./html_cleaner ./remove_numbers ./remove_punctuation ./remove_arabic_diacritics ./remove_stopwords ./word_frequency ./word_counter 

---

## ✨ Features

- Clean HTML content
- Arabic text preprocessing
- Remove noise (numbers, punctuation, stop words)
- Word frequency analysis
- Modular design (easy to extend)

---

## ⚠️ Notes

- Ensure input file (index.html) exists
- Each filter depends on the output of the previous one
- Stop words list can be expanded easily

---

## 🚧 Future Improvements

- Merge all filters into one executable
- Add command-line arguments
- Improve Arabic NLP handling
- Add GUI interface

---

## 👨‍💻 Author

Mohammad Nak
