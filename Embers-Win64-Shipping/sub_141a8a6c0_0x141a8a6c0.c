// 函数: sub_141a8a6c0
// 地址: 0x141a8a6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
zmm9.q = fconvert.d(arg1.d)
int32_t result

if (_isnan(zmm9.q) != 0)
    result.b = 0
else
    zmm8.q = fconvert.d(arg2.d)
    
    if (_isnan(zmm8.q) != 0)
        result.b = 0
    else if (_finite(zmm9.q) == 0)
    label_141a8a785:
        
        if (arg1.d f!= arg2.d)
            result.b = 0
        else
            result.b = 1
    else
        if (_finite(zmm8.q) == 0)
            goto label_141a8a785
        
        int32_t arg_8 = arg1.d
        int32_t arg_20 = arg2.d
        int32_t r8_2
        
        if (arg_8 s>= 0)
            r8_2 = arg_8 | 0x80000000
        else
            r8_2 = not.d(arg_8) + 1
        
        int32_t rdx_3
        
        if (arg_20 s>= 0)
            rdx_3 = arg_20 | 0x80000000
        else
            rdx_3 = not.d(arg_20) + 1
        
        result = r8_2 - rdx_3
        
        if (r8_2 u< rdx_3)
            result = rdx_3 - r8_2
        
        result.b = result u<= arg3

return result
