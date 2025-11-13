// 函数: sub_141d78c60
// 地址: 0x141d78c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x60)

if (rcx == 0)
    return 

sub_141d7f9e0(rcx)
void* rdx_1 = *(arg1 + 0x60)

if (rdx_1 != 0)
    *(arg1 + 0x60) = 0
    return sub_141d75b40(arg1 + 0x60, rdx_1) __tailcall
