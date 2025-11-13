// 函数: sub_140da6800
// 地址: 0x140da6800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20
sub_140da0560(&arg1[0xb], &arg_20, arg3)
int64_t rax = sx.q(arg_20)
void* const rcx_2

if (rax.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = &arg1[0xb][rax * 7]

if (rcx_2 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    *arg2 = *(rcx_2 + 0x20)
    void* rax_2 = *(rcx_2 + 0x28)
    arg2[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1

if (*arg2 != 0)
    return arg2

void* var_f8
sub_140da7000(arg3, &var_f8)
void* rax_3 = var_f8
int64_t* rax_6

if (rax_3 == 0 || *(rax_3 + 8) s<= 0)
    void* rbx_1 = arg3[3]
    
    if (rbx_1 == 0)
        rax_6 = arg3
    else
        void* rax_5 = sub_140d21950(rbx_1, sub_140e28000())
        int64_t rdx_3 = *rax_5
        rax_6 = (*(rdx_3 + 0x10))(rax_5, rdx_3)

int64_t rsi

if ((rax_3 != 0 && *(rax_3 + 8) s> 0) || rax_6[1].d s> 1)
    rsi.b = 1
else
    rsi.b = 0

int64_t* var_f0

if (var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        (**var_f0)(var_f0)
        int32_t rax_9 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*var_f0 + 8))(var_f0, 1)

if (rsi.b != 0)
    int64_t var_100_1 = 0
    void* var_148
    sub_140da7000(arg3, &var_148)
    void* rax_11 = var_148
    int128_t zmm6
    int64_t* var_140
    int64_t* rbx_6
    
    if (rax_11 == 0 || *(rax_11 + 8) s<= 0)
    label_140da6aef:
        rbx_6 = var_140
    label_140da6af4:
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**var_140)(var_140)
                int32_t rax_26 = *(var_140 + 0xc)
                *(var_140 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*var_140 + 8))(var_140, 1)
    else
        char rax_12 = sub_140da8400(arg3)
        int64_t* r15_1 = var_140
        uint32_t r14_1 = *(arg3 + 0x14)
        
        if (r15_1 != 0)
            r15_1[1].d += 1
            r15_1 = var_140
        
        void*** rax_13 = j_sub_140a82f30(0x118)
        void*** rbx_3 = rax_13
        
        if (rax_13 == 0)
            rbx_3 = nullptr
        else
            int128_t zmm0_1 = var_148.o
            rax_13[1].d = 1
            *(rax_13 + 0xc) = 1
            *rbx_3 = &data_142ec7a98
            int128_t var_b8 = zmm0_1
            
            if (r15_1 != 0)
                r15_1[1].d += 1
                r15_1 = var_140
            
            arg4, zmm6 = sub_140d92070(&rbx_3[2], *arg1, &var_b8, r14_1, arg4, rax_12)
        
        void*** rbx_4 = rbx_3
        void*** rsi_2 = rbx_4
        void* var_a8 = &rbx_3[2]
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
            rbx_4 = rbx_3
        
        if (arg2 == &var_a8)
        label_140da6a5a:
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d != 1)
                    rbx_4 = rbx_3
                else
                    (**rsi_2)(rsi_2)
                    int32_t temp5_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp5_1 != 1)
                        rbx_4 = rbx_3
                    else
                        (*rsi_2)[1](rsi_2, 1)
                        rbx_4 = rbx_3
        else
            *arg2 = &rbx_3[2]
            void*** r14_2 = arg2[1]
            
            if (rsi_2 == r14_2)
                goto label_140da6a5a
            
            arg2[1] = rsi_2
            
            if (r14_2 != 0)
                r14_2[1].d -= 1
                
                if (r14_2[1].d != 1)
                    rbx_4 = rbx_3
                else
                    (**r14_2)(r14_2)
                    int32_t temp10_1 = *(r14_2 + 0xc)
                    *(r14_2 + 0xc) -= 1
                    
                    if (temp10_1 != 1)
                        rbx_4 = rbx_3
                    else
                        (*r14_2)[1](r14_2, 1)
                        rbx_4 = rbx_3
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp9_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*rbx_4)[1](rbx_4, 1)
        
        if (r15_1 != 0)
            r15_1[1].d -= 1
            
            if (r15_1[1].d != 1)
                goto label_140da6aef
            
            (**var_140)(var_140)
            int32_t rax_22 = *(var_140 + 0xc)
            *(var_140 + 0xc) -= 1
            
            if (rax_22 != 1)
                goto label_140da6aef
            
            rbx_6 = var_140
            (*(*rbx_6 + 8))(rbx_6, 1)
            goto label_140da6af4
    int64_t* rax_63 = *arg2
    
    if (rax_63 == 0)
        void* rbx_8 = arg3[3]
        char rax_30
        
        if (rbx_8 == 0)
            rax_30 = *(arg3 + 0x11)
        else
            void* rax_29 = sub_140d21950(rbx_8, sub_140e28000())
            int64_t rdx_9 = *rax_29
            rax_30 = (*(rdx_9 + 0x20))(rax_29, rdx_9)
        
        if (rax_30 == 0)
            int128_t var_48_1 = zmm6
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            zmm6.q = float.d(performanceCount)
            int64_t var_158 = 0
            int64_t var_150_1 = 0
            zmm6.q = zmm6.q f* data_143d796f8
            int64_t* rax_41 = sub_140da7300(arg3)
            int16_t* const rdx_12
            
            if (rax_41[1].d == 0)
                rdx_12 = &data_142d40450
            else
                rdx_12 = *rax_41
            
            if (sub_140b1ef70(&var_158, rdx_12, 0) != 0)
                int32_t temp7_1
                int32_t temp8_1
                temp7_1:temp8_1 = sx.q(var_150_1.d + 0x3ff)
                int16_t** rax_46 = sub_140da7300(arg3)
                
                if (rax_46[1].d != 0)
                    *rax_46
                
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                double zmm0_2[0x2] = zx.o(0)
                char var_168
                var_168.d = ((temp7_1 & 0x3ff) + temp8_1) s>> 0xa
                zmm0_2[0] = float.d(performanceCount_1)
                zmm0_2[0] = zmm0_2[0] f* data_143d796f8
                zmm0_2[0] = zmm0_2[0] f- zmm6.q
                int64_t var_98
                int512_t zmm1 = sub_140a2e390(&var_98, 
                    Took %f seconds to synchronously load lazily loaded font '%s' (%dK)", 
                    _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_2)[0]).q)
                var_100_1 = var_98
                char rax_48 = sub_140da8400(arg3)
                uint32_t r14_4 = *(arg3 + 0x14)
                void*** rax_49 = j_sub_140a82f30(0x20)
                void*** r8_3 = rax_49
                
                if (rax_49 == 0)
                    r8_3 = nullptr
                else
                    rax_49[1].d = 1
                    *(rax_49 + 0xc) = 1
                    *r8_3 = &data_142df7bd8
                    r8_3[2] = 0
                    r8_3[2] = var_158
                    var_158 = 0
                    r8_3[3].d = var_150_1.d
                    *(r8_3 + 0x1c) = var_150_1:4.d
                    int64_t var_150_2 = 0
                
                int64_t* rax_51 = j_sub_140a82f30(0x118)
                int64_t* rbx_11 = rax_51
                
                if (rax_51 == 0)
                    rbx_11 = nullptr
                else
                    rax_51[1].d = 1
                    *(rax_51 + 0xc) = 1
                    *rbx_11 = &data_142ec7a98
                    uint128_t zmm0_3 = (&r8_3[2]).o
                    uint128_t var_88 = zmm0_3
                    void* rax_52 = _mm_bsrli_si128(zmm0_3, 8).q
                    
                    if (rax_52 != 0)
                        *(rax_52 + 8) += 1
                    
                    sub_140d92070(&rbx_11[2], *arg1, &var_88, r14_4, zmm1, rax_48)
                
                int64_t* rbx_12 = rbx_11
                int64_t* rsi_7 = rbx_12
                void* var_78 = &rbx_11[2]
                
                if (rbx_12 != 0)
                    rbx_12[1].d += 1
                    rbx_12 = rbx_11
                
                if (arg2 == &var_78)
                label_140da6eb4:
                    
                    if (rsi_7 != 0)
                        rsi_7[1].d -= 1
                        
                        if (rsi_7[1].d != 1)
                            rbx_12 = rbx_11
                        else
                            (**rsi_7)(rsi_7)
                            int32_t temp19_1 = *(rsi_7 + 0xc)
                            *(rsi_7 + 0xc) -= 1
                            
                            if (temp19_1 != 1)
                                rbx_12 = rbx_11
                            else
                                (*(*rsi_7 + 8))(rsi_7, 1)
                                rbx_12 = rbx_11
                else
                    *arg2 = &rbx_11[2]
                    int64_t* r14_5 = arg2[1]
                    
                    if (rsi_7 == r14_5)
                        goto label_140da6eb4
                    
                    arg2[1] = rsi_7
                    
                    if (r14_5 != 0)
                        r14_5[1].d -= 1
                        
                        if (r14_5[1].d != 1)
                            rbx_12 = rbx_11
                        else
                            (**r14_5)(r14_5)
                            int32_t temp22_1 = *(r14_5 + 0xc)
                            *(r14_5 + 0xc) -= 1
                            
                            if (temp22_1 != 1)
                                rbx_12 = rbx_11
                            else
                                (*(*r14_5 + 8))(r14_5, 1)
                                rbx_12 = rbx_11
                
                if (rbx_12 != 0)
                    rbx_12[1].d -= 1
                    
                    if (rbx_12[1].d == 1)
                        (**rbx_12)(rbx_12)
                        int32_t temp21_1 = *(rbx_12 + 0xc)
                        *(rbx_12 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*rbx_12 + 8))(rbx_12, 1)
                
                if (r8_3 != 0)
                    r8_3[1].d -= 1
                    
                    if (r8_3[1].d == 1)
                        (**r8_3)(r8_3)
                        int32_t r12_1 = *(r8_3 + 0xc)
                        *(r8_3 + 0xc) -= 1
                        
                        if (r12_1 == 1)
                            (*r8_3)[1](r8_3, zx.q(r12_1))
            
            int64_t rcx_49 = var_158
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
        else if (zx.d(rax_30) == 1)
            char arg_10 = sub_140da8400(arg3)
            int32_t var_108 = *(arg3 + 0x14)
            void*** rax_34 = sub_140d8fdb0(arg1, sub_140da7300(arg3), &var_108, &arg_10, arg4)
            void*** rbx_9 = rax_34
            void*** rsi_3 = rbx_9
            
            if (rbx_9 != 0)
                rbx_9[1].d += 1
                rbx_9 = rax_34
            
            void var_68
            
            if (arg2 == &var_68)
            label_140da6c21:
                
                if (rsi_3 != 0)
                    rsi_3[1].d -= 1
                    
                    if (rsi_3[1].d != 1)
                        rbx_9 = rax_34
                    else
                        (**rsi_3)(rsi_3)
                        int32_t temp13_1 = *(rsi_3 + 0xc)
                        *(rsi_3 + 0xc) -= 1
                        
                        if (temp13_1 != 1)
                            rbx_9 = rax_34
                        else
                            (*rsi_3)[1](rsi_3, 1)
                            rbx_9 = rax_34
            else
                *arg2 = &rax_34[2]
                void*** r14_3 = arg2[1]
                
                if (rsi_3 == r14_3)
                    goto label_140da6c21
                
                arg2[1] = rsi_3
                
                if (r14_3 != 0)
                    r14_3[1].d -= 1
                    
                    if (r14_3[1].d != 1)
                        rbx_9 = rax_34
                    else
                        (**r14_3)(r14_3)
                        int32_t temp16_1 = *(r14_3 + 0xc)
                        *(r14_3 + 0xc) -= 1
                        
                        if (temp16_1 != 1)
                            rbx_9 = rax_34
                        else
                            (*r14_3)[1](r14_3, 1)
                            rbx_9 = rax_34
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t temp15_1 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*rbx_9)[1](rbx_9, 1)
        
        rax_63 = *arg2
        
        if (rax_63 == 0 || *rax_63 == 0)
            goto label_140da6f77
        
        sub_140d8bf30(&arg1[0xb], arg3, arg2)
    else if (*rax_63 == 0)
    label_140da6f77:
        void var_58
        
        if (arg2 != &var_58)
            *arg2 = 0
            int64_t* rbx_14 = arg2[1]
            
            if (rbx_14 != 0)
                arg2[1] = 0
                rbx_14[1].d -= 1
                
                if (rbx_14[1].d == 1)
                    (**rbx_14)(rbx_14)
                    int32_t temp2_1 = *(rbx_14 + 0xc)
                    *(rbx_14 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_14 + 8))(rbx_14, 1)
    else
        sub_140d8bf30(&arg1[0xb], arg3, arg2)
    
    if (var_100_1 != 0)
        sub_140a74f90(var_100_1)

return arg2
