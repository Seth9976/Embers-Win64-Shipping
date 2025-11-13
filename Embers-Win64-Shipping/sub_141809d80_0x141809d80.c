// 函数: sub_141809d80
// 地址: 0x141809d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
char result_1 = 1
int32_t* rbp = arg4
int32_t* rsi = arg3

if (arg2 != 0)
    *arg2 = *(arg1 + 0x30)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t i = 0
int128_t zmm7
zmm7.q = float.d(performanceCount)
int32_t i_1 = 0
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ 16777216.0
uint64_t result

if (*(arg1 + 0x30) s<= 0)
    result = 1
else
    void* rax_3 = arg1 + 0x28
    int64_t r15_1 = 0
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    int64_t var_150_1 = 0
    
    do
        int64_t rax_4 = *rax_3
        int64_t rcx_1 = r15_1 * 5
        void* rdi_1 = rax_4 + (rcx_1 << 3)
        int64_t* rcx_2 = *(rax_4 + (rcx_1 << 3) + 0x18)
        int32_t rax_6
        uint64_t r9
        rax_6, r9 = (*(*rcx_2 + 0xb8))(rcx_2)
        void* rcx_3 = *(rdi_1 + 0x18)
        int32_t var_158
        
        if (*rdi_1 != 0)
            *(rcx_3 + 0x68) = 3
        else
            double zmm1
            
            if (*(rcx_3 + 0x80) == 0)
                if (*(arg1 + 0x20) != 0)
                    zmm1 = *(arg1 + 0x18)
                    goto label_141809ee6
                
            label_141809f11:
                void* rax_7 = rcx_3
                
                if (*(rcx_3 + 0x68) == 0 && rax_6 != 0)
                    *(rcx_3 + 0x68) = 1
                    rax_7 = *(rdi_1 + 0x18)
                    rcx_3 = rax_7
                
                if (*(rax_7 + 0x68) == 1)
                    rsi.b = 0
                    void* rdx
                    
                    if (rax_6 != 4)
                        if (rax_6 == 3)
                            r9 = *(rcx_3 + 0x128)
                            
                            if (r9 != 0)
                                int32_t r8 = *(rcx_3 + 0x138)
                                int32_t temp1_1 = mods.dp.d(sx.q(r8 + 1), *(r9 + 8))
                                int32_t rax_14 = r8
                                
                                if (rax_14 == *(r9 + 0x10))
                                    *(r9 + 0x10) = temp1_1
                                else
                                    rax_14 = *(r9 + 0x10)
                                
                                bool cond:4_1 = rax_14 == *(rcx_3 + 0x138)
                                *(rcx_3 + 0x138) = rax_14
                                rax_14.b = cond:4_1
                                
                                if (rax_14.b != 0)
                                    *(rcx_3 + 0x138) = temp1_1
                                
                                rdx, r9 = sub_1418084f0(rcx_3)
                    else if (*(arg1 + 0xc) != 0)
                        int32_t rax_9 = data_1439c66cc * 0xbb38435 + 0x3619636b
                        data_1439c66cc = rax_9
                        var_158 = rax_9 u>> 9 | 0x3f800000
                        double zmm0
                        zmm0.d = var_158.d f- 1f
                        
                        if (not(zmm0.d f>= *(arg1 + 8)))
                            rsi.b = 1
                    
                    r9.b = 0
                    rdx.b = 0
                    int64_t* r8_2
                    
                    if (rax_6 - 2 u> 2)
                        r8_2 = *(rdi_1 + 0x18)
                    else
                        char rax_16
                        rax_16, rdx = sub_141809180(arg1, rdi_1)
                        r8_2 = *(rdi_1 + 0x18)
                        rdx.b = 0
                        r9 = zx.q(rax_16)
                        int32_t rcx_5
                        
                        if (r8_2[0xe].b != 0)
                            rcx_5 = *(r8_2 + 0x6c)
                        label_14180a00a:
                            rdx = nullptr
                            
                            if (float.d(zx.q(rcx_5)) > float.d(zx.q(*(rdi_1 + 4))))
                                rdx = 1
                        else if (*(arg1 + 0x14) != 0)
                            rcx_5 = *(arg1 + 0x10)
                            goto label_14180a00a
                    
                    int64_t* rax_19 = r8_2
                    
                    if (rax_6 == 2 || rax_6 == 3 || rsi.b != 0 || (r9.b != 0 && rdx.b != 0))
                        result_1 = 0
                        
                        if (rsi.b != 0 || (r9.b != 0 && rdx.b != 0))
                            zmm6 = zx.o(0)
                            void var_108
                            int64_t var_d8
                            sub_141806f20(&var_d8, (*(*r8_2 + 0xc0))(r8_2, &var_108))
                            char var_d0
                            
                            if (var_d0 != 0)
                                zmm6 = _mm_cvtpd_ps(zx.o(var_d8))
                            
                            if (*(rdi_1 + 4) u>= 1 && not(zmm6.d f> 0f))
                                int64_t* rcx_9 = *(rdi_1 + 0x18)
                                
                                if ((*(*rcx_9 + 0xb8))(rcx_9) != 3
                                        || *(*(rdi_1 + 0x18) + 0x128) == 0)
                                    zmm6.d = float.s(zx.q(*(rdi_1 + 4) - 1))
                                    zmm6.d = zmm6.d f* 2.5f
                                    zmm6.d = zmm6.d f+ 5f
                                    zmm6 = _mm_min_ss(zmm6.d, 0x41f00000)
                            
                            var_d0 = 0
                            *(rdi_1 + 0x10) = fconvert.d(zmm6.d) f+ zmm7.q
                            *(*(rdi_1 + 0x18) + 0x68) = 2
                            void* rax_29 = *(rdi_1 + 0x20)
                            int64_t* rsi_1 = *(rdi_1 + 0x18)
                            int64_t* var_138 = rsi_1
                            void* var_130_1 = rax_29
                            
                            if (rax_29 != 0)
                                *(rax_29 + 8) += 1
                            
                            void var_f8
                            int64_t* rax_31 = (*(*rsi_1 + 0xc0))(rsi_1, &var_f8)
                            sub_1418014e0((*(*rsi_1 + 0xa0))(rsi_1), &var_138, rax_31, zmm6)
                        else
                            if (rbp != 0)
                                *rbp += 1
                                rax_19 = *(rdi_1 + 0x18)
                            
                            rax_19[0xd].d = 4
                    else if (rax_6 == 4)
                        if (arg5 != 0)
                            *arg5 += 1
                        
                        *(*(rdi_1 + 0x18) + 0x68) = 6
                    
                    rsi = arg3
                
                void* rcx_13 = *(rdi_1 + 0x18)
                
                if (*(rcx_13 + 0x68) == 2)
                    if (not(zmm7.q f< *(rdi_1 + 0x10)))
                        int64_t* rcx_14 = *(rcx_13 + 0x58)
                        
                        if ((*(*rcx_14 + 0x88))(rcx_14) != 0)
                            *(rdi_1 + 4) += 1
                            *(*(rdi_1 + 0x18) + 0x68) = 1
                    
                    if (rsi != 0)
                        *rsi += 1
            else
                zmm1 = *(rcx_3 + 0x78)
            label_141809ee6:
                
                if (zmm7.q f< *(rdi_1 + 8) + zmm1)
                    goto label_141809f11
                
                result_1 = 0
                *(rcx_3 + 0x68) = 5
                
                if (rbp != 0)
                    *rbp += 1
        
        int64_t* rsi_2 = *(rdi_1 + 0x18)
        int32_t rbp_1 = rsi_2[0xd].d
        
        if (rbp_1 - 3 u> 3)
            i += 1
            r15_1 += 1
            i_1 = i
            var_150_1 = r15_1
        else
            r15_1.b = rbp_1 == 6
            
            if (rbp_1 == 6)
                sub_1417ffb70(rsi_2)
                rsi_2 = *(rdi_1 + 0x18)
            
            int64_t* rbx_3 = *(rdi_1 + 0x20)
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            void var_e8
            int64_t* rax_39 = (*(*rsi_2 + 0xc0))(rsi_2, &var_e8)
            int64_t* rax_41 = (*(*rsi_2 + 0x90))(rsi_2)
            
            if (rax_41[1].d == 0)
            label_14180a2bf:
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp9_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            else
                int64_t* rcx_18 = *rax_41
                
                if (rcx_18 == 0)
                    goto label_14180a2bf
                
                if ((*(*rcx_18 + 0x28))(rcx_18) == 0)
                    goto label_14180a2bf
                
                int64_t* rcx_19
                
                if (rax_41[1].d == 0)
                    rcx_19 = nullptr
                else
                    rcx_19 = *rax_41
                
                int64_t var_128 = *rax_39
                void* rax_45 = rax_39[1]
                void* var_120_1 = rax_45
                
                if (rax_45 != 0)
                    *(rax_45 + 8) += 1
                
                int64_t* var_118 = rsi_2
                int64_t* var_110_1 = rbx_3
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                (*(*rcx_19 + 0x50))(rcx_19, &var_118, &var_128, zx.q(r15_1.b), result_1, arg3, 
                    var_158, var_150_1)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp11_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t* rbx_4 = rax_39[1]
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_53 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_53 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            if (rbp_1 == 6 && arg5 != 0)
                *arg5 += 1
            
            i = i_1
            sub_141807630(arg1 + 0x28, i, 1, 1)
            r15_1 = var_150_1
        
        rax_3 = arg1 + 0x28
        rbp = arg4
        rsi = arg3
    while (i s< *(arg1 + 0x30))
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_188)
return result
