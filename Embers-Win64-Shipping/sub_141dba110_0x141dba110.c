// 函数: sub_141dba110
// 地址: 0x141dba110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
char arg_8 = 0
void arg_18
int32_t* rax = sub_140946410(arg1 + 0x1a0, &arg_18, &arg_10, &arg_8)

if (arg_8 == 0)
    if ((*(arg2 + 0x88) & 0x10) != 0)
        sub_1405a7050(arg1 + 0x190, &arg_10)
    
    rax = sub_141ee7380(arg2)
    
    if (rax.b != 0)
        int64_t rsi_1 = sx.q(*(arg1 + 0x208))
        int32_t rax_1 = (rsi_1 + 1).d
        *(arg1 + 0x208) = rax_1
        
        if (rax_1 s> *(arg1 + 0x20c))
            sub_1405a4d70(arg1 + 0x200)
        
        int64_t rax_2 = *(arg1 + 0x200)
        *(rax_2 + (rsi_1 << 3)) = arg2
        return rax_2
    
    if (*(arg2 + 0x8c) == 3)
        int64_t rsi_2 = sx.q(*(arg1 + 0x1f8))
        int32_t rax_3 = (rsi_2 + 1).d
        *(arg1 + 0x1f8) = rax_3
        
        if (rax_3 s> *(arg1 + 0x1fc))
            sub_1405a4d70(arg1 + 0x1f0)
        
        rax = *(arg1 + 0x1f0)
        *(rax + (rsi_2 << 3)) = arg2

return rax
