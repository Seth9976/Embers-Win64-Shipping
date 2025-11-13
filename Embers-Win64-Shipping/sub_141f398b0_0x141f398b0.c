// 函数: sub_141f398b0
// 地址: 0x141f398b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x86] == 0)
    return 

void* rcx = arg1[0xca]
uint8_t rax

if (rcx != 0)
    rax = sub_141e07c90(rcx)

if (rcx == 0 || rax == 0)
    void* rcx_1 = arg1[0xcb]
    
    if (rcx_1 != 0 && sub_141e07c90(rcx_1) != 0)
        goto label_141f39903
    
    return 

label_141f39903:

if (sub_141f4ad70(arg1) == 0)
    return 

int64_t rdi

if (*data_143f3b528 == 0)
    rdi.b = 0
else if (sub_140b011d0() == 0)
    rdi.b = 0
else
    void* rdx = *(arg2 + 0x20)
    void* rcx_3 = rdx + 1
    
    if (rdx == 0)
        rcx_3 = arg2 + 8
    
    if (*rcx_3 != *(arg2 + 8) || rdx == 0 || *(rdx + 0x10) == 0)
        rdi.b = 0
    else
        rdi.b = 1

if (sub_141f3e990(arg1, rdi.b ^ 1, 1) != 0)
    return 

arg1[0x140] = arg1[0x86]
arg1[0x13e] = arg1[0xca]
sub_141f39ba0(&arg1[0xd4])
*(arg1 + 0xa54) = 0

if (rdi.b != 0)
    sub_141f395f0(arg1, arg2)
    return 

sub_141f4b550(arg1)
sub_141f43e60(arg1)
sub_141f4b550(arg1)
sub_141f445b0(arg1, &arg1[0x13e])
