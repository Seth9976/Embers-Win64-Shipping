// 函数: sub_1407e8ce0
// 地址: 0x1407e8ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int32_t rsi_1 = *(rax + 0x24) + *(rax + 0x20)
int32_t rax_1 = *(arg1 + 0xd4)
*(arg1 + 0xd0) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405c5570(arg1 + 0xc8, 0)

int32_t rax_2 = *(arg1 + 0xd0)

if (rsi_1 s> rax_2)
    *(arg1 + 0xd0) = rsi_1
    
    if (rsi_1 s> *(arg1 + 0xd4))
        sub_1405a4d70(arg1 + 0xc8)
else if (rsi_1 s< rax_2 && rsi_1 != rax_2)
    *(arg1 + 0xd0) = rsi_1
    sub_1405c53d0(arg1 + 0xc8)

void* rcx_3 = *(arg1 + 0x10)
int32_t rsi_2 = 0
int32_t* result = *(rcx_3 + 0x10)
void* r12 = &result[sx.q(*(rcx_3 + 0x18)) * 0x12]

while (result != r12)
    int64_t r15_1 = sx.q(result[4])
    int32_t r11_1 = 0
    int64_t r14_1 = sx.q(result[0xc])
    int64_t r10_1 = 0
    
    if (r15_1.d s> 0)
        do
            int32_t r9_2 = *result + r11_1
            r11_1 += 1
            int32_t rdx_3 = *(*(result + 0x18) + (r10_1 << 2))
            r10_1 += 1
            *(*(arg1 + 0xc8) + (sx.q(rdx_3 + rsi_2) << 3)) =
                zx.q(r9_2 * *(arg1 + 0xb8)) + *(arg1 + 0x18)
        while (r10_1 s< r15_1)
    
    int32_t r11_2 = 0
    int64_t r10_2 = 0
    
    if (r14_1.d s> 0)
        do
            int32_t r9_6 = result[1] + r11_2
            r11_2 += 1
            int32_t rdx_5 = *(*(result + 0x38) + (r10_2 << 2))
            r10_2 += 1
            *(*(arg1 + 0xc8) + (sx.q(rdx_5 + rsi_2) << 3)) =
                zx.q(r9_6 * *(arg1 + 0xbc)) + *(arg1 + 0x28)
        while (r10_2 s< r14_1)
    
    result = &result[0x12]
    rsi_2 += (r14_1 + r15_1).d

return result
