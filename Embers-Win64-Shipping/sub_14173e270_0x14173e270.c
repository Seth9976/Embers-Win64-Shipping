// 函数: sub_14173e270
// 地址: 0x14173e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg3, 0)

int32_t rcx_1 = 1
int32_t rdx = 1
int128_t zmm8 = *(arg1 + 0x30)
float zmm4 = *(arg1 + 0x9c) + 9.99999994e-09f
int128_t zmm9 = *(arg1 + 0x34)
float zmm3 = *(arg1 + 0xa4) - 9.99999994e-09f
float zmm1 = *(arg2 + 8)
float zmm5 = *(arg1 + 0xa8) - 9.99999994e-09f
float zmm6[0x4] = *arg2
float zmm2 = *(arg1 + 0x98) + 9.99999994e-09f
float zmm7[0x4] = *(arg2 + 4)
float temp0 = _mm_max_ss(*(arg2 + 0xc), zmm4)
float temp0_1[0x4] = _mm_max_ss(zmm7[0], zmm4)
float temp0_2[0x4] = _mm_max_ss(zmm6[0], zmm2)
float temp0_3 = _mm_max_ss(zmm1, zmm2)
float temp0_4 = _mm_min_ss(temp0, zmm5)
float temp0_5[0x4] = _mm_min_ss(temp0_1[0], zmm5)
float temp0_6[0x4] = _mm_min_ss(temp0_2[0], zmm3)
float temp0_7 = _mm_min_ss(temp0_3, zmm3)
*(arg2 + 0xc) = temp0_4
*(arg2 + 4) = temp0_5[0]
temp0_5[0] = temp0_5[0] f/ zmm9.d
*arg2 = temp0_6[0]
*(arg2 + 8) = temp0_7
zmm5 = 1f f/ *(arg1 + 0x68)
zmm4 = 1f f/ *(arg1 + 0x6c)
zmm3 = *(arg1 + 0x50)
temp0_5[0] = temp0_5[0] f- *(arg1 + 0x54)
temp0_6[0] = temp0_6[0] f/ zmm8.d
temp0_6[0] = temp0_6[0] - zmm3
zmm1 = zmm4 * temp0_5[0]
int32_t arg_10 = int.d(zmm5 * temp0_6[0])
int32_t arg_14 = int.d(zmm1)

for (int64_t i = 0; i s< 2; i += 2)
    if (i != 0)
        zmm1 = temp0_5[0]
    else
        zmm1 = temp0_6[0]
    
    if (not(zmm1 >= 0f))
        (&arg_10)[i] -= 1
    
    if (rdx != 0)
        zmm1 = temp0_5[0]
    else
        zmm1 = temp0_6[0]
    
    if (not(zmm1 >= 0f))
        (&arg_14)[i] -= 1
    
    rdx += 2

zmm2 = *(arg2 + 8) f/ zmm8.d - zmm3
zmm3 = *(arg2 + 0xc) f/ zmm9.d f- *(arg1 + 0x54)
int32_t result_1 = int.d(zmm5 * zmm2)
int32_t arg_1c = int.d(zmm4 * zmm3)

for (int64_t i_1 = 0; i_1 s< 2; i_1 += 2)
    zmm1 = i_1 != 0 ? zmm3 : zmm2
    
    if (not(zmm1 >= 0f))
        (&result_1)[i_1] -= 1
    
    zmm1 = rcx_1 != 0 ? zmm3 : zmm2
    
    if (not(zmm1 >= 0f))
        (&arg_1c)[i_1] -= 1
    
    rcx_1 += 2

int32_t rdx_1 = *(arg1 + 0x60)
int32_t rcx_2 = arg_10

if (rcx_2 s>= rdx_1)
    rcx_2 = rdx_1 - 1
else if (rcx_2 s< 0)
    rcx_2 = 0

int32_t r8 = *(arg1 + 0x64)
int32_t r12 = arg_14
int32_t arg_8 = rcx_2

if (r12 s>= r8)
    r12 = r8 - 1
else if (r12 s< 0)
    r12 = 0

int32_t result_2 = result_1

if (result_2 s>= rdx_1)
    result_2 = rdx_1 - 1
else if (result_2 s< 0)
    result_2 = 0

int32_t r15 = arg_1c

if (r15 s>= r8)
    r15 = r8 - 1
else if (r15 s< 0)
    r15 = 0

arg_10 = 0
int32_t result = result_2 - rcx_2 + 1
result_1 = result
int32_t r13 = 0

if (result s> 0)
    do
        int32_t i_2 = 0
        
        if (r15 - r12 + 1 s> 0)
            int32_t rbp_1 = rcx_2 + r13
            
            do
                int32_t rcx_3 = *(arg1 + 0x60)
                int32_t rax_5 = r12 + i_2
                int32_t rcx_4
                
                if (rbp_1 s< rcx_3)
                    rcx_4 = rbp_1
                    
                    if (rbp_1 s< 0)
                        rcx_4 = 0
                else
                    rcx_4 = rcx_3 - 1
                
                int32_t rcx_5 = *(arg1 + 0x64)
                
                if (rax_5 s>= rcx_5)
                    rax_5 = rcx_5 - 1
                else if (rax_5 s< 0)
                    rax_5 = 0
                
                int64_t rsi_1 = sx.q(arg3[1].d)
                int32_t arg_24 = rax_5
                int32_t rax_6 = (rsi_1 + 1).d
                arg3[1].d = rax_6
                
                if (rax_6 s> *(arg3 + 0xc))
                    sub_1405a4d70(arg3)
                
                i_2 += 1
                *(*arg3 + (rsi_1 << 3)) = rcx_4.q
            while (i_2 s< r15 - r12 + 1)
            
            r13 = arg_10
            result = result_1
            rcx_2 = arg_8
        
        r13 += 1
        arg_10 = r13
    while (r13 s< result)

result.b = arg3[1].d s> 0
return result
