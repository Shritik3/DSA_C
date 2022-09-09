import java.util.Arrays;
public class Kruskal {
    static class Edge implements Comparable<Edge> {
        int src, dest, weight;
        public int compareTo(Edge compareEdge) {
            return this.weight - compareEdge.weight;
        }
    }
    static class subset {
        int parent, rank;
    }
    int V, E;
    Edge[] edge;
    Kruskal(int v, int e) {
        V = v;
        E = e;
        edge = new Edge[E];
        for (int i = 0; i < e; ++i)
            edge[i] = new Edge();
    }
    int find(subset[] subsets, int i) {

        if (subsets[i].parent != i)
            subsets[i].parent
                    = find(subsets, subsets[i].parent);

        return subsets[i].parent;
    }
    void Union(subset[] subsets, int x, int y) {
        int xroot = find(subsets, x);
        int yroot = find(subsets, y);
        if (subsets[xroot].rank < subsets[yroot].rank)
            subsets[xroot].parent = yroot;
        else if (subsets[xroot].rank > subsets[yroot].rank)
            subsets[yroot].parent = xroot;
        else {
            subsets[yroot].parent = xroot;
            subsets[xroot].rank++;
        }
    }
    void mst() {
        Edge[] result = new Edge[V];
        int e = 0;
        int i;
        for (i = 0; i < V; ++i)
            result[i] = new Edge();
        Arrays.sort(edge);
        subset[] subsets = new subset[V];
        for (i = 0; i < V; ++i)
            subsets[i] = new subset();
        for (int v = 0; v < V; ++v) {
            subsets[v].parent = v;
            subsets[v].rank = 0;
        }
        i = 0;
        while (e < V - 1) {
            Edge next_edge = edge[i++];
            int x = find(subsets, next_edge.src);
            int y = find(subsets, next_edge.dest);
            if (x != y) {
                result[e++] = next_edge;
                Union(subsets, x, y);
            }
        }
        System.out.println("Sides"+"\t\t"+"Cost");
        int minimumCost = 0;
        for (i = 0; i < e; ++i) {
            System.out.println(result[i].src + " <-> "
                    + result[i].dest
                    + "\t\t" + result[i].weight);
            minimumCost += result[i].weight;
        }
        System.out.println("");
        System.out.println("Minimum Cost for traversing the tree "
                + minimumCost);
    }
    public static void main(String[] args) {
        int V = 4;
        int E = 5;
        Kruskal k1 = new Kruskal(V, E);
        k1.edge[0].src = 0;
        k1.edge[0].dest = 1;
        k1.edge[0].weight = 4;
        k1.edge[1].src = 1;
        k1.edge[1].dest = 2;
        k1.edge[1].weight = 4;
        k1.edge[2].src = 1;
        k1.edge[2].dest = 2;
        k1.edge[2].weight = 8;
        k1.edge[3].src = 2;
        k1.edge[3].dest = 3;
        k1.edge[3].weight = 6;
        k1.mst();
    }
}
