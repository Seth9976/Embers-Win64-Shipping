// 函数: sub_1426c96f0
// 地址: 0x1426c96f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6da0(arg1, arg2)
*arg1 = &data_143471c70
int64_t var_38 = 0
arg1[5] = &data_14346f1d8
int64_t var_30 = 0
sub_1405947f0(&var_38, 5)
int32_t r15 = var_30:4.d
int32_t r14 = var_30.d + 5
var_30.d = r14

if (r14 s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    r14 = var_30.d

int64_t rdi = var_38
sub_1405a7220(rdi, 5, "Wait", 5, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rdi
    arg1[7].d = r14
    *(arg1 + 0x3c) = r15
else if (rdi != 0)
    sub_140a74f90(rdi)

arg1[0xd].d |= 2
*arg1 = &data_143471fa8
arg1[0xe].d = 0x40a00000
arg1[5] = &data_143472280
__builtin_memset(&arg1[0xf], 0, 0x20)
*(arg1 + 0x9c) &= 0xfffffffe
arg1[0x13].b = 0xff
var_38 = 0
int64_t var_30_1 = 0
sub_1405947f0(&var_38, 0x15)
int32_t r12 = var_30_1:4.d
int32_t r15_1 = var_30_1.d + 0x15
var_30_1.d = r15_1

if (r15_1 s> r12)
    sub_140594770(&var_38)
    r12 = var_30_1:4.d
    r15_1 = var_30_1.d

int64_t rdi_1 = var_38
sub_1405a7220(rdi_1, 0x15, "Wait Blackboard Time", 0x15, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_8 = arg1[6]
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    arg1[6] = rdi_1
    arg1[7].d = r15_1
    *(arg1 + 0x3c) = r12
else if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

void arg_8
sub_1426a9170(&arg1[0xf], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1))
return arg1
