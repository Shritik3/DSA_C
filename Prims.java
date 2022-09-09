class Prims {
    private static final int vertices = 5;
    public static void main(String[] args) {
        Prims mst = new Prims();
        int[][] graphArray = new int[][]{{0, 4, 75, 0,15},
                {3, 0, 95, 5,17},
                {75, 95, 0, 10,23},
                {0, 19, 51, 0,8},
                {0, 42, 66, 31,11}
            };
        mst.designMST(graphArray);
    }
    int findMinKeyVertex(int[] keys, Boolean[] set) {
        int min_i = -1;
        int min_v = Integer.MAX_VALUE;
        for (int vertex = 0; vertex < vertices; vertex++)
            if (!set[vertex] && keys[vertex] < min_v) {
                min_v = keys[vertex];
                min_i = vertex;
            }
        return min_i;
    }
    void showMinimumSpanningTree(int[] mstArray, int[][] graphArray) {
        System.out.println("Side \t Total Cost");
        for (int j = 1; j < vertices; j++)
            System.out.println(mstArray[j] + " <-> " + j + "\t=\t" + graphArray[j][mstArray[j]]);
        System.out.println("");
    }
    void designMST(int[][] graphArray) {
        int[] mstArray = new int[vertices];
        int[] keys = new int[vertices];
        Boolean[] set = new Boolean[vertices];
        for (int j = 0; j < vertices; j++) {
            keys[j] = Integer.MAX_VALUE;
            set[j] = false;
        }
        keys[0] = 0;
        mstArray[0] = -1;
        for (int i = 0; i < vertices - 1; i++) {
            int edge = findMinKeyVertex(keys, set);
            set[edge] = true;
            for (int vertex = 0; vertex < vertices; vertex++)
                if (graphArray[edge][vertex] != 0 && !set[vertex] && graphArray[edge][vertex] < keys[vertex]) {
                    mstArray[vertex] = edge;
                    keys[vertex] = graphArray[edge][vertex];
                }
        }
        showMinimumSpanningTree(mstArray, graphArray);
    }
}