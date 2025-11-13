// 函数: sub_141214390
// 地址: 0x141214390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg2
int32_t* rbx = arg3
float zmm1[0x4] = zmm4
float zmm7[0x4] = *(arg2 + 4)
int32_t r10 = int.d(zmm1[0])
float zmm8[0x4] = *(arg2 + 8)

if (r10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r10)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(r10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm4[0] = zmm4[0] - zmm1[0]
zmm1 = zmm7
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm7[0] = zmm7[0] - zmm1[0]
zmm1 = zmm8
int32_t rcx_2 = int.d(zmm1[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

uint128_t zmm2 = zx.o(*arg2)
zmm8[0] = zmm8[0] - zmm1[0]
float rax_7 = *(arg2 + 8)
zmm1 = zmm2
bool cond:0 = zmm4[0] > 0.00100000005f
*arg1 = 0
arg1[1] = 0
float zmm3 = 1f
int32_t r10_2 = int.d(fconvert.t(rax_7))
int32_t rbp
rbp.b = cond:0
uint64_t var_88 = zmm2.q
float zmm5 = 1f
int32_t var_94 = r10_2
int32_t rdx = int.d(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0])
int32_t rcx_4
rcx_4.b = zmm7[0] > 0.00100000005f
int32_t rcx_5 = rcx_4 + 1
int32_t var_90 = rcx_5
int32_t var_98 = rdx
int32_t r12 = int.d(zmm2.d)
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
    
    int32_t r14_1 = 0
    int32_t arg_10 = 0
    
    do
        if (rcx_5 u> 1)
            if (r14_1 != 0)
                zmm3 = zmm7[0]
            else
                zmm3 = 1f - zmm7[0]
        
        int32_t r15_1 = *rbx
        int32_t r9 = rdx + r14_1
        int32_t r13_1 = rbx[1]
        int32_t i = 0
        int32_t r10_3 = r10_2 + rax_8
        int32_t rbx_2 = rbx[2] - 1
        
        do
            if (rbp + 1 u> 1)
                if (i != 0)
                    zmm2 = zmm4
                else
                    zmm2.d = 1f - zmm4[0]
            
            int32_t rax_9 = r12 + i
            int32_t rdx_1
            
            if (rax_9 s>= 0)
                rdx_1 = r15_1 - 1
                
                if (rax_9 s< r15_1 - 1)
                    rdx_1 = rax_9
            else
                rdx_1 = 0
            
            int32_t rcx_6
            
            if (r9 s>= 0)
                rcx_6 = r13_1 - 1
                
                if (r9 s< r13_1 - 1)
                    rcx_6 = r9
            else
                rcx_6 = 0
            
            int32_t rax_10
            
            if (r10_3 s>= 0)
                rax_10 = rbx_2
                
                if (r10_3 s< rbx_2)
                    rax_10 = r10_3
            else
                rax_10 = 0
            
            int32_t rax_16 = *(arg4 + (sx.q((rax_10 * r13_1 + rcx_6) * r15_1 + rdx_1) << 2))
            int32_t rdx_3 = rax_16 & 0x3f
            int32_t rcx_8 = rax_16 & 0x7c0
            
            if (rcx_8 != 0x7c0)
                int32_t rcx_11
                
                if (rcx_8 != 0)
                    rcx_11 = rax_16 u>> 6 & 0x1f
                else if (rdx_3 == 0)
                    rcx_11 = -0x70
                else
                    rcx_11 = 1
                    
                    do
                        rcx_11 -= 1
                        rdx_3 *= 2
                    while ((rdx_3.b & 0x40) == 0)
                    
                    rdx_3 &= 0x3f
                
                var_88.d = (rcx_11 + 0x70) << 0x17 | rdx_3 << 0x11
            else
                var_88.d = (rdx_3 | 0x3fc0) << 0x11
            
            int32_t rdx_9 = rax_16 u>> 0xb & 0x3f
            int32_t rcx_17 = rax_16 u>> 0x11 & 0x1f
            int32_t rcx_21
            
            if (rcx_17 != 0x1f)
                if (rcx_17 == 0)
                    if (rdx_9 == 0)
                        rcx_17 = -0x70
                    else
                        rcx_17 = 1
                        
                        do
                            rcx_17 -= 1
                            rdx_9 *= 2
                        while ((rdx_9.b & 0x40) == 0)
                        
                        rdx_9 &= 0x3f
                
                rcx_21 = (rcx_17 + 0x70) << 0x17 | rdx_9 << 0x11
            else
                rcx_21 = ((rax_16 & 0x1f800) | 0x1fe0000) << 6
            
            var_88:4.d = rcx_21
            uint32_t rdx_12 = rax_16 u>> 0x1b
            int32_t rcx_26 = rax_16 u>> 0x16 & 0x1f
            int32_t rax_19
            
            if (rdx_12 != 0x1f)
                if (rdx_12 == 0)
                    if (rcx_26 == 0)
                        rdx_12 = -0x70
                    else
                        rdx_12 = 1
                        
                        do
                            rdx_12 -= 1
                            rcx_26 *= 2
                        while ((rcx_26.b & 0x20) == 0)
                        
                        rcx_26 &= 0x1f
                
                rax_19 = (rdx_12 + 0x70) << 0x17 | rcx_26 << 0x12
            else
                rax_19 = (rax_16 u>> 5 & 0x3e0000) | 0x7f800000
            
            uint128_t zmm0
            zmm0.d = zmm2.d f* var_88.d
            zmm1 = zmm2
            i += 1
            zmm1[0] = zmm1[0] f* var_88:4.d
            zmm0.d = zmm0.d f* zmm3
            zmm1[0] = zmm1[0] * zmm3
            zmm0.d = zmm0.d f* zmm5
            zmm1[0] = zmm1[0] * zmm5
            zmm0.d = zmm0.d f+ *arg1
            *arg1 = zmm0.d
            zmm0.d = zmm2.d f* rax_19
            zmm1[0] = zmm1[0] f+ *(arg1 + 4)
            zmm0.d = zmm0.d f* zmm3
            *(arg1 + 4) = zmm1[0]
            zmm0.d = zmm0.d f* zmm5
            zmm0.d = zmm0.d f+ arg1[1].d
            arg1[1].d = zmm0.d
        while (i s< rbp + 1)
        
        rcx_5 = var_90
        r14_1 = arg_10 + 1
        rbx = arg3
        rax_8 = arg_8
        rdx = var_98
        r10_2 = var_94
        arg_10 = r14_1
    while (r14_1 s< rcx_5)
    
    r8_1 = var_8c
    rax_8 += 1
    arg_8 = rax_8
while (rax_8 s< r8_1)

return arg1
