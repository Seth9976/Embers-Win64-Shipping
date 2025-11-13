// 函数: sub_1426d9d70
// 地址: 0x1426d9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
void* r13 = arg2
int32_t* result = sub_140d3c6e0(arg2 + 0x34)

if (result != 0)
    int64_t* rcx_1 = rbx[0x12]
    uint64_t r8_1 = zx.q(*(r13 + 0x30))
    
    if (rcx_1 != 0)
        int64_t r9_1 = *rcx_1
        (*(r9_1 + 0x260))(rcx_1, result, r8_1, r9_1)
        rbx[0x11] = sub_140cdb8f0(*(rbx[0x12] + 0x10), rbx[0x13])
        r8_1 = zx.q(*(r13 + 0x30))
    
    int64_t* rcx_3 = rbx[0x19]
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x260))(rcx_3, result, r8_1)
        rbx[0x18] = sub_140cdb8f0(*(rbx[0x19] + 0x10), rbx[0x1a])
        r8_1 = zx.q(*(r13 + 0x30))
    
    int64_t* rcx_5 = rbx[0x2c]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x260))(rcx_5, result, r8_1)
        rbx[0x2b] = sub_140cdb8f0(*(rbx[0x2c] + 0x10), rbx[0x2d])
        r8_1 = zx.q(*(r13 + 0x30))
    
    int64_t* rcx_7 = rbx[0x36]
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x260))(rcx_7, result, r8_1)
        rbx[0x35] = sub_140cdb8f0(*(rbx[0x36] + 0x10), rbx[0x37])
        r8_1 = zx.q(*(r13 + 0x30))
    
    int64_t* rcx_9 = rbx[0x20]
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x260))(rcx_9, result, r8_1)
        rbx[0x1f] = sub_140cdb8f0(*(rbx[0x20] + 0x10), rbx[0x21])
    
    void* rax_14 = rbx[0x2b]
    int64_t rax_15
    
    if (rax_14 != 0)
        rax_15 = sx.q(*(rax_14 + 0x4c))
    
    uint128_t zmm6
    
    if (rax_14 == 0 || rax_15 == neg.q(rbx[0x2c]))
        zmm6 = rbx[0x30].d
    else
        zmm6 = *(rax_15 + rbx[0x2c])
    
    void* rax_17 = rbx[0x11]
    int64_t rax_18
    
    if (rax_17 != 0)
        rax_18 = sx.q(*(rax_17 + 0x4c))
    
    int128_t zmm7
    
    if (rax_17 == 0 || rax_18 == neg.q(rbx[0x12]))
        zmm7 = rbx[0x16].d
    else
        zmm7 = *(rax_18 + rbx[0x12])
    
    void* rax_20 = rbx[0x18]
    int64_t rax_21
    
    if (rax_20 != 0)
        rax_21 = sx.q(*(rax_20 + 0x4c))
    
    float zmm3
    
    if (rax_20 == 0 || rax_21 == neg.q(rbx[0x19]))
        zmm3 = rbx[0x1d].d
    else
        zmm3 = *(rax_21 + rbx[0x19])
    
    result = rbx[0x1f]
    int32_t rdi_1
    
    if (result == 0)
        rdi_1 = rbx[0x24].d
    else
        int64_t rax_23 = sx.q(result[0x13])
        result = rax_23 + rbx[0x20]
        
        if (rax_23 == neg.q(rbx[0x20]))
            rdi_1 = rbx[0x24].d
        else
            rdi_1 = *result
    
    int32_t arg_20 = rdi_1
    
    if (not(zmm6.d f<= 0f) && not(zmm6.d f> 360f) && not(zmm7.d f<= 0f))
        result = zx.q(rbx[0x25].b)
        
        if ((result.b != 0 || not(zmm3 <= 0f)) && (result.b != 1 || rdi_1 s> 0))
            uint128_t zmm0
            zmm0.d = zmm6.d f* 0.0174532924f
            rbx[0x31].d = zmm0.d
            
            if (result.b == 0)
                float zmm2 = zmm7.d f* zmm6.d * 0.0174532924f / zmm3
                zmm0.d = -0.5f - (zmm2 + zmm2)
                arg_20 = 1 - (int.d(zmm0.d) s>> 1)
                rdi_1 = 0 - (int.d(zmm0.d) s>> 1)
            label_1426da037:
                uint128_t zmm9
                zmm9.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(rdi_1)).d
                int64_t var_b8
                uint128_t zmm6_1
                zmm6_1.d = sub_1426cd040(rbx, &var_b8, r13).d f* -0.5f
                int32_t var_c8
                int32_t* rax_26
                float zmm7_1[0x4]
                rax_26, zmm7_1 = sub_140adf070(&var_b8, &var_c8, zmm6_1, &data_14399f678)
                int32_t rsi_1 = 0
                int64_t zmm1_1 = zmm7_1[0].q
                zmm7_1[0] = zmm7_1[0] f* rax_26[2]
                zmm7_1[0] = zmm7_1[0] f* *rax_26
                zmm1_1.d = zmm1_1.d f* rax_26[1]
                int32_t* result_3 = nullptr
                float var_c0_1 = zmm7_1[0]
                var_b8 = (_mm_unpacklo_ps(zmm7_1, zmm1_1)).q
                float var_b0_1 = var_c0_1
                int32_t var_90_1 = 0
                int64_t var_88_1 = 0
                int64_t var_80_1 = 0
                void* rdx_12
                
                if (rbx[0x32] == 0)
                    rdx_12 = nullptr
                else
                    void* rax_28 = sub_142736ba0()
                    
                    if (rax_28 == 0)
                        rdx_12 = nullptr
                    else
                        rdx_12 = rbx[0x32]
                        int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                        
                        if (rax_29.d s> *(rdx_12 + 0x38)
                                || *(*(rdx_12 + 0x30) + (rax_29 << 3)) != rax_28 + 0x30)
                            rdx_12 = nullptr
                
                int32_t zmm9_1
                result, zmm9_1 = sub_1426e7220(r13, rdx_12, &result_3)
                
                if (result.b != 0 && result_3 != 0)
                    result = sub_14273b6f0()
                    
                    if (result != 0)
                        int32_t* result_5 = result_3
                        result = sx.q(result[0xe])
                        
                        if (result.d s<= result_5[0xe])
                            int32_t* result_1 = result
                            result = *(result_5 + 0x30)
                            
                            if (*(result + (result_1 << 3)) == &result[0xc] && result_5 != 0)
                                void* rax_31 = sub_14273b020()
                                int32_t* result_2 = result_3
                                
                                if (result_2 == 0)
                                    result = nullptr
                                else
                                    void* rax_32 = sub_14273b6f0()
                                    result_2 = result_3
                                    
                                    if (rax_32 == 0)
                                        result = nullptr
                                    else
                                        int64_t rcx_16 = sx.q(*(rax_32 + 0x38))
                                        
                                        if (rcx_16.d s> result_2[0xe])
                                            result = nullptr
                                        else
                                            result = result_2
                                            
                                            if (*(*(result_2 + 0x30) + (rcx_16 << 3))
                                                    != rax_32 + 0x30)
                                                result = nullptr
                                
                                if (rax_31 != 0)
                                    int64_t rcx_17 = sx.q(*(rax_31 + 0x38))
                                    
                                    if (rcx_17.d s<= result[0xe])
                                        result = *(result + 0x30)
                                        
                                        if (*(result + (rcx_17 << 3)) == rax_31 + 0x30)
                                            int32_t* result_4
                                            
                                            if (result_2 == 0)
                                                result_4 = nullptr
                                            else
                                                void* rax_34 = sub_14273b6f0()
                                                result_2 = result_3
                                                
                                                if (rax_34 == 0)
                                                    result_4 = nullptr
                                                else
                                                    int64_t rax_35 = sx.q(*(rax_34 + 0x38))
                                                    
                                                    if (rax_35.d s> result_2[0xe])
                                                        result_4 = nullptr
                                                    else
                                                        result_4 = result_2
                                                        
                                                        if (*(*(result_2 + 0x30) + (rax_35 << 3))
                                                                != rax_34 + 0x30)
                                                            result_4 = nullptr
                                            
                                            int64_t* r14_1 = *(result_4 + 0x118)
                                            int64_t* var_d8 = r14_1
                                            
                                            if (r14_1 == 0)
                                                (*(*result_4 + 0x390))(result_4, result_2)
                                                r14_1 = *(result_4 + 0x118)
                                                result_2 = result_3
                                                var_d8 = r14_1
                                            
                                            int16_t rcx_27 = r14_1[5].w
                                            int64_t var_a8 = 0
                                            int64_t var_a0_1 = 0
                                            
                                            if (rbx[0x33].b != 0)
                                                int32_t* result_6
                                                
                                                if (result_2 == 0)
                                                    result_6 = nullptr
                                                else
                                                    void* rax_38 = sub_14273b6f0()
                                                    
                                                    if (rax_38 == 0)
                                                        result_6 = nullptr
                                                    else
                                                        result_6 = result_3
                                                        int64_t rax_39 = sx.q(*(rax_38 + 0x38))
                                                        
                                                        if (rax_39.d s> result_6[0xe] ||
                                                                *(*(result_6 + 0x30) + (rax_39 << 3))
                                                                != rax_38 + 0x30)
                                                            result_6 = nullptr
                                                
                                                int64_t* r12_1 = *(result_6 + 0x118)
                                                
                                                if (r12_1 != 0)
                                                label_1426da285:
                                                    void* rax_42 = sub_14273b0e0()
                                                    void* rdx_14 = r12_1[2]
                                                    int64_t rax_43 = sx.q(*(rax_42 + 0x38))
                                                    
                                                    if (rax_43.d s<= *(rdx_14 + 0x38)
                                                            && *(*(rdx_14 + 0x30) + (rax_43 << 3))
                                                            == rax_42 + 0x30)
                                                        int32_t r14_2 = 0
                                                        int64_t r15_1 = var_88_1
                                                        
                                                        if (var_90_1 s> 0)
                                                            do
                                                                int64_t rax_47 =
                                                                    (*(*r12_1 + 0x288))(r12_1, r15_1)
                                                                
                                                                if (rax_47 != 0)
                                                                    int64_t rdi_4 = sx.q(var_a0_1.d)
                                                                    int32_t rcx_24 = (rdi_4 + 1).d
                                                                    var_a0_1.d = rcx_24
                                                                    
                                                                    if (rcx_24 s> var_a0_1:4.d)
                                                                        sub_1405a4d70(&var_a8)
                                                                    
                                                                    *(var_a8 + (rdi_4 << 3)) = rax_47
                                                                
                                                                r15_1 += zx.q(rcx_27)
                                                                r14_2 += 1
                                                            while (r14_2 s< var_90_1)
                                                            
                                                            rbx = arg1
                                                            r13 = arg2
                                                        
                                                        r14_1 = var_d8
                                                else
                                                    (*(*result_6 + 0x390))(result_6)
                                                    r12_1 = *(result_6 + 0x118)
                                                    
                                                    if (r12_1 != 0)
                                                        goto label_1426da285
                                            
                                            result = rbx[0x35]
                                            int64_t rdi_5 = var_88_1
                                            float zmm6_2
                                            
                                            if (result == 0)
                                                zmm6_2 = rbx[0x3a].d
                                            else
                                                int64_t rax_49 = sx.q(result[0x13])
                                                result = rax_49 + rbx[0x36]
                                                
                                                if (rax_49 == neg.q(rbx[0x36]))
                                                    zmm6_2 = rbx[0x3a].d
                                                else
                                                    zmm6_2 = *result
                                            
                                            if (var_90_1 s> 0)
                                                do
                                                    int32_t* rax_51 =
                                                        (*(*r14_1 + 0x278))(r14_1, &var_d8, rdi_5)
                                                    float zmm2_2 = zmm6_2 f+ rax_51[2]
                                                    int32_t zmm1_2 = rax_51[1]
                                                    var_c8 = *rax_51
                                                    float var_c0_2 = zmm2_2
                                                    int32_t var_c4_1 = zmm1_2
                                                    result, zmm6_2, zmm9_1 = sub_1426da440(rbx, 
                                                        rdi_5, r14_1, &var_c8, &var_b8, &var_a8, 
                                                        arg_20, zmm9_1, r13)
                                                    rdi_5 += zx.q(rcx_27)
                                                    rsi_1 += 1
                                                while (rsi_1 s< var_90_1)
                                            
                                            int64_t rcx_30 = var_a8
                                            
                                            if (rcx_30 != 0)
                                                result = sub_140a74f90(rcx_30)
                
                if (var_88_1 != 0)
                    return sub_140a74f90(var_88_1)
            else if (zx.d(result.b) == 1)
                goto label_1426da037

return result
