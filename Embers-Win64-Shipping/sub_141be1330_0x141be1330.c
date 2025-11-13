// 函数: sub_141be1330
// 地址: 0x141be1330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = int.d(fconvert.t(arg2.d))
int32_t result = int.d(fconvert.t(arg2:4.d))

if (rdx == arg1[0x88].d && result == *(arg1 + 0x444))
    return result

arg1[0x88].d = rdx
*(arg1 + 0x444) = result
return sub_141ee8490(arg1) __tailcall
