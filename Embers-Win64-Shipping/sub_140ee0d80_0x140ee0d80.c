// 函数: sub_140ee0d80
// 地址: 0x140ee0d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x430)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee2180

if (result != -0x10)
    memset(&result[2], 0, 0x420)
    sub_140ee2fa0(&result[2])
    result[2] = &data_142ee1c88
    result[0x57] = &data_142ede028
    result[0x81] = &data_142ee1ee8
    __builtin_memset(&result[0x82], 0, 0x20)

return result
