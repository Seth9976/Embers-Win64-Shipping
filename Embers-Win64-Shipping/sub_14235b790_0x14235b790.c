// 函数: sub_14235b790
// 地址: 0x14235b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = *(arg1 + 0x50)
int128_t zmm6 = zx.o(0)
int128_t zmm7 = zx.o(0)

if (i_3 s> 0)
    char* rcx = nullptr
    uint64_t i_2 = zx.q(i_3)
    uint64_t i
    
    do
        if ((*(arg1 + 0x70) & 4) == 0 || rcx[*(arg1 + 0x58)] == 0)
            zmm6.d = zmm6.d f+ *(*(arg1 + 0x48) + (rcx << 2))
        
        rcx = &rcx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rax_2 = rand()
int32_t r9 = *(arg1 + 0x30)
int32_t r8_2 = 0
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 3.05185094e-05f
zmm0.d = zmm0.d f* zmm6.d

if (r9 s> 0)
    char* i_1 = nullptr
    
    while (i_1 s< sx.q(*(arg1 + 0x50)))
        if ((*(arg1 + 0x70) & 4) == 0 || i_1[*(arg1 + 0x58)] == 0)
            zmm7.d = zmm7.d f+ *(*(arg1 + 0x48) + (i_1 << 2))
            
            if (zmm0.d f< zmm7.d)
                *(sx.q(r8_2) + *(arg1 + 0x58)) = 1
                *(arg1 + 0x68) += 1
                return zx.q(r8_2)
        
        r8_2 += 1
        i_1 = &i_1[1]
        
        if (r8_2 s>= r9)
            break

return 0
