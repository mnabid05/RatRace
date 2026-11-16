# RatRace

Open `Rat_Race.uproject` in Unreal Engine 5.8 and press Play. The startup level is `Content/Maps/Manhattan_Roads`.

Use WASD to move, the mouse to look, and Space to jump. Touching a moving pedestrian block opens a black Game Over screen. Restart reloads the map and chooses a new random set of pedestrians.

The original Manhattan landscape is retained, with connected roads added between the buildings. Gameplay is implemented entirely in Blueprints under `Content/ManhattanGameplay`:

- `BP_ManhattanRat`: Ratterina player, using the existing rat mesh, animation and input assets.
- `BP_ManhattanRoads`: instanced road surfaces and markings.
- `BP_PersonSpawnPoint`: per-location random spawn chance, configurable in Details.
- `BP_PacingPerson`: human-sized placeholder block, short-range pacing, and player overlap detection. Pace distance and frequency are editable defaults.
- `BP_ManhattanGameMode`: player selection and Game Over handling.
- `WBP_GameOverScreen`: black background, Game Over title, and Restart button.
