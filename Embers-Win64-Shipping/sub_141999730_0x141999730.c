// 函数: sub_141999730
// 地址: 0x141999730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg1[5] == arg2[5] && arg1[6] == arg2[6] && arg1[7] == arg2[7] && arg1[9].b == arg2[9].b
        && *(arg1 + 0x25) == *(arg2 + 0x25) && arg1[8] == arg2[8]
        && *(arg1 + 0x26) == *(arg2 + 0x26) && arg1[0xa].w == arg2[0xa].w && arg1[0xb] == arg2[0xb]
        && (arg1[0xc] & 0xffefffff) == (arg2[0xc] & 0xffefffff) && arg1[0xd] == arg2[0xd]
        && arg1[0xe].b == arg2[0xe].b && *(arg1 + 0x39) == *(arg2 + 0x39))
    result = *arg1
    
    if (result == *arg2)
        bool z_1
        
        if (result != 1)
            if (result != 2)
            label_141999822:
                
                if (arg1[0x12].b == arg2[0x12].b)
                    result.b = 1
                    return result
            else if (not(arg2[1] f!= arg1[1]))
                z_1 = arg1[2] == arg2[2]
            label_14199981c:
                
                if (z_1)
                    goto label_141999822
        else if (not(arg2[1] f!= arg1[1]) && not(arg2[2] f!= arg1[2]) && not(arg2[3] f!= arg1[3]))
            float zmm0 = arg2[4]
            float temp1_1 = arg1[4]
            zmm0 - temp1_1
            z_1 = zmm0 == temp1_1
            goto label_14199981c

result.b = 0
return result
