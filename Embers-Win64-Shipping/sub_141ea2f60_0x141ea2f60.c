// 函数: sub_141ea2f60
// 地址: 0x141ea2f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5570(arg2, 0)

uint64_t result

for (; i != 0; i = *(i + 0x40))
    void* rax = sub_14247bf70()
    void* rdx = *(i + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        break
    
    if (*(*(rdx + 0x30) + (result << 3)) != rax + 0x30)
        break
    
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_1 << 3)) = i

result.b = 1
return result
