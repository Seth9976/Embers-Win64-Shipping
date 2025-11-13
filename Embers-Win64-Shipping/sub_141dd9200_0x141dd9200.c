// 函数: sub_141dd9200
// 地址: 0x141dd9200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*arg2, 0).b == 0
int64_t rax
rax.b = arg2[1] != 0
rax.b |= r8

if (rax.b != 0)
    int64_t* i = *(arg1 + 0x6c0)
    int64_t r8_1 = sx.q(*(arg1 + 0x6c8))
    int128_t* rsi_2 = r8_1 << 5
    
    for (void* rdx = rsi_2 + i; i != rdx; i = &i[4])
        if (*i == *arg2)
            *i = *arg2
            *(i + 0x10) = *(arg2 + 0x10)
            return i
    
    int32_t rax_1 = (r8_1 + 1).d
    *(arg1 + 0x6c8) = rax_1
    
    if (rax_1 s> *(arg1 + 0x6cc))
        sub_1405c4e40(arg1 + 0x6c0)
    
    rax = *(arg1 + 0x6c0)
    *(rsi_2 + rax) = *arg2
    *(rsi_2 + rax + 0x10) = *(arg2 + 0x10)

return rax
