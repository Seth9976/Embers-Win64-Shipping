// 函数: sub_140bbec20
// 地址: 0x140bbec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
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
    int64_t rdx = sx.q(*((rbp << 5) + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int128_t* rdx_9 = arg3[1]
int64_t* rbx_4 = (sx.q(rbp.d) << 5) + *arg1
int64_t rcx_7 = **arg3
*rbx_4 = rcx_7
*(rbx_4 + 8) = *rdx_9
rbx_4[3].d = 0xffffffff
int32_t rax_19 = sub_140b5ead0(rcx_7.d)

if (sub_1405b67e0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_23 = (arg1[9].d - 1) & (rax_19 + rcx_7:4.d)
    *(rbx_4 + 0x1c) = rax_23
    void* rdx_12 = *(r9_1 + 8)
    int64_t r8_1 = sx.q(rax_23)
    void* rax_24 = r9_1
    
    if (rdx_12 != 0)
        rax_24 = rdx_12
    
    rbx_4[3].d = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
    void* rax_26 = *(r9_1 + 8)
    
    if (rax_26 != 0)
        r9_1 = rax_26
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
