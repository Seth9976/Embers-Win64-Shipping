// 函数: sub_1428d6410
// 地址: 0x1428d6410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r9 = *arg2
int64_t i_1 = sx.q(arg3 - 1)
uint8_t r11 = r9 u>> 7
int32_t result_1 = 0

if (arg3 - 1 s> 0)
    void* r8 = arg1
    result_1 = arg3 - 1
    int64_t i
    
    do
        uint8_t rcx = *(arg2 - arg1 + r8 + 1)
        r8 += 1
        uint8_t rax_1 = rcx u>> 7 | (r9 * 2)
        r9 = rcx
        *(r8 - 1) = rax_1
        i = i_1
        i_1 -= 1
    while (i != 1)

char rcx_1 = 0x1b

if (arg3 == 0x10)
    rcx_1 = -0x79

char* result = sx.q(result_1)
*(result + arg1) = (rcx_1 & neg.b(r11)) ^ (r9 * 2)
return result
