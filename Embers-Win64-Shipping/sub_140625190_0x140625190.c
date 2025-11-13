// 函数: sub_140625190
// 地址: 0x140625190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
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
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_6 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rbp * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x18) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_9 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rbp.b & 0x1f)
int32_t* rdx_10 = *arg1 + sx.q(rbp.d) * 0x18

if (rdx_10 != 0)
    *rdx_10 = *arg2
    *(rdx_10 + 4) = *arg3
    rdx_10[3] = arg3[1].d
    rdx_10[4] = 0xffffffff

int32_t arg_8
sub_14062c020(arg1, &arg_8, *rdx_10, rdx_10, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x18 + 4
