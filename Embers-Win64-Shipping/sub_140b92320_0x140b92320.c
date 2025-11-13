// 函数: sub_140b92320
// 地址: 0x140b92320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t* r10 = arg3
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    r10 = arg3
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rbp * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r9 + r8 * 0x18) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* r13 = *arg1 + sx.q(rbp.d) * 0x18
int64_t* rdx_10 = r10[1]
int64_t rcx_9 = **r10
*r13 = rcx_9
uint32_t r12_2 = (rcx_9 u>> 4).d
r13[1] = *rdx_10
int32_t rdi_4 = (0x9e3779b9 - r12_2) ^ r12_2 << 8
r13[2].d = 0xffffffff
int32_t rbx_4 = neg.d(r12_2 + rdi_4) ^ rdi_4 u>> 0xd
int32_t r12_5 = (r12_2 - rbx_4 - rdi_4) ^ rbx_4 u>> 0xc
int32_t rdi_7 = (rdi_4 - r12_5 - rbx_4) ^ r12_5 << 0x10
int32_t rbx_7 = (rbx_4 - r12_5 - rdi_7) ^ rdi_7 u>> 5
int32_t r12_8 = (r12_5 - rbx_7 - rdi_7) ^ rbx_7 u>> 3
int32_t rdi_10 = (rdi_7 - r12_8 - rbx_7) ^ r12_8 << 0xa

if (sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r8_2 = &arg1[7]
    int32_t rbx_11 = ((rbx_7 - r12_8 - rdi_10) ^ rdi_10 u>> 0xf) & (arg1[9].d - 1)
    *(r13 + 0x14) = rbx_11
    void* rcx_11 = *(r8_2 + 8)
    void* rax_35 = r8_2
    
    if (rcx_11 != 0)
        rax_35 = rcx_11
    
    r13[2].d = *(rax_35 + (((sx.q(arg1[9].d) - 1) & sx.q(rbx_11)) << 2))
    void* rcx_12 = *(r8_2 + 8)
    
    if (rcx_12 != 0)
        r8_2 = rcx_12
    
    *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rbx_11)) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
