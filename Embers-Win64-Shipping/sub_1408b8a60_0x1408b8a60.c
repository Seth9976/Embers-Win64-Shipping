// 函数: sub_1408b8a60
// 地址: 0x1408b8a60
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
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rbp * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + r8 * 0x18) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_9 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rbp.b & 0x1f)
int64_t* r9_1 = *arg1 + sx.q(rbp.d) * 0x18

if (r9_1 != 0)
    int64_t* rdx_10 = arg3[1]
    *r9_1 = **arg3
    r9_1[1] = *rdx_10
    r9_1[2].d = 0xffffffff

uint32_t rcx_11 = (*r9_1 u>> 4).d
int32_t rdx_12 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
int32_t r8_4 = neg.d(rdx_12 + rcx_11) ^ rdx_12 u>> 0xd
int32_t rcx_14 = (rcx_11 - rdx_12 - r8_4) ^ r8_4 u>> 0xc
int32_t rdx_15 = (rdx_12 - rcx_14 - r8_4) ^ rcx_14 << 0x10
int32_t r8_7 = (r8_4 - rdx_15 - rcx_14) ^ rdx_15 u>> 5
int32_t rcx_17 = (rcx_14 - rdx_15 - r8_7) ^ r8_7 u>> 3
int32_t rdx_18 = (rdx_15 - rcx_17 - r8_7) ^ rcx_17 << 0xa
sub_1408bdd50(arg1, arg2, (r8_7 - rdx_18 - rcx_17) ^ rdx_18 u>> 0xf, r9_1, rbp.d, arg4)
return arg2
