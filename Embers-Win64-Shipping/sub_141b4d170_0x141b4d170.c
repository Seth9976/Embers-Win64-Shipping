// 函数: sub_141b4d170
// 地址: 0x141b4d170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x98)
int64_t rsi = sx.q(arg3)

if (*(rbp + 0x248) s<= rsi.d)
    int32_t rax_1 = (rsi + 1).d
    int64_t rbx_1 = sx.q(*(rbp + 0x248))
    
    if (rax_1 s> rbx_1.d)
        *(rbp + 0x248) = rax_1
        
        if (rax_1 s> *(rbp + 0x24c))
            sub_1405a4d70(rbp + 0x240)
        
        memset(*(rbp + 0x240) + (rbx_1 << 3), 0, sx.q(rax_1 - rbx_1.d) << 3)
    else if (rax_1 s< rbx_1.d && rax_1 != rbx_1.d)
        *(rbp + 0x248) = rax_1
        sub_1405c53d0(rbp + 0x240)

int64_t result = *(rbp + 0x240)
*(result + (rsi << 3)) = arg2
return result
