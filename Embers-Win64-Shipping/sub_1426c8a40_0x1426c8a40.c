// 函数: sub_1426c8a40
// 地址: 0x1426c8a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6da0(arg1, arg2)
*arg1 = &data_143470208
void (* var_28)(void* arg1) = nullptr
arg1[5] = &data_1434704e0
arg1[0x13] = 0
arg1[0x14].d = 0
arg1[0x15] = 0
int64_t var_20 = 0
sub_1405947f0(&var_28, 0xf)
int32_t r15 = var_20:4.d
int32_t r14 = var_20.d + 0xf
var_20.d = r14

if (r14 s> r15)
    sub_140594770(&var_28)
    r15 = var_20:4.d
    r14 = var_20.d

void (* rbp)(void* arg1) = var_28
sub_1405a7220(rbp, 0xf, "Play Animation", 0xf, 0x3f)

if (&arg1[6] != &var_28)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rbp
    arg1[7].d = r14
    *(arg1 + 0x3c) = r15
else if (rbp != 0)
    sub_140a74f90(rbp)

*(arg1 + 0x55) |= 4
arg1[0xf].d &= 0xfffffffc
var_28 = sub_1426e4290
var_20.d = 0
int64_t* rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_142e33ea8
    sub_140d3a3a0(&rax[1], arg1)
    *(rax + 0x10) = var_28.o
    rax[5] = sub_140a387b0()
    *rax = &data_142e33f00

if (&var_28 != &arg1[0x13])
    if (rax != 0)
        (*(*rax + 0x40))(rax, &arg1[0x13])
    else if (arg1[0x14].d != 0)
        int64_t* rcx_7 = arg1[0x13]
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = arg1[0x13]
            
            if (rcx_8 != 0)
                arg1[0x13] = sub_140a84c80(rcx_8, 0, 0)
            
            arg1[0x14].d = 0

if (rax != 0)
    (*(*rax + 0x38))(rax, 0)
    int64_t rax_6 = sub_140a84c80(rax, 0, 0)
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)

arg1[0x12].d = 0
return arg1
