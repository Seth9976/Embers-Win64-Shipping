// 函数: sub_1417071b0
// 地址: 0x1417071b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_68
void*** rax = sub_141702960(&var_68, arg2)
void* r15 = *(arg1 + 0x40)
void* r14 = rax[8]
*(r15 + 0x10) = *(r14 + 0x10)

if (r15 + 0x18 != r14 + 0x18)
    int64_t rcx_1 = *(r15 + 0x18)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(r15 + 0x18) = *(r14 + 0x18)
    *(r14 + 0x18) = 0
    *(r15 + 0x20) = *(r14 + 0x20)
    *(r15 + 0x24) = *(r14 + 0x24)
    *(r14 + 0x20) = 0

sub_1417072e0(r15 + 0x28, r14 + 0x28)
*(r15 + 0x88) = *(r14 + 0x88)
sub_141706f80(r15 + 0x90, r14 + 0x90)
sub_141707010(r15 + 0xa0, r14 + 0xa0)

if (arg1 + 0x28 != &rax[5])
    int64_t rcx_5 = *(arg1 + 0x28)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(arg1 + 0x28) = rax[5]
    rax[5] = 0
    *(arg1 + 0x30) = rax[6].d
    *(arg1 + 0x34) = *(rax + 0x34)
    rax[6] = 0

sub_1417502a0(arg1, rax[3].d)
rax[3].d = 0
sub_1417059c0(&var_68)
return arg1
