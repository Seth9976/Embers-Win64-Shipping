// 函数: sub_141d8a200
// 地址: 0x141d8a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t performanceCount
performanceCount.d = 0

if ((*(*arg1 + 0x68))() == 0)
    sub_140599090(&arg1[0x1a])

int128_t* result

if ((*(*arg1 + 0x68))(arg1).b == 0)
    result.b = 0
else if ((*(*arg1 + 0x60))(arg1).b != 0)
    result.b = 0
else if (sub_140b70ca0().d s<= 1)
    result.b = 0
else
    *(arg1 + 0x99) = 0
    QueryPerformanceCounter(&performanceCount)
    void* r13_1 = &arg1[5]
    int128_t zmm0_1
    zmm0_1.q = float.d(performanceCount)
    zmm0_1.q = zmm0_1.q f* data_143d796f8
    zmm0_1.q = zmm0_1.q f+ 16777216.0
    arg1[0x26] = zmm0_1.q
    int128_t var_60 = zx.o(0)
    
    if (r13_1 != &var_60)
        *r13_1 = 0
        int64_t* rbx_1 = *(r13_1 + 8)
        
        if (rbx_1 != 0)
            *(r13_1 + 8) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (arg1[4].d s> 0 && arg1[0x17].d s> 0)
        int64_t* rsi_1 = arg1[3]
        void* r15_3 = &rsi_1[sx.q(arg1[4].d) * 2]
        
        if (rsi_1 != r15_3)
            void* rcx_6 = &arg1[0x16]
            
            do
                int64_t* rbx_2 = rsi_1[1]
                int64_t* r12_1 = *rsi_1
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                if ((**r12_1)(r12_1, rcx_6, zx.q(*(arg1 + 0xc9))).b != 0)
                    int64_t* var_b0 = r12_1
                    int64_t* rsi_2 = rbx_2
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    if (&var_b0 != r13_1)
                        int128_t zmm1_1 = var_b0.o
                        int128_t var_40_1 = zmm1_1
                        var_b0.o = *r13_1
                        rsi_2 = rbx_2
                        *r13_1 = zmm1_1
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp7_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    if (arg1[0xf] != 0)
                        result = arg1[0x10]
                        
                        if (result != 0 && *(result + 8) s> 0)
                            void var_50
                            result = (*(*r12_1 + 0x18))(r12_1, &var_50)
                            void* r13_2 = nullptr
                            int64_t rcx_13 = *result
                            int64_t* rsi_3 = *(result + 8)
                            *(result + 8) = 0
                            *result = 0
                            int64_t* r15_4 = arg1[0x10]
                            
                            if (r15_4 != 0)
                                result = zx.q(r15_4[1].d)
                                
                                if (result.d == 0)
                                    r15_4 = nullptr
                                else
                                    r15_4[1].d = result.d + 1
                                    r13_2 = arg1[0xf]
                            
                            *(r13_2 + 0x390) = rcx_13
                            int64_t* rcx_14 = *(r13_2 + 0x398)
                            
                            if (rsi_3 != rcx_14)
                                if (rsi_3 != 0)
                                    *(rsi_3 + 0xc) += 1
                                    rcx_14 = *(r13_2 + 0x398)
                                
                                if (rcx_14 != 0)
                                    int32_t temp18_1 = *(rcx_14 + 0xc)
                                    *(rcx_14 + 0xc) -= 1
                                    
                                    if (temp18_1 == 1)
                                        (*(*rcx_14 + 8))(rcx_14, 1)
                                
                                *(r13_2 + 0x398) = rsi_3
                            
                            if (rsi_3 != 0)
                                rsi_3[1].d -= 1
                                
                                if (rsi_3[1].d == 1)
                                    (**rsi_3)(rsi_3)
                                    int32_t temp17_1 = *(rsi_3 + 0xc)
                                    *(rsi_3 + 0xc) -= 1
                                    
                                    if (temp17_1 == 1)
                                        (*(*rsi_3 + 8))(rsi_3, 1)
                            
                            if (r15_4 != 0)
                                r15_4[1].d -= 1
                                
                                if (r15_4[1].d == 1)
                                    (**r15_4)(r15_4)
                                    int32_t temp20_1 = *(r15_4 + 0xc)
                                    *(r15_4 + 0xc) -= 1
                                    
                                    if (temp20_1 == 1)
                                        (*(*r15_4 + 8))(r15_4, 1)
                            
                            int64_t* var_48
                            
                            if (var_48 != 0)
                                var_48[1].d -= 1
                                
                                if (var_48[1].d == 1)
                                    (**var_48)(var_48)
                                    int32_t temp21_1 = *(var_48 + 0xc)
                                    *(var_48 + 0xc) -= 1
                                    
                                    if (temp21_1 == 1)
                                        (*(*var_48 + 8))(var_48, 1)
                            
                            r13_1 = &arg1[5]
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp14_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                int64_t r8_2 = *rbx_2
                                (*(r8_2 + 8))(rbx_2, 1, r8_2)
                    
                    break
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp4_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rsi_1 = &rsi_1[2]
                rcx_6 = &arg1[0x16]
            while (rsi_1 != r15_3)
    
    int32_t rax_22
    
    if (*r13_1 != 0)
    label_141d8a5b0:
        
        if (arg1[4].d s<= 0)
            goto label_141d8a5c2
        
        rax_22 = 0
        
        if (arg1[0x17].d s> 0)
            goto label_141d8a5c5
        
        goto label_141d8a5c2
    
    if (arg1[4].d s<= 0)
    label_141d8a5c2:
        rax_22 = 1
    label_141d8a5c5:
        arg1[0x12].d = rax_22
        *(arg1 + 0x94)
        *(arg1 + 0x94) = 0
        int64_t* rcx_25 = arg1[0x2f]
        int32_t var_a0 = 0x3f800000
        arg1[0x13].b = 1
        char var_9c_1 = 1
        int64_t var_98_1 = 0
        int32_t var_90_1 = 0
        uint128_t zmm0_2 = sub_140f5dc30(rcx_25, &var_a0)
        int64_t rcx_26 = arg1[0x14]
        int64_t performanceCount_3
        int64_t performanceCount_1
        int64_t performanceCount_2
        int32_t r15_5
        
        if (rcx_26 == 0)
            performanceCount_2 = data_143e244b8
            rcx_26 = data_143e244b0
            
            if (performanceCount_2 != 0)
                *(performanceCount_2 + 8) += 1
            
            performanceCount_1 = performanceCount
            r15_5 = 2
            performanceCount_3 = performanceCount_2
        else
            performanceCount_1 = arg1[0x15]
            
            if (performanceCount_1 != 0)
                *(performanceCount_1 + 8) += 1
            
            performanceCount_2 = performanceCount
            r15_5 = 1
            performanceCount_3 = performanceCount_1
        
        int64_t* r8_3 = arg1[0xb]
        int64_t var_88 = rcx_26
        int64_t performanceCount_4 = performanceCount_3
        
        if (performanceCount_3 != 0)
            *(performanceCount_3 + 8) += 1
        
        (*(*r8_3 + 0x240))(r8_3, &var_88)
        
        if ((r15_5.b & 2) != 0)
            r15_5 &= 0xfffffffd
            
            if (performanceCount_2 != 0)
                int32_t temp6_1 = *(performanceCount_2 + 8)
                *(performanceCount_2 + 8) -= 1
                
                if (temp6_1 == 1)
                    (**performanceCount_2)(performanceCount_2)
                    int32_t temp9_1 = *(performanceCount_2 + 0xc)
                    *(performanceCount_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*performanceCount_2 + 8))(performanceCount_2, 1)
        
        if ((1 & r15_5.b) != 0 && performanceCount_1 != 0)
            int32_t temp8_1 = *(performanceCount_1 + 8)
            *(performanceCount_1 + 8) -= 1
            
            if (temp8_1 == 1)
                (**performanceCount_1)(performanceCount_1)
                int32_t temp11_1 = *(performanceCount_1 + 0xc)
                *(performanceCount_1 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*performanceCount_1 + 8))(performanceCount_1, 1)
        
        int64_t* rsi_5 = arg1[8]
        void* rcx_32 = nullptr
        
        if (rsi_5 != 0)
            int32_t rax_29 = rsi_5[1].d
            
            if (rax_29 != 0)
                rsi_5[1].d = rax_29 + 1
                rax_29 = 1
            
            if (rax_29.b == 0)
                rsi_5 = nullptr
            
            if (rsi_5 != 0)
                rcx_32 = arg1[7]
        
        void* rbx_3 = arg1[0xd]
        float var_68
        float* rax_31
        uint128_t zmm0_3
        float zmm1_2
        rax_31, zmm0_3, zmm1_2 = sub_140e12930(rcx_32, &var_68, zmm0_2)
        sub_140e21d50(rbx_3, *rax_31, zmm0_3, zmm1_2)
        
        if (rsi_5 != 0)
            rsi_5[1].d -= 1
            
            if (rsi_5[1].d == 1)
                (**rsi_5)(rsi_5)
                int32_t temp13_1 = *(rsi_5 + 0xc)
                *(rsi_5 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rsi_5 + 8))(rsi_5, 1)
        
        int64_t var_78 = arg1[9]
        void* rax_35 = arg1[0xa]
        void* var_70_1 = rax_35
        
        if (rax_35 != 0)
            *(rax_35 + 8) += 1
        
        sub_140e23de0(arg1[0xd], &var_78)
        EnterCriticalSection(&arg1[0x28])
        char* rax_36 = j_sub_140a82f30(0x30)
        char* rsi_6 = rax_36
        
        if (rax_36 == 0)
            rsi_6 = nullptr
        else
            int64_t* r15_6 = arg1[0x2e]
            int64_t rax_37 = arg1[0x2d]
            
            if (r15_6 != 0)
                r15_6[1].d += 1
            
            *(rsi_6 + 4) = 0
            *(rsi_6 + 8) = 0
            *(rsi_6 + 0x20) = rax_37
            *(rsi_6 + 0x28) = r15_6
            
            if (r15_6 != 0)
                r15_6[1].d += 1
                r15_6[1].d -= 1
                
                if (r15_6[1].d == 1)
                    (**r15_6)(r15_6)
                    int32_t rax_40 = *(r15_6 + 0xc)
                    *(r15_6 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        (*(*r15_6 + 8))(r15_6, 1)
        
        arg1[0x11] = rsi_6
        *(rsi_6 + 8) = 0
        *(rsi_6 + 4)
        *(rsi_6 + 4) = 1
        char temp0_5 = *rsi_6
        *rsi_6 = 1
        int64_t rcx_40
        rcx_40.b = temp0_5
        int16_t* var_c8 = nullptr
        int32_t var_c0_1 = 0
        sub_1405947f0(&var_c8, 0x13)
        int32_t rax_43 = var_c0_1 + 0x13
        
        if (rax_43 s> 0)
            sub_140594770(&var_c8)
        
        UnDecorator::getReferenceType(var_c8, u"SlateLoadingThread", 0x26)
        int32_t r14_1 = data_143f3871c
        data_143f3871c += 1
        sub_140a20c40(&var_c8, r14_1 + 1)
        int64_t* rax_44 = j_sub_140a82f30(0x10)
        
        if (rax_44 == 0)
            rax_44 = nullptr
        else
            rax_44[1] = rsi_6
            *rax_44 = &data_143237ca0
        
        int16_t* const rdx_10 = &data_142d40450
        char var_d0_1 = 0
        
        if (rax_43 != 0)
            rdx_10 = var_c8
        
        *(rsi_6 + 0x18) = rax_44
        void*** rax_45 = sub_140a6e140(rax_44, rdx_10, 0, 0, -1, var_d0_1)
        int16_t* rcx_46 = var_c8
        *(rsi_6 + 0x10) = rax_45
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
        
        if (arg1 != -0x140)
            LeaveCriticalSection(&arg1[0x28])
        
        int64_t rdx_11 = *arg1
        sub_140599090((*(rdx_11 + 0x88))(arg1, rdx_11))
        result.b = 1
    else
        if (arg1[0x17].d s<= 0)
            goto label_141d8a5b0
        
        result.b = 0

__security_check_cookie(rax_1 ^ &var_f8)
return result
