// 函数: sub_1406e3e30
// 地址: 0x1406e3e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 2)
int32_t rsi = var_30.d + 2
var_30.d = rsi

if (rsi s> 0)
    sub_140594770(&var_38)
    rsi = var_30.d

int64_t r14 = var_38
sub_1405a7220(r14, 2, U")\n", 2, 0x3f)
int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 2)
int32_t rdi = var_50.d + 2
var_50.d = rdi

if (rdi s> 0)
    sub_140594770(&var_58)
    rdi = var_50.d

int64_t r12 = var_58
sub_1405a7220(r12, 2, U"(", 2, 0x3f)
int32_t rax_1
int64_t rcx_6
int32_t rdi_1

if (rdi s> 1)
    int32_t rax_2 = arg2[1].d
    int32_t r15_1 = rax_2 - 1
    
    if (rax_2 == 0)
        r15_1 = 0
    
    int32_t rax_3
    
    if (rdi == 0)
        rax_3 = 1
    
    if (rdi != 0 || r15_1 == 0)
        rax_3 = 0
    
    int64_t var_48 = r12
    int32_t rdx_5 = rax_3 + rdi + r15_1
    r12 = 0
    int32_t rcx_9 = var_50:4.d
    
    if (rdx_5 s> rcx_9)
        sub_1405947f0(&var_48, rdx_5)
    
    sub_140a20ba0(&var_48, *arg2, r15_1)
    r15 = var_48
    rdi_1 = rdi
    rax_1 = rcx_9
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0
    rcx_6 = r15
else
    rdi_1 = arg2[1].d
    int64_t rax = *arg2
    var_58 = 0
    var_50.d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_58, rdi_1, 0)
        r15 = var_58
        memcpy(r15, rax, rdi_1 * 2)
        rax_1 = var_50:4.d
        rdi_1 = var_50.d
        rcx_6 = r15
    else
        rax_1 = 0
        rcx_6 = 0

if (rdi_1 s> 1)
    int32_t rsi_1
    
    if (rsi == 0)
        rsi_1 = 0
    else
        rsi_1 = rsi - 1
    
    int32_t rcx_12
    
    if (rdi_1 == 0)
        rcx_12 = rdi_1 + 1
    
    if (rdi_1 != 0 || rsi_1 == 0)
        rcx_12 = 0
    
    var_38 = r15
    int32_t rdx_8 = rcx_12 + rdi_1 + rsi_1
    var_30.d = rdi_1
    var_30:4.d = rax_1
    
    if (rdx_8 s> rax_1)
        sub_1405947f0(&var_38, rdx_8)
    
    sub_140a20ba0(&var_38, r14, rsi_1)
    *arg1 = var_38
    arg1[1].d = var_30.d
    *(arg1 + 0xc) = var_30:4.d
else
    *arg1 = r14
    r14 = 0
    arg1[1].d = rsi
    *(arg1 + 0xc) = var_30:4.d
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if (r12 != 0)
    sub_140a74f90(r12)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t rcx_17 = *arg2

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg1
