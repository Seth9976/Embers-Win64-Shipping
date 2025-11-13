// 函数: sub_140f8cc90
// 地址: 0x140f8cc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f7a970(&arg1[0xc6], arg2)

if (result != 0)
    return result

*(arg1 + 0x630) = *arg2
arg1[0xc8].b = arg2[4].b
sub_140692f90(&arg1[0xc9], &arg2[6])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
