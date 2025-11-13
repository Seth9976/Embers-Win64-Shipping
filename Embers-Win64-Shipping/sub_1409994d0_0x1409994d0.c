// 函数: sub_1409994d0
// 地址: 0x1409994d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_6 = *(rbx_1 + 0x10)
    
    if (rax_6 != 0)
        rbx_1 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*(r9 + rbp * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + rdx * 0x10) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int32_t* rdx_9 = arg3[1]
int32_t* rbx_4 = (sx.q(rbp.d) << 4) + *arg1
int32_t rcx_7 = **arg3
*rbx_4 = rcx_7
rbx_4[1] = *rdx_9
rbx_4[2] = 0xffffffff

if (sub_1409b3740(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t r8_3 = (arg1[9].d - 1) & rcx_7
    rbx_4[3] = r8_3
    void* rcx_9 = *(r9_1 + 8)
    void* rax_22 = r9_1
    
    if (rcx_9 != 0)
        rax_22 = rcx_9
    
    rbx_4[2] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_3)) << 2))
    void* rcx_10 = *(r9_1 + 8)
    
    if (rcx_10 != 0)
        r9_1 = rcx_10
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_3)) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
