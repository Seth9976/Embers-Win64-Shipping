// 函数: sub_1428112f0
// 地址: 0x1428112f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg1[1].d)
int32_t i = 0

if (r10.d != 0)
    int64_t r11_1 = *arg1
    
    do
        if (*(r11_1 + zx.q(i) * 0x10) == arg2)
            uint64_t rax_7 = zx.q(i) * 2
            *(r11_1 + (rax_7 << 3) + 8) = arg3
            return rax_7
        
        i += 1
    while (i u< r10.d)

int32_t rax_4 = *(arg1 + 0xc) & 0x7fffffff
int64_t var_18 = arg2
int32_t var_10 = arg3

if (rax_4 u<= r10.d)
    return sub_142813710(arg1, &var_18)

uint64_t rax_9 = r10 << 4
int128_t* rax_10 = rax_9 + *arg1

if (rax_9 != neg.q(*arg1))
    *rax_10 = var_18.o

arg1[1].d += 1
return rax_10
