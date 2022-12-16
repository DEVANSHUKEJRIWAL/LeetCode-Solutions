public class BinaryInorder {
        public List<Integer> resList = new ArrayList<>();

        public List<Integer> inorderTraversal(TreeNode root) {
            traversal(root);
            return resList;
        }
        public void traversal(TreeNode node) {
            if(node == null) return;
            traversal(node.left);
            resList.add(node.val);
            traversal(node.right);
        }


}
