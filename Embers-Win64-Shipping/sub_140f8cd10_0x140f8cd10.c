// 函数: sub_140f8cd10
// 地址: 0x140f8cd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f499c0(&arg1[0xc2], arg2)

if (result != 0)
    return result

arg1[0xc2] = *arg2
arg1[0xc3].b = arg2[2].b
sub_140692f90(&arg1[0xc4], &arg2[4])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
