// 函数: sub_140a5b560
// 地址: 0x140a5b560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 8

if (arg3 u>= 0x10)
    rax = 0x10

if (rax u>= arg4)
    arg4 = rax

void* const result

if (arg2 == 0)
    uint64_t rsi_3 = zx.q(arg4)
    int64_t rax_2 = malloc(arg3 + 0x10 + rsi_3)
    result = nullptr
    
    if (rax_2 != 0)
        result = (rsi_3 + 0xf + rax_2) & neg.q(rsi_3)
        *(result - 8) = rax_2
        *(result - 0x10) = arg3
else
    if (arg3 == 0)
        free(*(arg2 - 8))
        return nullptr
    
    uint64_t rsi_1 = zx.q(arg4)
    int64_t rax_1 = malloc(arg3 + 0x10 + rsi_1)
    result = nullptr
    
    if (rax_1 != 0)
        result = (rsi_1 + 0xf + rax_1) & neg.q(rsi_1)
        *(result - 8) = rax_1
        *(result - 0x10) = arg3
    
    int64_t r8 = *(arg2 - 0x10)
    
    if (arg3 u<= r8)
        r8 = arg3
    
    memcpy(result, arg2, r8.d)
    free(*(arg2 - 8))

return result
