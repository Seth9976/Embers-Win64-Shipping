// 函数: sub_142186b40
// 地址: 0x142186b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t var_18 = *arg2
int32_t var_10 = rax
uint64_t result = sub_1421addd0(arg1, &var_18)
int32_t i_1 = 0
int32_t i = 0
float zmm0_1
float zmm1_1

while (i s>= 0)
    if (i s>= *(arg1 + 0x250))
        break
    
    int64_t i_2 = sx.q(i)
    i += 1
    int64_t rcx = i_2 * 3
    result = *(arg1 + 0x248)
    zmm1_1 = *(arg2 + 4) f+ *(result + (rcx << 2) + 4)
    *(result + (rcx << 2)) = *arg2 f+ *(result + (rcx << 2))
    zmm0_1 = *(result + (rcx << 2) + 8) f+ arg2[1].d
    *(result + (rcx << 2) + 4) = zmm1_1
    *(result + (rcx << 2) + 8) = zmm0_1

while (i_1 s>= 0)
    if (i_1 s>= *(arg1 + 0x290))
        break
    
    int64_t i_3 = sx.q(i_1)
    i_1 += 1
    int64_t rcx_1 = i_3 * 3
    result = *(arg1 + 0x288)
    zmm1_1 = *(arg2 + 4) f+ *(result + (rcx_1 << 2) + 4)
    *(result + (rcx_1 << 2)) = *arg2 f+ *(result + (rcx_1 << 2))
    zmm0_1 = arg2[1].d f+ *(result + (rcx_1 << 2) + 8)
    *(result + (rcx_1 << 2) + 4) = zmm1_1
    *(result + (rcx_1 << 2) + 8) = zmm0_1

return result
