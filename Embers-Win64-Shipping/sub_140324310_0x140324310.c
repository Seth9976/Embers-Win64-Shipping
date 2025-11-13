// 函数: sub_140324310
// 地址: 0x140324310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(_mm_movemask_ps(*arg3))
int32_t r8_1
int64_t r9_1
float zmm0[0x4]

if (result.d != 0xf)
    if (arg2 s> 0)
        if (arg2 != 1)
            r8_1 = arg2 & 1
            result = arg1 + 0x40
            r9_1 = 0
            zmm0 = data_142d3f660
            
            do
                *(result - 0x40) = zmm0
                __builtin_memset(result - 0x30, 0, 0x20)
                *(result - 0x10) = zmm0
                r9_1 += 2
                __builtin_memset(result, 0, 0x20)
                result += 0x60
            while (arg2 - r8_1 != r9_1.d)
            
        label_1403243c4:
            
            if (r8_1 != 0)
                goto label_1403243cd
        else
        label_14032437f:
            r9_1 = 0
        label_1403243cd:
            result = r9_1 * 0x30
            *(arg1 + result) = data_142d3f660
            __builtin_memset(arg1 + result + 0x10, 0, 0x20)
else if (arg2 s> 0)
    if (arg2 == 1)
        goto label_14032437f
    
    r8_1 = arg2 & 1
    result = arg1 + 0x40
    r9_1 = 0
    zmm0 = data_142d3f660
    
    do
        *(result - 0x40) = zmm0
        __builtin_memset(result - 0x30, 0, 0x20)
        *(result - 0x10) = zmm0
        r9_1 += 2
        __builtin_memset(result, 0, 0x20)
        result += 0x60
    while (arg2 - r8_1 != r9_1.d)
    
    goto label_1403243c4
return result
