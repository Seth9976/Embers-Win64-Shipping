// 函数: sub_1419fc1a0
// 地址: 0x1419fc1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
__builtin_memset(&arg1[2], 0, 0x20)
*arg1 = &data_14301edd0
arg1[6] = 0
arg1[7] = 0
void* rax = sub_1419edf30(arg2)

if (rax != 0)
    arg1[2] = *rax
    arg1[3] = *(rax + 8)
    arg1[4] = *(rax + 0x30)
    
    if (&arg1[6] != rax + 0x10)
        int32_t r8_1 = *(arg1 + 0x3c)
        int64_t rbp_1 = *(rax + 0x10)
        int64_t rsi_1 = sx.q(*(rax + 0x18))
        arg1[7].d = rsi_1.d
        
        if (rsi_1.d != 0 || r8_1 != 0)
            sub_1405a4be0(&arg1[6], rsi_1.d, r8_1)
            memcpy(arg1[6], rbp_1, (rsi_1 << 4).d)
        else
            *(arg1 + 0x3c) = 0

return arg1
