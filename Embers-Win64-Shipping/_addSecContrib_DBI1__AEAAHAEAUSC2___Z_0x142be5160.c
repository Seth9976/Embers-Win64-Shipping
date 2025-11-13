// 函数: ?addSecContrib@DBI1@@AEAAHAEAUSC2@@@Z
// 地址: 0x142be5160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x90)
void* i = *(arg1 + 0x1e8)
int64_t rsi = *(result + 0x10)

if (i != 0)
    for (void* rbp_1 = i + zx.q(*(arg1 + 0x1dc)) * 0x18; i u< rbp_1; i += 0x18)
        sub_142b99980(rsi, *(i + 0x10))
        *(i + 0x10) = 0
    
    result = sub_142b99980(rsi, *(arg1 + 0x1e8))
    *(arg1 + 0x1e8) = 0

void* i_1 = *(arg1 + 0x1f8)

if (i_1 != 0)
    for (void* rbp_4 = (zx.q(*(arg1 + 0x1f0)) << 4) + i_1; i_1 u< rbp_4; i_1 += 0x10)
        sub_142b99980(rsi, *(i_1 + 8))
        *(i_1 + 8) = 0
    
    result = sub_142b99980(rsi, *(arg1 + 0x1f8))
    *(arg1 + 0x1f8) = 0

*(arg1 + 0x1dc) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x1d8) = 0
return result
