// 函数: sub_140a6db10
// 地址: 0x140a6db10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
int32_t rdi = rdx - 1

if (rdx == 0)
    rdi = -1

int32_t result = rdx - 1

if (rdx == 0)
    result = -1

if (rdx == 0)
    result = 0

if (result s<= 0)
    if ((*(arg2 + 8) & 1) == 0)
        *(arg2 + 8) &= 0x1f
        return result
    
    *(arg2 + 8) = 2
    return 2

if (rdx == 0)
    rdi = 0

int16_t* const rsi

if (rdx == 0)
    rsi = &data_142d40450
else
    rsi = *arg1

if (rdi s<= 0)
    if ((*(arg2 + 8) & 1) == 0)
        *(arg2 + 8) &= 0x1f
    else
        result = 2
        *(arg2 + 8) = 2
    
    return result

void* rax = sub_142a4a0b0(arg2, rdi + 1)
int64_t r14_1 = sx.q(rdi) * 2
memcpy(rax, rsi, r14_1.d)

if (arg3 != 0)
    *(r14_1 + rax) = 0

return sub_142a4a600(arg2, rdi)
