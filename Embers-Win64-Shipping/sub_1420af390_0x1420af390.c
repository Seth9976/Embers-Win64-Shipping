// 函数: sub_1420af390
// 地址: 0x1420af390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int32_t r14 = 1
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
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rbp.b & 0x1f)
int64_t* rdx_9 = arg3[1]
int64_t* rbx_4 = sx.q(rbp.d) * 0x30 + *arg1
*rbx_4 = **arg3
rbx_4[1] = 0
rbx_4[1] = *rdx_9
__builtin_memset(rdx_9, 0, 0x20)
rbx_4[2].d = rdx_9[1].d
*(rbx_4 + 0x14) = *(rdx_9 + 0xc)
rbx_4[3] = 0
rbx_4[3] = rdx_9[2]
rbx_4[4].d = rdx_9[3].d
*(rbx_4 + 0x24) = *(rdx_9 + 0x1c)
rbx_4[5].d = 0xffffffff
int64_t rax_22 = *rbx_4
int32_t rax_23 = sub_140b5ead0(rax_22.d)
int32_t r9_2 = arg1[1].d - *(arg1 + 0x34)

if (r9_2 u>= 4)
    uint32_t rax_25 = r9_2 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_25 + 8)
    int32_t rcx_12
    
    if (rax_25 == 0xfffffff8)
        rcx_12 = 0x20
    else
        rcx_12 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_25 + 7)
    char r8_3
    
    if (rax_25 == 0xfffffff9)
        r8_3 = 0x20
    else
        r8_3 = 0x1f - temp0_3
    
    r14 = 1 << ((not.d(rcx_12 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))

int32_t rax_28

if (r9_2 s> 0)
    rax_28 = arg1[9].d

if (r9_2 s> 0 && (rax_28 == 0 || rax_28 s< r14))
    arg1[9].d = r14
    sub_140942f40(arg1)
else
    void* r9_3 = &arg1[7]
    int32_t rax_31 = (arg1[9].d - 1) & (rax_23 + rax_22:4.d)
    *(rbx_4 + 0x2c) = rax_31
    void* rdx_11 = *(r9_3 + 8)
    int64_t r8_4 = sx.q(rax_31)
    void* rax_32 = r9_3
    
    if (rdx_11 != 0)
        rax_32 = rdx_11
    
    rbx_4[5].d = *(rax_32 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
    void* rax_34 = *(r9_3 + 8)
    
    if (rax_34 != 0)
        r9_3 = rax_34
    
    *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
