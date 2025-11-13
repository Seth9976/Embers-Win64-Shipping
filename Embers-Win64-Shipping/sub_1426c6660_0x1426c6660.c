// 函数: sub_1426c6660
// 地址: 0x1426c6660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c5f80(arg1, arg2)
*arg1 = &data_143469048
int64_t var_38 = 0
arg1[5] = &data_143469338
__builtin_memset(&arg1[0x13], 0, 0x20)
int64_t var_30 = 0
sub_1405947f0(&var_38, 0x1b)
int32_t r15 = var_30:4.d
int32_t r14 = var_30.d + 0x1b
var_30.d = r14

if (r14 s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    r14 = var_30.d

int64_t rsi = var_38
sub_1405a7220(rsi, 0x1b, "Blackboard Based Condition", 0x1b, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rsi
    arg1[7].d = r14
    *(arg1 + 0x3c) = r15
else if (rsi != 0)
    sub_140a74f90(rsi)

*(arg1 + 0xb9) = 1
*arg1 = &data_14346a080
var_38 = 0
arg1[5] = &data_143469338
int64_t var_30_1 = 0
sub_1405947f0(&var_38, 0x11)
int32_t r15_1 = var_30_1:4.d
int32_t r14_1 = var_30_1.d + 0x11
var_30_1.d = r14_1

if (r14_1 s> r15_1)
    sub_140594770(&var_38)
    r15_1 = var_30_1:4.d
    r14_1 = var_30_1.d

int64_t rsi_1 = var_38
sub_1405a7220(rsi_1, 0x11, "Conditional Loop", 0x11, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_8 = arg1[6]
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    arg1[6] = rsi_1
    arg1[7].d = r14_1
    *(arg1 + 0x3c) = r15_1
else if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

arg1[0xc].d = (arg1[0xc].d & 0xfffffff8) | 0x10
return arg1
