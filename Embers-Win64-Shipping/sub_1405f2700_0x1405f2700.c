// 函数: sub_1405f2700
// 地址: 0x1405f2700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg1)
int32_t arg_c = arg2
char arg_8 = 1
int32_t zmm0

if (result.b == 2)
label_1405f273e:
    char rdx_1 = arg1[8]
    result = &arg1[8]
    arg_c = arg2
    arg_8 = 1
    
    if (rdx_1 == 2)
        result.b = 1
        return result
    
    zmm0 = *(result + 4)
    
    if (zmm0 f> arg2 || (not(arg2 f> zmm0) && rdx_1 == 1))
        goto label_1405f2779
    
    if (rdx_1 == 1)
        result = &arg_8
    label_1405f2779:
        
        if (*(arg1 + 0xc) f== *(result + 4))
            result.b = 1
            return result
else
    zmm0 = *(arg1 + 4)
    
    if (not(zmm0 f>= arg2))
        result = arg1
    label_1405f2738:
        
        if (not(zmm0 f!= *(result + 4)))
            goto label_1405f273e
    else if (arg2 f< zmm0)
        if (result.b == 1)
            result = &arg_8
            goto label_1405f2738
    else if (result.b == 1)
        result = arg1
        goto label_1405f2738
result.b = 0
return result
