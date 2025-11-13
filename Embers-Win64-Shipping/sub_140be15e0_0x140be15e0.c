// 函数: sub_140be15e0
// 地址: 0x140be15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x80)
void* r8 = arg1

if (r9 != 0)
    r8 = r9

int64_t rdx_1 = sx.q(*(arg1 + 0x88)) - 1

if (*(r8 + (rdx_1 << 2) + 2) == 0x7f)
    sub_140ca8ec0(arg1, r8 + (rdx_1 << 2))
    int64_t rdi_1 = sx.q(*(arg1 + 0x88))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x88) = rax_1
    
    if (rax_1 s> *(arg1 + 0x8c))
        sub_1407c3770(arg1, rdi_1.d)
    
    void* rax_2 = *(arg1 + 0x80)
    void* rcx_1 = arg1
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    *(rcx_1 + (rdi_1 << 2)) = 0
    r9 = *(arg1 + 0x80)

int64_t rax_3 = sx.q(*(arg1 + 0x88))
void* rdi_2 = arg1 + 0x98
void* rcx_2 = arg1

if (r9 != 0)
    rcx_2 = r9

*(rcx_2 + (rax_3 << 2) - 2) += 1
void* rcx_3 = arg1
void* rax_4 = *(arg1 + 0x80)

if (rax_4 != 0)
    rcx_3 = rax_4

int64_t rax_5 = sx.q(*(arg1 + 0x88))
*(rcx_3 + (rax_5 << 2) - 3) |= arg2
int32_t r14 = *(rdi_2 + 0x28)
int32_t rax_6 = r14
int32_t r8_1 = *(rdi_2 + 0x2c)

if (r14 + 1 s> r8_1)
    uint64_t rbp_2 = zx.q((r14 + 0x20) u>> 5)
    uint32_t rax_7
    int32_t rdx_4
    
    if (rbp_2.d u> 8)
        int64_t rdx_5 = 4
        
        if (r8_1 + 0x1f u>= 0x20 || zx.q(rbp_2.d) u> 4)
            rdx_5 = rbp_2 + 0x10 + ((rbp_2 * 3) u>> 3)
        
        int64_t rax_12 = sub_140a846a0(rdx_5 << 2, 0)
        rdx_4 = *(rdi_2 + 0x28)
        rax_7 = (rax_12 u>> 2).d
        
        if (rbp_2.d s> rax_7)
            rax_7 = 0x7fffffff
    else
        rax_7 = 8
        rdx_4 = r14
    
    *(rdi_2 + 0x2c) = rax_7 << 5
    sub_140a84a70(rdi_2, rdx_4)
    rax_6 = *(rdi_2 + 0x28)

*(rdi_2 + 0x28) = rax_6 + 1
void* rax_15 = *(rdi_2 + 0x20)

if (rax_15 != 0)
    rdi_2 = rax_15

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r14)
int64_t rdx_9 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
int32_t rax_20 = 1 << (r14.b & 0x1f)
int32_t rcx_8 = *(rdi_2 + (rdx_9 << 2))
int32_t result

if (arg2 == 0)
    result = not.d(rax_20) & rcx_8
else
    result = rax_20 | rcx_8

*(rdi_2 + (rdx_9 << 2)) = result
*(arg1 + 0x90) |= arg2 ^ 1
return result
