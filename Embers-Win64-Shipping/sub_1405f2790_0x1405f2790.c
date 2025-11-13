// 函数: sub_1405f2790
// 地址: 0x1405f2790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 8))
        break
    
    result = (sx.q(i) << 4) + *arg1
    int32_t arg_c = arg2
    char arg_8 = 1
    char rcx = *result
    int32_t zmm0
    
    if (rcx == 2)
    label_1405f27f2:
        char r8_1 = result[8]
        void* rcx_1 = &result[8]
        int32_t arg_1c = arg2
        char arg_18 = 1
        
        if (r8_1 == 2)
            result.b = 1
            return result
        
        zmm0 = *(rcx_1 + 4)
        
        if (zmm0 f> arg2 || (not(arg2 f> zmm0) && r8_1 == 1))
            goto label_1405f2831
        
        if (r8_1 == 1)
            rcx_1 = &arg_18
        label_1405f2831:
            
            if (*(result + 0xc) f== *(rcx_1 + 4))
                result.b = 1
                return result
    else
        zmm0 = *(result + 4)
        char* result_1
        
        if (not(zmm0 f>= arg2))
            result_1 = result
        label_1405f27ec:
            
            if (not(zmm0 f!= *(result_1 + 4)))
                goto label_1405f27f2
        else if (arg2 f< zmm0)
            if (rcx == 1)
                result_1 = &arg_8
                goto label_1405f27ec
        else if (rcx == 1)
            result_1 = result
            goto label_1405f27ec

result.b = 0
return result
