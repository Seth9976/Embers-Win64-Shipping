// 函数: sub_1423e9f40
// 地址: 0x1423e9f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f43b40(arg1)
void* rdi = arg1 + 0x1f0

if (arg1 == 0)
    rdi = nullptr

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

return sub_142441a10(rax, rdi) __tailcall
