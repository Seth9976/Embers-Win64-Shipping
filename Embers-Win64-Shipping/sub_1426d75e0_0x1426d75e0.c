// 函数: sub_1426d75e0
// 地址: 0x1426d75e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 0xb8)

if (rsi != 0)
    void* const rdi_1
    
    if (*(arg1 + 0x90) == 0)
        rdi_1 = nullptr
    else
        void* rax_1 = sub_14272ef20()
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = *(arg1 + 0x90)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rdi_1 = nullptr
    
    if (rdi_1 == sub_14272e150())
        *(arg1 + 0x70) = sub_1426a2500(rsi, *(arg1 + 0x98)).d

float zmm6[0x4] = *(arg1 + 0x70)
int128_t zmm7 = *(arg1 + 0x74)
zmm6[0] = zmm6[0] f- zmm7.d
float temp0[0x4] = _mm_max_ss(zmm6[0], zx.o(0).d)
int32_t rax_5 = rand()
zmm7.d = zmm7.d f+ zmm6[0]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_5))
zmm7.d = zmm7.d f- temp0[0]
zmm0.d = zmm0.d f* 3.05185094e-05f
zmm0.d = zmm0.d f* zmm7.d
zmm0.d = zmm0.d f+ temp0[0]
*arg3 = zmm0.d
return 3
