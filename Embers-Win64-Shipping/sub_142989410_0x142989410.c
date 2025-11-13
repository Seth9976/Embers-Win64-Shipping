// 函数: sub_142989410
// 地址: 0x142989410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *arg1
float temp0 = *arg2
zmm0 - temp0
int64_t result

if (not(is_unordered.d(zmm0, temp0)) && not(zmm0 != temp0))
    zmm0 = arg1[1]
    float temp1_1 = arg2[1]
    zmm0 - temp1_1
    
    if (not(is_unordered.d(zmm0, temp1_1)) && not(zmm0 != temp1_1))
        zmm0 = arg1[2]
        float temp2_1 = arg2[2]
        zmm0 - temp2_1
        
        if (not(is_unordered.d(zmm0, temp2_1)) && not(zmm0 != temp2_1))
            zmm0 = arg1[3]
            float temp3_1 = arg2[3]
            zmm0 - temp3_1
            
            if (not(is_unordered.d(zmm0, temp3_1)) && not(zmm0 != temp3_1))
                zmm0 = arg1[4]
                float temp4_1 = arg2[4]
                zmm0 - temp4_1
                
                if (not(is_unordered.d(zmm0, temp4_1)) && not(zmm0 != temp4_1))
                    zmm0 = arg1[5]
                    float temp5_1 = arg2[5]
                    zmm0 - temp5_1
                    
                    if (not(is_unordered.d(zmm0, temp5_1)) && not(zmm0 != temp5_1))
                        result.b = 0
                        return result

result.b = 1
return result
