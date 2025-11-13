// 函数: sub_1406f4530
// 地址: 0x1406f4530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
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
    int64_t rdx = sx.q(*((rbp << 6) + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r9) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rdi_5 = (sx.q(rbp.d) << 6) + *arg1
int64_t* rbx_2 = arg3[1]
sub_140745220(rdi_5, *arg3)
rdi_5[5] = 0
rdi_5[5] = *rbx_2
*rbx_2 = 0
rdi_5[6].d = rbx_2[1].d
*(rdi_5 + 0x34) = *(rbx_2 + 0xc)
rbx_2[1] = 0
rdi_5[7].d = 0xffffffff
int64_t rbx_3 = *rdi_5
int32_t rax_21 = sub_140b5ead0(rbx_3.d)
int16_t r8_1 = rdi_5[2].w
int32_t r15_1 = (rbx_3 u>> 0x20).d + rax_21
int64_t rdx_10

if (r8_1 != 3)
    rdx_10 = 0
else
    rdx_10 = rdi_5[1]

uint32_t rdx_11 = (rdx_10 u>> 4).d
int32_t rcx_10 = (0x9e3779b9 - rdx_11) ^ rdx_11 << 8
int32_t rbx_7 = neg.d(rcx_10 + rdx_11) ^ rcx_10 u>> 0xd
int32_t rdx_14 = (rdx_11 - rcx_10 - rbx_7) ^ rbx_7 u>> 0xc
int32_t rcx_13 = (rcx_10 - rdx_14 - rbx_7) ^ rdx_14 << 0x10
int32_t rbx_10 = (rbx_7 - rcx_13 - rdx_14) ^ rcx_13 u>> 5
int32_t rdx_17 = (rdx_14 - rcx_13 - rbx_10) ^ rbx_10 u>> 3
int32_t rcx_16 = (rcx_13 - rdx_17 - rbx_10) ^ rdx_17 << 0xa
int32_t rbx_13 = (rbx_10 - rcx_16 - rdx_17) ^ rcx_16 u>> 0xf
void* const r14_1

if (r8_1 != 3)
    r14_1 = rdi_5[1]
    void* rax_36
    int64_t rax_37
    void* rdx_18
    
    if (r14_1 != 0)
        rax_36 = sub_140be01c0()
        rdx_18 = *(r14_1 + 0x10)
        rax_37 = sx.q(*(rax_36 + 0x38))
    
    if (r14_1 == 0 || rax_37.d s> *(rdx_18 + 0x38)
            || *(*(rdx_18 + 0x30) + (rax_37 << 3)) != rax_36 + 0x30)
        r14_1 = nullptr
else
    r14_1 = data_143ce3880

uint32_t r14_2 = (r14_1 u>> 4).d
int32_t rcx_20 = (0x9e3779b9 - r14_2) ^ r14_2 << 8
int32_t rdx_21 = neg.d(rcx_20 + r14_2) ^ rcx_20 u>> 0xd
int32_t r14_5 = (r14_2 - rcx_20 - rdx_21) ^ rdx_21 u>> 0xc
int32_t rcx_23 = (rcx_20 - r14_5 - rdx_21) ^ r14_5 << 0x10
int32_t rdx_24 = (rdx_21 - rcx_23 - r14_5) ^ rcx_23 u>> 5
int32_t r14_8 = (r14_5 - rcx_23 - rdx_24) ^ rdx_24 u>> 3
int32_t rcx_26 = (rcx_23 - r14_8 - rdx_24) ^ r14_8 << 0xa
int32_t rdx_29 = (((rdx_24 - rcx_26 - r14_8) ^ rcx_26 u>> 0xf) - rbx_13) ^ rbx_13 u>> 0xd
int32_t rcx_30 = (0x9e3779b9 - rbx_13 - rdx_29) ^ rdx_29 << 8
int32_t rbx_16 = (rbx_13 - rcx_30 - rdx_29) ^ rcx_30 u>> 0xd
int32_t rdx_32 = (rdx_29 - rcx_30 - rbx_16) ^ rbx_16 u>> 0xc
int32_t rcx_33 = (rcx_30 - rdx_32 - rbx_16) ^ rdx_32 << 0x10
int32_t rbx_19 = (rbx_16 - rcx_33 - rdx_32) ^ rcx_33 u>> 5
int32_t rdx_35 = (rdx_32 - rcx_33 - rbx_19) ^ rbx_19 u>> 3
int32_t rcx_36 = (rcx_33 - rdx_35 - rbx_19) ^ rdx_35 << 0xa
int32_t rbx_24 = (((rbx_19 - rcx_36 - rdx_35) ^ rcx_36 u>> 0xf) - r15_1) ^ r15_1 u>> 0xd
int32_t r12_2 = (0x9e3779b9 - rbx_24 - r15_1) ^ rbx_24 << 8
int32_t r15_4 = (r15_1 - r12_2 - rbx_24) ^ r12_2 u>> 0xd
int32_t rbx_27 = (rbx_24 - r12_2 - r15_4) ^ r15_4 u>> 0xc
int32_t r12_5 = (r12_2 - rbx_27 - r15_4) ^ rbx_27 << 0x10
int32_t r15_7 = (r15_4 - r12_5 - rbx_27) ^ r12_5 u>> 5
int32_t rbx_30 = (rbx_27 - r12_5 - r15_7) ^ r15_7 u>> 3
int32_t r12_8 = (r12_5 - rbx_30 - r15_7) ^ rbx_30 << 0xa
sub_140753c20(arg1, arg2, (r15_7 - r12_8 - rbx_30) ^ r12_8 u>> 0xf, rdi_5, rbp.d, arg4)
return arg2
