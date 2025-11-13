// 函数: sub_140d7e070
// 地址: 0x140d7e070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xa4)

if ((result & 1) == 0)
    return result

*(arg1 + 0xa4) = result & 0xfe
return ShowWindow(*(arg1 + 0x28), SW_HIDE) __tailcall
