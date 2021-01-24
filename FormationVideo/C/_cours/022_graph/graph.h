#ifndef __GRAPH__H__
#define __GRAPH__H__

/*
 * En premier on a un graphe avec une liste d'adjacences.
 * Chaque liste d'adjacence est une liste chainée d'éléments.
 * On a une liste chainée dans une liste plus ou moins chainées sauf qu'on utilise des tableaux.
 * Tableaux pour lequel on va alouer dynamiquement:
 *		-> Un malloc pour le Graphe -> new_graph().
 *		-> Un malloc pour les listes d'adjacences -> new_graph().
 *		-> Autant de malloc nécessaire pour chacun des nodes -> add_node() -> éxécuter autant de fois qu'il y a add_edge().
 * Dés qu'il y a un malloc, il y a un free -> erase_graph().
 */

	/* Définition d'un Booléen */
	typedef enum
	{
		false, 
		true
	}Bool;

	/* Définition d'une liste de Noeuds (sommet) */
	typedef struct NodeListElement
	{
		int value; // element, sommet qui contiendra une valeur.
		struct NodeListElement *next; // Pointeur vers l'element suivant.
	}NodeListElement, *NodeList;

	/* Définition d'une liste d'ajdacence (tableau) */
	// --> tableau pour lequel, on va allouer dynamiquent.
	typedef struct AdjencyListElement
	{
		NodeListElement *begin;
	}AdjencyListElement, *AdjencyList;

	/* Définition d'un Graphe */
	typedef struct GraphElement
	{
		Bool is_oriented; // graphe non orienté si on peux aller dans tous les sens (AB, BA) et orienté lorsqu'il y a un sens (A->B).
		int nb_vertices; // nombre de sommets (lieux où on peut aller).
		AdjencyList tab_neighbours; // tableaux des voisins (liste d'adjacence).
		/**/FILE *graph_file; // Utilisation d'un fichier tout au long du programme.
	}GraphElement, *Graph;

	//Graph g == GraphElement *G (masquer le pointeur).

	/* Prototypes */
	Graph new_graph(int vertices, Bool is_oriented);
	Bool is_empty_graph(Graph g);
	NodeList add_node(int x);
	void add_edge(Graph g, int src, int dest); // idem si on inverse src et dest.
	void print_graph(Graph g);
	void display_graph(Graph g); // Affichage en console.
	void erase_graph(Graph g);

#endif
