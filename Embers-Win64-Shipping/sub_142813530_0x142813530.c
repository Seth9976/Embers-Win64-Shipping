// 函数: sub_142813530
// 地址: 0x142813530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x148))
int32_t r10 = *(arg1 + 0x14c)
int64_t var_38
__builtin_memset(&var_38, 0, 0x28)
uint64_t arg_8 = zx.q(arg2)
int32_t arg_10 = arg2
int32_t* rdx

if (r9.d != 4)
    rdx = &arg_8
    
    if (r9.d != 8)
        rdx = nullptr
else
    rdx = &arg_10

return sub_1428124b0(arg1, rdx, rdx + r9, &var_38, 1, r9.d, r10)
