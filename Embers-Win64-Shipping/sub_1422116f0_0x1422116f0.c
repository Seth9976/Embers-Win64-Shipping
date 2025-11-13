// 函数: sub_1422116f0
// 地址: 0x1422116f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t var_18 = *arg2
int32_t var_10 = rax
sub_1421addd0(arg1, &var_18)
float* r8 = *(arg1 + 0x258)
void* rax_2 = &r8[sx.q(*(arg1 + 0x260)) * 3]
float zmm0_1
float zmm1_1
float zmm2_1
float zmm3_1
float zmm4_1

if (r8 != rax_2)
    zmm2_1 = *arg2
    zmm3_1 = *(arg2 + 4)
    zmm4_1 = arg2[1].d
    
    do
        zmm1_1 = zmm3_1 + r8[1]
        *r8 = zmm2_1 + *r8
        zmm0_1 = zmm4_1 + r8[2]
        r8[1] = zmm1_1
        r8[2] = zmm0_1
        r8 = &r8[3]
    while (r8 != rax_2)

void* rdx_2 = *(arg1 + 0x2a8)
void* result = rdx_2 + sx.q(*(arg1 + 0x2b0)) * 0xc

if (rdx_2 != result)
    zmm2_1 = *arg2
    zmm3_1 = *(arg2 + 4)
    zmm4_1 = arg2[1].d
    
    do
        zmm1_1 = zmm3_1 f+ *(rdx_2 + 4)
        *rdx_2 = zmm2_1 f+ *rdx_2
        zmm0_1 = zmm4_1 f+ *(rdx_2 + 8)
        *(rdx_2 + 4) = zmm1_1
        *(rdx_2 + 8) = zmm0_1
        rdx_2 += 0xc
    while (rdx_2 != result)

return result
