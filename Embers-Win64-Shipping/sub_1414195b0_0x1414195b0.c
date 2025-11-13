// 函数: sub_1414195b0
// 地址: 0x1414195b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xa0)
int64_t rbp
rbp.b = 0
float zmm6[0x4] = zx.o(0)
float zmm7[0x4] = zx.o(0)
int32_t zmm0

for (void* rsi_1 = sx.q(*(arg1 + 0xa8)) * 0x5240 + i; i != rsi_1; i += 0x5240)
    float zmm5[0x4] = zx.o(0)
    float zmm4[0x4] = zx.o(0)
    zmm0 = float.s(*(i + 0x260))
    int32_t zmm1 = float.s(*(i + 0x270))
    zmm5[0] = float.s(*(i + 0x15a0))
    zmm4[0] = float.s(*(i + 0x15a4))
    float zmm2 = zmm5[0] f/ zmm0 f* zmm1
    zmm1 = float.s(*(i + 0x274))
    zmm4[0] = zmm4[0] f/ float.s(*(i + 0x264))
    zmm4[0] = zmm4[0] f* zmm1
    
    if (rbp.b != 0)
        bool cond:0_1 = zmm6[0] >= zmm4[0]
        zmm2 = _mm_max_ss(zmm2, zmm7[0])
        
        if (not(cond:0_1))
            zmm6 = zmm4
    else
        rbp.b = 1
        zmm6 = zmm4
    
    float temp0_2[0x4] = _mm_max_ss(zmm4[0], zmm6[0])
    zmm7 = _mm_max_ss(zmm5[0], zmm2)
    zmm6 = temp0_2
    
    if (sub_142391d10(i) == 0)
        int32_t rcx_1 = *(i + 0x15a0)
        int32_t rax_2 = *(arg1 + 0x3b8)
        
        if (rax_2 u>= rcx_1)
            rcx_1 = rax_2
        
        *(arg1 + 0x3b8) = rcx_1

zmm0 = zmm6[0]
*(arg1 + 0x3c8) = int.d(zmm7[0])
int32_t result = int.d(zmm0)
*(arg1 + 0x3cc) = result
return result
