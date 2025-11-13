// 函数: sub_1422e1320
// 地址: 0x1422e1320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140b0f3a0(&var_28)
int32_t rdi = arg2[1].d
int32_t rax_1 = rax[1].d
uint64_t r14_1

if (rax_1 s> 1)
    int32_t rbx_1 = rdi - 1
    
    if (rdi == 0)
        rbx_1 = 0
    
    int32_t r9_1
    
    if (rax_1 == 0)
        r9_1 = rax_1 + 1
    
    if (rax_1 != 0 || rbx_1 == 0)
        r9_1 = 0
    
    uint64_t rax_2 = *rax
    *rax = 0
    int32_t rcx_3 = *(rax + 0xc)
    uint64_t var_48 = rax_2
    int32_t rax_3 = rax[1].d
    int32_t var_3c_1 = rcx_3
    rax[1] = 0
    int32_t rdx_3 = rax_3 + rbx_1 + r9_1
    
    if (rdx_3 s> rcx_3)
        sub_1405947f0(&var_48, rdx_3)
    
    sub_140a20ba0(&var_48, *arg2, rbx_1)
    rdi = rax_3
    r14_1 = var_48
else
    int64_t rbx = *arg2
    uint64_t var_38 = 0
    
    if (rdi != 0)
        sub_1405a4c70(&var_38, rdi, 0)
        r14_1 = var_38
        memcpy(r14_1, rbx, rdi * 2)
    else
        r14_1 = 0

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rbp = sx.q(*(arg1 + 0x40))
int32_t rax_4 = (rbp + 1).d
*(arg1 + 0x40) = rax_4

if (rax_4 s> *(arg1 + 0x44))
    sub_1405a4f90(arg1 + 0x38)

int64_t* rbx_4 = (rbp << 4) + *(arg1 + 0x38)
*rbx_4 = 0
rbx_4[1].d = rdi

if (rdi != 0)
    sub_1405a4c70(rbx_4, rdi, 0)
    memcpy(*rbx_4, r14_1, rdi * 2)
else
    *(rbx_4 + 0xc) = 0

if (r14_1 != 0)
    sub_140a74f90(r14_1)

return zx.q(rbp.d)
