// 函数: sub_1417070a0
// 地址: 0x1417070a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg2 + 0x40)
void* r15 = *(arg1 + 0x40)
*(r15 + 0x10) = *(r14 + 0x10)

if (r15 + 0x18 != r14 + 0x18)
    int64_t rcx = *(r15 + 0x18)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(r15 + 0x18) = *(r14 + 0x18)
    *(r14 + 0x18) = 0
    *(r15 + 0x20) = *(r14 + 0x20)
    *(r15 + 0x24) = *(r14 + 0x24)
    *(r14 + 0x20) = 0

sub_1417072e0(r15 + 0x28, r14 + 0x28)
*(r15 + 0x88) = *(r14 + 0x88)
sub_141706f80(r15 + 0x90, r14 + 0x90)
sub_141707010(r15 + 0xa0, r14 + 0xa0)

if (arg1 + 0x28 != arg2 + 0x28)
    int64_t rcx_4 = *(arg1 + 0x28)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg2 + 0x28) = 0
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg2 + 0x30) = 0

sub_1417502a0(arg1, *(arg2 + 0x18))
*(arg2 + 0x18) = 0
return arg1
