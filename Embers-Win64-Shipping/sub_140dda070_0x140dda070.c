// 函数: sub_140dda070
// 地址: 0x140dda070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memcpy(arg1, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 0x11)
*(arg1 + 0x18) = *arg2
void* rax_1 = arg2[1]
*(arg1 + 0x20) = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg1
