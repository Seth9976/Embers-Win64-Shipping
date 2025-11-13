// 函数: sub_14219cfc0
// 地址: 0x14219cfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

int64_t rbx_1 = sx.q(arg3)
int32_t r8 = *(arg1 + 0x250)

if (r8 s< (rbx_1 + 1).d)
    int32_t r8_2 = (rbx_1 + 1).d + *(arg1 + 0x250) - r8
    *(arg1 + 0x250) = r8_2
    
    if (r8_2 s> *(arg1 + 0x254))
        sub_140638a00(arg1 + 0x248)

int64_t rax_4 = *(arg1 + 0x248)
int64_t rcx_1 = rbx_1 * 3
*(rax_4 + (rcx_1 << 2)) = *arg2
*(rax_4 + (rcx_1 << 2) + 8) = arg2[1].d
