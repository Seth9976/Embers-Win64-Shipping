// 函数: sub_140f8e240
// 地址: 0x140f8e240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f7ab50(&arg1[0xe0], arg2)

if (result != 0)
    return result

arg1[0xe0].b = *arg2
*(arg1 + 0x701) = arg2[1]
sub_1407473e0(&arg1[0xe1], &arg2[8])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
