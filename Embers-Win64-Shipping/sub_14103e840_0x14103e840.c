// 函数: sub_14103e840
// 地址: 0x14103e840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) = arg4
arg1[1] = arg3
arg1[3].d = arg5
*arg1 = arg2
arg1[2].d = 0xffffffff
*(arg1 + 0x1c) = 0

if (*(arg3 + 0xfc) != 0)
    sub_141037220(arg2, arg3, arg4, arg5)
else
    int32_t r8 = *(arg3 + 0xf0)
    arg1[2].d = r8
    
    if (r8 != arg4)
        *(arg1 + 0x1c) = 1
        sub_1410129f0(arg2, arg3, r8, arg4, arg5)

return arg1
