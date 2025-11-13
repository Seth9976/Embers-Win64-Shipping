// 函数: sub_140f8c3f0
// 地址: 0x140f8c3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f497f0(&arg1[0xeb], arg2)

if (result != 0)
    return result

arg1[0xeb].d = *arg2
*(arg1 + 0x75c) = arg2[1].b
sub_140692f90(&arg1[0xec], &arg2[2])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
