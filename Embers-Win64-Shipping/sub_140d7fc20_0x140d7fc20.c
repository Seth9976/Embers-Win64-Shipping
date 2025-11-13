// 函数: sub_140d7fc20
// 地址: 0x140d7fc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xa4)

if ((result & 2) == 0)
    return ShowWindow(*(arg1 + 0x28), SW_SHOWMAXIMIZED) __tailcall

result = (result & 0xfb) | 8
*(arg1 + 0xa4) = result
return result
