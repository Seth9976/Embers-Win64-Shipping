// 函数: sub_141ac0db0
// 地址: 0x141ac0db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xc8)

for (void* rdi = i + sx.q(*(arg1 + 0xd0)) * 0x28; i != rdi; i += 0x28)
    sub_141ea5640(i + 0x18, arg2)

int32_t result = *(arg1 + 0xd0)
int64_t rbx = sx.q(*(arg1 + 0xe0))

if (result s<= rbx.d)
    if (result s>= rbx.d || result == rbx.d)
        return result
    
    *(arg1 + 0xe0) = result
    return sub_140775970(arg1 + 0xd8)

*(arg1 + 0xe0) = result

if (result s> *(arg1 + 0xe4))
    sub_140638a00(arg1 + 0xd8)

return memset(*(arg1 + 0xd8) + rbx * 0xc, 0, sx.q(result - rbx.d) * 0xc)
