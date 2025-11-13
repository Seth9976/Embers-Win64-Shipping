// 函数: sub_142b96390
// 地址: 0x142b96390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

int64_t* i = *(arg1 + 0x40)

if (i == 0 || rdi == 0)
    return 0x26

for (void* rsi = &i[sx.q(*(arg1 + 0x38))]; i u< rsi; i = &i[1])
    if (*i == rdi)
        int32_t rax_2
        rax_2, arg2 = sub_142b91f60(rdi, arg2.d)
        
        if (rax_2 != 0xe)
            *(arg1 + 0x88) = *i
            return 0

return 6
