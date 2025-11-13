// 函数: sub_14204d5c0
// 地址: 0x14204d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t var_18 = *arg2
int32_t var_10 = rax
sub_142290210(arg1, &var_18)
float* rcx = arg1[0xf2]
int64_t result = sx.q(arg1[0xf3].d)
void* rdx_2 = result * 0x1c + rcx

if (rcx != rdx_2)
    float zmm2 = *arg2
    float zmm3 = *(arg2 + 4)
    float zmm4_1 = arg2[1].d
    
    do
        float zmm1 = zmm3 + rcx[1]
        *rcx = zmm2 + *rcx
        float zmm0_1 = zmm4_1 + rcx[2]
        rcx[1] = zmm1
        rcx[2] = zmm0_1
        rcx = &rcx[7]
    while (rcx != rdx_2)

return result
