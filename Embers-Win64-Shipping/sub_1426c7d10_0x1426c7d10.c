// 函数: sub_1426c7d10
// 地址: 0x1426c7d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c7870(arg1, arg2)
*arg1 = &data_14346dc28
void (* var_38)(void* arg1, int64_t* arg2) = nullptr
arg1[5] = &data_14346df00
__builtin_memset(&arg1[0x13], 0, 0x38)
*(arg1 + 0xd4) &= 0xfffffffe
arg1[0x1a].b = 0xff
arg1[0x1b].b = 0
*(arg1 + 0xdc) &= 0xfffffffc
arg1[0x1c] = 0
arg1[0x1d].d = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 0x21)
int32_t r15 = var_30:4.d
int32_t rbp = var_30.d + 0x21
var_30.d = rbp

if (rbp s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    rbp = var_30.d

void (* rdi)(void* arg1, int64_t* arg2) = var_38
sub_1405a7220(rdi, 0x21, "Run EQS query on a regular basis", 0x21, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rdi
    arg1[7].d = rbp
    *(arg1 + 0x3c) = r15
else if (rdi != 0)
    sub_140a74f90(rdi)

arg1[0xb].b &= 0xfe
arg1[0xb].b |= 2
void* rax = sub_142452380()
void arg_8
sub_1426a9410(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1), rax)
sub_1426a98a0(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1))
var_30.d = 0
var_38 = sub_1426e5ba0
int64_t* rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_143474f80
    sub_140d3a3a0(&rax_3[1], arg1)
    *(rax_3 + 0x10) = var_38.o
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_143474fd8

if (&var_38 != &arg1[0x1c])
    if (rax_3 != 0)
        (*(*rax_3 + 0x40))(rax_3, &arg1[0x1c])
    else if (arg1[0x1d].d != 0)
        int64_t* rcx_11 = arg1[0x1c]
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x38))(rcx_11, 0)
            int64_t rcx_12 = arg1[0x1c]
            
            if (rcx_12 != 0)
                arg1[0x1c] = sub_140a84c80(rcx_12, 0, 0)
            
            arg1[0x1d].d = 0

if (rax_3 != 0)
    (*(*rax_3 + 0x38))(rax_3, 0)
    int64_t rax_9 = sub_140a84c80(rax_3, 0, 0)
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)

return arg1
