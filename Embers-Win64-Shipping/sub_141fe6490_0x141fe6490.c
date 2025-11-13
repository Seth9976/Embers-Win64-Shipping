// 函数: sub_141fe6490
// 地址: 0x141fe6490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *arg2

if (rbp == 0)
    return 0

int64_t* i = *(arg1 + 0x50)

for (void* rsi_1 = sx.q(*(arg1 + 0x58)) * 0x38 + i; i != rsi_1; i = &i[7])
    if (*i == rbp)
        int64_t rax_2 = sx.q(i[2].d)
        
        if (rax_2.d == arg2[2].d && memcmp(i[1], arg2[1], rax_2 << 3) == 0)
            return i[6]

return 0
