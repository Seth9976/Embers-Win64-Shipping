// 函数: sub_140ee0ca0
// 地址: 0x140ee0ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x440)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee2140

if (result != -0x10)
    memset(&result[2], 0, 0x430)
    sub_140dddeb0(&result[2])
    result[2] = &data_142edfb48
    __builtin_memset(&result[0x74], 0, 0x20)
    sub_140d93b50(&result[0x78])
    result[0x82].b = 0
    result[0x83] = 0
    result[0x84].d = 0
    result[0x86] = 0
    result[0x87] = 0

return result
