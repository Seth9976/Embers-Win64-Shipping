// 函数: sub_140edb000
// 地址: 0x140edb000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if ((arg2 == 0 || not(arg4 f< 0f)) && (arg3 == 0 || not(arg4 f> 0f)))
    float zmm1 = *arg1
    zmm1 - 0f
    bool cond:0_1 = zmm1 >= 0f
    
    if (zmm1 <= 0f)
        goto label_140edb027
    
    if (not(arg4 f< 0f))
        cond:0_1 = zmm1 >= 0f
    label_140edb027:
        
        if (cond:0_1 || arg4 f<= 0f)
            result.b = 0
            return result

result.b = 1
return result
