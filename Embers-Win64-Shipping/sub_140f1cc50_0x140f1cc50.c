// 函数: sub_140f1cc50
// 地址: 0x140f1cc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x380)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee74a8

if (result != -0x10)
    memset(&result[2], 0, 0x370)
    sub_140dde0c0(&result[2])
    result[7].b &= 0xfb
    result[2] = &data_142ee3938
    sub_140d91ed0(&result[0x57])
    __FrameHandler4::HandlerMap::iterator::iterator(&result[0x63], 0, 0)
    __builtin_memcpy(&result[0x68], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    __builtin_memset(&result[0x6b], 0, 0x11)
    result[0x6e] = 0
    result[0x6f].d = 0

return result
