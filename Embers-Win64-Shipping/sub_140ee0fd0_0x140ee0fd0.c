// 函数: sub_140ee0fd0
// 地址: 0x140ee0fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x460)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee2150

if (result != -0x10)
    memset(&result[2], 0, 0x450)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ee0618
    sub_140d91ed0(&result[0x74])
    result[0x86] = 0
    result[0x87].d = 0
    *(result + 0x43c) = 3
    result[0x88] = 0
    result[0x89] = 0

return result
