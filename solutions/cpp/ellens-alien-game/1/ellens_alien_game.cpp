namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
    public:
        int x_coordinate;
        int y_coordinate;
        int health;
    
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
            health = 3;
        }

        int get_health() { return health; }
        bool is_alive() { return (health>0 ? true:false); }
        bool hit() {
            if(is_alive() == true) { health -= 1; }
            return true; }
        bool teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true; }
        bool collision_detection(Alien a2) {
            return (x_coordinate == a2.x_coordinate && y_coordinate == a2.y_coordinate ? true:false); }
};

}  // namespace targets