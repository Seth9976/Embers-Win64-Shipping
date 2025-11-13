// 函数: sub_140b24b40
// 地址: 0x140b24b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9

if (arg3 == 0)
    r9 = arg1[2]
else
    r9 = *(arg3 + 8)

int64_t r10 = *arg1

if (r9 u< r10 || r9 u> arg1[1] - 2)
    *(arg2 + 0x18) = 0
    return arg2

int32_t var_14 = ((r9 - r10) s>> 1).d
int64_t var_20 = r9 + 2

if (arg3 != 0 && r9 + 2 u> *(arg3 + 8))
    *(arg3 + 8) = r9 + 2

*arg2 = r9.o
arg2[1].q = 0.q
*(arg2 + 0x18) = 1
return arg2
