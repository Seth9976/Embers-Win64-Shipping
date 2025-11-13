// 函数: sub_142a38690
// 地址: 0x142a38690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return sx.q(*(arg1 + 0x18))

void arg_10
void arg_18
int32_t rax_1 = sub_142a38c20(arg2, &arg_18, &arg_10, arg3)
int64_t rcx_1 = sx.q(rax_1)

if (rax_1 s>= 0)
    rcx_1 = arg2[5]

if (rcx_1 s>= 0)
    int64_t rdx_1 = sx.q(*(arg1 + 0x18))
    
    if (0x7fffffffffffffff - rcx_1 s>= rdx_1)
        return rdx_1 + rcx_1

return -1
