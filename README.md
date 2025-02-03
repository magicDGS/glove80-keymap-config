# glove80-keymap-config

Personal keymap config for the Glove80.

A QWERTY-based layout for Spanish OS layout with layer functionality from [Sunaku's Keymap (GE v38)], [Urob's Keymap] and [Tailorkey Zero Keymap].

> [!NOTE]
> This config is intended to be used in Windows with the ES-ES keyboard layout on the OS.

## Features

- QWERTY-based Default layer for Windows with ES-ES OS layout, with the following changes w.r.t. the default Glove80 layout:

  - Thumb cluster migrated to [Sunaku's Keymap (GE v38)] configuration
  - Duplicate Magic layer toggle on both halves as on [Sunaku's Keymap (GE v38)]
  - Sticky-Shift moved to the natural position as on [Sunaku's Keymap (GE v38)]
  - Ctrl/Alt/Gui/AltGr moved to a similar position as a Standard keyboard to ease transition
  - Moved the Spanish `ES_GRAVE` and `ES_PLUS` keys to the lower row (index and middle finger, respectively) to ease reach on the base layout
  - Reposition the Spanish `ES_ORDM` to a more similar position as a Standard keyboard to keep in base layer and due to the reposition of `LSHIFT`
  - Recover `ES_LT` to ensure that the key is accessible in the main layer for typing and writing
  - Add `&caps_word` to the Base layer in a similar position as the `CAPS_LOCK` in a Standard keyboard
  - Remove navigation keys (Home/End/PgUp/PgDown) from base later in favor of navigation layer
  - Add GASC Timeless Home Row Mods (HRM) implemented as [Urob's Keymap].
  - Add also a HRM for AltGr on the `W` and `O` to support more Spanish symbols on main layer (as [Sunaku's Keymap (GE v38)])

- Navigation Layer:

  - Same as [Sunaku's Keymap (GE v38)] Cursor layer
  - Toggle on the same thumb cluster as [Sunaku's Keymap (GE v38)]

- Number Layer:

  - Same as [Sunaku's Keymap (GE v38)] (without transparent keys and vim specifics)
  - Toggle on the same thumb cluster as [Sunaku's Keymap (GE v38)]

- Function Layer:

  - Same as [Sunaku's Keymap (GE v38)]
  - Toggle on the same thumb cluster as [Sunaku's Keymap (GE v38)]
  - Some functions might not be working on Windows - TO-BE-REMOVED

- Symbol Layer:

  - Same as [Sunaku's Keymap (GE v38)] (shift-behavior as in Spanish if present)
  - Toggle on the same thumb cluster as [Sunaku's Keymap (GE v38)]
  - Uses macros for dead-keys to make them type on first key-press ("undead" keys)

- Mouse Layer:
  - Same as [Sunaku's Keymap (v41)] without the speed scaling

- Lower Layer:

  - Toggle in the same thumb/layer activation position the layer lock (as [Sunaku's Keymap (GE v38)])
  - Adapted to work as original Lower on Spanish OS.

- Magic Layer:

  - Added a go-to layer on the same position as the RGB is located as [Sunaku's Keymap (GE v38)] - TODO: go-to layers are not worth on this implementation as there is only qwerty

- Removed the Factory layer

- Combos from Sunaku's [Sunaku's Keymap (GE v38)]:

  - Alt-Tab and Ctrl-Tab on left hand (the same 2-keys as the Cursor layer with support to Cursor layer switch)
  - Hyper and Meh key on right hand.

- GitHub Actions build with west [zmk last `main` workflow](https://github.com/zmkfirmware/zmk/blob/main/.github/workflows/build.yml)
- GitHub Action draw with [keymap-drawer](https://github.com/caksoylar/keymap-drawer) with custom css to look similar to [Sunaku's Keymap (GE v38)] images
- Use [Moergo ZMK firmware](https://github.com/moergo-sc/zmk) `v25.01` version, and modules to ease implementation (`urob/zmk-helpers` and `magicDGS/zmk-keymap-utils`)

## Build locally

To build locally, the following setup is available

- Devcontainer with all required tooling
- Use `just init` to initialize the required zephyr/zmk tooling
- Use the rest of the provided `just` targets to update, build or draw the keymap

The `Justfile` is based on [Urob's Keymap] without nix support.



[Sunaku's Keymap (GE v38)]: https://github.com/sunaku/glove80-keymaps/tree/v38
[Sunaku's Keymap (v41)]: https://github.com/sunaku/glove80-keymaps/tree/v41
[Urob's Keymap]: https://github.com/urob/zmk-config
[Tailorkey Zero Keymap]: https://sites.google.com/view/keyboards/glove80_tailorkey