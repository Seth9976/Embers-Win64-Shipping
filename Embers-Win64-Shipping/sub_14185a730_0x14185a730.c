// 函数: sub_14185a730
// 地址: 0x14185a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407755b0(arg1)
    
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
    int64_t rdx = sx.q(*(rbp * 0x58 + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(rdx * 0x58 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rdx_9 = arg3[1]
int64_t* r9_2 = sx.q(rbp.d) * 0x58 + *arg1
*r9_2 = **arg3
r9_2[1] = 0
r9_2[1] = *rdx_9
*rdx_9 = 0
r9_2[2].d = rdx_9[1].d
*(r9_2 + 0x14) = *(rdx_9 + 0xc)
rdx_9[1] = 0
r9_2[3] = rdx_9[2]
r9_2[4] = rdx_9[3]
*(r9_2 + 0x28) = *(rdx_9 + 0x20)
r9_2[7].d = rdx_9[6].d
*(r9_2 + 0x3c) = *(rdx_9 + 0x34)
r9_2[8] = 0
r9_2[8] = rdx_9[7]
rdx_9[7] = 0
r9_2[9].d = rdx_9[8].d
*(r9_2 + 0x4c) = *(rdx_9 + 0x44)
rdx_9[8] = 0
r9_2[0xa].d = 0xffffffff
int64_t rcx_8 = *r9_2
sub_14187f2c0(arg1, arg2, (rcx_8 u>> 0x20).d * 0x17 + rcx_8.d, r9_2, rbp.d, arg4)
return arg2
