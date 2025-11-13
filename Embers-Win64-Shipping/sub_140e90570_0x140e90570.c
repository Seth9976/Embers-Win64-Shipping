// 函数: sub_140e90570
// 地址: 0x140e90570
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
int64_t* rdx_9 = arg3[1]
int64_t* r9_3 = (sx.q(rbp.d) << 5) + *arg1
*r9_3 = **arg3
r9_3[1] = *rdx_9
void* rax_20 = rdx_9[1]
r9_3[2] = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

r9_3[3].d = 0xffffffff
uint32_t rcx_9 = (*r9_3 u>> 4).d
int32_t rdx_11 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
int32_t r8_3 = neg.d(rcx_9 + rdx_11) ^ rdx_11 u>> 0xd
int32_t rcx_12 = (rcx_9 - r8_3 - rdx_11) ^ r8_3 u>> 0xc
int32_t rdx_14 = (rdx_11 - rcx_12 - r8_3) ^ rcx_12 << 0x10
int32_t r8_6 = (r8_3 - rcx_12 - rdx_14) ^ rdx_14 u>> 5
int32_t rcx_15 = (rcx_12 - r8_6 - rdx_14) ^ r8_6 u>> 3
int32_t rdx_17 = (rdx_14 - rcx_15 - r8_6) ^ rcx_15 << 0xa
sub_140eb8320(arg1, arg2, (r8_6 - rcx_15 - rdx_17) ^ rdx_17 u>> 0xf, r9_3, rbp.d, arg4)
return arg2
