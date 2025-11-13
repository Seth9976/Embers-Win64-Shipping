// 函数: sub_142ab72b0
// 地址: 0x142ab72b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x1c8)

if (rdi != 0)
    sub_142ab73b0(rdi)
    sub_142a47920(rdi)

sub_142a45a20(arg1 + 0xe0)
sub_142ab6b80(arg1 + 0xa8)
int32_t rcx_4 = *(arg1 + 0x88)

if (rcx_4 == 1 || rcx_4 == 2)
    int64_t* rcx_6 = *(arg1 + 0x90)
    
    if (rcx_6 != 0)
        (**rcx_6)(rcx_6, 1)

sub_142ab6080(arg1 + 0x28)
return sub_142ab6080(arg1 + 0x10) __tailcall
