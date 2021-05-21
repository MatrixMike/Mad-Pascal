const
    pac0 : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11111111,
    %11111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac1l : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %00111111,
    %00111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac2l : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %00111111,
    %00001111,
    %00001111,
    %00111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac3l : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %00111110,
    %00011111,
    %00001111,
    %00001111,
    %00011111,
    %00111110,
    %00111100,
    %00000000,
    %00000000
);

    pac4l : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00011100,
    %00011110,
    %00001111,
    %00001111,
    %00001111,
    %00001111,
    %00011110,
    %00011100,
    %00000000,
    %00000000
);

    pac1r : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11111100,
    %11111100,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac2r : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111100,
    %11110000,
    %11110000,
    %11111100,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac3r : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111100,
    %11111000,
    %11110000,
    %11110000,
    %11111000,
    %01111100,
    %00111100,
    %00000000,
    %00000000
);

    pac4r : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111000,
    %01111000,
    %11110000,
    %11110000,
    %11110000,
    %11110000,
    %01111000,
    %00111000,
    %00000000,
    %00000000
);


    pac1d : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11111111,
    %11111111,
    %11111111,
    %01100110,
    %00100100,
    %00000000,
    %00000000
);

    pac2d : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11111111,
    %11100111,
    %11100111,
    %01000010,
    %00000000,
    %00000000,
    %00000000
);

    pac3d : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11111111,
    %11100111,
    %11000011,
    %00000000,
    %00000000,
    %00000000,
    %00000000
);

    pac4d : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11111111,
    %11000011,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000
);

    pac1u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00100100,
    %01100110,
    %11111111,
    %11111111,
    %11111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac2u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %01000010,
    %11100111,
    %11100111,
    %11111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac3u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %11000011,
    %11100111,
    %11111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac4u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %11000011,
    %11111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac5u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %11111111,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac6u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00111100,
    %11111111,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac7u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00011000,
    %00111100,
    %01111110,
    %00111100,
    %00000000,
    %00000000
);

    pac8u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00011000,
    %00011000,
    %00111100,
    %00111100,
    %00000000,
    %00000000
);

    pac9u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00011000,
    %00011000,
    %00000000,
    %00000000
);

    pac10u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00011000,
    %00011000,
    %00000000,
    %00000000,
    %00000000
);

    pac11u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00011000,
    %00011000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000
);

    pac12u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00100100,
    %00011000,
    %00111100,
    %00011000,
    %00100100,
    %00000000,
    %00000000,
    %00000000,
    %00000000
);

    pac13u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %01000010,
    %00100100,
    %00011000,
    %01100110,
    %00011000,
    %00100100,
    %01000010,
    %00000000,
    %00000000,
    %00000000
);


    pac14u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %10000001,
    %01000010,
    %00100100,
    %00000000,
    %11100111,
    %00000000,
    %00100100,
    %01000010,
    %10000001,
    %00000000,
    %00000000
);

    pac15u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %10000001,
    %01000010,
    %00000000,
    %00000000,
    %11000011,
    %00000000,
    %00000000,
    %01000010,
    %10000001,
    %00000000,
    %00000000
);

    pac16u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %10000001,
    %00000000,
    %00000000,
    %00000000,
    %10000001,
    %00000000,
    %00000000,
    %00000000,
    %10000001,
    %00000000,
    %00000000
);

    pac17u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000,
    %00000000
);

    ghost1r : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11101011,
    %11101011,
    %11111111,
    %11111111,
    %11111111,
    %11010101,
    %00000000,
    %00000000
);

    ghost2r : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11101011,
    %11101011,
    %11111111,
    %11111111,
    %11111111,
    %10101011,
    %00000000,
    %00000000
);


    ghost1l : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11010111,
    %11010111,
    %11111111,
    %11111111,
    %11111111,
    %10101011,
    %00000000,
    %00000000
);

    ghost2l : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11010111,
    %11010111,
    %11111111,
    %11111111,
    %11111111,
    %11010101,
    %00000000,
    %00000000
);

    ghost1d : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11011011,
    %11011011,
    %11111111,
    %11111111,
    %10100101,
    %00000000,
    %00000000
);

    ghost2d : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11111111,
    %11011011,
    %11011011,
    %11111111,
    %11111111,
    %11011011,
    %00000000,
    %00000000
);

    ghost1u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01011010,
    %11011011,
    %11111111,
    %11111111,
    %11111111,
    %11111111,
    %10100101,
    %00000000,
    %00000000
);

    ghost2u : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01011010,
    %11011011,
    %11111111,
    %11111111,
    %11111111,
    %11111111,
    %11011011,
    %00000000,
    %00000000
);

    ghost1escape : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11011011,
    %10111101,
    %11111111,
    %11100111,
    %11111111,
    %10100101,
    %00000000,
    %00000000
);

    ghost2escape : array [0..SPRITE_HEIGHT-1] of byte = (
    %00000000,
    %00000000,
    %00111100,
    %01111110,
    %11011011,
    %10111101,
    %11100111,
    %11100111,
    %11111111,
    %11011011,
    %00000000,
    %00000000
);

    pac_down: array [0..7] of pointer = (@pac0, @pac1d, @pac2d, @pac3d, @pac4d, @pac3d, @pac2d, @pac1d);
    pac_up: array [0..7] of pointer = (@pac0, @pac1u, @pac2u, @pac3u, @pac4u, @pac3u, @pac2u, @pac1u);
    pac_left: array [0..7] of pointer = (@pac0, @pac1l, @pac2l, @pac3l, @pac4l, @pac3l, @pac2l, @pac1l);
    pac_right: array [0..7] of pointer = (@pac0, @pac1r, @pac2r, @pac3r, @pac4r, @pac3r, @pac2r, @pac1r);
    pac_dies: array [0..17] of pointer = (@pac0, @pac1u, @pac2u, @pac3u, @pac4u, @pac5u, @pac6u, @pac7u, @pac8u,
                                        @pac9u, @pac10u, @pac11u, @pac12u, @pac13u, @pac14u, @pac15u, @pac16u, @pac17u);

    ghost_down: array [0..1] of pointer = (@ghost1d, @ghost2d);
    ghost_up: array [0..1] of pointer = (@ghost1u, @ghost2u);
    ghost_left: array [0..1] of pointer = (@ghost1l, @ghost2l);
    ghost_right: array [0..1] of pointer = (@ghost1r, @ghost2r);
    ghost_escape: array [0..1] of pointer = (@ghost1escape, @ghost2escape);

var
    pac_sprites: array [0..4] of pointer = (@pac_up, @pac_right, @pac_down, @pac_left, @pac_up);
    ghost_sprites: array [0..4] of pointer = (@ghost_up, @ghost_right, @ghost_down, @ghost_left, @ghost_escape);

    fences: array [0..16] of word = (
        $4f4f,    // 0 none
        $4F4F,    // 1 T
        $5151,    // 2 B
        $5151,    // 3 TB
        $4f52,    // 4 L
        $4F54,    // 5 TL
        $5156,    // 6 BL
        $5158,    // 7 LTB
        $534f,    // 8 R
        $554F,    // 9 TR
        $5751,    // 10 BR
        $5951,    // 11 TBR
        $5352,    // 12 LR
        $5554,    // 13 TLR
        $5756,    // 14 BLR
        $5958,    // 15 LTBR
        $504F     // 16 rbCORNER
    );

    tiles: array [0..19] of word = (
        $0000, // 0 void
        $4443, // 1 dot
        $4141, // 2 empty
        $4645, // 3 pill
        $4847, // 4 spawner
        $7F7E, // 5 spawner open 1
        $7D7C, // 6 spawner open 2
        $4A49, // 7 warp R
        $4A49, // 8 warp L
        $4E4D, // 9 exit
        $3F3E, // 10 exit_open

        $5F5E, // 11 - 100
        $5F5D, // 12 - 200
        $5F5C, // 13 - 300
        $5F5B, // 14 - 400
        $5F5A, // 15 - 500

        $3635, // 16 - apple
        $3837, // 17 - cherry
        $3a39, // 18 - banana
        $0000
        );
const
    TILE_VOID = 0;
    TILE_DOT = 1;
    TILE_EMPTY = 2;
    TILE_PILL = 3;
    TILE_SPAWNER = 4;
    TILE_SPAWNER_OPEN1 = 5;
    TILE_SPAWNER_OPEN2 = 6;
    TILE_WARP_RIGHT = 7;
    TILE_WARP_LEFT = 8;
    TILE_EXIT = 9;
    TILE_EXIT_OPEN = 10;

    TILE_100 = 11;
    TILE_200 = 12;
    TILE_300 = 13;
    TILE_400 = 14;
    TILE_500 = 15;

    TILE_BONUS  = 16;
    BONUS_COUNT = 3;