// 函数: sub_14266ebd0
// 地址: 0x14266ebd0
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
int64_t* rbx_4 = (sx.q(rbp.d) << 5) + *arg1
sub_14266df60(arg3, rbx_4)
rbx_4[3].d = 0xffffffff
int64_t rax_18 = *rbx_4
uint32_t r8_2 = (rax_18 u>> 0x20).d
int32_t rax_20 = (rax_18.d - r8_2) ^ r8_2 u>> 0xd
int32_t rdx_12 = (0x9e3779b9 - r8_2 - rax_20) ^ rax_20 << 8
int32_t r8_5 = (r8_2 - rdx_12 - rax_20) ^ rdx_12 u>> 0xd
int32_t rax_23 = (rax_20 - rdx_12 - r8_5) ^ r8_5 u>> 0xc
int32_t rdx_15 = (rdx_12 - r8_5 - rax_23) ^ rax_23 << 0x10
int32_t r8_8 = (r8_5 - rdx_15 - rax_23) ^ rdx_15 u>> 5
int32_t rax_26 = (rax_23 - rdx_15 - r8_8) ^ r8_8 u>> 3
int32_t rdx_18 = (rdx_15 - r8_8 - rax_26) ^ rax_26 << 0xa
sub_142678c80(arg1, arg2, (r8_8 - rdx_18 - rax_26) ^ rdx_18 u>> 0xf, rbx_4, rbp.d, arg4)
return arg2
