// 函数: sub_141bf5a10
// 地址: 0x141bf5a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
uint64_t result = __security_cookie ^ &var_268
uint64_t result_1 = result

if (data_143e29f28 != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    int64_t r15_1 = 0
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        if (arg1[0x86].b == 1)
            result = sub_141bf4060(arg1)
        else
            int64_t* rcx_4 = arg1[0x94]
            int64_t* rdi
            int64_t* arg_18 = rdi
            int64_t* r13_1 = nullptr
            int64_t* r14_1 = nullptr
            char var_238
            int64_t* var_230
            int64_t* var_228
            void** (* var_208)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
            
            if (rcx_4 != 0)
                var_238 = 0
                char* var_200_1 = &var_238
                var_208 = sub_141b970e0
                arg2 = sub_141befea0(rcx_4, &var_230, &var_208)
                
                if (var_228 != 0)
                    var_228[1].d += 1
                
                r13_1 = var_230
                
                if (var_228 != 0)
                    var_228[1].d -= 1
                    r14_1 = var_228
                    
                    if (var_228[1].d == 1)
                        (**var_228)(var_228)
                        int32_t temp3_1 = *(var_228 + 0xc)
                        *(var_228 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_228 + 8))(var_228, 1)
            
            var_238 = 0
            void* rcx_7 = arg1[0xa5]
            
            if (rcx_7 == 0)
                sub_141bf4840(arg1, arg2)
                int64_t rax_12 = arg1[0x8b]
                uint128_t zmm7_1 = _mm_cvtepi32_ps(zx.o(rax_12.d))
                uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o((rax_12 u>> 0x20).d))
                void var_1f8
                int64_t* rax_14 = sub_1418aefd0(&var_1f8)
                rax_14[0x34].d = zmm7_1.d
                *(rax_14 + 0x1a4) = zmm6_1.d
                void*** rax_15 = sub_1418aed60()
                void* var_220 = &rax_15[2]
                sub_140918950(&var_220, &rax_15[2])
                int64_t var_248_1 = 0xa90
                char* var_210_1 = &var_238
                int64_t** rax_16 = sub_1418aff10(&var_220, &var_230, rax_14, 
                    sub_140e23ed0(&rax_15[2], "SVirtualWindow"))
                int64_t* rbx_3 = rax_16[1]
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                if (&arg1[0xa5] == &var_208)
                label_141bf5c67:
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp7_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                else
                    arg1[0xa5] = *rax_16
                    rdi = arg1[0xa6]
                    
                    if (rbx_3 == rdi)
                        goto label_141bf5c67
                    
                    arg1[0xa6] = rbx_3
                    
                    if (rdi != 0)
                        rdi[1].d -= 1
                        
                        if (rdi[1].d == 1)
                            (**rdi)(rdi)
                            int32_t temp14_1 = *(rdi + 0xc)
                            *(rdi + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*rdi + 8))(rdi, 1)
                
                if (var_228 != 0)
                    var_228[1].d -= 1
                    
                    if (var_228[1].d == 1)
                        (**var_228)(var_228)
                        int32_t temp13_1 = *(var_228 + 0xc)
                        *(var_228 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*var_228 + 8))(var_228, 1)
                
                if (rax_15 != 0)
                    rax_15[1].d -= 1
                    
                    if (rax_15[1].d == 1)
                        (**rax_15)(rax_15)
                        int32_t temp19_1 = *(rax_15 + 0xc)
                        *(rax_15 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*rax_15)[1](rax_15, 1)
                
                sub_140ddea30(&var_1f8)
                sub_140f8bfd0(arg1[0xa5], *(arg1 + 0x46d))
                char rax_24 = data_1439ae520
                
                if (zx.d(*(arg1 + 0x46e)) == 0)
                    rax_24 = data_1439ae51c
                
                var_220.b = rax_24
                var_220:1.b = 1
                int64_t var_218_2 = 0
                var_210_1.d = 0
                sub_140e253b0(arg1[0xa5], &var_220)
                sub_141bd8ec0(arg1)
                rcx_7 = arg1[0xa5]
                var_238 = 1
            
            int64_t rax_25 = arg1[0x8b]
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_25.d))
            arg2.o = zx.o((rax_25 u>> 0x20).d)
            arg2.o = _mm_cvtepi32_ps(arg2.o)
            zmm1 = _mm_unpacklo_ps(zmm1, arg2.q)
            result = sub_140e21d50(rcx_7, zmm1.q, arg2.o, zmm1.d)
            int64_t* rbx_6 = arg1[0x98]
            rdi.b = 0
            char r15_2
            
            if (r13_1 == 0)
                int64_t r13_2 = arg1[0x95]
                
                if (r13_2 == 0)
                    if (rbx_6 != 0)
                        int32_t rax_36 = rbx_6[1].d
                        
                        if (rax_36 != 0)
                            rbx_6[1].d = rax_36 + 1
                            rax_36.b = 1
                        
                        if (rax_36.b == 0)
                            rbx_6 = nullptr
                        
                        if (rbx_6 != 0)
                            r15_1 = arg1[0x97]
                    
                    r15_1.b = r15_1 != data_143e244b0
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp9_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    if (r15_1.b != 0)
                        arg1[0x97] = data_143e244b0
                        void* rbx_8 = data_143e244b8
                        int64_t* rcx_35 = arg1[0x98]
                        
                        if (rbx_8 != rcx_35)
                            if (rbx_8 != 0)
                                *(rbx_8 + 0xc) += 1
                                rcx_35 = arg1[0x98]
                            
                            if (rcx_35 != 0)
                                int32_t temp22_1 = *(rcx_35 + 0xc)
                                *(rcx_35 + 0xc) -= 1
                                
                                if (temp22_1 == 1)
                                    (*(*rcx_35 + 8))(rcx_35, 1)
                            
                            arg1[0x98] = rbx_8
                        
                        arg1[0xa9].b = 0
                        rdi.b = 1
                    
                    var_230 = data_143e244b0
                    void* rax_42 = data_143e244b8
                    void* var_228_3 = rax_42
                    
                    if (rax_42 != 0)
                        *(rax_42 + 8) += 1
                    
                    result = sub_140e23de0(arg1[0xa5], &var_230)
                    r15_2 = var_238
                    goto label_141bf6013
                
                if (rbx_6 != 0)
                    result = zx.q(rbx_6[1].d)
                    
                    if (result.d != 0)
                        rbx_6[1].d = result.d + 1
                        result.b = 1
                    
                    if (result.b == 0)
                        rbx_6 = nullptr
                    
                    if (rbx_6 != 0)
                        r15_1 = arg1[0x97]
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            result = (**rbx_6)(rbx_6)
                            int32_t temp21_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                result = (*(*rbx_6 + 8))(rbx_6, 1)
                
                r15_2 = var_238
                
                if (r13_2 != r15_1 || r15_2 != 0)
                    arg1[0x97] = arg1[0x95]
                    void* rbx_7 = arg1[0x96]
                    int64_t* rcx_31 = arg1[0x98]
                    
                    if (rbx_7 != rcx_31)
                        if (rbx_7 != 0)
                            *(rbx_7 + 0xc) += 1
                            rcx_31 = arg1[0x98]
                        
                        if (rcx_31 != 0)
                            int32_t temp20_1 = *(rcx_31 + 0xc)
                            *(rcx_31 + 0xc) -= 1
                            
                            if (temp20_1 == 1)
                                (*(*rcx_31 + 8))(rcx_31, 1)
                        
                        arg1[0x98] = rbx_7
                    
                    var_230 = arg1[0x95]
                    void* rax_35 = arg1[0x96]
                    void* var_228_2 = rax_35
                    
                    if (rax_35 != 0)
                        *(rax_35 + 8) += 1
                    
                label_141bf5f1f:
                    result = sub_140e23de0(arg1[0xa5], &var_230)
                    rdi.b = 1
                label_141bf6013:
                    
                    if (r15_2 != 0 || rdi.b != 0)
                        result = sub_141ee8490(arg1)
            else
                if (rbx_6 != 0)
                    result = zx.q(rbx_6[1].d)
                    
                    if (result.d != 0)
                        rbx_6[1].d = result.d + 1
                        result.b = 1
                    
                    if (result.b == 0)
                        rbx_6 = nullptr
                    
                    if (rbx_6 != 0)
                        r15_1 = arg1[0x97]
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            result = (**rbx_6)(rbx_6)
                            int32_t temp18_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                result = (*(*rbx_6 + 8))(rbx_6, 1)
                
                r15_2 = var_238
                
                if (r13_1 != r15_1 || r15_2 != 0)
                    arg1[0x97] = r13_1
                    int64_t* rcx_28 = arg1[0x98]
                    
                    if (r14_1 != rcx_28)
                        if (r14_1 != 0)
                            *(r14_1 + 0xc) += 1
                            rcx_28 = arg1[0x98]
                        
                        if (rcx_28 != 0)
                            int32_t temp16_1 = *(rcx_28 + 0xc)
                            *(rcx_28 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*rcx_28 + 8))(rcx_28, 1)
                        
                        arg1[0x98] = r14_1
                    
                    var_230 = r13_1
                    int64_t* var_228_1 = r14_1
                    
                    if (r14_1 != 0)
                        r14_1[1].d += 1
                    
                    goto label_141bf5f1f
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    result = (**r14_1)(r14_1)
                    int32_t temp17_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        result = (*(*r14_1 + 8))(r14_1, 1)

__security_check_cookie(result_1 ^ &var_268)
return result
