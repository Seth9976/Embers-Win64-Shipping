// 函数: sub_14266ea10
// 地址: 0x14266ea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
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
    int64_t rdx = sx.q(*(r9 + rbp * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + rdx * 0x10) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t rax_18 = *arg3
int64_t* r9_3 = (sx.q(rbp.d) << 4) + *arg1
uint32_t r8_2 = (rax_18 u>> 0x20).d
*r9_3 = rax_18
int32_t rax_20 = (rax_18.d - r8_2) ^ r8_2 u>> 0xd
r9_3[1].d = 0xffffffff
int32_t rdx_11 = (0x9e3779b9 - rax_20 - r8_2) ^ rax_20 << 8
int32_t r8_5 = (r8_2 - rax_20 - rdx_11) ^ rdx_11 u>> 0xd
int32_t rax_23 = (rax_20 - rdx_11 - r8_5) ^ r8_5 u>> 0xc
int32_t rdx_14 = (rdx_11 - rax_23 - r8_5) ^ rax_23 << 0x10
int32_t r8_8 = (r8_5 - rax_23 - rdx_14) ^ rdx_14 u>> 5
int32_t rax_26 = (rax_23 - rdx_14 - r8_8) ^ r8_8 u>> 3
int32_t rdx_17 = (rdx_14 - rax_26 - r8_8) ^ rax_26 << 0xa
sub_142678e00(arg1, arg2, (r8_8 - rax_26 - rdx_17) ^ rdx_17 u>> 0xf, r9_3, rbp.d, arg4)
return arg2
