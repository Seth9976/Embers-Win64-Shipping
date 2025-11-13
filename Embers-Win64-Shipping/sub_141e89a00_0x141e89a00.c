// 函数: sub_141e89a00
// 地址: 0x141e89a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int32_t r9 = *(arg1 + 0x11c)
int32_t arg_8 = r9
*(arg1 + 0x11c) = r9 + 1
*(arg3 + 8) = r9
*(arg2 + 0x20c) = r9
int64_t rdi = sx.q(arg1[1].d)
int32_t rax_1 = (rdi + 1).d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rdi << 3)) = arg3
return sub_14103b0d0(&arg1[2], &arg_8, &arg_18)
