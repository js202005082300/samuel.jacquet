# [Langage C #1 - introduction](https://www.youtube.com/watch?v=90hGCMC3Chc)
@https://github.com/jasonchampagne/FormationVideo/tree/master/Ressources/C

![Ken Thompson and Dennis Ritchie](Ken Thompson and Dennis Ritchie.jpg)
 
* **Standard ouvert** dont les bugs ont eu le temps d’être corrigé. Créé dans les années 70’s sur base du travail de Ken Thompson and Dennis Ritchie, personnes qui ont fait évoluer les languages (B..) jusqu’au language C.

* **Language de programmation impérative**, càd qu’il fonctionne suivant une suite d’instructions jusqu’à sa fin, un ensemble de commandes à suivre de manière séquentielle.

* **Language compilé**, càd qu’un code source est écrit dans des fichiers et ensuite compilé par un compilateur. La syntaxe utilisée est convertie en binaire, language de la machine qui ne connait que des zéros et des un.

* **Language de haut niveau** car il a une syntaxe simplifiée par rapport à des languages d’assembleur (Mips).

* **Language de bas niveau** car on va directement travailler sur la mémoire, càd faire des allocations de mémoire dans l’ordinateur pour y stocker des informations. Il faut tenir compte de la capacité de mémoire et de la libération de celle-ci après utilisation. Par rapport à d’autres languages (Java, CShap...) qui utilise un système de libération de mémoire, un “Garbage Collector” (un ramasse miettes).

* **Language normalisé** car on veut que le language reste le même au niveau de sa syntaxe, de la méthode de programmation et de ses normes (norme C89, C11, ...).

* **Language peu portable** car la version binaire de notre programme ne fonctionnera que sur le système sur lequel on a compilé, il n’est pas multiplateforme.

* **Language avec peu de concept** mais dont la syntaxe reste compliquée et peu amenée à beaucoup d’erreurs (mémoire mal alloué, trop peu de caractères alloués pour une chaîne de charactères).

* **Language de référence** dans les systèmes embarqués, dans les systèmes d’exploitation, sur les serveurs, dans les jeux vidéo, dans des bibliothèques partagées sous forme de packages qui peut être proposé à d’autres développeurs comme des outils. Exemple : Le noyau de chez Linux (The Linux Kernel Archives) est fait en C. La SDL, est code qui permet de manipuler des images, de gérer du son, gérer des manettes, etc.



