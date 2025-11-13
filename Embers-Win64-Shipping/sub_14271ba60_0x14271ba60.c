// 函数: sub_14271ba60
// 地址: 0x14271ba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) == 0)
    return 

uint64_t rax = *(arg1 + 0x68)

if (rax == 0 || *(rax + 0x2f8) == 0 || *(rax + 0x250) == 0)
    return 

sub_14271b960(arg1)
void* rdx_1 = *(arg1 + 0x68)
sub_1426d5470(arg1 + 0x70, *(rdx_1 + 0x250), *(rdx_1 + 0x2f8), arg1 + 0xb8)
