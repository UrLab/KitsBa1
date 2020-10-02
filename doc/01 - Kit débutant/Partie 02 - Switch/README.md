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

Pour utiliser l’interrupteur, il faut le placer en série avec le reste du circuit. On peut placer l’interrupteur avant, après celui-ci ou entre la résistance et la LED puisque dans tous les cas, le courant ne pourra plus passer. Voici un premier schéma qui pourrait convenir:  <img src="img\circuit.png" alt="circuit" style="zoom:80%;" />

Les interrupteurs des kits sont des omron B3F, voici le schéma interne de l’interrupteur:

 <img src="img\omron b3f.png" alt="omron b3f" style="zoom:50%;" />

Lorsque les pins de l’interrupteur sont sur les deux côtés, les deux pins du dessus sont toujours connectés entre eux (tous comme les deux du dessous). On peut donc brancher le pin 3 et le 1 par exemple.

## Utiliser l’Arduino pour détecter quand l’interrupteur est fermé ou ouvert