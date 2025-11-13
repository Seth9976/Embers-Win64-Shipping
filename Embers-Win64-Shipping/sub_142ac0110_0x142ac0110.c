// 函数: sub_142ac0110
// 地址: 0x142ac0110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 s< 0)
    result.b = 0
    return result

int32_t i = 0
arg1 = arg1 + arg1
bool cond:0_1

if (arg2 s< 0)
label_142ac01b6:
    cond:0_1 = i s> arg2
else
    int64_t zmm2 = 0x3ff0000000000000
    double zmm1 = 10.0
    
    if (arg2 + 1 s>= 8)
        do
            if (zmm2 f< arg1)
                goto label_142ac01b6_1
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 1 s> arg2
                return result
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 2 s> arg2
                return result
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 3 s> arg2
                return result
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 4 s> arg2
                return result
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 5 s> arg2
                return result
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 6 s> arg2
                return result
            
            arg1 = arg1 * zmm1
            
            if (zmm2 f< arg1)
                result.b = i + 7 s> arg2
                return result
            
            i += 8
            arg1 = arg1 * zmm1
        while (i s<= arg2 - 7)
    
    cond:0_1 = i s> arg2
    
    if (i s<= arg2)
        while (not(zmm2 f< arg1))
            i += 1
            arg1 = arg1 * zmm1
            
            if (i s> arg2)
                break
        
    label_142ac01b6_1:
        cond:0_1 = i s> arg2

result.b = cond:0_1
return result
