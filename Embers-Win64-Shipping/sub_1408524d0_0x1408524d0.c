// 函数: sub_1408524d0
// 地址: 0x1408524d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)

if (rcx == 0)
    return 0

void* rax = *(rcx + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(rcx)

return sub_140865dd0(rax) __tailcall
