// 函数: sub_142b969a0
// 地址: 0x142b969a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 8)
uint64_t rsi = zx.q(arg2)

if (arg2 u>= rbx)
    return 0x55

int64_t rax_1 = *(arg1 + 0x20)
uint32_t count

if (rax_1 == 0)
    count = rbx - rsi.d
    
    if (count u> arg4)
        count = arg4
    
    memcpy(arg3, rsi + *arg1, count)
else
    count = rax_1(arg5, zx.q(rsi.d))

int32_t rax_3 = count + rsi.d
*(arg1 + 0xc) = rax_3
return zx.q(sbb.d(rax_3, rax_3, count u< arg4)) & 0x55
