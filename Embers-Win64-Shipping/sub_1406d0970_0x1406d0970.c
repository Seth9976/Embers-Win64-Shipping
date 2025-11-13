// 函数: sub_1406d0970
// 地址: 0x1406d0970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0xc))
int32_t rsi = 0
arg2[1].d = 0

if (result.d s< 0)
    result = sub_1405dadb0(arg2, 0)

if (arg1 s>= 0)
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax = (rdi_1 + 1).d
        arg2[1].d = rax
        
        if (rax s> *(arg2 + 0xc))
            sub_1405a4cf0(arg2)
        
        result = *arg2
        *(result + (rdi_1 << 2)) = rsi
        rsi += 1
    while (rsi s<= arg1)

return result
