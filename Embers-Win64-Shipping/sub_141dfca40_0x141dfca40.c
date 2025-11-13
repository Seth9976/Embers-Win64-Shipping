// 函数: sub_141dfca40
// 地址: 0x141dfca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t r11_1 = sx.q(*(rax_2 + (rcx << 2))) + *(r10 + 0x38)
int32_t r9 = *(rax_2 + (rcx << 2) + 4)
float zmm0[0x4]

if (r9 s>= 2)
    zmm0 = *(arg3 + 0x1c)

uint64_t rcx_1

if (r9 s< 2 || zmm0[0] <= 0f)
    rcx_1 = 0
else
    uint64_t r9_1 = zx.q(r9 - 1)
    
    if (zmm0[0] < 1f)
        uint128_t zmm5
        zmm5.d = _mm_cvtepi32_ps(zx.o(r9_1.d)).d f* zmm0[0]
        float zmm2[0x4] = zmm5
        int32_t rcx_3 = int.d(zmm2[0])
        
        if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] == zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_3
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        rcx_1 = zx.q(r9_1.d)
        int32_t rax_8 = int.d(zmm2[0])
        
        if (rax_8 s<= r9_1.d)
            rcx_1 = zx.q(rax_8)
        
        if (*(arg3 + 4) != 1)
            zmm5.d = zmm5.d f- zmm2[0]
        else
            zmm5 = zx.o(0)
        
        int32_t rax_9 = (rcx_1 + 1).d
        
        if (rax_9 s<= r9_1.d)
            r9_1 = zx.q(rax_9)
        
        if (rcx_1.d != r9_1.d)
            int64_t rdx = sx.q((rcx_1 * 3).d << 2)
            int64_t rcx_5 = sx.q((r9_1 * 3).d << 2)
            zmm0 = zx.o(*(rdx + r11_1))
            int32_t rax_14 = *(rdx + r11_1 + 8)
            uint128_t zmm3 = zx.o(*(rcx_5 + r11_1))
            uint128_t zmm4 = zx.o(*(rcx_5 + r11_1))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm4.d = zmm4.d f- zmm0[0]
            int32_t rax_15 = *(rcx_5 + r11_1 + 8)
            int64_t var_38 = zmm0.q
            zmm3.d = zmm3.d f- var_38:4.d
            zmm4.d = zmm4.d f* zmm5.d
            zmm2 = rax_15
            zmm2[0] = zmm2[0] f- rax_14
            zmm3.d = zmm3.d f* zmm5.d
            zmm4.d = zmm4.d f+ zmm0[0]
            zmm3.d = zmm3.d f+ var_38:4.d
            zmm2[0] = zmm2[0] f* zmm5.d
            zmm2[0] = zmm2[0] f+ rax_14
            float temp0_10[0x4] = _mm_unpacklo_ps(zmm3, 0)
            *(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm2[0].q), temp0_10[0].q)
            return rax_15
    else
        rcx_1 = zx.q(r9_1.d)

int64_t rcx_2 = sx.q((rcx_1 * 3).d << 2)
int32_t rax_5 = *(rcx_2 + r11_1 + 8)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(*(rcx_2 + r11_1)), rax_5), 
    _mm_unpacklo_ps(*(rcx_2 + r11_1 + 4), 0)[0].q)
return rax_5
