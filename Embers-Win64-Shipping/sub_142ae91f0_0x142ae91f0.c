// 函数: sub_142ae91f0
// 地址: 0x142ae91f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x48)
int64_t result_2 = arg2
uint64_t result

if (arg2 s< 0)
    result_2 = 0
else if (result_2 s>= *(arg1 + 0x10))
    result = *(arg1 + 0x70)
    
    if (result s< 0)
        int64_t result_1 = sx.q(*(arg1 + 0x10))
        int32_t rcx = (arg2 + 0x20).d
        result = result_1
        
        if (arg2 + 0x20 u> 0x7fffffff)
            rcx = 0x7fffffff
        
        int64_t rdx = sx.q(rcx)
        
        if (result_1 s< rdx)
            do
                if (*(r11 + (result << 1)) == 0)
                    int64_t result_3 = sx.q(result_1.d)
                    *(arg1 + 0x70) = result_3
                    *(arg1 + 0x2c) = result_1.d
                    *(arg1 + 0x1c) = result_1.d
                    
                    if (result_2 s< result_3)
                        if ((zx.d(*(r11 + (result_2 << 1))) & 0xfffffc00) == 0xdc00 && result_2 s> 0
                                && (zx.d(*(r11 + (result_2 << 1) - 2)) & 0xfffffc00) == 0xd800)
                            result_2 -= 1
                        
                        *(arg1 + 8) &= 0xfffffffd
                        *(arg1 + 0x10) = result_3
                    else
                        *(arg1 + 8) &= 0xfffffffd
                        result_2 = result_3
                        *(arg1 + 0x10) = result_3
                    
                    goto label_142ae937d
                
                result_1 = zx.q(result_1.d + 1)
                result += 1
            while (result s< rdx)
        
        if ((zx.d(*(r11 + (result_2 << 1))) & 0xfffffc00) == 0xdc00 && result_2 s> 0
                && (zx.d(*(r11 + (result_2 << 1) - 2)) & 0xfffffc00) == 0xd800)
            result_2 -= 1
        
        if (result_1.d != 0x7fffffff)
            int32_t rdx_1 = (result_1 - 1).d
            
            if ((zx.d(*(r11 + (sx.q(rdx_1) << 1))) & 0xfffffc00) != 0xd800)
                rdx_1 = result_1.d
            
            *(arg1 + 0x10) = sx.q(rdx_1)
            *(arg1 + 0x1c) = rdx_1
            *(arg1 + 0x2c) = rdx_1
        else
            *(arg1 + 0x70) = 0x7fffffff
            *(arg1 + 0x2c) = 0x7fffffff
            
            if (result_2 s> 0x7fffffff)
                result_2 = 0x7fffffff
            
            *(arg1 + 0x1c) = 0x7fffffff
            *(arg1 + 8) &= 0xfffffffd
            *(arg1 + 0x10) = 0x7fffffff
    else
        result_2 = result
else if ((zx.d(*(r11 + (arg2 << 1))) & 0xfffffc00) == 0xdc00 && result_2 s> 0
        && (zx.d(*(r11 + (arg2 << 1) - 2)) & 0xfffffc00) == 0xd800)
    result_2 -= 1

label_142ae937d:
*(arg1 + 0x28) = result_2.d

if (arg3 == 0)
    if (result_2 s> 0)
        result.b = 1
        return result
else if (result_2 s< *(arg1 + 0x10))
    result.b = 1
    return result

result.b = 0
return result
