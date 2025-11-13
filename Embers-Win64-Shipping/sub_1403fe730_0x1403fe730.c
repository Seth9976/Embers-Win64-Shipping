// 函数: sub_1403fe730
// 地址: 0x1403fe730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_4 = arg1[4].d
uint32_t temp0 = divu.dp.d(0:r10_4, arg4)

if (arg2 == 0)
    arg1[4].d = r10_4 - (arg4 - arg3) * temp0
    return sub_1403fe4a0(arg1) __tailcall

arg1[4].d = (arg3 - arg2) * temp0
*(arg1 + 0x24) += r10_4 - (arg4 - arg2) * temp0
return sub_1403fe4a0(arg1) __tailcall
