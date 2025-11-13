// 函数: sub_1419901f0
// 地址: 0x1419901f0
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
int64_t* rcx_7 = arg3[1]
int128_t* r9_3 = (sx.q(rbp.d) << 5) + *arg1
*r9_3 = **arg3
void* rax_19 = *rcx_7
r9_3[1].q = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

*(r9_3 + 0x18) = 0xffffffff
int32_t r8_1 = *(r9_3 + 0xc)
int32_t rdx_11 = (*(r9_3 + 8) - r8_1) ^ r8_1 u>> 0xd
int32_t rcx_10 = (0x9e3779b9 - rdx_11 - r8_1) ^ rdx_11 << 8
int32_t r8_4 = (r8_1 - rcx_10 - rdx_11) ^ rcx_10 u>> 0xd
int32_t rdx_14 = (rdx_11 - rcx_10 - r8_4) ^ r8_4 u>> 0xc
int32_t rcx_13 = (rcx_10 - rdx_14 - r8_4) ^ rdx_14 << 0x10
int32_t r8_7 = (r8_4 - rcx_13 - rdx_14) ^ rcx_13 u>> 5
int32_t rdx_17 = (rdx_14 - rcx_13 - r8_7) ^ r8_7 u>> 3
int32_t rcx_16 = (rcx_13 - rdx_17 - r8_7) ^ rdx_17 << 0xa
sub_14199df50(arg1, arg2, zx.q(r8_7 - rcx_16 - rdx_17) ^ zx.q(rcx_16 u>> 0xf), r9_3, rbp.d, arg4)
return arg2
