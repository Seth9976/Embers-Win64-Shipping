// 函数: sub_141c8fcf0
// 地址: 0x141c8fcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int32_t r14 = 1
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
void* r8_1 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rbp.b & 0x1f)
int64_t* rbx_4 = (sx.q(rbp.d) << 5) + *arg1
int64_t* rdx_9 = arg3[1]
*rbx_4 = **arg3
sub_140596d10(&rbx_4[1], rdx_9)
rbx_4[3].d = 0xffffffff
int64_t rax_19 = *rbx_4
int32_t rax_20 = sub_140b5ead0(rax_19.d)
int32_t r9_2 = arg1[1].d - *(arg1 + 0x34)

if (r9_2 u>= 4)
    uint32_t rax_22 = r9_2 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_22 + 8)
    int32_t rcx_10
    
    if (rax_22 == 0xfffffff8)
        rcx_10 = 0x20
    else
        rcx_10 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_22 + 7)
    char r8_2
    
    if (rax_22 == 0xfffffff9)
        r8_2 = 0x20
    else
        r8_2 = 0x1f - temp0_3
    
    r14 = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))

int32_t rax_25

if (r9_2 s> 0)
    rax_25 = arg1[9].d

if (r9_2 s> 0 && (rax_25 == 0 || rax_25 s< r14))
    arg1[9].d = r14
    sub_1405c1a70(arg1)
else
    void* r9_3 = &arg1[7]
    int32_t rax_28 = (arg1[9].d - 1) & (rax_20 + rax_19:4.d)
    *(rbx_4 + 0x1c) = rax_28
    void* rdx_11 = *(r9_3 + 8)
    int64_t r8_3 = sx.q(rax_28)
    void* rax_29 = r9_3
    
    if (rdx_11 != 0)
        rax_29 = rdx_11
    
    rbx_4[3].d = *(rax_29 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
    void* rax_31 = *(r9_3 + 8)
    
    if (rax_31 != 0)
        r9_3 = rax_31
    
    *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
