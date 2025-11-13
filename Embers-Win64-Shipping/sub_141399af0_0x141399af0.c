// 函数: sub_141399af0
// 地址: 0x141399af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
memset(&var_4a8, 0, 0x480)
int64_t r8 = *(arg1 + 0x40)
int64_t var_28 = 0
sub_141383a80(&var_4a8, arg1 + 0x48, r8)
int64_t rdi = 0
int32_t r15_1 = *(arg1 + 0x7c) - *(arg1 + 0x74)
int32_t r12_1 = *(arg1 + 0x78) - *(arg1 + 0x70)
void* rax = *(arg1 + 0x48)

if (rax != 0)
    int64_t rdx_1 = sx.q(*(rax + 0x10c))
    int64_t rsi_1 = rdx_1 << 3
    int64_t* rdi_1 = *(*(arg1 + 0x50) + 0x10)
    int64_t rax_2 = rdi_1[3]
    
    if (*(rsi_1 + rax_2) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_2 = rdi_1[3]
    
    rdi = *(rsi_1 + rax_2)

int64_t rsi_2 = *(arg1 + 0x60)
int64_t r14 = *(arg1 + 0x68)
void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rdx_4[0x96]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rdx_4[0x96]

*(arg2 + 0x30) = rax_3
void* rcx_4 = &rdx_4[4]
int64_t* rax_4 = *(arg2 + 8)
int64_t i_1 = 9
*(arg2 + 0x14) += 1
*rax_4 = rdx_4
*(arg2 + 8) = &rdx_4[1]
rdx_4[1] = 0
*rdx_4 = &data_142f51dd0
void* rax_6 = &var_4a8
rdx_4[2] = r14
rdx_4[3] = rsi_2
int64_t i

do
    rcx_4 += 0x80
    int128_t zmm0_1 = *rax_6
    rax_6 += 0x80
    *(rcx_4 - 0x80) = zmm0_1
    *(rcx_4 - 0x70) = *(rax_6 - 0x70)
    *(rcx_4 - 0x60) = *(rax_6 - 0x60)
    *(rcx_4 - 0x50) = *(rax_6 - 0x50)
    *(rcx_4 - 0x40) = *(rax_6 - 0x40)
    *(rcx_4 - 0x30) = *(rax_6 - 0x30)
    *(rcx_4 - 0x20) = *(rax_6 - 0x20)
    *(rcx_4 - 0x10) = *(rax_6 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
rdx_4[0x94] = rdi
rdx_4[0x95].d = r12_1
*(rdx_4 + 0x4ac) = r15_1
return sub_1405d1550(&var_28)
