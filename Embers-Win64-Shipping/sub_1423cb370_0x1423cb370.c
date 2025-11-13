// 函数: sub_1423cb370
// 地址: 0x1423cb370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = *(arg1 + 0x20)

if (result != 0 && (*result & 1) != 0)
    sub_1423c0390()
    sub_1423c7640(*(*(arg1 + 0x20) + 0x28), arg1)
    result = *(arg1 + 0x20)
    *result &= 0xfe

return result
