// 函数: sub_141ee0b60
// 地址: 0x141ee0b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[0x11].b

if ((result & 4) != 0)
    sub_140920c10(&data_143a2d6b0, arg1)
    (*(*arg1 + 0x2f8))(arg1)
    result = arg1[0x11].b

if ((result & 2) != 0)
    (*(*arg1 + 0x2e8))(arg1)
    result = arg1[0x11].b

if ((result & 1) == 0)
    return result

jump(*(*arg1 + 0x2c0))
