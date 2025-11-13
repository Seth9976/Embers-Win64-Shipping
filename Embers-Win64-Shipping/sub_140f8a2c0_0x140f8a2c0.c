// 函数: sub_140f8a2c0
// 地址: 0x140f8a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_14069a820(&arg1[0xdd], arg2)

if (result != 0)
    return result

arg1[0xdd].b = *arg2
*(arg1 + 0x6e9) = arg2[1]
sub_140692f90(&arg1[0xde], &arg2[8])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
