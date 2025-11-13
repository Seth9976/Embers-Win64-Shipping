// 函数: sub_1420cf9c0
// 地址: 0x1420cf9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
float zmm2
float zmm3

while (true)
    zmm6.d = float.s(rand())
    zmm6.d = zmm6.d f* 3.05185094e-05f
    zmm6.d = zmm6.d f+ zmm6.d
    zmm6.d = zmm6.d f- 1f
    zmm7.d = float.s(rand())
    zmm7.d = zmm7.d f* 3.05185094e-05f
    zmm7.d = zmm7.d f+ zmm7.d
    zmm7.d = zmm7.d f- 1f
    zmm3 = float.s(rand()) * 3.05185094e-05f
    zmm3 = zmm3 + zmm3 - 1f
    zmm2 = zmm7.d f* zmm7.d + zmm6.d f* zmm6.d + zmm3 * zmm3
    
    if (not(zmm2 > 1f))
        if (not(zmm2 < 9.99999975e-05f))
            break

int128_t zmm8
zmm8.d = 1f / _mm_sqrt_ss(0, zmm2)
zmm6.d = zmm6.d f* zmm8.d
zmm7.d = zmm7.d f* zmm8.d
*arg1 = zmm6.d
arg1[1] = zmm7.d
arg1[2] = zmm3 f* zmm8.d
return arg1
