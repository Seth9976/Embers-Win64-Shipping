// 函数: sub_142443590
// 地址: 0x142443590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3920(arg1)
void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int64_t* rbx = *(rax + 0x1b0)
(*(*rbx + 0x1e0))(rbx, arg1)
jump(*(*rbx + 0x1d8))
