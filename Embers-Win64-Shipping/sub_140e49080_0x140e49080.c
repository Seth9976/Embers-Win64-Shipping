// 函数: sub_140e49080
// 地址: 0x140e49080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x500)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ed9f18

if (result != -0x10)
    memset(&result[2], 0, 0x4f0)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ed8268
    result[0x74] = &data_142ed84b0
    sub_140a96170(&result[0x75])
    result[0x78].b = 0
    result[0x79] = 0
    result[0x7a].d = 0
    __builtin_memset(&result[0x7b], 0, 0x20)
    sub_140d93b50(&result[0x7f])
    result[0x89].b = 0
    result[0x8a] = 0
    result[0x8b].d = 0
    __builtin_memcpy(&result[0x8c], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    __builtin_memset(&result[0x8f], 0, 0x11)
    result[0x92] = 0
    result[0x93].d = 0
    __builtin_memset(&result[0x94], 0, 0x11)
    result[0x97] = 0
    result[0x98].d = 0
    result[0x99] = 0
    result[0x9a].b = 0
    result[0x9b] = 0
    result[0x9c].d = 0
    result[0x9d].w = 0
    result[0x9e] = 0
    result[0x9f].d = 0

return result
