# Cours HTML-CSS

[W3C](https://www.w3.org/TR/html52/)

## 004 - Formatage texte 1/2

\<!-- --\>
\<p\>
\<hr\>
\<strong\>
\<em\>
\<del\>
\<ins\>
\<mark\>
\<b\>
\<i\>
\<s\>
\<h1\> \<h2\> \<h3\> \<h4\> \<h5\> \<h6\>
\<q\>
    * cite                  = "https://lesite.fr"
\<cite\>
\<blockquote\>
    * cite                  = "Https://lien..."
\<details\> \<summary\>
\<a\>
    * href                  = "https://jasonchampagne.fr"
    * title                 = "site personnel de Jason"
    * target                = "_blank"

## 005 - Formatage texte 2/2

\<a\>
    * href                  = "" "mailto:chuck@norris.com"
\<p\>
    * title                 = "Ce paragraphe !"
\<abbr\>
    * title                 = "Hypertext Markup Language"
\<address\>
\<bdi\>
    * dir                   = "" "auto" "rtl" "ltr"
\<bdo\>
    * dir                   = "" "auto" "rtl" "ltr"
\<br\>
\<dfn\>
\<dl\> \<dt\> \<dd\>
\<dialog\>
\<progress\>
    * value                 = "75"
    * max                   = "100"
\<sub\>
\<sup\>
\<wbr\>

## 006 - Formatage technique

\<code\>
\<kbd\>
\<meter\>
    * value                 = "0.25" "37"
    * optimum               = "37.4"
	* min
	* max
	* high
	* low
\<output\>
\<pre\>
\<ruby\> \<rt\> \<rp\>
\<samp\>
\<time\>
    * datetime              = "2018" "2018-01-25" "2018-01-25 13:25:04"
\<var\>

## 007 - Listes

\<ul\> \<li\>
\<ol\> \<li\>
    * reversed
    * start                 = "10" "97" "100000"
    * type                  = "1"/"" "a" "A" "i" "I"

## 008 - Tableau

\<table\> \<caption\> \<thead\> \<tbody\> \<tfoot\> \<tr\> \<th\> \<td\> \<colgroup\> \<col\>
\<th\>
    * colspan               = "2"
    * abbr                  = "nom" "genre" "prix"
    * id                    = "monJeu"
\<td\>
    * rowspan               = "2"
    * headers               = "monJeu" (\<th id="monJeu"\>)
\<style\>
    table {border-collapse:collapse;}
    th,td {border:1px solid #000;padding:5px;}
\<colgroup\> \<col\>
\<col\>
	* class                 = "styleColonne1" "styleColonnes2Et3"
    * span                  = "2"

## 009 - Formulaires 1/2

\<form\>
    * method            = "post" "get"
    * action            = "" "#" "resultats.php"
    * name              = "MonFormulaire"
    * target            = ""/"_self" "_parent" "_top" "_blank"
    * autocomplete      = "on" "off"
    * enctype
    * accept-charset    = "UTF-8"
\<input\>
    * name              = "username" "champFormulaire" "publishNews" "choice" "fieldForm"
    * placeholder       = "Entrez votre nom..."
    * type              = "text" "password" "checkbox" "radio" "color" "date" "datetime-local" "email" "tel" "month" "week" "search" "range" "number" "hidden" "submit" "reset"
    * value             = "oui" (radio) "#FFFFFF" (color) "Se connecter" (submit) "Effacer" (reset)
    * min               = "0" (range, number)
    * max               = "100" (range, number)
    * step              = "5" (range, number)
    * pattern           = "[a-z]"
    * required
    * id                = "prenom"
\<label\>
    * for               = "prenom" (\<input id="prenom"\>)

## 010 - Formulaires 2/2

\<form\>
    * id                = "id_form"
\<fieldset\>
    * form              = "id_form"
    * disabled
\<legend\>
\<textarea\>
    * name              = "article_content"
    * rows              = "10"
    * cols              = "65"
    * placeholder       = "Votre texte ici..."
    * minlength         = "10"
    * maxlength         = "50"
    * wrap              = "hard" "soft"
\<select\> \<optgroup\> \<option\>
    * name              = "ChoixOS" "ChoixJeu"
    * form              = "id_form"
    * required
    * size              = "2"
    * multiple
\<option\>
    * value             = "win" "linux" "mac" "Final Fantasy" "The Legend of Zelda" "CS:GO" "Fortnite"
    * label             = ""
    * disabled
\<optgroup\> \<option\>
    * label             = "RPG" "FPS"

\<datalist\> \<option\>
    * id                = "ChoixJeu" (\<input id="ChoixJeu"\>)

\<input\>
    * list              = "ChoixJeu"

\<button\>
    * type              = "button" "submit"
    * formmethod        = "POST"
    * formaction        = "mapage.html"

## 011 - images

\<img\>
    * src               = "pic-large.jpg" "pic-little.jpg" "images/japan-girl.jpg" "carte.png"
    * alt               = "" "Texte alternatif à l'image" "Carte du monde"
    * width             = "200" "auto"
    * height            = "auto" "1000"
    * longdesc          = "truc"
    * usemap            = "#worldmap"

\<figure\> \<img\>
\<figure\> \<figcaption\>
\<figure\> \<figcaption\> \<a\>
    * href              =""
\<map\>
    * name              = "worldmap" (\<img usemap="#worldmap"\>)
\<map\> \<area\>
\<area\>
    * href              = "carte-rouge.png"
    * shape             = "rect" "circle" "poly"
    * coords            = x1,y1 x2,y2 (rect)
                          x, y, r (circle)
                          x1,y1,x2,y2,...,x10,y10 (poly)
\<picture\> \<source\>
\<source\>
    * srcset            = "pic-large.jpg"
    * media             = "(min-width: 600px)"
\<picture\> \<img\>

## 012 - sons et vidéos

\<audio\> \<source\>
\<audio\>
    * controls
    * src               ="song.mp3"
    * autoplay
    * muted
    * loop
    * preload           = "metadata"
    * volume            = "0.6"
\<source\>
    * src               = "song.mp3" "bunny.mp4"
    * type              = "audio/mpeg" "video/mp4"
\<video\>
    * controls
    * src               = "bunny.mp4"
    * width             = "640"
    * height            = "480" "auto"
    * poster            = "miniature.jpg"

## 013 - structurer page web

```html
<body> 
    <div>
        <p>
            <a></a>
        </p>
        <p>
            <span></span>
        </p>
    </div>
</body>
```
```html
<body> 
	<main></main>
	<div></div>
	<div></div>
</body>
```
```html
<body>
    <h1></h1>
	<section>
        <h1></h1>
        <p></p>
    </section>
	<section>
        <h1></h1>
        <p></p>
	</section>
</body>
```
```html
<body>
    <main>
        <header>
            <h1>Mon site</h1>
        </header>

        <div class="gallery">
        
        </div>

        <nav>
            <ul>
                <li><a href="#">Aceuil</a></li>
                <li><a href="#">Articles</a></li>
                <li><a href="#">Forum</a></li>
                <li><a href="#">Contact</a></li>
            </ul>
        </nav>

        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Modi, deserunt ullam perferendis temporibus voluptatibus.</p>

        <section>
            <nav>
                <ul>
                    <li><a href="#">Premier pas</a></li>
                    <li><a href="#">Partie</a></li>
                    <li><a href="#">Conclusion</a></li>
                </ul>
            </nav>
        </section>

        <section>
            <h1>Titre de section</h1>
            <p></p>
        </section>

        <article>
            <header>
                <h2>Titre d'article</h2>
            </header>
            <p>Le contenu de l'article ...</p>
            <footer>
                <p>Ce contenu est rédigé par <address>Jason</address></p>
            </footer>
        </article>

        <aside>
            <p>Lorem ipsum dolor sit amet, consectetur <span class="text-red">adipisicing elit</span>. Corporis, sed velit officiis.</p>
        </aside>

        <footer>
                <p>Copyright &copy; 2018</p>
        </footer>
    </main>
</body>
```