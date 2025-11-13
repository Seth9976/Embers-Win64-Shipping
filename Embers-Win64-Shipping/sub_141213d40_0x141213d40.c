// 函数: sub_141213d40
// 地址: 0x141213d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
int32_t* r11 = arg3
float zmm1[0x4] = zmm3
float zmm6[0x4] = *(arg2 + 4)
int32_t r10 = int.d(zmm1[0])
float zmm8[0x4] = *(arg2 + 8)

if (r10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r10)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(r10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm3[0] = zmm3[0] - zmm1[0]
zmm1 = zmm6
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm6[0] = zmm6[0] - zmm1[0]
zmm1 = zmm8
int32_t rcx_2 = int.d(zmm1[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm8[0] = zmm8[0] - zmm1[0]
uint128_t zmm2 = zx.o(*arg2)
float rax_7 = *(arg2 + 8)
zmm1 = zmm2
float zmm5 = 1f
bool cond:0 = zmm3[0] > 0.00100000005f
*arg1 = 0
*(arg1 + 8) = 0
int32_t r10_2 = int.d(fconvert.t(rax_7))
int32_t rsi
rsi.b = cond:0
int32_t var_94 = r10_2
int32_t rdx = int.d(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0])
int32_t rcx_4
rcx_4.b = zmm6[0] > 0.00100000005f
int32_t rcx_5 = rcx_4 + 1
int32_t var_90 = rcx_5
zmm1 = 0x3f800000
int32_t var_98 = rdx
int32_t r13 = int.d(zmm2.d)
int32_t r8
r8.b = zmm8[0] > 0.00100000005f
int32_t r8_1 = r8 + 1
int32_t var_8c = r8_1
int32_t rax_8 = 0
int32_t arg_8 = 0
zmm2 = 0x3f800000

do
    if (r8_1 u> 1)
        if (rax_8 != 0)
            zmm5 = zmm8[0]
        else
            zmm5 = 1f - zmm8[0]
    
    int32_t rbp_1 = 0
    int32_t arg_10 = 0
    
    do
        if (rcx_5 u> 1)
            if (rbp_1 != 0)
                zmm2 = zmm6
            else
                zmm2.d = 1f - zmm6[0]
        
        int32_t r14_1 = *r11
        int32_t r9 = rdx + rbp_1
        int32_t r15_1 = r11[1]
        int32_t i = 0
        int32_t r10_3 = r10_2 + rax_8
        int32_t r11_2 = r11[2] - 1
        
        do
            if (rsi + 1 u> 1)
                if (i != 0)
                    zmm1 = zmm3
                else
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f - zmm3[0]
            
            int32_t rax_9 = i + r13
            int32_t rdx_1
            
            if (rax_9 s>= 0)
                rdx_1 = r14_1 - 1
                
                if (rax_9 s< r14_1 - 1)
                    rdx_1 = rax_9
            else
                rdx_1 = 0
            
            int32_t rcx_6
            
            if (r9 s>= 0)
                rcx_6 = r15_1 - 1
                
                if (r9 s< r15_1 - 1)
                    rcx_6 = r9
            else
                rcx_6 = 0
            
            int32_t rax_10
            
            if (r10_3 s>= 0)
                rax_10 = r11_2
                
                if (r10_3 s< r11_2)
                    rax_10 = r10_3
            else
                rax_10 = 0
            
            i += 1
            uint128_t zmm0
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(*(sx.q((rax_10 * r15_1 + rcx_6) * r14_1 + rdx_1) + arg4))).d
                f* zmm1[0]
            zmm0.d = zmm0.d f* 0.00392156886f
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f* zmm5
            zmm0.d = zmm0.d f+ *arg1
            *arg1 = zmm0.d
        while (i s< rsi + 1)
        
        rcx_5 = var_90
        rbp_1 = arg_10 + 1
        r11 = arg3
        rax_8 = arg_8
        rdx = var_98
        r10_2 = var_94
        arg_10 = rbp_1
    while (rbp_1 s< rcx_5)
    
    r8_1 = var_8c
    rax_8 += 1
    arg_8 = rax_8
while (rax_8 s< r8_1)

return arg1
