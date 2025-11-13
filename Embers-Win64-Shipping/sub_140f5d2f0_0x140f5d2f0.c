// 函数: sub_140f5d2f0
// 地址: 0x140f5d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f497f0(&arg1[0x73], arg2)

if (result != 0)
    return result

arg1[0x73].d = *arg2
*(arg1 + 0x39c) = arg2[1].b
sub_140692f90(&arg1[0x74], &arg2[2])
return sub_140e19ef0(arg1, 2)
