// 函数: sub_14063b630
// 地址: 0x14063b630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int64_t* r13 = arg2
int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 2)
int32_t r12 = var_50:4.d
int32_t rbx = var_50.d + 2
var_50.d = rbx

if (rbx s> r12)
    sub_140594770(&var_58)
    r12 = var_50:4.d
    rbx = var_50.d

int64_t rsi = var_58
sub_1405a7220(rsi, 2, &(*U""\tv 0")[3], 2, 0x3f)
int32_t rcx_3 = r13[1].d
int64_t r15_1

if (rcx_3 s> 1)
    int32_t rax_1
    
    if (rbx == 0)
        rax_1 = 0
    else
        r15 = rbx - 1
        rax_1 = r15
    
    int64_t rbx_1 = *r13
    var_50.d = rcx_3
    var_58 = 0
    sub_1405a4c70(&var_58, rcx_3 + rax_1, 0)
    memcpy(var_58, rbx_1, rcx_3 * 2)
    sub_140a20ba0(&var_58, rsi, r15)
    r15_1 = var_58
    rbx = var_50.d
    r12 = var_50:4.d
    var_58 = 0
    int64_t var_50_1 = 0
else
    r15_1 = rsi
    rsi = 0

if (rbx s> 1)
    int32_t rax_2 = arg3[1].d
    int64_t var_48 = r15_1
    int32_t r13_1 = rax_2 - 1
    
    if (rax_2 == 0)
        r13_1 = 0
    
    int32_t rdx_5 = rbx + r13_1
    
    if (rdx_5 s> r12)
        sub_1405947f0(&var_48, rdx_5)
    
    sub_140a20ba0(&var_48, *arg3, r13_1)
    r13 = arg2
    *arg1 = var_48
    arg1[1].d = rbx
    *(arg1 + 0xc) = r12
else
    sub_140596d10(arg1, arg3)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t rcx_12 = *r13

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = *arg3

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg1
