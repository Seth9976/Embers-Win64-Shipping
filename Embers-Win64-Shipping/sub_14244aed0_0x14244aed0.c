// 函数: sub_14244aed0
// 地址: 0x14244aed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rbp

if (rdx == 0)
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
    int64_t r8 = sx.q(*(r9 + rbp * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r9 + r8 * 0x30) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rdx_9 = arg3[1]
int64_t* rcx_10 = *arg3
int64_t* rbx_4 = sx.q(rbp.d) * 0x30 + *arg1
*rbx_4 = 0
*rbx_4 = *rcx_10
*rcx_10 = 0
rbx_4[1].d = rcx_10[1].d
*(rbx_4 + 0xc) = *(rcx_10 + 0xc)
rcx_10[1] = 0
rbx_4[2] = 0
rbx_4[2] = *rdx_9
*rdx_9 = 0
rbx_4[3].d = rdx_9[1].d
*(rbx_4 + 0x1c) = *(rdx_9 + 0xc)
rdx_9[1] = 0
rbx_4[4].d = rdx_9[2].d
rbx_4[5].d = 0xffffffff
int32_t rax_22 = rbx_4[1].d
int16_t* rdx_10

if (rax_22 == 0)
    rdx_10 = &data_142d40450
else
    rdx_10 = *rbx_4

int32_t rcx_11 = rax_22 - 1

if (rax_22 == 0)
    rcx_11 = 0

int32_t rax_23 = sub_1405969c0(rcx_11, rdx_10)

if (sub_1419ca2d0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t r8_4 = (arg1[9].d - 1) & rax_23
    *(rbx_4 + 0x2c) = r8_4
    void* rcx_13 = *(r9_1 + 8)
    void* rax_26 = r9_1
    
    if (rcx_13 != 0)
        rax_26 = rcx_13
    
    rbx_4[5].d = *(rax_26 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_4)) << 2))
    void* rcx_14 = *(r9_1 + 8)
    
    if (rcx_14 != 0)
        r9_1 = rcx_14
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_4)) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
