// 函数: sub_142c6f1b0
// 地址: 0x142c6f1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
uint64_t* result = sub_142c59600(&var_28)
int64_t r8 = *(arg1 + 0x3a8)
int128_t zmm6 = *result
*(arg1 + 0x8d8) = arg2

if (r8 s> 0)
    int128_t zmm0 = *(arg1 + 0x980)
    int64_t rcx_2 = arg2 - *(arg1 + 0x990)
    result = zmm0.q
    int128_t var_38 = zmm0
    
    if (result == 0 && var_38:8.d == result.d)
        *(arg1 + 0x980) = zmm6
        *(arg1 + 0x990) = arg2
    else if (rcx_2 s>= r8)
        var_38 = zmm0
        var_28 = zmm6
        int64_t temp0_1 = divs.dp.q(sx.o(rcx_2 * 0x3e8), r8)
        result = sub_142c595d0(&var_28, &var_38)
        
        if (result s>= temp0_1 || temp0_1.d == result.d)
            *(arg1 + 0x980) = zmm6
            *(arg1 + 0x990) = arg2

return result
