// 函数: sub_14264fae0
// 地址: 0x14264fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int64_t rbx = sx.q(arg4)
void* result
int64_t* result_1
int128_t zmm6

if ((*(arg1 + 0x140) & 1) == 0)
    result, zmm6 = sub_142656820(arg1)
    result_1 = result
else
    result_1 = arg1 + 0x130

int32_t i = result_1[1].d

if (i == 0 || rbx.d u> i)
    result.b = 0
else
    float rax = arg3[1].d
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    int128_t zmm12
    int128_t var_98_1 = zmm12
    int128_t zmm13
    int128_t var_a8_1 = zmm13
    int128_t zmm14
    int128_t var_b8_1 = zmm14
    int128_t zmm15
    int128_t var_c8_1 = zmm15
    int64_t var_130 = *arg3
    int32_t rax_1
    
    if (rbx.d s>= 0)
        rax_1 = result_1[1].d
    
    float var_120
    float var_110
    float var_100
    void var_f0
    void var_e0
    int32_t arg_8
    int64_t zmm0
    float zmm1
    int64_t zmm2
    float zmm3
    int64_t zmm4
    float zmm5
    
    if (rbx.d s>= 0 && rbx.d s< rax_1)
        int32_t rcx = (rbx - 1).d
        zmm10 = data_143dbb200
        zmm6 = zx.o(0)
        zmm9 = data_143dbb1fc
        zmm8 = data_143dbb1f8
        
        if (rcx s< 0 || rcx s>= rax_1)
            zmm5 = rax
            zmm4 = var_130:4.d
            zmm3 = var_130.d
        else
            int64_t rcx_1 = *result_1
            int64_t rax_3 = rbx << 5
            
            if (arg6 == 0)
                zmm4 = zmm8.q
                zmm5 = zmm9.d
                zmm7 = zmm10
            else
                zmm7 = *(arg6 + 8)
                zmm4 = (zx.o(0)).q
                zmm5 = (zx.o(0)).d
            
            zmm3 = (*(rax_3 + rcx_1 - 0x20) f- *(rax_3 + rcx_1 - 0x14)) * 0.5f f+
                *(rax_3 + rcx_1 - 0x14) f+ zmm4.d
            zmm4.d = (*(rax_3 + rcx_1 - 0x1c)).d f- *(rax_3 + rcx_1 - 0x10)
            zmm4.d = zmm4.d f* 0.5f
            zmm4.d = zmm4.d f+ *(rax_3 + rcx_1 - 0x10)
            zmm4.d = zmm4.d f+ zmm5
            var_130.d = zmm3
            var_130:4.d = zmm4.d
            zmm5 = (*(rax_3 + rcx_1 - 0x18) f- *(rax_3 + rcx_1 - 0xc)) * 0.5f f+
                *(rax_3 + rcx_1 - 0xc) f+ zmm7.d
            float var_128_2 = zmm5
        
        zmm7 = 0x3f800000
        
        while (rbx.d u< i)
            int128_t* rax_6 = (sx.q(rbx.d) << 5) + *result_1
            
            if (arg6 == 0)
                arg_8 = zmm10.d
                zmm14 = zmm8
                zmm15 = zmm9
            else
                zmm14 = zmm6
                arg_8 = (*(arg6 + 8)).d
                zmm15 = zmm6
            
            zmm1 = rax_6[1].d
            zmm2 = *(rax_6 + 0x14)
            zmm12.d = (*(rax_6 + 4)).d f- zmm1
            zmm11.d = (*rax_6).d f- *(rax_6 + 0xc)
            zmm13.d = (*(rax_6 + 8)).d f- zmm2.d
            zmm12.d = zmm12.d f* 0.5f
            zmm11.d = zmm11.d f* 0.5f
            zmm13.d = zmm13.d f* 0.5f
            zmm12.d = zmm12.d f+ zmm1
            zmm11.d = zmm11.d f+ *(rax_6 + 0xc)
            zmm13.d = zmm13.d f+ zmm2.d
            zmm12.d = zmm12.d f+ zmm15.d
            zmm11.d = zmm11.d f+ zmm14.d
            zmm13.d = zmm13.d f+ arg_8
            int32_t var_11c_1 = zmm12.d
            zmm2.d = zmm12.q.d f- zmm4.d
            var_120 = zmm11.d
            zmm1 = zmm11.d - zmm3
            int32_t var_118_1 = zmm13.d
            zmm0.d = zmm13.q.d f- zmm5
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm2.d = zmm2.d f+ zmm1 * zmm1
            zmm2.d = zmm2.d f+ zmm0.d
            
            if (not(zmm2.d f<= 9.99999994e-09f))
                zmm1 = zmm11.d - zmm3
                zmm3 = zmm13.d - zmm5
                zmm2.d = zmm12.q.d f- zmm4.d
                var_100 = zmm1
                float var_f8_1 = zmm3
                int32_t var_fc_1 = zmm2.d
                
                if (arg6 == 0)
                    if (zmm1 f== zmm6.d)
                        var_110 = 3.39999995e+38f
                    else
                        zmm0.d = zmm7.q.d f/ zmm1
                        var_110 = zmm0.d
                    
                    if (zmm2.d f== zmm6.d)
                        int32_t var_10c_2 = 0x7f7fc99e
                    else
                        zmm0.d = zmm7.q.d f/ zmm2.d
                        int32_t var_10c_1 = zmm0.d
                    
                    if (zmm3 f== zmm6.d)
                        int32_t var_108_2 = 0x7f7fc99e
                    else
                        zmm0.d = zmm7.q.d f/ zmm3
                        int32_t var_108_1 = zmm0.d
                    
                    char rax_8
                    rax_8, zmm6, zmm7, zmm8, zmm9 =
                        sub_1409cb460(arg2, &var_130, &var_120, &var_100, &var_110)
                    
                    if (rax_8 != 0)
                        goto label_14265007e
                else
                    int32_t var_138
                    char rax_7
                    rax_7, zmm6, zmm7 =
                        sub_140ad9790(arg2, &var_130, &var_120, arg6, &var_e0, &var_f0, &var_138)
                    
                    if (rax_7 != 0)
                    label_14265007e:
                        r12.b = 1
                        
                        if (arg5 != 0)
                            *arg5 = rbx.d
                        
                        goto label_14265001f
                    
                    zmm13 = var_118_1
                    zmm12 = var_11c_1
                    zmm11 = var_120
                    zmm10 = data_143dbb200
                    zmm9 = data_143dbb1fc
                    zmm8 = data_143dbb1f8
            
            rbx = zx.q(rbx.d + 1)
            zmm3 = zmm11.d
            var_130.d = zmm3
            zmm4 = zmm12.q
            var_130:4.d = zmm4.d
            zmm5 = zmm13.d
            float var_128_3 = zmm5
        
        if (arg6 != 0)
            zmm10 = *(arg6 + 8)
            zmm8 = zmm6
            zmm9 = zmm6
        
        int64_t rax_9 = *(arg1 + 0x28)
        int64_t rcx_5 = sx.q(*(arg1 + 0x30)) << 5
        zmm9.d = zmm9.d f+ *(rcx_5 + rax_9 - 0x1c)
        zmm10.d = zmm10.d f+ *(rcx_5 + rax_9 - 0x18)
        zmm8.d = zmm8.d f+ *(rcx_5 + rax_9 - 0x20)
        int32_t var_11c_2 = zmm9.d
        zmm9.d = zmm9.d f- zmm4.d
        int32_t var_118_2 = zmm10.d
        zmm10.d = zmm10.d f- zmm5
        var_120 = zmm8.d
        zmm0.d = zmm8.q.d f- zmm3
        zmm0.d = zmm0.d f* zmm0.d
        zmm1 = zmm9.d f* zmm9.d f+ zmm0.d
        zmm0.d = zmm10.q.d f* zmm10.d
        
        if (zmm1 f+ zmm0.d <= 9.99999994e-09f)
            goto label_14264ffc4
        
        int32_t var_fc_2 = zmm9.d
        zmm8.d = zmm8.d f- zmm3
        int32_t var_f8_2 = zmm10.d
        var_100 = zmm8.d
        
        if (arg6 == 0)
            if (zmm8.d f== zmm6.d)
                var_110 = 3.39999995e+38f
            else
                zmm0.d = zmm7.q.d f/ zmm8.d
                var_110 = zmm0.d
            
            if (zmm9.d f== zmm6.d)
                int32_t var_10c_4 = 0x7f7fc99e
            else
                zmm0.d = zmm7.q.d f/ zmm9.d
                int32_t var_10c_3 = zmm0.d
            
            if (zmm10.d f== zmm6.d)
                int32_t var_108_4 = 0x7f7fc99e
            else
                zmm7.d = zmm7.d f/ zmm10.d
                int32_t var_108_3 = zmm7.d
            
            if (sub_1409cb460(arg2, &var_130, &var_120, &var_100, &var_110) == 0)
                goto label_14264ffc4
        else if (sub_140ad9790(arg2, &var_130, &var_120, arg6, &var_f0, &var_e0, &arg_8) == 0)
            goto label_14264ffc4
        
        r12.b = 1
        
        if (arg5 != 0)
            *arg5 = i
    else if (rbx.d != i)
    label_14264ffc4:
        int64_t rcx_7 = *(arg1 + 0x28)
        int64_t rax_12 = sx.q(*(arg1 + 0x30)) << 5
        zmm0 = *(rax_12 + rcx_7 - 0x20)
        
        if (not(zmm0.d f<= *arg2) && not(zmm0.d f>= *(arg2 + 0xc)))
            zmm0 = *(rax_12 + rcx_7 - 0x1c)
            
            if (not(zmm0.d f<= *(arg2 + 4)) && not(zmm0.d f>= arg2[1].d))
                zmm0 = *(rax_12 + rcx_7 - 0x18)
                
                if (not(zmm0.d f<= *(arg2 + 8)) && not(zmm0.d f>= *(arg2 + 0x14)))
                    r12.b = 1
                    
                    if (arg5 != 0)
                        *arg5 = result_1[1].d
    else
        zmm5 = (zx.o(0)).d
        
        if (arg6 == 0)
            zmm2 = data_143dbb1f8
            zmm4 = data_143dbb200
            zmm3 = data_143dbb1fc
        else
            zmm4 = *(arg6 + 8)
            zmm2 = (zx.o(0)).q
            zmm3 = (zx.o(0)).d
        
        int64_t rax_16 = *(arg1 + 0x28)
        zmm6 = var_130.d
        int64_t rcx_11 = sx.q(*(arg1 + 0x30)) << 5
        zmm3 = zmm3 f+ *(rcx_11 + rax_16 - 0x1c)
        zmm4.d = zmm4.d f+ *(rcx_11 + rax_16 - 0x18)
        zmm2.d = zmm2.d f+ *(rcx_11 + rax_16 - 0x20)
        float var_11c_3 = zmm3
        zmm3 = zmm3 f- var_130:4.d
        int32_t var_118_3 = zmm4.d
        zmm4.d = zmm4.d f- rax
        zmm0.d = zmm2.d f- zmm6.d
        var_120 = zmm2.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm1 = zmm3 * zmm3 f+ zmm0.d
        zmm0.d = zmm4.d f* zmm4.d
        
        if (zmm1 f+ zmm0.d <= 9.99999994e-09f)
            goto label_14264ffc4
        
        float var_fc_3 = zmm3
        zmm2.d = zmm2.d f- zmm6.d
        int32_t var_f8_3 = zmm4.d
        var_100 = zmm2.d
        
        if (arg6 == 0)
            if (zmm2.d f== zmm5)
                var_110 = 3.39999995e+38f
            else
                zmm0.d = 1f f/ zmm2.d
                var_110 = zmm0.d
            
            if (zmm3 == zmm5)
                int32_t var_10c_6 = 0x7f7fc99e
            else
                zmm0.d = 1f / zmm3
                int32_t var_10c_5 = zmm0.d
            
            if (zmm4.d f== zmm5)
                int32_t var_108_6 = 0x7f7fc99e
            else
                float var_108_5 = 1f f/ zmm4.d
            
            if (sub_1409cb460(arg2, &var_130, &var_120, &var_100, &var_110) == 0)
                goto label_14264ffc4
        else if (sub_140ad9790(arg2, &var_130, &var_120, arg6, &var_f0, &var_e0, &arg_8) == 0)
            goto label_14264ffc4
        
        r12.b = 1
        
        if (arg5 != 0)
            *arg5 = result_1[1].d
label_14265001f:
    result = zx.q(r12.b)

return result
