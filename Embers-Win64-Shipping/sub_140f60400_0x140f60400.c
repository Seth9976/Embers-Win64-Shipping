// 函数: sub_140f60400
// 地址: 0x140f60400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f498c0(&arg1[0x5c], arg2)

if (result != 0)
    return result

*(arg1 + 0x2e0) = *arg2
arg1[0x5e].b = arg2[4].b
sub_140692f90(&arg1[0x5f], &arg2[6])
return sub_140e19ef0(arg1, 1)
