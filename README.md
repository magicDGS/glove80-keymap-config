# glove80-keymap-config

Personal keymap config for the Glove80.

A QWERTY-based layout for Spanish OS layout with layer functionality from [Glorious Engrammer layout] and [Tailorkey Zero layout].

> [!NOTE]
> This config is intended to be used in Windows with the ES-ES keyboard layout on the OS.

## Features

- QWERTY-based Base layer for Windows with ES-ES OS layout, with the following changes w.r.t. the default Glove80 layout:

  - Thumb cluster migrated to the same as [Glorious Engrammer layout] version 38
  - Duplicate Magic layer toggle on both halves (mirror on the right the default on on the right)
  - Sticky-Shift moved to the natural position as on [Glorious Engrammer layout] version 38
  - Ctrl/Alt/Gui/AltGr moved to a similar position as a Standard keyboard to ease transition
  - Moved the Spanish GRAVE and PLUS keys to the lower row (index and middle finger, respectivel) to ease reach on the base layout
  - Reposition the Spanish ORDINAL to a more similar position as a Standard keyboard to keep in base layer and due to the reposition of LSHIFT
  - Recover Spanish LESS_THAN to ensure that the key is accessible in the main layer for typing and writing
  - Add `&caps_word` to the Base layer in a similar position as the CAPS_LOCK in a Standard keyboard
  - Remove navigation keys from base later as a navigation layer will be implemented
  - Add GASC Home Row Mods (HRM) implemented with the same strategy as the [Tailorkey Zero layout] version 1.0g
  - Add also a HRM for AltGr on the W/O to support more Spanish symbols (as [Glorious Engrammer layout] version 38)

- Cursor Layer:

  - Same as [Glorious Engrammer layout] version 38 (without macros for selection)
  - Toggle on the same thumb cluster as [Glorious Engrammer layout] version 38

- Number Layer:

  - Same as [Glorious Engrammer layout] version 38 (without transparent keys, vim specifics and select macros)
  - Toggle on the same thumb cluster as [Glorious Engrammer layout] version 38

- Function Layer:

  - Same as [Glorious Engrammer layout] version 38 (without select macros)
  - Toggle on the same thumb cluster as [Glorious Engrammer layout] version 38
  - Some functions are not working on Windows

- Lower Layer:

  - Toggle in the same thumb/layer activation position the layer lock (as [Glorious Engrammer layout] version 38)

- Magic Layer:

  - Added a go-to layer on the same position as the RGB is located as [Glorious Engrammer layout] version 38

- Removed the Factory layer

- GitHub Actions build with west [zmk last `main`workflow](https://github.com/zmkfirmware/zmk/blob/main/.github/workflows/build.yml)
- Use latest [Moergo ZMK firmware](https://github.com/moergo-sc/zmk) `main` version

[Glorious Engrammer layout]: https://sunaku.github.io/moergo-glove80-keyboard.html
[Tailorkey Zero layout]: https://sites.google.com/view/keyboards/glove80_tailorkey
