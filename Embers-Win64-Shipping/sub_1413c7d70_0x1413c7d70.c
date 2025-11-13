// 函数: sub_1413c7d70
// 地址: 0x1413c7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = *arg1
int64_t rsi = sx.q(*(rdi + 0xdc0))

if (rsi s> 0)
    int64_t rbx_1 = 0
    
    do
        sub_1413a4610(*(*(rdi + 0xdb8) + (rbx_1 << 3)))
        rbx_1 += 1
    while (rbx_1 s< rsi)

int64_t var_18 = *(rdi + 0xdb8)
int32_t var_10 = *(rdi + 0xdc0)
return sub_14138cc20(arg2, rdi, &var_18, 1)
