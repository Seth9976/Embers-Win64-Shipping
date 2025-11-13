// 函数: sub_141214010
// 地址: 0x141214010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
int32_t* r11 = arg3
float zmm1[0x4] = zmm5
float zmm9[0x4] = *(arg2 + 4)
int32_t r10 = int.d(zmm1[0])
float zmm11[0x4] = *(arg2 + 8)

if (r10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r10)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(r10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm5[0] = zmm5[0] - zmm1[0]
zmm1 = zmm9
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm9[0] = zmm9[0] - zmm1[0]
zmm1 = zmm11
int32_t rcx_2 = int.d(zmm1[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm11[0] = zmm11[0] - zmm1[0]
uint128_t zmm2 = zx.o(*arg2)
float rax_7 = *(arg2 + 8)
zmm1 = zmm2
float zmm4 = 1f
bool cond:0 = zmm5[0] > 0.00100000005f
*arg1 = 0.0
*(arg1 + 8) = 0
float zmm6[0x4] = 0x3f800000
int32_t r9 = int.d(fconvert.t(rax_7))
int32_t rbp
rbp.b = cond:0
float zmm8[0x4] = 0x3f800000
int32_t var_c4 = r9
int32_t rdx = int.d(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0])
int32_t rcx_4
rcx_4.b = zmm9[0] > 0.00100000005f
int32_t rcx_5 = rcx_4 + 1
int32_t var_c0 = rcx_5
int32_t var_c8 = rdx
int32_t r14 = int.d(zmm2.d)
int32_t r8
r8.b = zmm11[0] > 0.00100000005f
int32_t r8_1 = r8 + 1
int32_t rax_8 = 0
int32_t var_bc = r8_1
int32_t arg_8 = 0

do
    if (r8_1 u> 1)
        if (rax_8 != 0)
            zmm8 = zmm11
        else
            zmm8 = 0x3f800000
            zmm8[0] = 1f - zmm11[0]
    
    int32_t rsi_1 = 0
    int32_t arg_10 = 0
    
    do
        if (rcx_5 u> 1)
            if (rsi_1 != 0)
                zmm6 = zmm9
            else
                zmm6 = 0x3f800000
                zmm6[0] = 1f - zmm9[0]
        
        int32_t r13_1 = *r11
        int32_t r8_2 = rdx + rsi_1
        int32_t r12_1 = r11[1]
        int32_t i = 0
        int32_t r9_1 = r9 + rax_8
        int32_t r11_2 = r11[2] - 1
        
        do
            if (rbp + 1 u> 1)
                if (i != 0)
                    zmm4 = zmm5[0]
                else
                    zmm4 = 1f - zmm5[0]
            
            int32_t rax_9 = r14 + i
            int32_t rdx_1
            
            if (rax_9 s>= 0)
                rdx_1 = r13_1 - 1
                
                if (rax_9 s< r13_1 - 1)
                    rdx_1 = rax_9
            else
                rdx_1 = 0
            
            int32_t rcx_6
            
            if (r8_2 s>= 0)
                rcx_6 = r12_1 - 1
                
                if (r8_2 s< r12_1 - 1)
                    rcx_6 = r8_2
            else
                rcx_6 = 0
            
            int32_t rax_10
            
            if (r9_1 s>= 0)
                rax_10 = r11_2
                
                if (r9_1 s< r11_2)
                    rax_10 = r9_1
            else
                rax_10 = 0
            
            zmm1 = zx.o(0)
            i += 1
            int32_t rcx_7 = *(arg4 + (sx.q((rax_10 * r12_1 + rcx_6) * r13_1 + rdx_1) << 2))
            zmm2.d = float.s(zx.d((rcx_7 u>> 8).b))
            zmm2.d = zmm2.d f* zmm4
            zmm2.d = zmm2.d f* 0.00392156886f
            zmm2.d = zmm2.d f* zmm6[0]
            float zmm3 =
                float.s(zx.d((rcx_7 u>> 0x10).b)) * zmm4 * 0.00392156886f * zmm6[0] * zmm8[0]
                + *arg1
            zmm1[0] = float.s(zx.d(rcx_7.b))
            zmm2.d = zmm2.d f* zmm8[0]
            *arg1 = zmm3
            zmm1[0] = zmm1[0] * zmm4
            zmm2.d = zmm2.d f+ arg1[1]
            uint128_t zmm0
            zmm0.d = float.s(rcx_7 u>> 0x18)
            zmm1[0] = zmm1[0] * 0.00392156886f
            zmm0.d = zmm0.d f* zmm4
            arg1[1] = zmm2.d
            zmm1[0] = zmm1[0] * zmm6[0]
            zmm0.d = zmm0.d f* 0.00392156886f
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm0.d = zmm0.d f* zmm6[0]
            zmm1[0] = zmm1[0] + arg1[2]
            zmm0.d = zmm0.d f* zmm8[0]
            arg1[2] = zmm1[0]
            zmm0.d = zmm0.d f+ arg1[3]
            arg1[3] = zmm0.d
        while (i s< rbp + 1)
        
        rcx_5 = var_c0
        rsi_1 = arg_10 + 1
        r11 = arg3
        rax_8 = arg_8
        rdx = var_c8
        r9 = var_c4
        arg_10 = rsi_1
    while (rsi_1 s< rcx_5)
    
    r8_1 = var_bc
    rax_8 += 1
    arg_8 = rax_8
while (rax_8 s< r8_1)

return arg1
