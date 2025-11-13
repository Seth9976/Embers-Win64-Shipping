// 函数: sub_140ed8d70
// 地址: 0x140ed8d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(arg1[0x7e])
int32_t result

if (zmm0.q f!= 0.0 || arg1[0x86].b == 0)
    result.b = 0
else
    result.b = 1

if (arg4 != 0)
label_140ed8e2e:
    
    if (result.b == 0)
        int128_t zmm0_2
        int512_t zmm6_1
        zmm0_2, zmm6_1 = sub_140f75d80(arg1, zmm0.d)
        zmm6_1.o = zmm0_2
        int32_t zmm0_3
        int512_t zmm1_1
        int32_t zmm6_2
        int32_t zmm7_1
        zmm0_3, zmm1_1, zmm6_2, zmm7_1 = sub_140f76110(arg1, zmm0_2.d)
        void var_38
        sub_140f66450(&var_38, arg1[0x9b].d, zmm0_3, zmm6_2)
        uint128_t zmm0_4 = zx.o((*(*arg1 + 0x268))(arg1))
        int64_t rax_4 = *arg1
        zmm0_4.d = _mm_cvtepi32_ps(zmm0_4).d f* zmm7_1
        int32_t var_34
        zmm0_4.d = zmm0_4.d f/ var_34
        zmm0_4.q = _mm_cvtps_pd(zmm0_4.q).q f+ arg1[0x7e]
        zmm1_1.o = _mm_cvtpd_ps(zmm0_4)
        return (*(rax_4 + 0x258))(arg1, zmm1_1)
else
    if ((zmm0.q f!= 0.0 || not(arg3.d f< 0f)) && (arg1[0x86].b == 0 || not(arg3.d f> 0f)))
        zmm0 = arg1[0x9c].d
        zmm0.d f- 0f
        bool cond:1_1 = zmm0.d f>= 0f
        
        if (zmm0.d f<= 0f)
            goto label_140ed8de8
        
        if (not(arg3.d f< 0f))
            cond:1_1 = zmm0.d f>= 0f
        label_140ed8de8:
            
            if (cond:1_1 || arg3.d f<= 0f)
                goto label_140ed8e2e
    
    result = (*(*arg1 + 0x268))(zmm0)
    int128_t zmm7
    zmm7.d = arg3.d f/ _mm_cvtepi32_ps(zx.o(result)).d
    
    if (not(sub_140ed8eb0(&arg1[0x9c], arg2, zmm7.d).d f== 0f))
        result = (*(*arg1 + 0x240))(arg1)

return result
