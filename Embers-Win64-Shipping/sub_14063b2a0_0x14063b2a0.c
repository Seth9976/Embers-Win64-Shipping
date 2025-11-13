// 函数: sub_14063b2a0
// 地址: 0x14063b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4
int32_t r14 = arg2[1].d
int32_t r15 = arg5[1].d
int64_t var_48
int32_t var_3c
int32_t rax
int64_t r12

if (r15 s> 1)
    int64_t rbx_1 = *arg5
    int32_t rdi_1 = r14 - 1
    int64_t var_78 = 0
    
    if (r14 == 0)
        rdi_1 = 0
    
    sub_1405a4c70(&var_78, rdi_1 + r15, 0)
    memcpy(var_78, rbx_1, r15 * 2)
    sub_140a20ba0(&var_78, *arg2, rdi_1)
    int32_t var_6c
    rax = var_6c
    r12 = var_78
    r14 = r15
    rdi = arg4
    int32_t var_70_1
    var_70_1.q = 0
    var_78 = 0
else
    int64_t rbx = *arg2
    r12 = 0
    var_48 = 0
    
    if (r14 != 0)
        sub_1405a4c70(&var_48, r14, 0)
        r12 = var_48
        memcpy(r12, rbx, r14 * 2)
        rax = var_3c
    else
        rax = 0

int32_t rbx_2 = rdi[1].d
int32_t rcx_6 = 1
int32_t rax_1
int64_t r14_1

if (r14 s> 1)
    int32_t rdi_3 = rbx_2 - 1
    
    if (rbx_2 == 0)
        rdi_3 = 0
    
    if (r14 != 0 || rdi_3 == 0)
        rcx_6 = 0
    
    int64_t var_68 = r12
    int32_t rdx_9 = rdi_3 + rcx_6 + r14
    r12 = 0
    
    if (rdx_9 s> rax)
        sub_1405947f0(&var_68, rdx_9)
    
    sub_140a20ba0(&var_68, *arg4, rdi_3)
    rax_1 = rax
    r14_1 = var_68
    rbx_2 = r14
    int32_t var_60_1
    var_60_1.q = 0
    var_68 = 0
    rcx_6 = 1
else
    int64_t rdi_2 = *rdi
    r14_1 = 0
    var_48 = 0
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_48, rbx_2, 0)
        r14_1 = var_48
        memcpy(r14_1, rdi_2, rbx_2 * 2)
        rax_1 = var_3c
        rcx_6 = 1
    else
        rax_1 = 0

int32_t rdi_4 = arg6[1].d
int32_t rcx_11
int64_t rbx_3
int64_t r15_2

if (rbx_2 s> 1)
    int32_t r15_3 = rdi_4 - 1
    
    if (rdi_4 == 0)
        r15_3 = 0
    
    if (rbx_2 != 0 || r15_3 == 0)
        rcx_6 = 0
    
    int64_t var_58 = r14_1
    int32_t rdx_16 = rcx_6 + r15_3 + rbx_2
    r14_1 = 0
    
    if (rdx_16 s> rax_1)
        sub_1405947f0(&var_58, rdx_16)
    
    sub_140a20ba0(&var_58, *arg6, r15_3)
    rcx_11 = rax_1
    rbx_3 = var_58
    rdi_4 = rbx_2
    int32_t var_50_1
    var_50_1.q = 0
    var_58 = 0
    r15_2 = rbx_3
else
    int64_t r15_1 = *arg6
    rbx_3 = 0
    var_48 = 0
    
    if (rdi_4 != 0)
        sub_1405a4c70(&var_48, rdi_4, 0)
        rbx_3 = var_48
        memcpy(rbx_3, r15_1, rdi_4 * 2)
        rcx_11 = var_3c
        r15_2 = rbx_3
    else
        rcx_11 = 0
        r15_2 = 0

int64_t* rbx_4

if (rdi_4 s> 1)
    int32_t rax_3 = arg3[1].d
    int32_t r15_4 = rax_3 - 1
    
    if (rax_3 == 0)
        r15_4 = 0
    
    int32_t rax_4
    
    if (rdi_4 == 0)
        rax_4 = rdi_4 + 1
    
    if (rdi_4 != 0 || r15_4 == 0)
        rax_4 = 0
    
    var_48 = rbx_3
    int32_t rdx_21 = rax_4 + r15_4 + rdi_4
    
    if (rdx_21 s> rcx_11)
        sub_1405947f0(&var_48, rdx_21)
    
    rbx_4 = arg3
    sub_140a20ba0(&var_48, *rbx_4, r15_4)
    *arg1 = var_48
    arg1[1].d = rdi_4
    *(arg1 + 0xc) = rcx_11
else
    rbx_4 = arg3
    sub_140596d10(arg1, rbx_4)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

if (r12 != 0)
    sub_140a74f90(r12)

int64_t rcx_22 = *arg2

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = *rbx_4

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = *arg4

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_26 = *arg5

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = *arg6

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return arg1
