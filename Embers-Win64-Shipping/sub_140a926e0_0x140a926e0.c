// 函数: sub_140a926e0
// 地址: 0x140a926e0
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
int128_t* rax_18 = *arg3
int64_t* rcx_7 = arg3[1]
int64_t* r9_3 = (sx.q(rbp.d) << 6) + *arg1
*r9_3 = *rax_18
*(r9_3 + 0x10) = rax_18[1]
r9_3[4] = *rcx_7
void* rax_20 = rcx_7[1]
r9_3[5] = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

r9_3[6].d = rcx_7[2].d
r9_3[7].d = 0xffffffff
int32_t r8_1 = r9_3[3].d
int32_t rdx_11 = (r9_3[1].d - r8_1) ^ r8_1 u>> 0xd
int32_t rcx_10 = (0x9e3779b9 - r8_1 - rdx_11) ^ rdx_11 << 8
int32_t r8_4 = (r8_1 - rcx_10 - rdx_11) ^ rcx_10 u>> 0xd
int32_t rdx_14 = (rdx_11 - rcx_10 - r8_4) ^ r8_4 u>> 0xc
int32_t rcx_13 = (rcx_10 - r8_4 - rdx_14) ^ rdx_14 << 0x10
int32_t r8_7 = (r8_4 - rcx_13 - rdx_14) ^ rcx_13 u>> 5
int32_t rdx_17 = (rdx_14 - rcx_13 - r8_7) ^ r8_7 u>> 3
int32_t rcx_16 = (rcx_13 - r8_7 - rdx_17) ^ rdx_17 << 0xa
sub_140aa8570(arg1, arg2, (r8_7 - rcx_16 - rdx_17) ^ rcx_16 u>> 0xf, r9_3, rbp.d, arg4)
return arg2
