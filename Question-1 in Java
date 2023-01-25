import java.util.*;

class Main {
static Map<Integer, List<Integer>> tree = new HashMap<>();

static {
tree.put(2, Arrays.asList(7));
tree.put(7, Arrays.asList(6));
tree.put(6, Arrays.asList(11));
tree.put(11, Collections.emptyList());
}

static List<Integer> dfs(Map<Integer, List<Integer>> tree, int node, int valueToSearch, List<Integer> path) {
path.add(node);
if (node == valueToSearch) {
return path;
}
for (int child : tree.get(node)) {
List<Integer> result = dfs(tree, child, valueToSearch, path);
if (result != null) {
return result;
}
}
path.remove(path.size() - 1);
return null;
}

static List<Integer> getParents(Map<Integer, List<Integer>> tree, int valueToSearch) {
if (tree.isEmpty()) {
return Collections.emptyList();
}
return dfs(tree, 2, valueToSearch, new ArrayList<>());
}

public static void main(String[] args) {
List<Integer> path = getParents(tree, 11);
System.out.println(path);
}
}
