// 函数: sub_140b92700
// 地址: 0x140b92700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
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
    int64_t r8 = sx.q(*(r9 + rbp * 0x28 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r9 + r8 * 0x28) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int128_t* rbx_2 = *arg1 + sx.q(rbp.d) * 0x28
int128_t* rcx_9 = arg3[1]
*rbx_2 = **arg3
rbx_2[1] = *rcx_9
rbx_2[2].d = 0xffffffff
uint32_t rdx_11 = (*rbx_2 u>> 4).d
int32_t r8_3 = (0x9e3779b9 - rdx_11) ^ rdx_11 << 8
int32_t rcx_12 = neg.d(r8_3 + rdx_11) ^ r8_3 u>> 0xd
int32_t rdx_14 = (rdx_11 - r8_3 - rcx_12) ^ rcx_12 u>> 0xc
int32_t r8_6 = (r8_3 - rdx_14 - rcx_12) ^ rdx_14 << 0x10
int32_t rcx_15 = (rcx_12 - r8_6 - rdx_14) ^ r8_6 u>> 5
int32_t rdx_17 = (rdx_14 - r8_6 - rcx_15) ^ rcx_15 u>> 3
int32_t r8_9 = (r8_6 - rdx_17 - rcx_15) ^ rdx_17 << 0xa
int32_t rdi_8 =
    (*(rbx_2 + 0xc) << 0xe ^ *(rbx_2 + 8)) << 0xd ^ (rcx_15 - r8_9 - rdx_17) ^ r8_9 u>> 0xf

if (sub_140b9de70(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_33 = (arg1[9].d - 1) & rdi_8
    *(rbx_2 + 0x24) = rax_33
    void* rdx_20 = *(r9_1 + 8)
    int64_t r8_11 = sx.q(rax_33)
    void* rax_34 = r9_1
    
    if (rdx_20 != 0)
        rax_34 = rdx_20
    
    rbx_2[2].d = *(rax_34 + (((sx.q(arg1[9].d) - 1) & r8_11) << 2))
    void* rax_36 = *(r9_1 + 8)
    
    if (rax_36 != 0)
        r9_1 = rax_36
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_11) << 2)) = rbp.d

*arg2 = rbp.d

if (arg4 != 0)
    *arg4 = 0

return arg2
