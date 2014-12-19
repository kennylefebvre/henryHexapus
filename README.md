<b>Henry l'hexapus</b>
============

Pieuvre à six tentacules qui sont contrôlées par des servomoteurs afin d'exécuter une chorégraphique programmée dans Arduino.

Réalisée par Dominique Charbonneau et Kenny Lefebvre

<img src="http://i.imgur.com/CIgiBkb.jpg" title="Henry Hexapus" />
<img src="http://i.imgur.com/anDmYbi.jpg" title="Henry Hexapus" />

============

Henry l'hexapus est, comme son nom l'indique, une pieuvre hexapode nommée en l'honneur d'Henry, le seul mollusque de ce type examiné par la communauté scientifique (<a href="http://en.wikipedia.org/wiki/Henry_the_Hexapus">http://en.wikipedia.org/wiki/Henry_the_Hexapus</a>). Henry a des tentacules robotiques exécutant une chorégraphie électronique.  Le tout fonctionne grâce à un arduino et des servomoteurs.

Ci-dessous sera expliqué tout le processus pour créer physiquement l'hexapode. Nous vous fournissons également notre code qui reproduit la chorégraphie exécutée dans la vidéo Youtube. Si vous utilisez notre documentation, n'oubliez pas de nous citer!

<iframe width="560" height="315" src="//www.youtube.com/embed/oCGS1C8m1Yg" frameborder="0"></iframe>

===========

<b>Matériel</b>

Électronique
- 1 Arduino Leonardo
- 1 câble micro-usb
- 6 servomoteurs avec leurs têtes en croix
- 6 condensateurs 100 microF
- 1 alimentation stabilisée (ici une alimentation d'ordinateur qui peut fournir jusqu'à 20A à 5V)
- Une plaque pour souder le circuit (ici la plaque perma-proto de Adafruit)
- Une plaque de prototypage

Autres
- Fer à souder et étain
- Câbles (idéalement identifiés de différentes couleurs)
- 2 chaînes à vélo assez longue (120 pieds) et un outil pour enlever les mailles de vélo
- Fil de fer (beaucoup!)
- Quelque chose pour faire la forme de la pieuvre (nous utilisons une sorte d'abat-jour trouvé dans un magasin de seconde main à 3$)
- Décoration

=========

<b> Préparer les chaînes </b>

Nous avons pris des chaînes de vélo de 126 mailles et les avons séparées en trois parties. Par la suite, nous avons trouvé qu'elles étaient trop longues, et nos tentacules font au final 46 mailles chacune. Tout dépend de la force de vos moteurs et de l'effet escompté.

Une fois les 6 chaînes préparées, il suffit de les enrouler de fil de fer de façon à leur laisser une certaine liberté de mouvement tout en les forçant à demeurer relativement à leur place par rapport aux autres mailles. Faire un tour de fil de fer par maille, parfois revenir pour un deuxième, a amplement fait le travail en ce qui nous concerne.

<b> Faire le circuit </b>

Le circuit est à faire comme le schéma ci-dessous l'indique pour chacun des servomoteurs. Il est conseillé de prototyper le circuit avant de le souder pour s'assurer que tout fonctionne comme prévu et qu'il n'y a aucune pièce défectueuse.

Note en ce qui concerne l'alimentation stabilisée : pour la faire fonctionner, vous devez mettre une résistance (la plus petite valeur suffit) entre le fil vert et le fil de ground (noir) suivant, dans la plus grosse couette de fils. Ensuite, par convention, tous les fils noirs des autres couettes sont des fils de ground, les fils rouges fournissent du 5v, les jaunes du 3v et les oranges du 12v. Il est tout de même recommandé de vérifier la data sheet de votre alimentation pour vous assurer qu'elle respecte cette convention.

Lorsque le circuit est complété et alimenté, envoyez le code de test "AnalogReadSerial" pour voir les points maximum et minimums de vos servos. Assurez-vous de tous les placer au minimum afin de pouvoir attacher les chaînes sur la bonne partie de la croix.

<b> Construire Henry Hexapus </b>

Cette partie peut changer selon la structure que vous avez trouvé pour faire le corps de la pieuvre, mais nous avons fixé les six servos sur la structure à l'aide des barres latérales et de la base avec du fil de fer. Serrez bien pour vous assurer qu'il sera maintenu en place. Ensuite, après avoir placé vos servos à leur valeur minimale de rotation avec la tête en croix, fixez la tentacule sur le servo de la même façon (on vous l'avait dit, il faut beaucoup de fil de fer!). Le circuit soudé à la plaque de prototypage permanent ainsi que le arduino sont ici fixés sur le haut de la structure avec du fil de fer passé dans les trous de fixation de la plaque. 

<b> Faire danser Henry Hexapus </b>

Pour le faire danser à partir de notre chorégraphie, vous n'avez qu'à utiliser le code ci-joint. Dans la fonction mouvementTentacule, vous pouvez changer les valeurs minimales et maximales des servos si elles ne correspondent pas aux vôtres. Nous en avons quatre valeurs différentes puisque nous utilisions deux servos différents.

Ensuite, vous n'avez qu'à décorer Henry comme bon vous semble!

Lien de l'album photo : http://imgur.com/a/hQOlN

Lien du video youtube : https://www.youtube.com/watch?v=oCGS1C8m1Yg&feature=youtu.be
