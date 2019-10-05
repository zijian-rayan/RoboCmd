================================================================================
    BIBLIOTHÈQUE MFC (MICROSOFT FOUNDATION CLASS) : Vue d'ensemble du projet 
    RoboCmd
===============================================================================

L'Assistant Application a créé cette application RoboCmd pour
vous. Cette application ne montre pas seulement l'essentiel de l'utilisation de 
Microsoft Foundation Classes, mais constitue également un point de départ pour 
l'écriture de votre application.

Ce fichier contient un résumé du contenu de chacun des fichiers qui constituent
votre application RoboCmd.

RoboCmd.vcproj
    Il s'agit du fichier projet principal pour les projets VC++ générés à 
    l'aide d'un Assistant Application.
    Il contient des informations sur la version de Visual C++ utilisée pour 
    générer le fichier ainsi que des informations relatives aux plateformes, 
    configurations et fonctionnalités projet que vous avez sélectionnées dans 
    l'Assistant Application.

RoboCmd.h
    Il s'agit du fichier d'en-tête principal de l'application. Il inclut 
    d'autres en-têtes spécifiques au projet (dont Resource.h) et déclare la 
    classe d'application CRoboCmdApp.

RoboCmd.cpp
    Il s'agit du fichier source principal de l'application qui contient la 
    classe d'application CRoboCmdApp.

RoboCmd.rc
    Il s'agit de la liste de toutes les ressources Microsoft Windows utilisées 
    par le programme. Il inclut les icônes, les bitmaps et les curseurs qui 
    sont stockés dans le sous-répertoire RES. Ce fichier peut être directement 
    modifié dans Microsoft Visual C++. Vos ressources de projet se trouvent 
    dans 1036.

res\RoboCmd.ico
    Il s'agit du fichier icône utilisé comme icône de l'application. Cette 
    icône est incluse par le fichier de ressources principal 
    RoboCmd.rc.

res\RoboCmd.rc2
    Ce fichier contient les ressources qui ne sont pas modifiées par 
    Microsoft Visual C++. Vous devez placer toutes les ressources non 
    modifiables par l'éditeur de ressources dans ce fichier.


/////////////////////////////////////////////////////////////////////////////

L'Assistant Application crée une classe de boîte de dialogue :

RoboCmdDlg.h, RoboCmdDlg.cpp - boîte de dialogue
    Ces fichiers contiennent votre classe CRoboCmdDlg. Cette classe 
    définit le comportement de la boîte de dialogue principale de votre 
    application. Le modèle de cette boîte de dialogue se trouve dans le fichier 
    RoboCmd.rc, qui peut être modifié dans Microsoft Visual C++.


/////////////////////////////////////////////////////////////////////////////

Autres fichiers standard :

StdAfx.h, StdAfx.cpp
    Ces fichiers permettent de générer un fichier d'en-tête précompilé (PCH) 
    nommé RoboCmd.pch et un fichier de types précompilé nommé 
    StdAfx.obj.

Resource.h
    Il s'agit du ficher d'en-tête standard, qui définit les nouveaux ID de 
    ressources.
    Microsoft Visual C++ lit et met à jour ce fichier.

RoboCmd.manifest
	Les fichiers manifestes d'application sont utilisés par Windows XP pour 
        décrire la dépendance d'une application	vis à vis de versions 
        spécifiques d'assemblys cote à cote. Le chargeur utilise ces 
        informations pour charger l'assembly approprié à partir du cache de 
        l'assembly ou l'assembly privé à partir de l'application. Le manifeste 
        d'application peut être inclus afin d'être redistribué en tant que 
        fichier manifeste externe installé dans le même dossier que le fichier 
        exécutable de l'application ; il peut également être inclus dans le 
        fichier exécutable en tant que ressource.
/////////////////////////////////////////////////////////////////////////////

Autres remarques :

L'Assistant Application utilise "TODO:" pour indiquer les parties du code 
source que vous devez ajouter ou personnaliser.

Si votre application utilise une bibliothèque MFC dans une DLL partagée, vous 
devez redistribuer les DLL MFC. Si votre application utilise une autre langue 
que celle définie dans les paramètres régionaux du système d'exploitation, vous 
devez également redistribuer les MFC90XXX.DLL des ressources localisées 
correspondantes.
Pour plus d'informations sur ces deux rubriques, consultez la section relative 
à la redistribution des applications Visual C++ dans la documentation MSDN.

/////////////////////////////////////////////////////////////////////////////
