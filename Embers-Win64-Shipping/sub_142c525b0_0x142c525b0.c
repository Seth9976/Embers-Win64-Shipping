// 函数: sub_142c525b0
// 地址: 0x142c525b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 3).d)

int64_t rax_1 = *(arg1 + 8)

if (rax_1 != 0)
    rax_1(0, 1, 2, *(arg1 + 0x18))

if (*(arg1 + 4) != 0)
    int64_t r9_2 = *(arg1 + 0x10)
    
    if (r9_2 != 0)
        r9_2(0, 1, *(arg1 + 0x18))
    
    return 2

sub_142c66fd0(arg1 + 0x20)
sub_142c58370(*(arg1 + 0x50))

if (*(arg1 + 0x58) != 0)
    int64_t i = 0
    
    if (*(arg1 + 0x60) u> 0)
        int64_t rsi_1 = 0
        
        do
            sub_142c5b860(*(arg1 + 0x58) + rsi_1)
            i += 1
            rsi_1 -= -0x80
        while (i u< *(arg1 + 0x60))
    
    data_143ccb8a0(*(arg1 + 0x58))

int64_t rax_3 = *(arg1 + 0x10)

if (rax_3 != 0)
    rax_3(0, 1, *(arg1 + 0x18))

data_143ccb8a0(arg1)
return 0
