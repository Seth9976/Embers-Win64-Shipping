// 函数: sub_141399e80
// 地址: 0x141399e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
memset(&var_4a8, 0, 0x480)
int64_t r8 = *(arg1 + 0x38)
int64_t var_28 = 0
sub_141384020(&var_4a8, arg1 + 0x50, r8)
void* rcx_2 = *(arg1 + 0x40)
int64_t rbp = 0
void* rax = *(arg1 + 0x50)
int64_t r15 = *(rcx_2 + 0x51e8)

if (rax != 0)
    int64_t rdx_1 = sx.q(*(rax + 0x10c))
    int64_t r14_1 = rdx_1 << 3
    int64_t* rbx_1 = *(*(arg1 + 0x58) + 0x10)
    int64_t rax_2 = rbx_1[3]
    
    if (*(r14_1 + rax_2) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_2 = rbx_1[3]
        rcx_2 = *(arg1 + 0x40)
    
    rbp = *(r14_1 + rax_2)

int32_t rdi_1 = *(arg1 + 0x48)
int64_t r14_2 = *(rcx_2 + 0x51f0)
void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rdx_4[0x96]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rdx_4[0x96]

*(arg2 + 0x30) = rax_3
void* rcx_5 = &rdx_4[4]
int64_t* rax_4 = *(arg2 + 8)
int64_t i_1 = 9
*(arg2 + 0x14) += 1
*rax_4 = rdx_4
*(arg2 + 8) = &rdx_4[1]
rdx_4[1] = 0
*rdx_4 = &data_142f51dd0
void* rax_6 = &var_4a8
rdx_4[2] = r14_2
rdx_4[3] = r15
int64_t i

do
    rcx_5 += 0x80
    int128_t zmm0_1 = *rax_6
    rax_6 += 0x80
    *(rcx_5 - 0x80) = zmm0_1
    *(rcx_5 - 0x70) = *(rax_6 - 0x70)
    *(rcx_5 - 0x60) = *(rax_6 - 0x60)
    *(rcx_5 - 0x50) = *(rax_6 - 0x50)
    *(rcx_5 - 0x40) = *(rax_6 - 0x40)
    *(rcx_5 - 0x30) = *(rax_6 - 0x30)
    *(rcx_5 - 0x20) = *(rax_6 - 0x20)
    *(rcx_5 - 0x10) = *(rax_6 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
rdx_4[0x94] = rbp
rdx_4[0x95].d = rdi_1
*(rdx_4 + 0x4ac) = 1
return sub_1405d1550(&var_28)
