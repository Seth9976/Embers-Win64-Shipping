// 函数: sub_14058a370
// 地址: 0x14058a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[1]
int64_t rdx = *arg1
int64_t rcx_1 = rsi - rdx

if (arg2 u< rcx_1)
    arg1[1] = rdx + arg2
else if (arg2 u> rcx_1)
    if (arg2 u> arg1[2] - rdx)
        sub_14058bd40(arg1, arg2)
        return 
    
    uint64_t count = arg2 - rcx_1
    memset(rsi, 0, count)
    arg1[1] = count + rsi
