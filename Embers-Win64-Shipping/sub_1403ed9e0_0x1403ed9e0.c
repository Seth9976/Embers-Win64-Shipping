// 函数: sub_1403ed9e0
// 地址: 0x1403ed9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg4 + 1)
uint128_t zmm3
zmm3.d = 3.14159274f f/ _mm_cvtepi32_ps(zx.o(result.d)).d
uint128_t zmm1
zmm1.d = zmm3.d f* zmm3.d
uint128_t zmm5
zmm5.d = 2f f- zmm1.d
int32_t zmm4

if (arg3 s>= 2)
    zmm4 = 0x3f800000
    zmm3.d = zmm5.d f* 0.5f
else
    zmm4 = (zx.o(0)).d

if (arg4 s> 0)
    int64_t rdx = arg2 - arg1
    result = arg1 + 4
    int64_t i_1 = ((sx.q(arg4) - 1) u>> 2) + 1
    int64_t i
    
    do
        zmm1 = *(rdx + result - 4)
        result += 0x10
        uint128_t zmm0
        zmm0.d = zmm3.d f+ zmm4
        zmm1.d = zmm1.d f* 0.5f
        zmm1.d = zmm1.d f* zmm0.d
        *(result - 0x14) = zmm1.d
        zmm0.d = zmm3.d f* *(rdx + result - 0x10)
        zmm1.d = zmm3.d f* zmm5.d
        *(result - 0x10) = zmm0.d
        zmm1.d = zmm1.d f- zmm4
        zmm4 = zmm1.d
        zmm0.d = zmm3.d f+ zmm4
        float zmm2 = *(rdx + result - 0xc) * 0.5f f* zmm0.d
        zmm0 = zmm1
        zmm1.d = zmm1.d f* zmm5.d
        *(result - 0xc) = zmm2
        zmm1.d = zmm1.d f- zmm3.d
        zmm0.d = zmm0.d f* *(rdx + result - 8)
        zmm3 = zmm1
        *(result - 8) = zmm0.d
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
