// 函数: sub_1403f7650
// 地址: 0x1403f7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[5].d
int32_t r9_1 = (arg4 - arg3) * r8
*(arg1 + 0x24) -= r9_1

if (arg2 == 0)
    arg1[4].d -= r9_1
    return sub_1403f7470(arg1) __tailcall

arg1[4].d = (arg3 - arg2) * r8
return sub_1403f7470(arg1) __tailcall
