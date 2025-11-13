// 函数: sub_140624840
// 地址: 0x140624840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.d = (*(arg1 + 0x30c)).d f* 6.28318548f
void* rbx = arg2
int32_t rdi = 0
int128_t zmm6 = *(arg1 + 0x310)
*(arg1 + 0x318) = zmm0.d

if (arg3 s> 0)
    do
        zmm0.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* *(arg1 + 0x314)
        zmm0.d = zmm0.d f+ zmm6.d
        zmm0.d = zmm0.d f* *(arg1 + 0x318)
        zmm0.d = sinf(zmm0.d).d f* *(arg1 + 0x308)
        int32_t rax_1 = int.d(zmm0.d)
        
        if (rax_1 s> 0xffff)
            rax_1 = 0xffff
        else if (rax_1 s< 0)
            rax_1 = 0
        
        *rbx = rax_1.b
        rdi += 1
        rax_1.w u>>= 8
        *(rbx + 1) = rax_1.b
        rbx += 2
    while (rdi s< arg3)

zmm0.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* *(arg1 + 0x314)
zmm0.d = zmm0.d f+ zmm6.d
*(arg1 + 0x310) = zmm0.d
return zx.q(arg3 * 2)
