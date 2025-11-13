// 函数: sub_14237ae90
// 地址: 0x14237ae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t* r10 = arg3
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
    r10 = arg3
    
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
int64_t* rdx_9 = *r10
int64_t* r13_2 = (sx.q(rbp.d) << 6) + *arg1
int64_t* rbx_2 = r10[1]
*r13_2 = *rdx_9
sub_140596d10(&r13_2[1], &rdx_9[1])
r13_2[3] = *rbx_2
r13_2[4] = 0
r13_2[4] = rbx_2[1]
rbx_2[1] = 0
r13_2[5].d = rbx_2[2].d
*(r13_2 + 0x2c) = *(rbx_2 + 0x14)
rbx_2[2] = 0
r13_2[6] = rbx_2[3]
r13_2[7].d = 0xffffffff
int64_t rax_24 = *r13_2
int32_t rbx_4 = sub_140b5ead0(rax_24.d) + rax_24:4.d
int32_t rdx_13 = rbx_4 u>> 0xd ^ neg.d(rbx_4)
int32_t rcx_13 = (0x9e3779b9 - rbx_4 - rdx_13) ^ rdx_13 << 8
int32_t rbx_7 = (rbx_4 - rcx_13 - rdx_13) ^ rcx_13 u>> 0xd
int32_t rdx_16 = (rdx_13 - rcx_13 - rbx_7) ^ rbx_7 u>> 0xc
int32_t rcx_16 = (rcx_13 - rbx_7 - rdx_16) ^ rdx_16 << 0x10
int32_t rbx_10 = (rbx_7 - rcx_16 - rdx_16) ^ rcx_16 u>> 5
int32_t rdx_19 = (rdx_16 - rcx_16 - rbx_10) ^ rbx_10 u>> 3
int32_t rcx_19 = (rcx_16 - rbx_10 - rdx_19) ^ rdx_19 << 0xa
int32_t rax_40 = r13_2[2].d
int16_t* rdx_20

if (rax_40 == 0)
    rdx_20 = &data_142d40450
else
    rdx_20 = r13_2[1]

int32_t rcx_21 = rax_40 - 1

if (rax_40 == 0)
    rcx_21 = 0

int32_t rax_41 = sub_1405969c0(rcx_21, rdx_20)
int32_t rbx_15 = (((rbx_10 - rcx_19 - rdx_19) ^ rcx_19 u>> 0xf) - rax_41) ^ rax_41 u>> 0xd
int32_t rdi_5 = (0x9e3779b9 - rbx_15 - rax_41) ^ rbx_15 << 8
int32_t r8_4 = (rax_41 - rdi_5 - rbx_15) ^ rdi_5 u>> 0xd
int32_t rbx_18 = (rbx_15 - rdi_5 - r8_4) ^ r8_4 u>> 0xc
int32_t rdi_8 = (rdi_5 - rbx_18 - r8_4) ^ rbx_18 << 0x10
int32_t r8_7 = (r8_4 - rdi_8 - rbx_18) ^ rdi_8 u>> 5
int32_t rbx_21 = (rbx_18 - rdi_8 - r8_7) ^ r8_7 u>> 3
int32_t rdi_11 = (rdi_8 - rbx_21 - r8_7) ^ rbx_21 << 0xa
sub_14238af60(arg1, arg2, (r8_7 - rdi_11 - rbx_21) ^ rdi_11 u>> 0xf, r13_2, rbp.d, arg4)
return arg2
