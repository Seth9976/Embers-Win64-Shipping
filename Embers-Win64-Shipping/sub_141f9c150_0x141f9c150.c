// 函数: sub_141f9c150
// 地址: 0x141f9c150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x85] = arg2
float zmm1

if (arg2 == 0)
    zmm1 = 1f
else
    zmm1 = 1f / sub_142005cc0(arg2)

*(arg1 + 0x444) = zmm1
return sub_141ee8490(arg1) __tailcall
