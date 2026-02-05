<p align="center">
  <img src="https://github.com/alizealebaron/alizealebaron/blob/main/assets/get_next_line.png" width="120"/>
</p>
<h3 align="center">
  <em>Reading a line from a file descriptor is way too tedious.</em>
</h3>

---

<div align="center">
  <p>
      <img src="https://img.shields.io/badge/score-100%20%2F%20100-success?style=for-the-badge" />
      <img src="https://img.shields.io/github/languages/count/alizealebaron/get_next_line?style=for-the-badge&logo=" />
      <img src="https://img.shields.io/github/languages/top/alizealebaron/get_next_line?style=for-the-badge" />
      <img src="https://img.shields.io/github/last-commit/alizealebaron/get_next_line?style=for-the-badge" />
  </p>
</div>

## ⚠️ Avant propos

- **Portfolio :** Ce repetoire se concentre sur un seul sujet. Vous pouvez retrouver tous mes projets sur mon [profil](https://github.com/alizealebaron).
- **Sujet :** Conformément aux règles de 42, vous ne trouverez pas le sujet de l'exercice dans ce répertoire.
- **État du projet:** Le code est exactement le même que lorsqu'il est validé. Il ne sera pas mis à jour même s'il contient des erreurs.
- **Aide & Licence :** Ce repertoire est principalement là pour vous aider à faire votre propre code. Évitez de copier / coller sans comprendre le code.

## 🦆 Status

**Commencé le :** 28/10/2025

**Rendu le :** 04/11/2025.

**Note :** 100/100.

## 📂 Objectif du projet

Le but de get_next_line est d’écrire une fonction capable de lire une ligne complète depuis un fichier ou l’entrée standard (stdin), ligne par ligne, à chaque appel. Ce projet nous initie à la gestion des flux, aux appels système (`read`, `open`, etc.), et à la mémoire dynamique en C.
La difficulté réside dans la gestion des buffers et des caractères de fin de ligne (\n), tout en optimisant les lectures pour éviter les accès inutiles au fichier. La fonction doit être robuste : elle doit gérer les erreurs, les fichiers vides, ou encore les lignes de taille variable.

**📦 Contraintes et intégration :**

On ne peut utiliser que les appels autorisés (`read`, `malloc`, `free`).
La fonction doit être compatible avec les projets futurs.
Elle doit fonctionner aussi bien avec un fichier qu’avec stdin, et gérer plusieurs descripteurs simultanément (optionnel pour la partie bonus).

**🏆 Objectif final**

Créer une fonction efficace, modulaire et réutilisable, qui respecte la norme 42 et les contraintes techniques. Le défi est de maîtriser la lecture séquentielle et la gestion des buffers, tout en garantissant une exécution sans erreurs.

## 💡 Inspirations & Sources

- [42-cursus.gitbook.io/guide/1-rank-01/get_next_line](https://42-cursus.gitbook.io/guide/1-rank-01/get_next_line)

**Contact :** alebaron@student.42lehavre.fr
