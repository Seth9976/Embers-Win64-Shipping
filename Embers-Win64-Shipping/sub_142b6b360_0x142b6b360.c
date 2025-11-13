// 函数: sub_142b6b360
// 地址: 0x142b6b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t* rsi = arg5

if (*rsi s<= 0)
    int32_t* var_30_1 = rsi
    int64_t i = *(arg1 + 0x20)
    result = sub_142a84c20(*(arg1 + 8), arg1 + 0x20, *(arg1 + 0x28), arg2, arg3, 0, nullptr)
    
    if (*(arg1 + 0x30) != 0 && *(arg1 + 0x20) != i)
        do
            result = *(arg1 + 0x30)
            i += 1
            *result = arg4
            *(arg1 + 0x30) += 4
        while (*(arg1 + 0x20) != i)
    
    if (*rsi == 0xf)
        void* rdx_1 = *(arg1 + 8)
        arg5.d = 0
        result = sx.q(*(rdx_1 + 0x5b))
        void* rcx_2 = rdx_1 + 0x68 + result
        void* var_28 = rcx_2
        
        if (rcx_2 u< rdx_1 + 0x88)
            *(rdx_1 + 0x5b) = 0
            int64_t* var_30_2 = &arg5
            sub_142a84c20(*(arg1 + 8), &var_28, rdx_1 + 0x88, arg2, arg3, 0, nullptr)
            result = *(arg1 + 8)
            *(result + 0x5b) = var_28.b - *(arg1 + 8) - 0x68
        
        if (rcx_2 u>= rdx_1 + 0x88 || var_28 u>= rdx_1 + 0x88 || arg5.d == 0xf)
            *rsi = 5

return result
