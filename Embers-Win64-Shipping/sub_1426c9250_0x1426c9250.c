// 函数: sub_1426c9250
// 地址: 0x1426c9250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c7f90(arg1, arg2)
void (* var_38)(void* arg1, int64_t* arg2) = nullptr
*arg1 = &data_1434715b8
int64_t var_30 = 0
arg1[5] = &data_143471890
__builtin_memset(&arg1[0x14], 0, 0x20)
__builtin_memset(&arg1[0x19], 0, 0x20)
*(arg1 + 0xec) &= 0xfffffffe
arg1[0x1d].b = 0xff
__builtin_memset(&arg1[0x1f], 0, 0x38)
*(arg1 + 0x134) &= 0xfffffffe
arg1[0x26].b = 0xff
arg1[0x27].b = 0
*(arg1 + 0x13c) &= 0xfffffffc
arg1[0x28] = 0
arg1[0x29].d = 0
sub_1405947f0(&var_38, 0xe)
int32_t r15 = var_30:4.d
int32_t r14 = var_30.d + 0xe
var_30.d = r14

if (r14 s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    r14 = var_30.d

void (* rbp)(void* arg1, int64_t* arg2) = var_38
sub_1405a7220(rbp, 0xe, "Run EQS Query", 0xe, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rbp
    arg1[7].d = r14
    *(arg1 + 0x3c) = r15
else if (rbp != 0)
    sub_140a74f90(rbp)

var_30.d = 0
var_38 = sub_1426e5d60
int64_t* rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_143474f80
    sub_140d3a3a0(&rax[1], arg1)
    *(rax + 0x10) = var_38.o
    rax[5] = sub_140a387b0()
    *rax = &data_143474fd8

if (&var_38 != &arg1[0x28])
    if (rax != 0)
        (*(*rax + 0x40))(rax, &arg1[0x28])
    else if (arg1[0x29].d != 0)
        int64_t* rcx_7 = arg1[0x28]
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = arg1[0x28]
            
            if (rcx_8 != 0)
                arg1[0x28] = sub_140a84c80(rcx_8, 0, 0)
            
            arg1[0x29].d = 0

if (rax != 0)
    (*(*rax + 0x38))(rax, 0)
    int64_t rax_6 = sub_140a84c80(rax, 0, 0)
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)

void* rax_7 = sub_142737760()
void arg_8
sub_1426a9410(&arg1[0x19], arg1, *sub_140b58260(&arg_8, u"EQSQueryBlackboardKey", 1), rax_7)
return arg1
