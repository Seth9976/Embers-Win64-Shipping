// 函数: sub_142b92e60
// 地址: 0x142b92e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    for (void* const i = *arg1; i != 0; i = *(i + 8))
        if (*(i + 0x10) == arg2)
            return i

return nullptr
