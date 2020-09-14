# Partie 0 - Introduction au développement sur arduino

## Arduino ?
> Arduino est la marque d'une plateforme de prototypage open-source qui permet aux utilisateurs de créer des objets électroniques interactifs à partir de cartes électroniques matériellement libres sur lesquelles se trouve un microcontrôleur (d'architecture Atmel AVR comme l'Atmega328p, et d'architecture ARM comme le Cortex-M3 pour l'Arduino Due). 

(source [wikipédia](https://fr.wikipedia.org/wiki/Arduino))

Concrètement, un arduino est un petit circuit imprimé, qui sert à facilement et rapidement fabriquer des projets d'électroniques. La carte contient un petit processeur (Atmega328p pour les UNO), qui peut être programmé pour émettre des signaux électriques, ou les recevoir. Tout au long de ce kit, nous allons voir ensemble comment réaliser des circuits simples au moyen d'un arduino, ainsi que les bases du langage de programmation C.

## Pourquoi le C ?
Le C est le langage le plus utilisé dans la programmation de systèmes embarqués, et le langage supporté par l'IDE `(Integrated Development Environment)` Arduino, que nous allons utiliser tout au long de ces projets. Le C est un langage puissant, qui offre un grand contrôle sur son environement au développeur, mais reste néanmoins très accessible pour une utilisation basique. Le C est un langage compilé, ce qui veut dire qu'il ne peut être exécuté qu'après avoir été transformé en langage machine (en binaire).

## L'éléctronique
L'éléctronique est un vaste monde, rempli d'explosions surprises, d'éléctrocutions involontaires, et d'odeurs de brûlé. Les arduinos sont un bon moyen de lier le monde de l'électronique et le monde de l'informatique. Ils permettent une gestion de système éléctronique au moyen de la programmation.

## Logiciel arduino
La première étape dans le développement arduino est le logiciel Arduino, disponible sur le [site officiel](https://www.arduino.cc/en/Main/Software) d'arduino. Pour l'installation du logiciel, il suffit de choisir votre système dans la liste proposée :
![Liste d'os disponibles](../../../images/arduino_dl.png)

Une fois le logiciel installé, vous pouvez le lancer et vous arriverez sur quelque chose qui ressemble à ceci :
![Interface Arduino](../../../images/arduino_ide.png)

### 1)
Cette partie est le menu de l'IDE. C'est de là qu'on va pouvoir changer le type de carte que l'on veut programmer, ouvrir un fichier, le sauvegarder, ...

### 2)
Cette partie possède les bouttons d'actions qui permetterons de compiler le code, et de l'envoyer sur l'arduino, ainsi que des bouttons pour ouvrir, sauvegarder et créer un nouveau fichier.

### 3)
Cette partie est la plus importante, c'est celle dans laquelle nous écrirons le code C qui sera exécuté sur notre arduino. Par défaut, l'IDE écrit déjà quelque lignes. Nous allons les analyser un peu plus loin.

### 4)
Cette dernière partie est la console. A cet endroit seront écrits des messages importants concernant la compilation[*](#index_compiler) du code et le transfert du code vers l'arduino.

## Analyse des premières lignes de code par défaut
Jetons un oeil aux lignes de code écrites par défaut par l'IDE :
```c
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
```

Ce code est assez simple à comprendre :
Il consiste simplement en 2 fonctions; la fonction `setup` et la fonction `loop`.
La première, `setup` est appelée lorsque l'arduino s'allume (en général lorsqu'il est branché, ou qu'il vient d'être flashé[*](#index_flasher).)

### <a name="index"></a>Index
* <a name="index_compiler">**Compiler**</a>: convertir du code d'un langage lisible pour un humain en langage machine
* <a name="index_flasher">**Flasher**</a>: Action de transférer un programme compilé sur la mémoire d'un arduino
