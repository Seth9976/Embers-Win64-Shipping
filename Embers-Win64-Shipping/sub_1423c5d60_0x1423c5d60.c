// 函数: sub_1423c5d60
// 地址: 0x1423c5d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_5 = arg1[0x18].d
int32_t rdx = data_143a30248
int32_t r8 = *(arg1 + 0xc4)

if (rax_5 s<= rdx)
    rdx = rax_5

arg1[0x18].d = rdx
int32_t rax = data_143a3024c

if (r8 s<= rax)
    rax = r8

uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdx))
*(arg1 + 0xc4) = rax
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rax_5))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r8))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax))

if (zmm1.d f!= zmm3.d || not(zmm0.d f== zmm2.d))
    zmm1.d = zmm1.d f/ zmm3.d
    zmm0.d = zmm0.d f/ zmm2.d
    
    if (not(zmm1.d f>= zmm0.d))
        zmm1.d = zmm1.d f* zmm2.d
        *(arg1 + 0xc4) = int.d(zmm1.d)
        return sub_1423c5cd0(arg1) __tailcall
    
    zmm0.d = zmm0.d f* zmm3.d
    arg1[0x18].d = int.d(zmm0.d)

return sub_1423c5cd0(arg1) __tailcall
