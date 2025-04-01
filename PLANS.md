## Old Attempts

 * [Python](https://bitbucket.org/snake-biscuits/starwar)
 * [C](https://bitbucket.org/snake-biscuits/starduel)


## Asteroid Generation

Use space-filling curves as a basis for generating dense fields

 * Hilbert Curve (square, equidistant points)
 * Peano Curve (rectangular, long spans feel manmade)
 * Gosper Curve (hexagonal, equidistant points)


## Simulation simplification

 * Bounding Volume Heirarchy (octree?)
   - if we do asteroid splitting, could use parent bounds
   - pass gravitaional center & force or bvh parent to neighbours
   - influence falloff radius (limit number of neighbours to account for)
   - global influence (saturn itself)

> NOTE: influence radius should be a function of mass & collision bounds
> -- which could be used to group systems (multiple bodies acting together)


## Level Design

Should make small repeatable gameplay moments / puzzles
 * Ambushes
 * Crush Hazards (Titan A.E. ice field)
 * "my ship is dragging mines" moment from Galaxy Quest


## Multiplayer

 * server-client simulation model
 * demo recording (list of packets in a file)
 * split-screen (2 sets of keybinds)


## UI

 * `.html`, `.svg` & `.css` rendering
   - would `.scss` be easy to implement?
 * compositing in html, scales with resolution
 * svg controller test / bindings
 * svg sub-elements (picked by element id) for input glyphs
 * index svg elements to display info dynamically
 * http-like protocol to feed routing state machine (page links)
 * all loaded from `resources/`
   - hot-swappable
   - empowers modders down the line
   - document expected values OR have hardcoded defaults


## Moddability

This tools will also help us build the game
`.exe` is the engine
`resources/` is the game
 * failstates
 * error messages
 * hot-swappability
 * in-game console


## Structure

```
engine.exe
resources/
  levels/
    start.ext
  scripts/
    levels/
      start.lua
  sprites/
    input/
      ds4.svg
  ui/
    main_menu.html
    core.style.css
 sound/
 localisation/
```


## Localisation

need a text fomat
UTF-8 would be nice
UTF-16 could be faster & more stable
