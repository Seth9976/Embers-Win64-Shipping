// 函数: sub_1417a5f10
// 地址: 0x1417a5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *arg3
*arg2 &= 0xfff8
int64_t* r14 = nullptr
*arg2 |= arg4 & 7
void var_28

if (&var_28 != arg3)
    r14 = r10
    *arg3 = 0

char rcx = r10[1].b
int64_t* rax_1 = nullptr

if (rcx == 1)
    rax_1 = r10

int32_t rax_2

if (rax_1 == 0)
    if (rcx == 0)
        rax_1 = r10
    
    if (rax_1 == 0)
        if (rcx == 2)
            rax_1 = r10
        
        int32_t rax_3 = (neg.q(rax_1)).d
        rax_2 = sbb.d(rax_3, rax_3, rax_1 != 0) & 2
    else
        rax_2 = 1
else
    rax_2 = 0

int64_t* arg_8
int16_t rbx

switch (rax_2)
    case 0
        arg_8 = r10
        rbx = sub_1417a5e10(arg1 + 0x118, &arg_8)
    case 1
        arg_8 = r10
        rbx = sub_1417a5e10(arg1 + 0x138, &arg_8)
    case 2
        arg_8 = r10
        rbx = sub_1417a5e10(arg1 + 0x158, &arg_8)

void* rbp_3 = (zx.q(arg4) << 5) + arg1
*(arg1 + 0x10) |= (1 << (zx.d(arg4) u% 0x20)).b
uint64_t rdi_1

if (*(rbp_3 + 0x30) == 0)
    rdi_1 = sx.q(*(rbp_3 + 0x20))
    int32_t rax_13 = (rdi_1 + 1).d
    *(rbp_3 + 0x20) = rax_13
    
    if (rax_13 s> *(rbp_3 + 0x24))
        sub_1405a4f90(rbp_3 + 0x18)
    
    int64_t** rax_16 = (rdi_1 << 4) + *(rbp_3 + 0x18)
    *rax_16 = r14
    r14 = nullptr
    rax_16[1].w = rbx
else
    int64_t r8 = sx.q(*(rbp_3 + 0x30))
    rdi_1 = zx.q(*(*(rbp_3 + 0x28) + (r8 << 1) - 2))
    *(rbp_3 + 0x30) = (r8 - 1).d
    sub_1405a50a0(rbp_3 + 0x28)
    int64_t* r15_3 = (zx.q(rdi_1.d) << 4) + *(rbp_3 + 0x18)
    
    if (r15_3 != &var_28)
        int64_t* rcx_9 = *r15_3
        *r15_3 = r14
        r14 = nullptr
        
        if (rcx_9 != 0)
            (**rcx_9)(rcx_9, 1)
    
    r15_3[1].w = rbx

*arg2 &= 7
rdi_1.w <<= 3
*arg2 |= rdi_1.w

if (r14 != 0)
    (**r14)(r14, 1)

return arg2
