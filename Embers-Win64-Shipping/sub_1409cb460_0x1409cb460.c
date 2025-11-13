// 函数: sub_1409cb460
// 地址: 0x1409cb460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg2
char rax = 0
int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9 = *arg1
float zmm0

if (zmm5 f>= zmm9.d)
    zmm0 = *(arg1 + 0xc)
    
    if (zmm5 <= zmm0)
        zmm0 = (zx.o(0)).d
    label_1409cb4d1:
        zmm8 = arg2[1]
        float zmm4[0x4] = *(arg1 + 4)
        float zmm1[0x4]
        
        if (zmm8.d f>= zmm4[0])
            zmm1 = arg1[1].d
            
            if (zmm8.d f<= zmm1[0])
                zmm1 = zx.o(0)
            label_1409cb527:
                zmm7 = arg2[2]
                float zmm3 = *(arg1 + 8)
                float zmm2
                
                if (zmm7.d f>= zmm3)
                    zmm2 = *(arg1 + 0x14)
                    
                    if (zmm7.d f<= zmm2)
                        zmm2 = (zx.o(0)).d
                        
                        if (rax == 0)
                            return 1
                        
                        goto label_1409cb580
                    
                    if (not(zmm2 < arg3[2]))
                        zmm2 = (zmm2 f- zmm7.d) * arg5[2]
                        goto label_1409cb580
                else if (not(zmm3 > arg3[2]))
                    zmm2 = (zmm3 f- zmm7.d) * arg5[2]
                label_1409cb580:
                    float temp0_2[0x4] = _mm_max_ss(_mm_max_ss(zmm1[0], zmm0)[0], zmm2)
                    
                    if (not(temp0_2[0] < 0f) && not(temp0_2[0] > 1f))
                        temp0_2[0] = temp0_2[0] f* *arg4
                        zmm9.d = zmm9.d f- 0.100000001f
                        temp0_2[0] = temp0_2[0] + zmm5
                        zmm5 = temp0_2[0] f* arg4[1]
                        temp0_2[0] = temp0_2[0] f* arg4[2]
                        bool cond:4_1 = temp0_2[0] f<= zmm9.d
                        zmm5 = zmm5 f+ zmm8.d
                        temp0_2[0] = temp0_2[0] f+ zmm7.d
                        
                        if (not(cond:4_1) && not(temp0_2[0] >= *(arg1 + 0xc) + 0.100000001f))
                            zmm4[0] = zmm4[0] - 0.100000001f
                            
                            if (not(zmm5 <= zmm4[0]) && not(zmm5 >= arg1[1].d f+ 0.100000001f)
                                    && not(temp0_2[0] <= zmm3 - 0.100000001f)
                                    && temp0_2[0] < *(arg1 + 0x14) + 0.100000001f)
                                return 1
            else
                rax = 1
                
                if (not(zmm1[0] < arg3[1]))
                    zmm1[0] = zmm1[0] f- zmm8.d
                    zmm1[0] = zmm1[0] * arg5[1]
                    goto label_1409cb527
        else
            rax = 1
            
            if (not(zmm4[0] > arg3[1]))
                zmm1 = zmm4
                zmm1[0] = zmm1[0] f- zmm8.d
                zmm1[0] = zmm1[0] * arg5[1]
                goto label_1409cb527
    else
        rax = 1
        
        if (not(zmm0 < *arg3))
            zmm0 = (zmm0 - zmm5) * *arg5
            goto label_1409cb4d1
else
    rax = 1
    
    if (not(zmm9.d f> *arg3))
        zmm0 = (zmm9.d - zmm5) * *arg5
        goto label_1409cb4d1
return 0
