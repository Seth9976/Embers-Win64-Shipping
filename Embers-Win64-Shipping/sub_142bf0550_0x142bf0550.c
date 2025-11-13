// 函数: sub_142bf0550
// 地址: 0x142bf0550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rsi_1 = arg1[0x11]
sub_142b99980(rsi_1, *arg1)
void* rcx_1 = arg1[0xf]
*arg1 = 0

if (rcx_1 != 0)
    sub_142b992d0(rcx_1, rsi_1)
    sub_142b99980(rsi_1, arg1[0xf])
    arg1[0xf] = 0

sub_142b99980(rsi_1, arg1[0xd])
int32_t i = 0
arg1[0xd] = 0

if (arg1[0xb].d u> 0)
    do
        int64_t rax_2 = arg1[0xc]
        uint64_t rbp_1 = zx.q(i) * 0x18
        
        if (*(rax_2 + rbp_1 + 8) == 1)
            sub_142b99980(rsi_1, *(rax_2 + rbp_1 + 0x10))
            *(arg1[0xc] + rbp_1 + 0x10) = 0
        
        i += 1
    while (i u< arg1[0xb].d)

sub_142b99980(rsi_1, arg1[0xc])
int32_t i_1 = 0
int64_t* rdi_1 = arg1[8]
arg1[0xc] = 0

if (arg1[7].d u> 0)
    do
        sub_142b99980(rsi_1, *rdi_1)
        int64_t rdx_8 = rdi_1[4]
        *rdi_1 = 0
        sub_142b99980(rsi_1, rdx_8)
        rdi_1[4] = 0
        rdi_1 = &rdi_1[6]
        i_1 += 1
    while (i_1 u< arg1[7].d)

int32_t i_2 = 0
int64_t* rdi_2 = arg1[0xa]

if (*(arg1 + 0x4c) u> 0)
    do
        sub_142b99980(rsi_1, *rdi_2)
        int64_t rdx_10 = rdi_2[4]
        *rdi_2 = 0
        sub_142b99980(rsi_1, rdx_10)
        rdi_2[4] = 0
        rdi_2 = &rdi_2[6]
        i_2 += 1
    while (i_2 u< *(arg1 + 0x4c))

sub_142b99980(rsi_1, arg1[8])
int64_t rdx_12 = arg1[0xa]
arg1[8] = 0
sub_142b99980(rsi_1, rdx_12)
arg1[0xa] = 0
sub_142b992d0(&arg1[0x14], rsi_1)
int32_t i_3 = 0
int64_t* rdi_3 = arg1[0x12]

if (arg1[0x13].d u> 0)
    do
        sub_142b99980(rsi_1, *rdi_3)
        bool cond:0_1 = rdi_3[1].d != 1
        *rdi_3 = 0
        
        if (not(cond:0_1))
            sub_142b99980(rsi_1, rdi_3[2])
            rdi_3[2] = 0
        
        i_3 += 1
        rdi_3 = &rdi_3[3]
    while (i_3 u< arg1[0x13].d)

sub_142b99980(rsi_1, arg1[0x12])
arg1[0x12] = 0
