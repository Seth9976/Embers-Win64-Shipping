// 函数: sub_1403883d0
// 地址: 0x1403883d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm4 = arg2
int128_t zmm2 = arg1
arg1 = arg2

if (not(0f f<= zmm4.d))
    arg1 ^= 0x80000000

arg2 = zmm2

if (not(0f f<= zmm2.d))
    arg2 ^= 0x80000000

arg2.d = arg2.d f+ arg1.d

if (not(9.99999972e-10f f<= arg2.d))
    zmm4.d = zmm4.d f* 9.99999996e+11f
    zmm2.d = zmm2.d f* 9.99999996e+11f

int128_t zmm3
zmm3.d = zmm4.d f* zmm4.d
arg2.d = zmm2.d f* zmm2.d
int128_t zmm6

if (not(arg2.d f<= zmm3.d))
    zmm6.d = zmm3.d f* 0.678484023f
    arg1.d = zmm3.d f* 0.0859554186f
    zmm6.d = zmm6.d f+ arg2.d
    arg1.d = arg1.d f+ arg2.d
    zmm6.d = zmm6.d f* arg1.d
    zmm6.d f- 0f
    
    if (not(is_unordered.d(zmm6.d, 0f)) && not(zmm6.d f!= 0f))
        if (0f f<= zmm2.d)
            return 0x3fc90fdb
        
        return 0xbfc90fdb
    
    arg1 = 0f f<= zmm2.d ? 0x3fc90fdb : 0xbfc90fdb
    
    zmm3.d = zmm3.d f* 0.431579739f
    zmm2.d = zmm2.d f* zmm4.d
    zmm3.d = zmm3.d f+ arg2.d
    zmm3.d = zmm3.d f* zmm2.d
    zmm3.d = zmm3.d f/ zmm6.d
    arg1.d = arg1.d f- zmm3.d
    return arg1

zmm6.d = arg2.d f* 0.678484023f
arg1.d = arg2.d f* 0.0859554186f
zmm6.d = zmm6.d f+ zmm3.d
arg1.d = arg1.d f+ zmm3.d
zmm6.d = zmm6.d f* arg1.d
zmm6.d f- 0f

if (not(is_unordered.d(zmm6.d, 0f)) && not(zmm6.d f!= 0f))
    arg2 = 0xbfc90fdb
    
    arg1 = 0f f<= zmm2.d ? 0x3fc90fdb : 0xbfc90fdb
    
    zmm2.d = zmm2.d f* zmm4.d
    
    if (not(0f f> zmm2.d))
        arg2 = 0x3fc90fdb
    
    arg1.d = arg1.d f- arg2.d
    return arg1

arg1 = 0xbfc90fdb
int128_t zmm8

zmm8 = 0f f<= zmm2.d ? 0x3fc90fdb : 0xbfc90fdb

zmm2.d = zmm2.d f* zmm4.d

if (not(0f f> zmm2.d))
    arg1 = 0x3fc90fdb

arg2.d = arg2.d f* 0.431579739f
arg2.d = arg2.d f+ zmm3.d
arg2.d = arg2.d f* zmm2.d
arg2.d = arg2.d f/ zmm6.d
arg2.d = arg2.d f+ zmm8.d
arg2.d = arg2.d f- arg1.d
return arg2
