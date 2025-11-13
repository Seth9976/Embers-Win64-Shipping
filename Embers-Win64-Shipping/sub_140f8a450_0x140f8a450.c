// 函数: sub_140f8a450
// 地址: 0x140f8a450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xbf].b != 0)
    char result = sub_140f7aa70(&arg1[0xba], arg2)
    
    if (result != 0)
        return result

sub_140693390(&arg1[0xba], arg2)
arg1[0xbf].b = arg2[0xa].b
sub_140692f90(&arg1[0xc0], &arg2[0xc])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
