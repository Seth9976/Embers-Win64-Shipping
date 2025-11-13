// 函数: sub_141ac1a00
// 地址: 0x141ac1a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*(arg1 + 0xd0) = 0

if (*(arg1 + 0xd4) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0xc8, 0)

int32_t rbp = *(arg2 + 8)

if (rbp s<= 0)
    return 

do
    int32_t arg_8 = rbx
    int32_t arg_10
    sub_141ea4020(arg2, &arg_10, &arg_8)
    
    if (arg_10 == 0)
        int64_t rsi_1 = sx.q(*(arg1 + 0xd0))
        int32_t rax_1 = (rsi_1 + 1).d
        *(arg1 + 0xd0) = rax_1
        
        if (rax_1 s> *(arg1 + 0xd4))
            sub_1405a4cf0(arg1 + 0xc8)
        
        *(*(arg1 + 0xc8) + (rsi_1 << 2)) = arg_8
    
    rbx += 1
while (rbx s< rbp)
