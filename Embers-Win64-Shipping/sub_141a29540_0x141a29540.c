// 函数: sub_141a29540
// 地址: 0x141a29540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
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
    int64_t r8 = sx.q(*(rbp * 0x60 + r9 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x60 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int128_t* rdx_9 = arg3[1]
int64_t* r12_3 = sx.q(rbp.d) * 0x60 + *arg1
int64_t rcx_10 = **arg3
*r12_3 = rcx_10
*(r12_3 + 0x10) = *rdx_9
*(r12_3 + 0x20) = rdx_9[1]
*(r12_3 + 0x30) = rdx_9[2]
*(r12_3 + 0x40) = rdx_9[3]
r12_3[0xa].d = 0xffffffff
int32_t rbx_2 = *(r12_3 + 4)
int32_t r13_3 = (rcx_10.d - rbx_2) ^ rbx_2 u>> 0xd
int32_t rdi_5 = (0x9e3779b9 - r13_3 - rbx_2) ^ r13_3 << 8
int32_t rbx_5 = (rbx_2 - rdi_5 - r13_3) ^ rdi_5 u>> 0xd
int32_t r13_6 = (r13_3 - rdi_5 - rbx_5) ^ rbx_5 u>> 0xc
int32_t rdi_8 = (rdi_5 - r13_6 - rbx_5) ^ r13_6 << 0x10
int32_t rbx_8 = (rbx_5 - rdi_8 - r13_6) ^ rdi_8 u>> 5
int32_t r13_9 = (r13_6 - rdi_8 - rbx_8) ^ rbx_8 u>> 3
int32_t rdi_11 = (rdi_8 - r13_9 - rbx_8) ^ r13_9 << 0xa

if (sub_141a40900(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rbx_12 = ((rbx_8 - rdi_11 - r13_9) ^ rdi_11 u>> 0xf) & (arg1[9].d - 1)
    void* rax_35 = r9_1
    *(r12_3 + 0x54) = rbx_12
    void* rdx_12 = *(r9_1 + 8)
    int64_t r8_2 = sx.q(rbx_12)
    
    if (rdx_12 != 0)
        rax_35 = rdx_12
    
    r12_3[0xa].d = *(rax_35 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
    void* rax_37 = *(r9_1 + 8)
    
    if (rax_37 != 0)
        r9_1 = rax_37
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
