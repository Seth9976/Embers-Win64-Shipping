// 函数: sub_141f3cb70
// 地址: 0x141f3cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg2, 0)

for (void* i = *(arg1 + 0xc0); i != 0; i = *(i + 0xc0))
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_1 << 3)) = i
