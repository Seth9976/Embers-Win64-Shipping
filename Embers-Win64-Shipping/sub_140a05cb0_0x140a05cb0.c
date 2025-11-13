// 函数: sub_140a05cb0
// 地址: 0x140a05cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140a05ff0(arg1, 0)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405dadb0(&arg1[2], 0)

*(arg1 + 0x2c) = data_143dbb1f8.q
int32_t result = data_143dbb200
*(arg1 + 0x34) = result
arg1[4] = *(arg1 + 0x2c)
arg1[5].d = result
arg1[7].b = 0
*(arg1 + 0x3c) = 0x100
return result
