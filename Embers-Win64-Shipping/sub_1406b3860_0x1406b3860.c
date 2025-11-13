// 函数: sub_1406b3860
// 地址: 0x1406b3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    void* rbx_1 = &arg1[2]
    int32_t rdi_1 = *(rbx_1 + 0x18)
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
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rbp * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + r8 * 0x18) = 0xffffffff

void* r8_1 = &arg1[2]
void* rax_9 = *(r8_1 + 0x10)

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_9 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rbp.b & 0x1f)
int64_t* rbx_2 = *arg1 + sx.q(rbp.d) * 0x18

if (rbx_2 == 0)
    rbx_2 = nullptr
else
    int64_t* arg_8 = rbx_2
    *rbx_2 = 0
    int32_t r14_1 = arg3[1].d
    int64_t r15_1 = *arg3
    rbx_2[1].d = r14_1
    
    if (r14_1 != 0)
        sub_1405a4c70(rbx_2, r14_1, 0)
        memcpy(*rbx_2, r15_1, r14_1 * 2)
    else
        *(rbx_2 + 0xc) = 0
    
    rbx_2[2].d = 0xffffffff

int32_t rax_16 = rbx_2[1].d
int16_t* rdx_12

if (rax_16 == 0)
    rdx_12 = &data_142d40450
else
    rdx_12 = *rbx_2

int32_t rcx_11 = rax_16 - 1

if (rax_16 == 0)
    rcx_11 = 0

sub_14059a6d0(arg1, arg2, sub_1405969c0(rcx_11, rdx_12), rbx_2, rbp.d, arg4)
return arg2
