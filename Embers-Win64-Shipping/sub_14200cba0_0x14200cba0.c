// 函数: sub_14200cba0
// 地址: 0x14200cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg2 + 0x11b)

if (rcx s>= 0)
    sub_140bc7700(0xffffffff)
    rcx = *(arg2 + 0x11b)

char result = ((not.b(rcx) ^ rcx) & 0x7f) ^ not.b(rcx)
*(arg2 + 0x11b) = result
return result
