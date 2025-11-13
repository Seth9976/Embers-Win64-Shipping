// 函数: sub_140862ed0
// 地址: 0x140862ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407755b0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rbp = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rbp * 0x58 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x58 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rbp.b & 0x1f)
int64_t* rsi_1 = sx.q(rbp.d) * 0x58 + *arg1
int64_t* rbx = arg3[1]
sub_140745220(rsi_1, *arg3)
sub_140745220(&rsi_1[5], rbx)
rsi_1[0xa].d = 0xffffffff
int64_t rbx_1 = *rsi_1
int32_t rax_8 = sub_140b5ead0(rbx_1.d)
int16_t r8_3 = rsi_1[2].w
int32_t r15 = (rbx_1 u>> 0x20).d + rax_8
int64_t rdx_7

if (r8_3 != 3)
    rdx_7 = 0
else
    rdx_7 = rsi_1[1]

uint32_t rdx_8 = (rdx_7 u>> 4).d
int32_t rcx_11 = (0x9e3779b9 - rdx_8) ^ rdx_8 << 8
int32_t rbx_5 = neg.d(rdx_8 + rcx_11) ^ rcx_11 u>> 0xd
int32_t rdx_11 = (rdx_8 - rcx_11 - rbx_5) ^ rbx_5 u>> 0xc
int32_t rcx_14 = (rcx_11 - rdx_11 - rbx_5) ^ rdx_11 << 0x10
int32_t rbx_8 = (rbx_5 - rcx_14 - rdx_11) ^ rcx_14 u>> 5
int32_t rdx_14 = (rdx_11 - rcx_14 - rbx_8) ^ rbx_8 u>> 3
int32_t rcx_17 = (rcx_14 - rdx_14 - rbx_8) ^ rdx_14 << 0xa
int32_t rbx_11 = (rbx_8 - rcx_17 - rdx_14) ^ rcx_17 u>> 0xf
void* const r14_1

if (r8_3 != 3)
    r14_1 = rsi_1[1]
    void* rax_23
    int64_t rax_24
    void* rdx_15
    
    if (r14_1 != 0)
        rax_23 = sub_140be01c0()
        rdx_15 = *(r14_1 + 0x10)
        rax_24 = sx.q(*(rax_23 + 0x38))
    
    if (r14_1 == 0 || rax_24.d s> *(rdx_15 + 0x38)
            || *(*(rdx_15 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
        r14_1 = nullptr
else
    r14_1 = data_143ce3880

uint32_t r14_2 = (r14_1 u>> 4).d
int32_t rcx_21 = (0x9e3779b9 - r14_2) ^ r14_2 << 8
int32_t rdx_18 = neg.d(r14_2 + rcx_21) ^ rcx_21 u>> 0xd
int32_t r14_5 = (r14_2 - rcx_21 - rdx_18) ^ rdx_18 u>> 0xc
int32_t rcx_24 = (rcx_21 - r14_5 - rdx_18) ^ r14_5 << 0x10
int32_t rdx_21 = (rdx_18 - rcx_24 - r14_5) ^ rcx_24 u>> 5
int32_t r14_8 = (r14_5 - rcx_24 - rdx_21) ^ rdx_21 u>> 3
int32_t rcx_27 = (rcx_24 - r14_8 - rdx_21) ^ r14_8 << 0xa
int32_t rdx_26 = (((rdx_21 - rcx_27 - r14_8) ^ rcx_27 u>> 0xf) - rbx_11) ^ rbx_11 u>> 0xd
int32_t rcx_31 = (0x9e3779b9 - rbx_11 - rdx_26) ^ rdx_26 << 8
int32_t rbx_14 = (rbx_11 - rcx_31 - rdx_26) ^ rcx_31 u>> 0xd
int32_t rdx_29 = (rdx_26 - rcx_31 - rbx_14) ^ rbx_14 u>> 0xc
int32_t rcx_34 = (rcx_31 - rdx_29 - rbx_14) ^ rdx_29 << 0x10
int32_t rbx_17 = (rbx_14 - rcx_34 - rdx_29) ^ rcx_34 u>> 5
int32_t rdx_32 = (rdx_29 - rcx_34 - rbx_17) ^ rbx_17 u>> 3
int32_t rcx_37 = (rcx_34 - rdx_32 - rbx_17) ^ rdx_32 << 0xa
int32_t rbx_22 = (((rbx_17 - rcx_37 - rdx_32) ^ rcx_37 u>> 0xf) - r15) ^ r15 u>> 0xd
int32_t r12_2 = (0x9e3779b9 - rbx_22 - r15) ^ rbx_22 << 8
int32_t r15_3 = (r15 - r12_2 - rbx_22) ^ r12_2 u>> 0xd
int32_t rbx_25 = (rbx_22 - r12_2 - r15_3) ^ r15_3 u>> 0xc
int32_t r12_5 = (r12_2 - rbx_25 - r15_3) ^ rbx_25 << 0x10
int32_t r15_6 = (r15_3 - r12_5 - rbx_25) ^ r12_5 u>> 5
int32_t rbx_28 = (rbx_25 - r12_5 - r15_6) ^ r15_6 u>> 3
int32_t r12_8 = (r12_5 - rbx_28 - r15_6) ^ rbx_28 << 0xa
sub_140753750(arg1, arg2, (r15_6 - r12_8 - rbx_28) ^ r12_8 u>> 0xf, rsi_1, rbp.d, arg4)
return arg2
