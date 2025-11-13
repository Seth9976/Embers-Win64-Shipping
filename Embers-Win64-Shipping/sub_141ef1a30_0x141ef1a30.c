// 函数: sub_141ef1a30
// 地址: 0x141ef1a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
void* rdi = arg3
void* var_448 = arg3
float zmm6[0x4] = arg4
int64_t* rbx = *(arg1[0x29] + 0x258)
int64_t* var_438 = rbx
int64_t rax_4

if (rbx != 0)
    void* rax_3 = sub_14256a090()
    arg2 = rbx[2]
    arg3 = rax_3 + 0x30
    rax_4 = sx.q(*(rax_3 + 0x38))

int32_t* result

if (rbx == 0 || rax_4.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_4 << 3)) != arg3)
    var_438 = nullptr
label_141ef1adc:
    int64_t* result_1 = arg1[0x97]
    
    if (result_1 != 0)
    label_141ef1b08:
        float zmm0[0x4] = *(result_1 + 0xc)
        arg4 = arg1[0x9a].d
        int64_t* rbx_1 = arg1[0x29]
        
        if (not(zmm0[0] <= arg4[0]))
            zmm0[0] = zmm0[0] - arg4[0]
            int32_t i = 0
            *(result_1 + 0xc) = zmm0[0]
            
            if (result_1[4].d s> 0)
                int64_t rdx = 0
                
                do
                    rdx += 0x10
                    i += 1
                    void* rcx_2 = *(rdx + result_1[3] - 0x10)
                    *(rcx_2 + 0x18) |= 0x10
                while (i s< result_1[4].d)
            
            void* rax_8 = result_1[9]
            
            if (rax_8 != 0)
                *(rax_8 + 0x18) |= 0x10
            
            sub_141ffbbd0(&arg1[0x9b], arg1[0x9a].d[0])
        
        bool cond:1_1 = result_1[4].d s<= 0
        zmm0 = zmm6
        zmm0[0] = zmm0[0] f+ *(result_1 + 0xc)
        *(result_1 + 0xc) = zmm0[0]
        
        if (not(cond:1_1))
            void* r8 = *(result_1[3] + sx.q(result_1[4].d) * 0x10 - 0x10)
            
            if ((*(r8 + 0x18) & 0x10) == 0)
                zmm6 = zmm0
                zmm6[0] = zmm6[0] f- *(r8 + 0x1c)
        
        float zmm0_1[0x4] = sub_141dc5480(rbx_1, zmm0[0])
        bool cond:2_1 = result_1[9] == 0
        zmm0_1[0] = zmm0_1[0] f* *(result_1 + 0x12c)
        float temp0_1[0x4] = _mm_min_ss(zmm0_1[0], zmm6[0])
        float var_3f8_1[0x4] = zx.o(0)
        
        if (not(cond:2_1))
            int64_t i_1 = 0
            int32_t rax_11 = result_1[4].d - 1
            
            if (rax_11 s> 0)
                int64_t* rbx_2 = nullptr
                
                do
                    int64_t rsi_1 = result_1[3]
                    int64_t* rcx_5 = *(rbx_2 + rsi_1)
                    
                    if ((*(*rcx_5 + 0x20))(rcx_5, &result_1[9]) != 0)
                        var_3f8_1[0].q = *(rbx_2 + rsi_1)
                        void* rax_15 = *(rbx_2 + rsi_1 + 8)
                        var_3f8_1[2].q = rax_15
                        
                        if (rax_15 != 0)
                            *(rax_15 + 8) += 1
                        
                        int64_t* rbx_3 = _mm_bsrli_si128(zx.o(0), 8)[0].q
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp5_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        break
                    
                    i_1 += 1
                    rbx_2 = &rbx_2[2]
                while (i_1 s< sx.q(rax_11))
            
            rdi = var_448
        
        int64_t* var_428
        result = (*(*result_1 + 0x18))(result_1, &var_428)
        int64_t* r13_1 = var_428
        int64_t* rbx_9
        int64_t* var_420
        
        if (r13_1 == 0)
            rbx_9 = var_420
        else
            int64_t* result_2 = result_1
            (*(*r13_1 + 0x10))(r13_1, arg1[0x29], temp0_1, rdi, result_2)
            void* rax_20
            float zmm0_2[0x4]
            rax_20, zmm0_2 = sub_1405be820(arg1)
            int64_t* rsi_2 = result_1[7]
            int64_t* var_448_1 = rsi_2
            void* var_450
            int32_t var_408
            float var_400
            void var_3d8
            int64_t* rdi_2
            
            if (rsi_2 == 0)
                rdi_2 = var_438
            else
                int64_t rbx_4 = *rsi_2
                zmm0_2 = sub_141dc5440(arg1[0x29], rax_20)
                zmm0_2[0] = zmm0_2[0] f* *(result_1 + 0x12c)
                
                if ((*(rbx_4 + 0x38))(rsi_2, &var_428, arg1[0x29], zmm0_2) == 0)
                    rdi_2 = var_438
                else
                    void var_3e8
                    (*(*rsi_2 + 0x28))(rsi_2, &var_3e8)
                    
                    if (j_sub_140d3e110(&var_428[0x28]) != 0)
                        goto label_141ef1dee
                    
                    void* rsi_3 = arg1[0x29]
                    int64_t* rcx_16 = arg1[0x16]
                    int64_t rdi_1 = *arg1
                    void* rax_24 = *(rsi_3 + 0x290)
                    arg4 = *(rax_24 + 0x1e0)
                    float temp0_4[0x4] = _mm_min_ss(_mm_shuffle_ps(arg4, arg4, 0x55)[0], arg4[0])
                    float temp0_5[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
                    temp0_5[0] = temp0_5[0] f* *(rax_24 + 0x420)
                    temp0_4[0] = temp0_4[0] f* *(rax_24 + 0x424)
                    var_408 = 3
                    var_400 = temp0_5[0]
                    float var_404_1 = temp0_4[0]
                    int32_t rax_26 = (*(*rcx_16 + 0x4d8))(rcx_16)
                    float (* rax_27)[0x4]
                    rax_27, zmm0_2 = sub_140ade170(var_448_1 + 0xf4, &var_3d8)
                    var_450 = rsi_3
                    result_2 = &var_408
                    
                    if ((*(rdi_1 + 0x470))(arg1, &var_3e8, rax_27, zx.q(rax_26), result_2, var_450, 
                            var_448_1) != 0)
                        rdi_2 = var_438
                    else
                        rsi_2 = var_448_1
                    label_141ef1dee:
                        int64_t* rcx_20 = *(arg1[0x29] + 0x280)
                        var_448_1 = rcx_20
                        char var_3d0
                        
                        if (rcx_20 != 0)
                            var_3d0 = *(rcx_20 + 0x714)
                            *(rcx_20 + 0x714) = 1
                        
                        void var_3c8
                        sub_141f2db80(&var_3c8, arg1[0x16], 1, 1)
                        rdi_2 = var_438
                        result_2 = &var_3e8
                        (*(*r13_1 + 0x40))(r13_1, rsi_2, arg1[0x29], rdi_2, result_2, var_450, 
                            var_448_1)
                        
                        if (rdi_2 != 0)
                            int64_t* rax_33 = (*(*rdi_2 + 0x660))(rdi_2, &var_408)
                            int512_t zmm2_1
                            zmm2_1.o = r13_1[4].d
                            int64_t* zmm0_3 = *rax_33
                            int32_t var_430_1 = rax_33[1].d
                            int64_t rax_35 = *arg1[0x29]
                            var_438 = zmm0_3
                            (*(rax_35 + 0x6f0))(zmm0_3, &var_438, zmm2_1)
                        
                        (*(*arg1 + 0x618))(arg1)
                        (*(*r13_1 + 0x18))(r13_1, arg1[0x29])
                        
                        if (result_1[4].d s> 0)
                            int64_t r8_4 = result_1[3]
                            int64_t rdx_18 = sx.q(result_1[4].d) - 1
                            
                            if (*(r8_4 + rdx_18 * 0x10) == result_1[7])
                                int64_t rdx_19 = rdx_18 * 2
                                int64_t* rbx_6 = *(r8_4 + (rdx_19 << 3) + 8)
                                *(r8_4 + (rdx_19 << 3) + 8) = 0
                                *(r8_4 + (rdx_19 << 3)) = 0
                                sub_140dbae50(&result_1[3], result_1[4].d - 1, 1, 0)
                                
                                if (rbx_6 != 0)
                                    rbx_6[1].d -= 1
                                    
                                    if (rbx_6[1].d == 1)
                                        (**rbx_6)(rbx_6)
                                        int32_t temp11_1 = *(rbx_6 + 0xc)
                                        *(rbx_6 + 0xc) -= 1
                                        
                                        if (temp11_1 == 1)
                                            (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        (*(*result_1 + 0x10))(result_1, &result_1[7])
                        
                        if (&result_1[7] != &var_408)
                            result_1[7] = 0
                            int64_t* rbx_7 = result_1[8]
                            
                            if (rbx_7 != 0)
                                result_1[8] = 0.0
                                rbx_7[1].d -= 1
                                
                                if (rbx_7[1].d == 1)
                                    (**rbx_7)(rbx_7)
                                    int32_t temp10_1 = *(rbx_7 + 0xc)
                                    *(rbx_7 + 0xc) -= 1
                                    
                                    if (temp10_1 == 1)
                                        (*(*rbx_7 + 8))(rbx_7, 1)
                        
                        zmm0_2 = sub_141f2f2c0(&var_3c8)
                        
                        if (var_448_1 != 0)
                            *(var_448_1 + 0x714) = var_3d0
            
            (*(*arg1 + 0x6d0))(arg1)
            zmm6 = zmm0_2
            float rax_46
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (zmm6[0] >= 9.99999975e-05f)
                float zmm7[0x4] = *(r13_1 + 0x1ec)
                zmm2 = r13_1[0x3d].d
                arg4 = r13_1[0x3e].d
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                arg4[0] = arg4[0] * arg4[0]
                zmm2[0] = zmm2[0] + zmm7[0]
                zmm0_2 = zmm6
                zmm0_2[0] = zmm0_2[0] * zmm6[0]
                zmm2[0] = zmm2[0] + arg4[0]
                
                if (zmm2[0] <= zmm0_2[0])
                    arg4 = zx.o(r13_1[0x3d])
                    rax_46 = r13_1[0x3e].d
                else
                    zmm3 = zmm2
                    float temp0_8[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm3[0] * 0.5f
                    temp0_8[0] = temp0_8[0] * temp0_8[0]
                    zmm3[0] = zmm3[0] * temp0_8[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    temp0_8[0] = temp0_8[0] * zmm2[0]
                    temp0_8[0] = temp0_8[0] + temp0_8[0]
                    temp0_8[0] = temp0_8[0] * temp0_8[0]
                    zmm3[0] = zmm3[0] * temp0_8[0]
                    temp0_8[0] = temp0_8[0] * (0.5f - zmm3[0])
                    temp0_8[0] = temp0_8[0] + temp0_8[0]
                    zmm0_2 = zx.o(var_438)
                    temp0_8[0] = temp0_8[0] * zmm6[0]
                    zmm2 = temp0_8
                    temp0_8[0] = temp0_8[0] f* r13_1[0x3d].d
                    temp0_8[0] = temp0_8[0] f* r13_1[0x3e].d
                    zmm0_2[0] = temp0_8[0]
                    zmm2[0] = zmm2[0] * zmm7[0]
                    rax_46 = temp0_8[0]
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xe1)
                    temp0_9[0] = zmm2[0]
                    arg4 = _mm_shuffle_ps(temp0_9, temp0_9, 0xe1)
            else
                zmm0_2 = data_143dbb200
                zmm2 = data_143dbb1f8
                arg4 = zx.o(var_438)
                zmm3 = data_143dbb1fc
                arg4[0] = zmm2[0]
                rax_46 = zmm0_2[0]
                float temp0_6[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
                temp0_6[0] = zmm3[0]
                zmm0_2 = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
                arg4 = zmm0_2
            *(arg1 + 0x22c) = arg4.q
            *(arg1 + 0x234) = rax_46
            (*(*arg1 + 0x588))(arg1)
            void* rax_48 = arg1[0x29]
            *(arg1 + 0x28c) = zmm0_2[0]
            *(rax_48 + 0x3d0) = 0
            *(rax_48 + 0x3d4) = 0
            float zmm0_4[0x4] = sub_141ffd2b0(arg1[0x29] + 0x390)
            (*(*arg1 + 0x928))(arg1, r13_1[4].d, zmm2)
            (*(*r13_1 + 0x30))(r13_1, arg1[0x29], 0)
            
            if ((*(arg1[0x29] + 0x58) & 0x10) == 0)
                goto label_141ef22be
            
            int64_t rsi_4 = sx.q(result_1[4].d)
            int32_t rax_52 = (rsi_4 + 1).d
            result_1[4].d = rax_52
            
            if (rax_52 s> *(result_1 + 0x24))
                zmm0_4 = sub_1405a4f90(&result_1[3])
            
            void** rcx_46 = (rsi_4 << 4) + result_1[3]
            *rcx_46 = var_428
            rcx_46[1] = var_420
            
            if (var_420 != 0)
                var_420[1].d += 1
            
            char rax_56
            
            if (data_143a2d66c != 0)
                rax_56 = (*(*arg1 + 0x9a8))(arg1, &var_428)
            
            void* rbx_8
            
            if (data_143a2d66c == 0 || rax_56 == 0 || result_1[7] != 0)
                rbx_8 = rax_20
            label_141ef22a8:
                result_1[1].d = *(rbx_8 + 0x520)
                (*(*arg1 + 0x970))(arg1, r13_1, var_3f8_1[0].q)
            label_141ef22be:
                result = &var_3d8
                
                if (&result_1[7] == &var_3d8)
                    rbx_9 = var_420
                else
                    result_1[7] = 0
                    int64_t* rbx_10 = result_1[8]
                    
                    if (rbx_10 == 0)
                        rbx_9 = var_420
                    else
                        result_1[8] = 0.0
                        rbx_10[1].d -= 1
                        
                        if (rbx_10[1].d != 1)
                            rbx_9 = var_420
                        else
                            result = (**rbx_10)(rbx_10)
                            int32_t temp7_1 = *(rbx_10 + 0xc)
                            *(rbx_10 + 0xc) -= 1
                            
                            if (temp7_1 != 1)
                                rbx_9 = var_420
                            else
                                result = (*(*rbx_10 + 8))(rbx_10, 1)
                                rbx_9 = var_420
            else
                (*(*arg1 + 0x9b0))(arg1, rdi_2, result_1, &var_428, result_2, var_450, var_448_1)
                zmm6 = 0x3c088889
                
                if (not(zmm0_4[0] < 0.00833333377f))
                    zmm6 = __minss_xmmss_memss(zmm0_4[0], 0x3e4ccccd)
                
                rbx_8 = rax_20
                int64_t* rax_58
                float zmm0_5[0x4]
                rax_58, zmm0_5 = sub_142437e30(rbx_8, 0, 1)
                int64_t rdx_27 = *rax_58
                (*(rdx_27 + 0x638))(rax_58, rdx_27)
                arg4 = *(rbx_8 + 0x520)
                arg4[0] = arg4[0] f- result_1[1].d
                zmm0_5[0] = zmm0_5[0] * arg4[0]
                
                if (zmm0_5[0] >= zmm6[0])
                    goto label_141ef22a8
                
                arg4 = var_428.o
                var_408.o = arg4
                rbx_9 = _mm_bsrli_si128(arg4, 8)[0].q
                
                if (rbx_9 != 0)
                    rbx_9[1].d += 1
                    rbx_9 = var_420
                
                result = &var_408
                
                if (&var_408 != &result_1[7])
                    zmm0_5 = *(result_1 + 0x38)
                    *(result_1 + 0x38) = arg4
                    rbx_9 = var_420
                    var_408.o = zmm0_5
                
                int64_t* rdi_3 = var_400.q
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d != 1)
                        rbx_9 = var_420
                    else
                        result = (**rdi_3)(rdi_3)
                        int32_t temp13_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp13_1 != 1)
                            rbx_9 = var_420
                        else
                            result = (*(*rdi_3 + 8))(rdi_3, 1)
                            rbx_9 = var_420
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                result = (**rbx_9)(rbx_9)
                int32_t temp2_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_9 + 8))(rbx_9, 1)
        
        int64_t* rbx_11 = var_3f8_1[2].q
        
        if (rbx_11 != 0)
            rbx_11[1].d -= 1
            
            if (rbx_11[1].d == 1)
                result = (**rbx_11)(rbx_11)
                int32_t temp3_1 = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_11 + 8))(rbx_11, 1)
    else
        result = (*(arg1[0x28] + 0x28))(&arg1[0x28], arg2, arg3)
        arg1[0x97] = result
        result_1 = result
        
        if (result != 0)
            goto label_141ef1b08
else
    result = arg1[0x29]
    
    if (rbx[0x54] == result && rbx[0x53] != 0)
        goto label_141ef1adc

__security_check_cookie(rax_1 ^ &var_478)
return result
