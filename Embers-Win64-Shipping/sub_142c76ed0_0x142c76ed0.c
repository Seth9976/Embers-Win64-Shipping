// 函数: sub_142c76ed0
// 地址: 0x142c76ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3f8) == 0)
    return 0x43

memset(arg1 + 0x698, 0, 0x50)
*(arg1 + 0x698) = 1
int64_t rax_1 = data_143ccb898(0x9000)
*(arg1 + 0x6c0) = rax_1

if (rax_1 == 0)
    return 0x1b

sub_142c65340(arg1, 0)
char* rax_3 = strchr(*(arg1 + 0x1f0), 0x2f)
char* rsi = rax_3
char* rax_4

if (rax_3 == 0)
    rax_4 = strchr(*(arg1 + 0x1f0), (&rax_3[0x5c]).d)
    rsi = rax_4

if (rax_3 != 0 || rax_4 != 0)
    *(arg1 + 0x6a0) = &rsi[1]
    int64_t rax_9 = data_143ccb8b0(*(arg1 + 0x1f0))
    *(arg1 + 0x6a8) = rax_9
    
    if (rax_9 != 0)
        *(rax_9 - *(arg1 + 0x1f0) + rsi) = 0
        return 0
else
    *(arg1 + 0x6a0) = *(arg1 + 0x1f0)
    int64_t rax_6 = data_143ccb8b0(*(arg1 + 0xd0))
    *(arg1 + 0x6a8) = rax_6
    
    if (rax_6 != 0)
        return 0

return 0x1b
