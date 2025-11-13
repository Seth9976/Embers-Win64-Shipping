// 函数: sub_141d2b450
// 地址: 0x141d2b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*arg1)
void* r14

if (rbp.d == 0xffffff)
    int32_t rax_8 = arg1[0x11]
    rbp = zx.q(arg1[0x10])
    
    if (rbp.d == rax_8)
        int64_t rax_10 = sub_140a84c80(*(arg1 + 0x38), zx.q(rax_8 + 4) * 0x28, 8)
        arg1[0x11] += 4
        rbp = zx.q(arg1[0x10])
        *(arg1 + 0x38) = rax_10
    
    int64_t rbx_1 = sx.q(arg1[4])
    r14 = &arg1[2]
    int32_t rax_11 = (rbx_1 + 1).d
    *(r14 + 8) = rax_11
    
    if (rax_11 s> *(r14 + 0xc))
        sub_1405a4cf0(r14)
    
    int64_t rax_12 = *r14
    *(rax_12 + (rbx_1 << 2)) |= 0xffffff
    *(rax_12 + (rbx_1 << 2) + 3) = 1
    void* rbx_2 = &arg1[6]
    int32_t rdi_1 = *(rbx_2 + 0x18)
    sub_1405a4980(rbx_2, rdi_1 + 1)
    *(rbx_2 + 0x18) += 1
    void* rax_13 = *(rbx_2 + 0x10)
    
    if (rax_13 != 0)
        rbx_2 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1)
    int64_t rdx_9 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
    *(rbx_2 + (rdx_9 << 2)) |= 1 << (rdi_1.b & 0x1f)
    arg1[0x10] += 1
else
    void* r8 = &arg1[6]
    r14 = &arg1[2]
    int32_t* r10_1 = *(arg1 + 8) + (rbp << 2)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp.d)
    void* rdx_2 = r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)
    *rdx_2 |= 1 << (rbp.b & 0x1f)
    *arg1 = *r10_1 & 0xffffff
    *r10_1 |= 0xffffff

int64_t rbx_3 = sx.q(rbp.d)
sub_141d2d0b0(*(arg1 + 0x38) + rbx_3 * 0x28, arg3)
arg1[0x12] += 1
char rcx_9

if (rbp.d s>= 0 && rbp.d s< arg1[4])
    rcx_9 = *(*r14 + (rbx_3 << 2) + 3)

int32_t rax_23

if (rbp.d s< 0 || rbp.d s>= arg1[4] || rcx_9 == 0)
    rcx_9 = 0
    rax_23 = 0
else
    rax_23 = ((*arg2 ^ rbp.d) & 0xffffff) ^ *arg2

*arg2 = rax_23
*(arg2 + 3) = rcx_9
return arg2
