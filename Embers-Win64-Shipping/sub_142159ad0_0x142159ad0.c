// 函数: sub_142159ad0
// 地址: 0x142159ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x34)
int64_t rbp

if (r9 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
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
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(rbp * 0x38 + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r9 - 1
    
    if (r9 != 1)
        *(rdx * 0x38 + r10_1) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t rax_15 = *arg2
int64_t* rdi_4 = sx.q(rbp.d) * 0x38 + *arg1
*rdi_4 = rax_15
*(rdi_4 + 8) = *arg3
*(rdi_4 + 0x18) = arg3[1]
rdi_4[5] = arg3[2].q
rdi_4[6].d = 0xffffffff
int32_t arg_8
sub_142164cc0(arg1, &arg_8, (rax_15 u>> 0x20).d + sub_140b5ead0(rax_15.d), rdi_4, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8
