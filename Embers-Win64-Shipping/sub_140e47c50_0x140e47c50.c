// 函数: sub_140e47c50
// 地址: 0x140e47c50
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
int64_t* rbx_4 = sx.q(rbp.d) * 0x60 + *arg1
sub_140e44d40(arg3, rbx_4)
rbx_4[0xb].d = 0xffffffff
uint32_t rcx_12 = (*rbx_4 u>> 4).d
int32_t rdx_11 = (0x9e3779b9 - rcx_12) ^ rcx_12 << 8
int32_t r8_3 = neg.d(rdx_11 + rcx_12) ^ rdx_11 u>> 0xd
int32_t rcx_15 = (rcx_12 - rdx_11 - r8_3) ^ r8_3 u>> 0xc
int32_t rdx_14 = (rdx_11 - rcx_15 - r8_3) ^ rcx_15 << 0x10
int32_t r8_6 = (r8_3 - rdx_14 - rcx_15) ^ rdx_14 u>> 5
int32_t rcx_18 = (rcx_15 - rdx_14 - r8_6) ^ r8_6 u>> 3
int32_t rdx_17 = (rdx_14 - rcx_18 - r8_6) ^ rcx_18 << 0xa
sub_140e60920(arg1, arg2, (r8_6 - rdx_17 - rcx_18) ^ rdx_17 u>> 0xf, rbx_4, rbp.d, arg4)
return arg2
