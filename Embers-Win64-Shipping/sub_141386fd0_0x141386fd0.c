// 函数: sub_141386fd0
// 地址: 0x141386fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg1[2] + 0x51e8)
void var_4a8
memset(&var_4a8, 0, 0x480)
int64_t r8 = *arg1
int64_t var_28 = 0
sub_14137f5e0(&var_4a8, &arg1[3], r8)
void* rax_1 = arg1[3]
int64_t rbp = 0

if (rax_1 != 0)
    int64_t rdx_1 = sx.q(*(rax_1 + 0x10c))
    int64_t r14_1 = rdx_1 << 3
    int64_t* rsi_1 = *(arg1[4] + 0x10)
    int64_t rax_3 = rsi_1[3]
    
    if (*(r14_1 + rax_3) == 0)
        sub_1419ccf30(rsi_1, rdx_1.d)
        rax_3 = rsi_1[3]
    
    rbp = *(r14_1 + rax_3)

int32_t r14_2 = *(arg1 + 0x2c)
int32_t r12 = arg1[5].d
void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rsi_2 = *(arg1[2] + 0x51f0)
void* rax_5 = &rdx_4[0x96]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rdx_4[0x96]

*(arg2 + 0x30) = rax_5
void* rcx_4 = &var_4a8
int64_t* rax_6 = *(arg2 + 8)
int64_t i_1 = 9
*(arg2 + 0x14) += 1
*rax_6 = rdx_4
*(arg2 + 8) = &rdx_4[1]
rdx_4[1] = 0
*rdx_4 = &data_142f51dd0
void* rax_8 = &rdx_4[4]
rdx_4[2] = rsi_2
rdx_4[3] = r15
int64_t i

do
    rax_8 += 0x80
    int128_t zmm0_1 = *rcx_4
    rcx_4 += 0x80
    *(rax_8 - 0x80) = zmm0_1
    *(rax_8 - 0x70) = *(rcx_4 - 0x70)
    *(rax_8 - 0x60) = *(rcx_4 - 0x60)
    *(rax_8 - 0x50) = *(rcx_4 - 0x50)
    *(rax_8 - 0x40) = *(rcx_4 - 0x40)
    *(rax_8 - 0x30) = *(rcx_4 - 0x30)
    *(rax_8 - 0x20) = *(rcx_4 - 0x20)
    *(rax_8 - 0x10) = *(rcx_4 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
rdx_4[0x94] = rbp
rdx_4[0x95].d = r12
*(rdx_4 + 0x4ac) = r14_2
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_7[2]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, (i_1 + 0x18).d)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_7[2]

*(arg2 + 0x30) = rax_9
int64_t* rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b50
return sub_1405d1550(&var_28)
