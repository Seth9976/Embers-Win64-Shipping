// 函数: sub_1427748a0
// 地址: 0x1427748a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
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
    int64_t rdx = sx.q(*(rbp * 0x60 + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(rdx * 0x60 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* r8_1 = arg3[1]
int64_t* rbx_4 = sx.q(rbp.d) * 0x60 + *arg1
*rbx_4 = **arg3
rbx_4[2] = *r8_1
rbx_4[4] = 0

if (rbx_4[2] != 0)
    void* rax_17 = r8_1[2]
    void* rcx_11 = &r8_1[4]
    
    if (rax_17 != 0)
        rcx_11 = rax_17
    
    (**rcx_11)(rcx_11)

rbx_4[0xa].d = 0xffffffff
uint32_t rcx_13 = (*rbx_4 u>> 4).d
int32_t rdx_11 = (0x9e3779b9 - rcx_13) ^ rcx_13 << 8
int32_t r8_4 = neg.d(rcx_13 + rdx_11) ^ rdx_11 u>> 0xd
int32_t rcx_16 = (rcx_13 - r8_4 - rdx_11) ^ r8_4 u>> 0xc
int32_t rdx_14 = (rdx_11 - rcx_16 - r8_4) ^ rcx_16 << 0x10
int32_t r8_7 = (r8_4 - rcx_16 - rdx_14) ^ rdx_14 u>> 5
int32_t rcx_19 = (rcx_16 - r8_7 - rdx_14) ^ r8_7 u>> 3
int32_t rdx_17 = (rdx_14 - rcx_19 - r8_7) ^ rcx_19 << 0xa
sub_1427758e0(arg1, arg2, (r8_7 - rcx_19 - rdx_17) ^ rdx_17 u>> 0xf, rbx_4, rbp.d, arg4)
return arg2
