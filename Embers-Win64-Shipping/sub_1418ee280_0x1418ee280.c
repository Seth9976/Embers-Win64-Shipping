// 函数: sub_1418ee280
// 地址: 0x1418ee280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

sub_141903c30(arg4)
uint64_t r9 = *(arg4 + 0x20)

if (r9 != 0)
    sub_1418ede90(*(arg1 + 0x48), arg2, arg3, r9)
    return 

void* r9_1 = *(arg4 + 0x60)

if (r9_1 != 0)
    sub_1418edc60(*(arg1 + 0x48), arg2, arg3, r9_1)
else if (*(arg4 + 0x28) != 0)
    int32_t rax_1 = sub_1418e0ce0(*(arg1 + 0x1a8), *(arg4 + 0x38))
    sub_1418ee330(*(arg1 + 0x48), arg2, arg3, arg4 + 0x30, rax_1)
