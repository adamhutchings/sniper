namespace game {

class GameObject {
  public:
    void set_pos(int x_pos, int y_pos);

  private:
    int x, y;
    int vx, vy;
};

} // namespace game
