class Location {
private:
  std::string m_name;                        // the name of this location.

  /* The special characteristic of this location, one of
     - start: this is the start location,
     - crystal: a crystal is present here,
     - death: getting here results in the player's death
     - prince: the prince is imprisoned here.
     The string is empty if this location has no special charactersitic.
  */
  std::string m_special;

  // Outgoing roads. A road is set to NULL if there is travel is not possible in
  // that directions.
  Road *m_north, *m_south, *m_east, *m_west;

public:
  Location(std::string, std::string); // initialize name and special.

  std::string get_name();    // returns this location's name.
  std::string get_special(); // returns this location's special characteristic.
  void remove_special(std::string); // removes the given special characteristic.

  // Set a neighbor by setting the corresponding road appropriately.
  void set_north(Location*, int);
  void set_south(Location*, int);
  void set_east(Location*, int);
  void set_west(Location*, int);

  // Get a neighbor - NULL if travel is not possible in that direction.
  Location* get_north();
  Location* get_south();
  Location* get_east();
  Location* get_west();
};
