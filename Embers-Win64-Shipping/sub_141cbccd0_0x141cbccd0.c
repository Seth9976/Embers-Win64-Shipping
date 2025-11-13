// 函数: sub_141cbccd0
// 地址: 0x141cbccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int128_t zmm6 = zx.o(0)

do
    int32_t j = 0
    uint128_t zmm4
    zmm4.d = _mm_cvtepi32_ps(zx.o(i)).d f* 0.0078125f
    zmm4.d = zmm4.d f- 1f
    
    do
        float zmm3 = zmm4.d
        uint64_t rax_1 = 0
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(j)).d f* 0.00390625f
        zmm2.d = zmm2.d f+ zmm2.d
        zmm2.d = zmm2.d f- 1f
        
        do
            float zmm1 = zmm2.d
            
            if (rax_1.d u>= 0x12c)
                break
            
            zmm2.d = zmm2.d f* zmm2.d
            rax_1 = zx.q(rax_1.d + 1)
            zmm2.d = zmm2.d f- zmm3 * zmm3
            zmm3 = (zmm1 + zmm1) * zmm3 + 0.175999999f
            zmm2.d = zmm2.d f- 0.730000019f
        while (zmm2.d f* zmm2.d + zmm3 * zmm3 <= 1600f)
        
        j += 1
        zmm6.d = zmm6.d f+ float.s(rax_1)
    while (j s< 0x100)
    
    i += 1
while (i s< 0x100)

zmm6.d = zmm6.d f* 1.52587891e-05f
return float.s(rand()) * 3.05185094e-05f f+ zmm6.d
