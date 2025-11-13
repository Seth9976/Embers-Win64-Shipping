// 函数: sub_140f8e070
// 地址: 0x140f8e070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f497f0(&arg1[0xda], arg2)

if (result != 0)
    return result

arg1[0xda].d = *arg2
*(arg1 + 0x6d4) = arg2[1].b
sub_140692f90(&arg1[0xdb], &arg2[2])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
