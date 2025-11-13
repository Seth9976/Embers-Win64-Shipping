// 函数: sub_14139a040
// 地址: 0x14139a040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(*(arg1 + 0x48) + 0x51e8)
void var_4a8
memset(&var_4a8, 0, 0x480)
int64_t r8 = *(arg1 + 0x38)
int64_t var_28 = 0
sub_1413842f0(&var_4a8, arg1 + 0x50, r8)
void* rax_1 = *(arg1 + 0x50)
int64_t rsi = 0

if (rax_1 != 0)
    int64_t rdx_1 = sx.q(*(rax_1 + 0x10c))
    int64_t rsi_1 = rdx_1 << 3
    int64_t* rbx_1 = *(*(arg1 + 0x58) + 0x10)
    int64_t rax_3 = rbx_1[3]
    
    if (*(rsi_1 + rax_3) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_3 = rbx_1[3]
    
    rsi = *(rsi_1 + rax_3)

int32_t r14 = *(arg1 + 0x64)
int32_t r15 = *(arg1 + 0x60)
void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_1 = *(*(arg1 + 0x48) + 0x51f0)
void* rax_5 = &rdx_4[0x96]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rdx_4[0x96]

*(arg2 + 0x30) = rax_5
void* rcx_4 = &rdx_4[4]
int64_t* rax_6 = *(arg2 + 8)
int64_t i_1 = 9
*(arg2 + 0x14) += 1
*rax_6 = rdx_4
*(arg2 + 8) = &rdx_4[1]
rdx_4[1] = 0
*rdx_4 = &data_142f51dd0
void* rax_8 = &var_4a8
rdx_4[2] = rdi_1
rdx_4[3] = r12
int64_t i

do
    rcx_4 += 0x80
    int128_t zmm0_1 = *rax_8
    rax_8 += 0x80
    *(rcx_4 - 0x80) = zmm0_1
    *(rcx_4 - 0x70) = *(rax_8 - 0x70)
    *(rcx_4 - 0x60) = *(rax_8 - 0x60)
    *(rcx_4 - 0x50) = *(rax_8 - 0x50)
    *(rcx_4 - 0x40) = *(rax_8 - 0x40)
    *(rcx_4 - 0x30) = *(rax_8 - 0x30)
    *(rcx_4 - 0x20) = *(rax_8 - 0x20)
    *(rcx_4 - 0x10) = *(rax_8 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
rdx_4[0x94] = rsi
rdx_4[0x95].d = r15
*(rdx_4 + 0x4ac) = r14
return sub_1405d1550(&var_28)
