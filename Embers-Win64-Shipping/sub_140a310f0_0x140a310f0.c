// 函数: sub_140a310f0
// 地址: 0x140a310f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
int32_t rdi = rax - 1

if (rax == 0)
    rdi = 0

int32_t rbx_1 = arg3 - rdi

if (rbx_1 s<= 0)
    sub_140596d10(arg2, arg1)
    return arg2

int32_t rdx = rbx_1 + 1
int64_t r15 = 0
int64_t var_38 = 0
int32_t r8 = 0
int32_t var_2c = 0

if (rdx s> 0)
    sub_140594770(&var_38)
    r8 = var_2c
    r15 = var_38

int64_t rcx_2
int64_t rdi_2

if (rbx_1 s> 0)
    rdi_2, rcx_2 = __memfill_u16(r15, 0x20, sx.q(rbx_1))
*(r15 + (sx.q(rbx_1) << 1)) = 0
int32_t r14 = arg1[1].d

if (r14 s<= 1)
    *arg2 = r15
    arg2[1].d = rdx
    *(arg2 + 0xc) = r8
    return arg2

int32_t rdi_3 = rdx - 1

if (rdx == 0)
    rdi_3 = 0

int32_t rax_3

if (r14 == 0)
    rax_3 = r14 + 1

if (r14 != 0 || rdi_3 == 0)
    rax_3 = 0

int64_t rbx_2 = *arg1
int32_t rcx_3 = rax_3 + rdi_3
var_38 = 0
int64_t r12 = 0
int64_t rax_4
int32_t rbp_1

if (r14 != 0 || rcx_3 != 0)
    sub_1405a4c70(&var_38, r14 + rcx_3, 0)
    r12 = var_38
    memcpy(r12, rbx_2, r14 * 2)
    rbp_1 = var_2c
    rax_4 = r12
else
    rbp_1 = 0
    var_2c = 0
    rax_4 = 0

if (rdi_3 != 0)
    int64_t rbx_3 = sx.q(r14)
    int32_t rax_5
    rax_5.b = r14 == 0
    r14 = rbx_3.d + rax_5 + rdi_3
    
    if (r14 s> rbp_1)
        sub_140594770(&var_38)
        rbp_1 = var_2c
        r12 = var_38
    
    int64_t rcx_7
    rcx_7.b = rbx_3.d != 0
    int64_t rbx_4 = r12 + ((rbx_3 - rcx_7) << 1)
    int64_t rdi_4 = sx.q(rdi_3) * 2
    UnDecorator::getReferenceType(rbx_4, r15, rdi_4.d)
    rax_4 = r12
    *(rdi_4 + rbx_4) = 0

*arg2 = rax_4
arg2[1].d = r14
*(arg2 + 0xc) = rbp_1

if (r15 != 0)
    sub_140a74f90(r15)

return arg2
