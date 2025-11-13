// 函数: sub_142abbb50
// 地址: 0x142abbb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg1
int32_t rax

if (rdi s< 0)
    rax.b = 0
    return rax

if (rdi == 0)
    int16_t rax_1 = *(arg2 + 8)
    
    if (rax_1 s< 0)
        int32_t rax_4
        rax_4.b = *(arg2 + 0xc) s> 0
        return rax_4
    
    int32_t rax_3
    rax_3.b = sx.d(rax_1) s>> 5 s> 0
    return rax_3

int32_t rsi = arg1[2]

if (rsi == 2)
    int16_t rax_5 = *(arg2 + 8)
    int32_t rax_7
    
    if (rax_5 s< 0)
        rax_7 = *(arg2 + 0xc)
    else
        rax_7 = sx.d(rax_5) s>> 5
    
    if (rdi == rax_7 - 1 && sub_142a4a1a0(arg2, rdi).w == 0x27)
        rax.b = 0
        return rax

if (rsi != 0)
    rax.b = 1
    return rax

int16_t rax_8 = *(arg2 + 8)
int32_t rax_10

if (rax_8 s< 0)
    rax_10 = *(arg2 + 0xc)
else
    rax_10 = sx.d(rax_8) s>> 5

rax_10.b = rdi s< rax_10
return rax_10
