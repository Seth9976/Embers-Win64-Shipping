// 函数: sub_140cec7a0
// 地址: 0x140cec7a0
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
int128_t* rdi_5 = (sx.q(rbp.d) << 5) + *arg1
int64_t* rcx_7 = arg3[1]
*rdi_5 = **arg3
rdi_5[1].q = *rcx_7
*(rdi_5 + 0x18) = 0xffffffff
uint32_t r8_2 = (*rdi_5 u>> 4).d
uint32_t rcx_9 = (*(rdi_5 + 8) u>> 4).d
int32_t r9_2 = (0x9e3779b9 - r8_2) ^ r8_2 << 8
int32_t r11_2 = neg.d(r9_2 + r8_2) ^ r9_2 u>> 0xd
int32_t r8_5 = (r8_2 - r9_2 - r11_2) ^ r11_2 u>> 0xc
int32_t r9_5 = (r9_2 - r11_2 - r8_5) ^ r8_5 << 0x10
int32_t r11_5 = (r11_2 - r9_5 - r8_5) ^ r9_5 u>> 5
int32_t r8_8 = (r8_5 - r9_5 - r11_5) ^ r11_5 u>> 3
int32_t r9_8 = (r9_5 - r11_5 - r8_8) ^ r8_8 << 0xa
int32_t rdx_10 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
int32_t r10_2 = neg.d(rdx_10 + rcx_9) ^ rdx_10 u>> 0xd
int32_t rcx_12 = (rcx_9 - rdx_10 - r10_2) ^ r10_2 u>> 0xc
int32_t rdx_13 = (rdx_10 - rcx_12 - r10_2) ^ rcx_12 << 0x10
int32_t r10_5 = (r10_2 - rdx_13 - rcx_12) ^ rdx_13 u>> 5
int32_t rcx_15 = (rcx_12 - rdx_13 - r10_5) ^ r10_5 u>> 3
int32_t rdx_16 = (rdx_13 - rcx_15 - r10_5) ^ rcx_15 << 0xa
int32_t r10_8 = (r10_5 - rdx_16 - rcx_15) ^ rdx_16 u>> 0xf
int32_t r11_10 = (((r11_5 - r9_8 - r8_8) ^ r9_8 u>> 0xf) - r10_8) ^ r10_8 u>> 0xd
int32_t rbx_4 = (0x9e3779b9 - r11_10 - r10_8) ^ r11_10 << 8
int32_t r10_11 = (r10_8 - r11_10 - rbx_4) ^ rbx_4 u>> 0xd
int32_t r11_13 = (r11_10 - rbx_4 - r10_11) ^ r10_11 u>> 0xc
int32_t rbx_7 = (rbx_4 - r11_13 - r10_11) ^ r11_13 << 0x10
int32_t r10_14 = (r10_11 - r11_13 - rbx_7) ^ rbx_7 u>> 5
int32_t r11_16 = (r11_13 - rbx_7 - r10_14) ^ r10_14 u>> 3
int32_t rbx_10 = (rbx_7 - r11_16 - r10_14) ^ r11_16 << 0xa
sub_140cfb4f0(arg1, arg2, (r10_14 - r11_16 - rbx_10) ^ rbx_10 u>> 0xf, rdi_5, rbp.d, arg4)
return arg2
