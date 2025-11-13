// 函数: sub_141dff0d0
// 地址: 0x141dff0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg3 + 0x10)
int64_t r9 = sx.q((arg4 << 2).d)
int64_t rax_1 = *(rcx + 0x10)
int64_t r11_1 = sx.q(*(rax_1 + (r9 << 2))) + *(rcx + 0x38)
int32_t r10 = *(rax_1 + (r9 << 2) + 4)
float zmm0[0x4]

if (r10 s>= 2)
    zmm0 = *(arg3 + 0x1c)

uint64_t rcx_1

if (r10 s< 2 || zmm0[0] <= 0f)
    rcx_1 = 0
else
    uint64_t r10_1 = zx.q(r10 - 1)
    
    if (zmm0[0] < 1f)
        uint128_t zmm5
        zmm5.d = _mm_cvtepi32_ps(zx.o(r10_1.d)).d f* zmm0[0]
        float zmm2[0x4] = zmm5
        int32_t rcx_3 = int.d(zmm2[0])
        
        if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] == zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_3
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        rcx_1 = zx.q(r10_1.d)
        int32_t rax_7 = int.d(zmm2[0])
        
        if (rax_7 s<= r10_1.d)
            rcx_1 = zx.q(rax_7)
        
        if (*(arg3 + 4) != 1)
            zmm5.d = zmm5.d f- zmm2[0]
        else
            zmm5 = zx.o(0)
        
        int32_t rax_8 = (rcx_1 + 1).d
        
        if (rax_8 s<= r10_1.d)
            r10_1 = zx.q(rax_8)
        
        if (rcx_1.d != r10_1.d)
            int64_t rdx = sx.q((rcx_1 * 3).d << 2)
            int64_t rcx_5 = sx.q((r10_1 * 3).d << 2)
            zmm0 = zx.o(*(rdx + r11_1))
            int32_t rax_13 = *(rdx + r11_1 + 8)
            uint128_t zmm3 = zx.o(*(rcx_5 + r11_1))
            uint128_t zmm4 = zx.o(*(rcx_5 + r11_1))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm4.d = zmm4.d f- zmm0[0]
            int32_t rax_14 = *(rcx_5 + r11_1 + 8)
            int64_t var_38 = zmm0.q
            zmm3.d = zmm3.d f- var_38:4.d
            zmm4.d = zmm4.d f* zmm5.d
            zmm2 = rax_14
            zmm2[0] = zmm2[0] f- rax_13
            zmm3.d = zmm3.d f* zmm5.d
            zmm4.d = zmm4.d f+ zmm0[0]
            zmm3.d = zmm3.d f+ var_38:4.d
            zmm2[0] = zmm2[0] f* zmm5.d
            zmm2[0] = zmm2[0] f+ rax_13
            float temp0_10[0x4] = _mm_unpacklo_ps(zmm3, 0)
            *(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm2[0].q), temp0_10[0].q)
            return rax_14
    else
        rcx_1 = zx.q(r10_1.d)

int64_t rcx_2 = sx.q((rcx_1 * 3).d << 2)
int32_t rax_4 = *(rcx_2 + r11_1 + 8)
*(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(*(rcx_2 + r11_1)), rax_4), 
    _mm_unpacklo_ps(*(rcx_2 + r11_1 + 4), 0)[0].q)
return rax_4
