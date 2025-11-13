// 函数: sub_140a02f00
// 地址: 0x140a02f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x440)

if (result == 0)
    result = sub_140a007b0(arg1)
    *(arg1 + 0x440) = result

return result
