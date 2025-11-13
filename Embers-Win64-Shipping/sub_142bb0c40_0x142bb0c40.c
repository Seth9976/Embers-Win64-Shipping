// 函数: sub_142bb0c40
// 地址: 0x142bb0c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x98)

if (*(arg2 + 8) != 0)
    int32_t i = 0
    
    if (*arg2 u> 0)
        do
            uint64_t rcx = zx.q(i) * 3
            uint64_t rdi_1 = rcx << 3
            sub_142b99980(rbp, *(*(arg2 + 8) + (rcx << 3) + 8))
            *(*(arg2 + 8) + rdi_1 + 8) = 0
            sub_142b99980(rbp, *(*(arg2 + 8) + rdi_1 + 0x10))
            i += 1
            *(*(arg2 + 8) + rdi_1 + 0x10) = 0
        while (i u< *arg2)
    
    sub_142b99980(rbp, *(arg2 + 8))
    *(arg2 + 8) = 0

if (*(arg2 + 0x18) == 0)
    return 

int32_t i_1 = 0

if (arg2[5] u> 0)
    do
        uint64_t rdi_2 = zx.q(i_1) << 3
        sub_142b99980(rbp, *(*(arg2 + 0x18) + rdi_2))
        i_1 += 1
        *(rdi_2 + *(arg2 + 0x18)) = 0
    while (i_1 u< arg2[5])

sub_142b99980(rbp, *(arg2 + 0x18))
*(arg2 + 0x18) = 0
