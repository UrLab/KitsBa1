# Partie 2 - Utilisation d'un interrupteur (switch)

Pour cette partie, nous allons rajouter un bouton que nous allons utiliser de différente manières.

## Matériel utilisé dans cette partie:

* 1 * Arduino UNO
* 1 * LED (Rouge, verte ou bleue)
* 4 * Câbles male-male 10cm
* 1 * résistance 220 ohm
* 1 * half-sized breadboard
* 1 * interrupteur (bouton)

## L'interrupteur
Un interrupteur est un dispositif permettant d'ouvrir une partie du circuit. Une fois le circuit ouvert, le courant ne peut plus passer. Par défaut l'interrupteur du kit garde le circuit ouvert. Lorsqu’on appuie dessus, il ferme le circuit. Le courant peut donc passer.

Schéma électrique d’un interrupteur:<img src="img\switch diagram.png" style="zoom:150%;" />

## L’interrupteur directement en série avec le circuit
### Le circuit et ses composants

Pour utiliser l’interrupteur, il faut le placer en série avec le reste du circuit. On peut placer l’interrupteur avant, après celui-ci ou entre la résistance et la LED puisque dans tous les cas, le courant ne pourra plus passer. Voici un premier schéma qui pourrait convenir:  <img src="img\circuit.png" alt="circuit" style="zoom:80%;" />

Les interrupteurs des kits sont des omron B3F, voici le schéma interne de l’interrupteur:

 <img src="img\omron b3f.png" alt="omron b3f" style="zoom:30%;" />

Lorsque les pins de l’interrupteur sont sur les deux côtés, les deux pins du dessus sont toujours connectés entre eux (tous comme les deux du dessous). On peut donc brancher le pin 3 et le 1 par exemple.
### Le code
Dans ce cas-ci, il n'y a pas besoin de code particulier. Il peut être intéressant d'avoir la led qui reste sur un éclairage constant plutôt que sur un clignotement. Dans ce cas, il suffis d'allumer la LED dans la boucle. Dans la fonction `loop`, il suffit d'utiliser la fonction `digitalWrite(13, HIGH)`, par exemple. Avec, bien sûr un `pinMode(13, OUTPUT)` dans la fonction `setup` afin de dire à l'Arduino que le pin est utilisé comme une sortie.

## Utiliser l’Arduino pour détecter quand l’interrupteur est fermé ou ouvert

Mettre l’interrupteur en série dans le circuit, c’est sympa. Mais il n’y aurait pas un moyen pour que l’Arduino d’étecte quand l’interrupteur est actionné et en fonction lance un bout de code (par exemple allumer la LED). Bien sur que c’est possible et nous allons voir comment faire maintenant.

### Le circuit

Pour cela, il faut refaire le circuit avec uniquement la LED et la résistance de la partie 1. Mais à côté, il faut brancher le bouton entre le pin ground (`GND`) et un pin qui seras utilisé comme pin de lecture (par exemple le pin 2).

### Le code

L’astuce ici sera de définir deux pins avec des modes différent:
La première ligne dans la fonction setup(), comme avant, permet de définir le pin `LEDPIN` comme un pin de sortie
```C
pinMode(LEDPIN, OUTPUT);
```
Pour la seconde ligne elle permet de définir le pin `BUTTONPIN` comme une entrée, l'Arduino pourra donc lire une information sur ce pin.
```C
pinMode(BUTTONPIN, INPUT);
```

Pour ce qui est de la partie de la fonction `loop`, on à déjà utilisé la fonction `digitalWrite`. Mais ici, nous allons rajouter la fonction `digitalRead` qui prend en paramètre, un numéro de pin qui peut être lu et renvoi un entier qui contient la valeur de ce qui à été lu sur ce pin.

Un exemple d'un code complet:
```c
#include <Arduino.h>

#define LEDPIN 13
#define INPIN 7

int val = 0;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(INPIN, INPUT);
}

void loop() {
  val = digitalRead(INPIN);
  digitalWrite(LEDPIN, val);
}
```