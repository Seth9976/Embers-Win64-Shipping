// 函数: sub_141f1df20
// 地址: 0x141f1df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 0x14f) == 2 || arg1[0x14] == 0)
    result = 0
    arg1[0x3f] = 0
    arg1[0x3e] = 0
else
    sub_141997f50(&arg1[0x57])
    (*(*arg1 + 0x520))(arg1)
    result = sub_141ee8490(arg1)

if (arg1[0x15] != 0)
    return result

return sub_141ee69e0(arg1) __tailcall
