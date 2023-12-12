# CPIA2 Informatique Programmation![](Aspose.Words.7c432d7d-a712-464f-89eb-9f5cea206b88.001.png) Orientée Objet


## Introduction : 

Dans  ce  projet,  nous  allons  développer  une  application  de  gestion  de  personnel  et  de commandes pour une entreprise de vente de composants électroniques en ligne. Nous appellerons cette entreprise « Gadget Grove » afin de mettre en place une petite charte graphique sur l’interface graphique. Pour répondre au besoin de notre client, nous sommes chargés de produire une interface graphique en relation avec un programme C++ qui va permettre d’interagir avec une base de données. 

Dans ce présent livrable nous allons décrire le fonctionnement de notre application par la production  de  différents  diagrammes :  Diagramme  de  cas  d’utilisation,  diagramme  de  classes, diagramme  de  séquence,  diagramme  d’activité.  Enfin  après  ceci,  nous  vous  montrerons l’environnement de travail que nous utiliserons pour la production de l’application. 

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/9a2bb275-5f8c-47ff-ad2a-87c091462e46)


## Diagramme de cas d’utilisation : 

Ce diagramme a pour but de montrer, comme son nom l’indique, les cas d’utilisation d’un système. Ici notre application a pour but d’être utilisée par des administrateurs de l’entreprise « Gadget Grove ». Ces derniers pourront s’inscrire et donc pourront se connecter. Une fois ceci fait, ils pourront sans  problèmes  accéder  aux  différentes  fonctionnalités  de  notre  interface.  Ces  fonctionnalités affecteront la Base de Donnée (BDD) qui sera associée. 


## Diagramme d’activité :  

Le diagramme d’activité que nous proposons ici ne concerne que la partie « gestion personnel » de l’application. Ce diagramme permet de représenter de manière algorithmique le fonctionnement de cette partie. 

Dans ce cas précis, on check si chaque fonctionnalités de la  « gestion  personnel »,  si  la  fonctionnalité  est demandée, alors on l’exécute et on revient au check. 


![image](https://github.com/Theodallet/Projet-POO/assets/150134673/37ed1397-d06b-4c58-937a-ef4d0c5db511)



## Diagramme de séquence : 

Ce diagramme permet de décrire de manière temporelle la manière dont fonctionne la partie gestion personnel.  

L’utilisateur  commence  sa démarche par le choix du mode, ici il  choisit  de  faire  une  gestion personnel. 4 options se présentes à lui. La création, la modification, la suppression  et  l’affichage  d’un personnel.  

Chaque  mode  fonctionne  de  la même  manière,  on  saisie  des données,  on  check  l’intégrité  de celles-ci,  si  elles  ne  sont  pas cohérentes on affiche une erreur, sinon  on  la  traite  selon  le  mode choisi. 

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/3809e8da-88ea-4127-90a0-9bf3d1bb5732)

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/8a8a1fba-a663-4e3c-9a42-1fae5e027d7c)



## Diagramme de classes : 

Ce diagramme représente, comme son nom l’indique, les classes que l’on va utiliser dans 

notre projet : 

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/45a89016-3e51-4e6c-a4d7-f574c4810948)


## Dictionnaire de données :  

Le dictionnaire de données permet de lister tout les champs que l’on utilisera dans notre BDD. On y indique le nom du champs, sa description, sa taille ainsi que son type. 



|**Nom** |**Description** |**Taille** |**Type** |
| - | - | - | - |
|Individu ||||
|Id\_Ind |Identifiant de l'individu |4 |N |
|Nom\_Ind |Nom de l'individu |50 |A |
|Prenom\_Ind |Prenom de l'individu |50 |A |
|Date\_Naissance\_Ind |Date de naissance de l'individu |8 |DATE |
Personnel 
|Id\_Per |Identifiant du personnel |4 |N |
|Date\_Embauche\_Per |Date d'embauche du personnel |8 |DATE |
|Id\_Supérieur |Identifiant du supérieur |8 |N |
|Client ||||
|Id\_Cli |Identifiant du client |4 |N |
|Adresse ||||
|Id\_Adr |Identifiant de l'adresse |4 |N |
|Nom\_Ville\_Adr |Nom de la ville |50 |A |
|Nom\_Rue\_Adr |Nom et numéro de la rue |50 |AN |
|Code\_Postal\_Adr |Numéro du code postal |20 |AN |
|Nom\_Batiment\_Adr |Nom du batiment |50 |A |
|Etage\_Adr |Numéro de l'étage |8 |N |
|Commande ||||
|Id\_Com |Identifiant de la commande |4 |N |
|Date\_Livraison\_Com |Date de la livraison |8 |DATE |
|Date\_Emission\_Com |Date de la commande  |8 |DATE |
|Total\_HT\_Com |Total HT |16 |N |
|Total\_TTC\_Com |Total TTC |16 |N |
|Total\_TVA\_Com |Total de la TVA |16 |N |
|Moyen\_Paiment\_Com |Moyen de paiment |16 |N |
|Total\_Com |Total du paiment |16 |N |
|Article ||||
|Id\_ Art |Identifiant de l'article |4 |N |
|Prix\_Art |Prix de l'article à l'unité |16 |N |
|Nom\_Art |Nom de l'article |50 |A |
|Couleur\_Art |Couleur de l'article |50 |A |


## MCD : 

Le MCD (Model Conceptuel de Données) est une représentation graphique des tables que l’on utilise pour le projet. On y voit aussi tout leurs champs. Enfin on visualise les relations entre les tables.  

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/2c17dd14-c523-4d98-a384-19f382ae151e)


## MLD :  

Le MLD (Model Logique de Données) est semblable au MCD, cependant les relations « N-N » sont remplacées par une table intermédiaire qui regroupe les clés primaires des deux tables en tant que clés étrangères. Les relations « 1-N » transmette la clé primaire de la table « N » vers la table 

- 1 ». Enfin les relations « 1-1 » fusionnent les tables. Cela permet d’avoir une représentation fidèle du code que l’on implémente dans la BDD 

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/6488b18f-8ff0-45e7-89e6-58e5461a66f5)


# Spécifications fonctionnelles de l'interface garphique

## Page d’accueil, connexion et principale

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/4edbc3d6-e13b-4a58-8af2-1e17a2c39ef1)
![image](https://github.com/Theodallet/Projet-POO/assets/150134673/074fb502-3ae9-48ee-911d-641a7bb78688)

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/2087ce7a-6491-4170-8542-4bcd9daf5114)


Dans cette partie nous allons vous dresser les spécifications fonctionnelles de notre solution.
Nous attarderons donc simplement sur les fonctions accessibles à l’utilisateur.
Dans un premier temps l’utilisateur peut démarrer l’application. Lors de ce démarrage une page
d’accueil lui sera affiché et il pourra accéder à la page de connexion par l’appuis sur le bouton
« CONNECTEZ VOUS ». Une fois ce bouton appuyé il accédera à la page de connexion.
Une fois sur la page de connexion l’utilisateur renseigne son identifiant (mail) ainsi que son mot de
passe. Une fois ceci fait il peut appuyer sur le bouton « CONNEXION ». Si les données sont cohérentes
alors il accède à la page principale de l’application. Dans le cas contraire un message d’erreur lui sera
renvoyé et les zones de textes seront vidées.
A l’arrivée sur la page principale l’utilisateur se verra afficher 7 options :
- Accéder à la gestion client
- Accéder à la gestion personnel
- Accéder à la gestion commande
- Accéder à la gestion stock
- Accéder à la gestion statistique
- Accéder à la notice d’utilisation
- Possibilité de se déconnecter
  
Ces 7 options sont caractérisées par des boutons du même nom ou une icône représentant un doigt
sur un livre dans le cas de la notice.
Les 5 types de gestions ainsi que la notice sont accessibles depuis les 5 boutons disposés sur la gauche
de l’interface. La déconnection est quant à elle disponible par le bouton en haut à droite. Ces 7 options,
lorsqu’elles sont choisies ouvrent une nouvelle page à l’utilisateur. La déconnexion renvoie évidemment
à la page de connexion précédente. Enfin un affichage concernant les différentes informations
correspondant aux jours actuels est présente sur la droite de l’interface.

## Page de gestion client

![image](https://github.com/Theodallet/Projet-POO/assets/150134673/ec603143-d831-43c7-8310-a92ba945ee11)


A l’arrivée sur la page de gestion client, on se voit proposer différents champs :
ID du client, son nom, prénom, sa date de naissance, son mail, sa rue, son code postal, sa ville, le nom
de son bâtiment ainsi que son étage. Ces éléments peuvent être saisis par l’utilisateur.
Deux boutons sont également disponibles afin de défiler à l’intérieur des champs de texte, les
informations du client correspondant à l’ID inséré. En défilant à droite on incrémente de 1 l’ID et on
accède aux caractéristiques du client en question. Il en va de même pour la gauche où on réduit de 2
l’ID. Ce système permet aisément de retrouver les informations d’un client particulier pour les modifier
par exemple. Le bouton « CLEAR » permet de facilement supprimer les informations qui ont été saisies
dans toutes les zone de texte.
On a aussi la présence d’un bouton « RETOUR » qui permet de revenir sur la page principale.
Enfin les 4 boutons bleu en bas de page représentent les 4 fonctionnalités de la gestion client.
- AJOUTER CLIENT permet d’ajouter un client à la BDD qui suit les champs remplis.
- SUPPRIMER CLIENT permet de supprimer le client à l’ID renseigné.
- MODIFIER CLIENT permet d’actualiser le client à l’ID donné avec les informations voulues
- AFFICHAGE CLIENT permet d’afficher les caractéristiques d’un ou plusieurs clients dans la zone à droite de la page en fonction de la présence ou non d’un ID client en zone de texte.


## Page de gestion personnel


![image](https://github.com/Theodallet/Projet-POO/assets/150134673/f5a78de8-a19b-46d5-817a-050d85132e43)



La gestion personnel reprend presque tous les éléments de la gestion client. Cependant on
substitue l’ID client par un ID de personnel, et on rajoute 3 champs : La date d’embauche, le rôle ainsi
que l’ID du supérieur.
On a aussi la présence d’un bouton « RETOUR » qui permet de revenir sur la page principale. Le bouton
« CLEAR » permet de facilement supprimer les informations qui ont été saisies dans toutes les zone de
texte.
De la même manière que pour le client, on a la présence de deux boutons permettant de défiler la
liste du personnel. Également on retrouve nos 4 boutons :
- AJOUTER PERSONNEL permet d’ajouter un personnel à la BDD qui suit les champs remplis.
- SUPPRIMER PERSONNEL permet de supprimer le personnel à l’ID renseigné.
- MODIFIER PERSONNEL permet d’actualiser le personnel à l’ID donné avec les informations voulues
- AFFICHAGE PERSONNEL permet d’afficher les caractéristiques d’un ou plusieurs personnels dans la zone à droite de la page en fonction de la présence ou non d’un ID personnel en zone
de texte.


## Page de gestion commande


![image](https://github.com/Theodallet/Projet-POO/assets/150134673/d5ba20cd-d535-4f5a-8ec3-eac4ef166ac8)




Lorsqu’on accède à cette page, deux choses sont possibles :
Créer/Supprimer/Modifier/Afficher une commande et Ajouter/Supprimer/Modifier/Afficher des
article à cette commande.
Dans un premier temps on retrouve les différentes zones de texte : ID de la commande, l’ID du client,
la date de livraison, le moyen de paiement, l’ID de l’adresse de livraison, l’ID de l’adresse de
facturation, date d’émission, l’ID de l’article et la quantité de cet article.
Il y a encore une fois la présence des boutons qui permettent de défiler la liste des commandes. Le
bouton « CLEAR » permet de facilement supprimer les informations qui ont été saisies dans toutes les
zone de texte. Le bouton « CLEAR » permet de facilement supprimer les informations qui ont été
saisies dans toutes les zone de texte.
A ceci on rajoute la présence de bouton qui font 4 types d’actions sur 2 entités différentes : la
commande et l’article. On peut ajouter, supprimer, modifier et afficher des commandes ainsi
qu’ajouter, supprimer, modifier et afficher des articles à la commande :
- AJOUTER COMMANDE permet d’ajouter une commande à la BDD qui suit les champs remplis.
- SUPPRIMER COMMANDE permet de supprimer la commande à l’ID renseigné.
- MODIFIER COMMANDE permet d’actualiser la commande à l’ID donné avec les informations voulues.
- AFFICHAGE COMMANDE permet d’afficher les caractéristiques d’une ou plusieurs commandes dans la zone à droite de la page en fonction de la présence ou non d’un ID commande en zone
de texte.
- AJOUTER ARTICLE permet d’ajouter un article à une commande.
- SUPPRIMER ARTICLE permet de supprimer un article d’une commande à un ID donné.
- MODIFIER ARTICLE permet de modifier l’article associé à une commande.
- AFFICHER ARTICLE permet d’afficher un ou plusieurs articles suivant le fait qu’un ID article est rempli ou non


## Page de gestion stock



![image](https://github.com/Theodallet/Projet-POO/assets/150134673/00b41bca-d6e9-4da5-a4e5-b0a607045e6c)



Lorsque l’on désire modifier les informations concernant un article, on peut avoir recours à la
gestion stock. Elle est accessible depuis la page principale. On y retrouve des éléments comparables
aux autres gestions, comme les boutons d’ajout, de suppression de modifications, ou encore
d’affichage. On y retrouve également différentes zones de texte :
La référence de l’article, son nom, son prix, sa couleur, son taux de TVA ainsi que son stock
Comme pour le reste des gestions on a un bouton de retour à la page principale ainsi qu’un clear de
toutes les zones de texte.
Voici une description plus détaillée de chaque bouton d’action :
- AJOUTER ARTICLE permet d’ajouter un article à la liste des articles du site.
- SUPPRIMER ARTICLE permet de supprimer un article à la liste des articles du site à un ID donné.
- MODIFIER ARTICLE permet de modifier un article en renseignant son ID et les modifications.
- AFFICHER ARTICLE permet d’afficher un ou plusieurs articles suivant le fait qu’un ID article est rempli ou non.



## Page de gestion statistiques


![image](https://github.com/Theodallet/Projet-POO/assets/150134673/85d302e0-8604-473c-a013-128fe791dcaa)



Enfin la gestion statistique permet d’obtenir des statistiques concernant 10 sujets :
- Calculer le panier moyen (après remise)
- Calculer le chiffre d'affaires sur un mois en particulier
- Identifier les produits sous le seuil de réapprovisionnement
- Calculer le montant total des achats pour un client
- Identifier les 10 articles les plus vendus
- Identifier les 10 articles les moins vendus
- Calculer la valeur commerciale du stock
- Calculer la valeur d’achat du stock
- Simuler des variations de valeurs commerciales pour en déduire la valeur du
stock
▪ Actions possibles : [TVA 1] [TVA 2] [TVA 3] ||
[margeCommerciale*5%] [margeCommerciale *10%]
[margeCommerciale *15%] || [remiseCommerciale*5%]
[remiseCommerciale*6%] || [démarqueInconnue* 2%]
[démarqueInconnue* 3%] [démarqueInconnue* 5%]
- Possibilité pour l’utilisateur de mettre en place une infinité de combinaisons

Chaque requête est numérotée et présente ou non une ou plusieurs zones de texte suivant la nécessité
d’informations complémentaire. Lorsque l’utilisateur veut obtenir une information. Il doit sélectionner le numéro associé dans le menu déroulant et appuyer sur « AFFICHER STATISTIQUE ». A ce moment-là,
soit la requête retourne une valeur et elle est donné dans la zone de texte associée. Soit c’est un tableau
et il est affiché dans la zone prévue à cet effet.
Enfin comme pour tous les autres pages filles de la page principale, un bouton de retour est présent.

