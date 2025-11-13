// 函数: sub_14106a7f0
// 地址: 0x14106a7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t rsi = arg2[1].d
int64_t rbp = *arg2
arg1[1].d = rsi

if (rsi != 0)
    sub_1405a4c70(arg1, rsi, 0)
    memcpy(*arg1, rbp, rsi * 2)
else
    *(arg1 + 0xc) = rsi

arg1[2].b = arg2[2].b
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].b = arg2[3].b
*(arg1 + 0x19) = *(arg2 + 0x19)
arg1[4] = arg2[4]
arg1[6] = 0

if (arg1[4] != 0)
    void* rax_5 = arg2[6]
    void* rcx_1 = &arg2[8]
    
    if (rax_5 != 0)
        rcx_1 = rax_5
    
    (**rcx_1)(rcx_1)

arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
void* rax_9 = arg2[0xe]
arg1[0xe] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

return arg1
