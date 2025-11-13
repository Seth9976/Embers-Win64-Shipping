// 函数: sub_142a3f0a0
// 地址: 0x142a3f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10

if (*(arg1 + 0x68) != 3)
    r10 = 1 << (*(arg1 + 0x58)).b
else
    r10 = *(arg1 + 0x40)

uint32_t rax = zx.d(*arg2)
void* result = zx.q(rax) * r10 + arg1

if (rax.b == 0)
    result += *(arg1 + 0x48)
    r10 -= *(arg1 + 0x48)
    
    if (arg3 != 0 && *(arg1 + 0x68) s<= 1)
        int64_t rax_3 = arg3 - modu.dp.q(0:result, arg3)
        
        if (rax_3 u< arg3)
            result += rax_3
            r10 -= rax_3

if (arg4 != 0)
    *arg4 = r10

return result
