// 函数: sub_140630f50
// 地址: 0x140630f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_5
int64_t zmm0

if (arg2 == 0)
    zmm0 = data_143dbb1f8.q
    rax_5 = data_143dbb200
else
    arg3.b = 1
    void* rax_2 = (*(*arg2 + 0x6a8))(arg2, arg4, arg3)
    
    if (rax_2 == 0)
        zmm0 = data_143dbb1f8.q
        rax_5 = data_143dbb200
    else if (sub_14221b2f0(rax_2) == 0)
        zmm0 = data_143dbb1f8.q
        rax_5 = data_143dbb200
    else
        int64_t var_28
        sub_142218cd0(rax_2, &var_28)
        void* rax_4 = arg2[0x15]
        
        if (rax_4 == 0)
            rax_4 = sub_141ee69e0(arg2)
        
        int32_t var_20
        
        if (arg5 != 0 && rax_4 != 0)
            zmm0 = var_28:4.d
            double zmm1 = var_20
            float zmm2 = var_28.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f* zmm1.d
            int16_t* var_18
            sub_140a31300(&var_18, _mm_cvtps_pd(_mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm0.d f+ zmm1.d)), 1)
            int16_t* rcx_5 = var_18
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
        
        zmm0 = var_28
        rax_5 = var_20

*arg1 = zmm0
arg1[1].d = rax_5
return arg1
