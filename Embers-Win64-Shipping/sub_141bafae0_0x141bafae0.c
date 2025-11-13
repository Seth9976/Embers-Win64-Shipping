// 函数: sub_141bafae0
// 地址: 0x141bafae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 3)
int32_t r13 = var_50:4.d
int32_t rdi = var_50.d + 3
var_50.d = rdi

if (rdi s> r13)
    sub_140594770(&var_58)
    r13 = var_50:4.d
    rdi = var_50.d

int64_t rsi = var_58
sub_1405a7220(rsi, 3, " )", 3, 0x3f)
int64_t arg_8 = *(*(arg1 + 0x10) + 0x18)
int64_t var_38
sub_140b63b70(&arg_8, &var_38)
var_58 = 0
int64_t var_50_1 = 0
sub_1405947f0(&var_58, 0x10)
int32_t r14_1 = var_50_1.d + 0x10
var_50_1.d = r14_1

if (r14_1 s> 0)
    sub_140594770(&var_58)
    r14_1 = var_50_1.d

int64_t r12 = var_58
sub_1405a7220(r12, 0x10, "SObjectWidget( ", 0x10, 0x3f)
int32_t rdx_3 = 1
int32_t rax_1
int64_t rcx_8
int32_t r8
int32_t var_30

if (r14_1 s> 1)
    int32_t r15_2
    
    if (var_30 == 0)
        r15_2 = 0
    else
        r15_2 = var_30 - 1
    
    int32_t rax_2
    
    if (r14_1 != 0 || r15_2 == 0)
        rax_2 = 0
    else
        rax_2 = 1
    
    int32_t rcx_9 = var_50_1:4.d
    int64_t var_48 = r12
    int32_t rdx_5 = rax_2 + r14_1 + r15_2
    r12 = 0
    
    if (rdx_5 s> rcx_9)
        sub_1405947f0(&var_48, rdx_5)
    
    sub_140a20ba0(&var_48, var_38, r15_2)
    rcx_8 = var_48
    rax_1 = r14_1
    r8 = rcx_9
    var_48 = 0
    rdx_3 = 1
    int32_t var_40_1
    var_40_1.q = 0
else
    rcx_8 = var_38
    rax_1 = var_30
    int32_t var_2c
    r8 = var_2c
    var_38 = 0
    var_30.q = 0

if (rax_1 s> 1)
    int32_t rdi_1
    
    if (rdi == 0)
        rdi_1 = 0
    else
        rdi_1 = rdi - 1
    
    if (rax_1 != 0 || rdi_1 == 0)
        rdx_3 = 0
    
    var_58 = rcx_8
    int32_t rdx_8 = rdx_3 + rax_1 + rdi_1
    var_50_1.d = rax_1
    var_50_1:4.d = r8
    
    if (rdx_8 s> r8)
        sub_1405947f0(&var_58, rdx_8)
    
    sub_140a20ba0(&var_58, rsi, rdi_1)
    *arg2 = var_58
    arg2[1].d = var_50_1.d
    *(arg2 + 0xc) = var_50_1:4.d
else
    *arg2 = rsi
    rsi = 0
    arg2[1].d = rdi
    *(arg2 + 0xc) = r13
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if (r12 != 0)
    sub_140a74f90(r12)

int64_t rcx_15 = var_38

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
