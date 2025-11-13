// 函数: sub_141ce11b0
// 地址: 0x141ce11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0xe0)
int64_t r9 = 0
int32_t i = 0
int64_t rsi = sx.q(arg2) * 0x28
int32_t r8 = *(rsi + rdi + 8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8)

if ((temp1 - temp0) s>> 1 s> 0)
    int32_t* r11_1 = nullptr
    int32_t temp2_1
    int32_t temp3_1
    
    do
        int32_t r8_1 = r8 - i
        
        if (i != r8_1 - 1)
            int64_t rcx = *(rsi + rdi)
            int64_t rax_6 = sx.q(r8_1)
            int32_t rdx_2 = *(r11_1 + rcx)
            *(r11_1 + rcx) = *(rcx + (rax_6 << 2) - 4)
            *(rcx + (rax_6 << 2) - 4) = rdx_2
        
        r8 = *(rsi + rdi + 8)
        i += 1
        r11_1 = &r11_1[1]
        temp2_1:temp3_1 = sx.q(r8)
    while (i s< (temp3_1 - temp2_1) s>> 1)
    rdi = *(arg1 + 0xe0)

int32_t* r8_3 = *(rsi + rdi + 0x10)
uint64_t result = &r8_3[sx.q(*(rsi + rdi + 0x18))]
uint64_t r11_3 = sx.q(*(rsi + rdi + 0x18)) << 2 u>> 2

if (r8_3 u> result)
    r11_3 = 0

if (r11_3 != 0)
    do
        int32_t* rcx_3 = (sx.q(*r8_3) << 4) + *(arg1 + 0xa8)
        
        if (rcx_3 != &rcx_3[2])
            result = zx.q(*rcx_3)
            *rcx_3 = rcx_3[2]
            rcx_3[2] = result.d
        
        r8_3 = &r8_3[1]
        r9 += 1
    while (r9 != r11_3)

return result
