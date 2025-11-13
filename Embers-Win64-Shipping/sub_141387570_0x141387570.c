// 函数: sub_141387570
// 地址: 0x141387570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = nullptr
void* rax = arg1[4]

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t r14_1 = rdx << 3
    int64_t* rbp_1 = *(arg1[5] + 0x10)
    int64_t rax_2 = rbp_1[3]
    
    if (*(r14_1 + rax_2) == 0)
        sub_1419ccf30(rbp_1, rdx.d)
        rax_2 = rbp_1[3]
    
    r9 = *(r14_1 + rax_2)

void*** rax_3 = sub_1413961e0(arg1[1], arg2, arg1[2], r9)
void var_4a8
memset(&var_4a8, 0, 0x480)
int64_t r8_1 = *arg1
int64_t var_28 = 0
sub_141384020(&var_4a8, &arg1[4], r8_1)
int64_t rbp_2 = 0
int64_t r12 = *(arg1[2] + 0x51e8)
void* rcx_5 = arg1[4]

if (rcx_5 != 0)
    int64_t rdx_3 = sx.q(*(rcx_5 + 0x10c))
    int64_t* rbx_1 = *(arg1[5] + 0x10)
    int64_t r14_2 = rdx_3 << 3
    int64_t rax_5 = rbx_1[3]
    
    if (*(r14_2 + rax_5) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_5 = rbx_1[3]
    
    rbp_2 = *(r14_2 + rax_5)

int32_t rsi_1 = arg1[3].d
void*** rdx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rdx_6[0x96]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rdx_6[0x96]

*(arg2 + 0x30) = rax_6
void* rcx_8 = &rdx_6[4]
void**** rax_7 = *(arg2 + 8)
int64_t i_1 = 9
*(arg2 + 0x14) += 1
*rax_7 = rdx_6
*(arg2 + 8) = &rdx_6[1]
rdx_6[1] = 0
*rdx_6 = &data_142f51dd0
void* rax_9 = &var_4a8
rdx_6[2] = rax_3
rdx_6[3] = r12
int64_t i

do
    rcx_8 += 0x80
    int128_t zmm0_1 = *rax_9
    rax_9 += 0x80
    *(rcx_8 - 0x80) = zmm0_1
    *(rcx_8 - 0x70) = *(rax_9 - 0x70)
    *(rcx_8 - 0x60) = *(rax_9 - 0x60)
    *(rcx_8 - 0x50) = *(rax_9 - 0x50)
    *(rcx_8 - 0x40) = *(rax_9 - 0x40)
    *(rcx_8 - 0x30) = *(rax_9 - 0x30)
    *(rcx_8 - 0x20) = *(rax_9 - 0x20)
    *(rcx_8 - 0x10) = *(rax_9 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
rdx_6[0x94] = rbp_2
rdx_6[0x95].d = rsi_1
*(rdx_6 + 0x4ac) = 1
return sub_1405d1550(&var_28)
