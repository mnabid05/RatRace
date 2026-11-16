# RatRace

Open `Rat_Race.uproject` in Unreal Engine 5.8 and press Play. The startup level is `Content/Maps/Manhattan_Roads`.

Use WASD to move, the mouse to look, and Space to jump. Deliver food to the 10 animal customers by approaching within 2.4 metres and pressing E when the prompt appears. Each customer accepts one delivery per run; the HUD tracks progress out of 10. Touching a moving pedestrian block opens a black Game Over screen. Restart reloads the map, resets all deliveries, and chooses a new random set of pedestrians.

The original Manhattan landscape is retained, with connected roads added between the buildings. Gameplay is implemented entirely in Blueprints under `Content/ManhattanGameplay`:

- `BP_ManhattanRat`: Ratterina player, using the existing rat mesh, animation and input assets.
- `BP_ManhattanRoads`: instanced road surfaces and markings.
- `BP_PersonSpawnPoint`: per-location random spawn chance, configurable in Details.
- `BP_PacingPerson`: human-sized placeholder block, short-range pacing, and player overlap detection. Pace distance and frequency are editable defaults.
- `BP_ManhattanGameMode`: player selection and Game Over handling.
- `WBP_GameOverScreen`: black background, Game Over title, and Restart button.

Animal customers use the pigeon, cat, and bulldog sprites from the team’s [Sprites folder](https://drive.google.com/drive/folders/1FDaWO-g3Fj_WrD9KwpZP3NoOcvzXz8v1). The original PNGs are included in `SourceArt/DeliveryAnimals`.

- `Content/DeliveryAnimals/BP_DeliveryCustomer`: camera-facing animal sprite, nearby E prompt, and one-time handoff.
- `Content/DeliveryAnimals/BP_DeliveryHUD`: delivery count and completion message.

The island ground uses tiled concrete paving, with ten wooden benches beside the delivery areas. Bench meshes are instanced in `BP_CityBenches` to keep rendering overhead low.
