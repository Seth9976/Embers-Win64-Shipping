// 函数: sub_1417d1c10
// 地址: 0x1417d1c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x410) != 0)
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_1 << 3)) = *(arg1 + 0x410)

if (*(arg1 + 0x438) == 0)
    return 

int64_t rsi_2 = sx.q(arg2[1].d)
int32_t rax_2 = (rsi_2 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_2 << 3)) = *(arg1 + 0x438)
