// 函数: sub_140d35a40
// 地址: 0x140d35a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = *(arg2 + 0x20)
void* rcx = *rax
*(arg2 + 0x20) = &rax[1]

if ((*(rcx + 0xb0) & 0x400) == 0)
    return sub_140d152d0(arg1, rcx, arg2, arg3, sub_140d276b0)

return sub_140be1ca0(rcx, arg1, arg2, arg3) __tailcall
