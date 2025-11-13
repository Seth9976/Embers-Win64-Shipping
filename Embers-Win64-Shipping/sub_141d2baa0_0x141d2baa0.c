// 函数: sub_141d2baa0
// 地址: 0x141d2baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
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
    int64_t rdx = sx.q(*(r9 + rbp * 0x30 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(r9 + rdx * 0x30) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
char* rdx_9 = arg3[1]
int128_t* r14_3 = sx.q(rbp.d) * 0x30 + *arg1
*r14_3 = **arg3
r14_3[1].b = *rdx_9
*(r14_3 + 0x14) = *(rdx_9 + 4)
*(r14_3 + 0x1c) = rdx_9[0xc]
*(r14_3 + 0x1d) = rdx_9[0xd]
r14_3[2].q = *(rdx_9 + 0x10)

if (rdx_9 != &r14_3[1])
    *(rdx_9 + 0x10) = 0

*(r14_3 + 0x28) = 0xffffffff
int64_t rbx_2 = *r14_3
int32_t rdi_3 = (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d)
int64_t rbx_4 = *(r14_3 + 8)
int32_t r8_1 = (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d)
int32_t rdi_5 = (rdi_3 - r8_1) ^ r8_1 u>> 0xd
int32_t rcx_17 = (0x9e3779b9 - rdi_5 - r8_1) ^ rdi_5 << 8
int32_t r8_4 = (r8_1 - rcx_17 - rdi_5) ^ rcx_17 u>> 0xd
int32_t rdi_8 = (rdi_5 - rcx_17 - r8_4) ^ r8_4 u>> 0xc
int32_t rcx_20 = (rcx_17 - rdi_8 - r8_4) ^ rdi_8 << 0x10
int32_t r8_7 = (r8_4 - rcx_20 - rdi_8) ^ rcx_20 u>> 5
int32_t rdi_11 = (rdi_8 - rcx_20 - r8_7) ^ r8_7 u>> 3
int32_t rcx_23 = (rcx_20 - rdi_11 - r8_7) ^ rdi_11 << 0xa
sub_141d1c750(arg1, arg2, (r8_7 - rcx_23 - rdi_11) ^ rcx_23 u>> 0xf, r14_3, rbp.d, arg4)
return arg2
