// 函数: sub_141f84940
// 地址: 0x141f84940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rcx = sx.q(*sub_141f87c30(arg1, arg2))
int32_t rax_1 = *(arg1 + 0x80)
int32_t rdx_1 = rax_1 - rcx.d

if (rdx_1 != 1)
    int64_t r9_1 = *(arg1 + 0x78)
    memmove(r9_1 + (rcx << 3), r9_1 + (sx.q((rcx + 1).d) << 3), (rdx_1 - 1) << 3)
    rax_1 = *(arg1 + 0x80)

*(arg1 + 0x80) = rax_1 - 1
sub_1405c53d0(arg1 + 0x78)
return sub_141f96860(arg1 + 8, &arg_10)
