// 函数: sub_140a923d0
// 地址: 0x140a923d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
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
int64_t* rbx_2 = *arg1 + sx.q(rbp.d) * 0x18
int64_t* rdx_10 = arg3[1]
int64_t rcx_9 = **arg3
*rbx_2 = rcx_9
rbx_2[1] = *rdx_10
rbx_2[2].d = 0xffffffff
int32_t rax_17 = sub_140b5ead0(rcx_9.d)

if (sub_1405b6730(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_21 = (arg1[9].d - 1) & (rax_17 + rcx_9:4.d)
    *(rbx_2 + 0x14) = rax_21
    void* rdx_13 = *(r9_1 + 8)
    int64_t r8_2 = sx.q(rax_21)
    void* rax_22 = r9_1
    
    if (rdx_13 != 0)
        rax_22 = rdx_13
    
    rbx_2[2].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
    void* rax_24 = *(r9_1 + 8)
    
    if (rax_24 != 0)
        r9_1 = rax_24
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
