// 函数: sub_142667950
// 地址: 0x142667950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_298
int64_t rax_2 = __security_cookie ^ &var_298
int32_t rsi_1 = 0
int64_t performanceCount
performanceCount.d = 0
int64_t rax = (*(*arg1 + 0x150))()

if (rax != 0)
    int64_t* r12_1 = *(rax + 0x120)
    
    if (r12_1 != 0)
        void* rax_4 = sub_14269bba0()
        void* rdx = r12_1[2]
        rax = sx.q(*(rax_4 + 0x38))
        
        if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_4 + 0x30)
            uint128_t zmm6_1
            int128_t zmm7_1
            rax, zmm6_1, zmm7_1 = sub_142658cd0(arg1)
            
            if (rax != 0)
                int64_t rdx_1 = *rax
                void* rax_5 = (*(rdx_1 + 8))(rax, rdx_1)
                int64_t rax_6
                uint128_t zmm0_1
                rax_6, zmm0_1 = sub_14269c200()
                void* rcx_3 = *(rax_5 + 0x10)
                int64_t rdx_2 = sx.q(*(rax_6 + 0x38))
                
                if (rdx_2.d s<= *(rcx_3 + 0x38)
                        && *(*(rcx_3 + 0x30) + (rdx_2 << 3)) == rax_6 + 0x30)
                    uint128_t var_48_1 = zmm6_1
                    int128_t var_58_1 = zmm7_1
                    QueryPerformanceCounter(&performanceCount)
                    zmm7_1.q = float.d(performanceCount)
                    zmm7_1.q = zmm7_1.q f* data_143d796f8
                    void var_188
                    (*(*arg1 + 0x628))(arg1, &var_188, arg2)
                    int32_t r15_1 = 2
                    void* var_168
                    int64_t* var_160
                    
                    if ((arg1[0x55].b & 1) != 0)
                        void* rax_8 = var_168
                        int64_t* var_238
                        int64_t* var_1f8
                        int64_t* rcx_8
                        
                        if (rax_8 == 0)
                            int64_t* rcx_9 = *(rax_5 + 0x340)
                            rsi_1 = 2
                            rax_8 = *(rax_5 + 0x338)
                            void* var_200 = rax_8
                            var_1f8 = rcx_9
                            
                            if (rcx_9 != 0)
                                rcx_9[1].d += 1
                            
                            rcx_8 = &var_200
                        else
                            int64_t* rcx_7 = var_160
                            rsi_1 = 1
                            void* var_240 = rax_8
                            var_238 = rcx_7
                            
                            if (rcx_7 != 0)
                                rcx_7[1].d += 1
                                rax_8 = var_240
                            
                            rcx_8 = &var_240
                        
                        int64_t* rax_9 = rcx_8[1]
                        rcx_8[1] = 0
                        *rcx_8 = 0
                        
                        if ((2 & rsi_1.b) != 0)
                            rsi_1 &= 0xfffffffd
                            
                            if (var_1f8 != 0)
                                var_1f8[1].d -= 1
                                
                                if (var_1f8[1].d == 1)
                                    (**var_1f8)(var_1f8)
                                    int32_t rax_12 = *(var_1f8 + 0xc)
                                    *(var_1f8 + 0xc) -= 1
                                    
                                    if (rax_12 == 1)
                                        (*(*var_1f8 + 8))(var_1f8, 1)
                        
                        if ((rsi_1.b & 1) != 0)
                            rsi_1 &= 0xfffffffe
                            
                            if (var_238 != 0)
                                var_238[1].d -= 1
                                
                                if (var_238[1].d == 1)
                                    (**var_238)(var_238)
                                    int32_t rax_16 = *(var_238 + 0xc)
                                    *(var_238 + 0xc) -= 1
                                    
                                    if (rax_16 == 1)
                                        (*(*var_238 + 8))(var_238, 1)
                        
                        void* var_1a8
                        sub_141deb5f0(rax_8, &var_1a8)
                        int64_t rdx_5
                        rdx_5.b = 1
                        int64_t* rcx_17 = *(var_1a8 + 0x10)
                        (*(*rcx_17 + 0x38))(rcx_17, rdx_5)
                        zmm0_1 = var_1a8.o
                        uint128_t var_228 = zmm0_1
                        zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
                        void* rax_20 = zmm0_1.q
                        
                        if (rax_20 != 0)
                            *(rax_20 + 8) += 1
                        
                        var_168 = var_228.q
                        var_228.q = 0
                        sub_1405aeff0(&var_160, &var_228:8)
                        void* rcx_19 = var_228:8.q
                        
                        if (rcx_19 != 0)
                            int32_t rax_22 = *(rcx_19 + 8)
                            *(rcx_19 + 8) -= 1
                            
                            if (rax_22 == 1)
                                int64_t* rbx_4 = var_228:8.q
                                (**rbx_4)(rbx_4)
                                int32_t rax_24 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (rax_24 == 1)
                                    int64_t* rcx_21 = var_228:8.q
                                    (*(*rcx_21 + 8))(rcx_21, 1)
                        
                        int64_t* var_1a0
                        
                        if (var_1a0 != 0)
                            var_1a0[1].d -= 1
                            
                            if (var_1a0[1].d == 1)
                                (**var_1a0)(var_1a0)
                                int32_t rax_28 = *(var_1a0 + 0xc)
                                *(var_1a0 + 0xc) -= 1
                                
                                if (rax_28 == 1)
                                    (*(*var_1a0 + 8))(var_1a0, 1)
                        
                        if (rax_9 != 0)
                            rax_9[1].d -= 1
                            
                            if (rax_9[1].d == 1)
                                (**rax_9)(rax_9)
                                int32_t rax_32 = *(rax_9 + 0xc)
                                *(rax_9 + 0xc) -= 1
                                
                                if (rax_32 == 1)
                                    (*(*rax_9 + 8))(rax_9, 1)
                    
                    void* rax_34 = var_168
                    int64_t* var_210
                    int64_t* var_1d8
                    int64_t* rcx_28
                    int32_t rsi_2
                    
                    if (rax_34 == 0)
                        int64_t* rcx_29 = *(rax_5 + 0x340)
                        rsi_2 = rsi_1 | 8
                        rax_34 = *(rax_5 + 0x338)
                        void* var_1e0 = rax_34
                        var_1d8 = rcx_29
                        
                        if (rcx_29 != 0)
                            rcx_29[1].d += 1
                        
                        rcx_28 = &var_1e0
                    else
                        int64_t* rcx_27 = var_160
                        rsi_2 = rsi_1 | 4
                        void* var_218 = rax_34
                        var_210 = rcx_27
                        
                        if (rcx_27 != 0)
                            rcx_27[1].d += 1
                            rax_34 = var_218
                        
                        rcx_28 = &var_218
                    
                    int64_t* rax_35 = rcx_28[1]
                    rcx_28[1] = 0
                    *rcx_28 = 0
                    
                    if ((rsi_2.b & 8) != 0)
                        rsi_2 &= 0xfffffff7
                        
                        if (var_1d8 != 0)
                            var_1d8[1].d -= 1
                            
                            if (var_1d8[1].d == 1)
                                (**var_1d8)(var_1d8)
                                int32_t rax_38 = *(var_1d8 + 0xc)
                                *(var_1d8 + 0xc) -= 1
                                
                                if (rax_38 == 1)
                                    (*(*var_1d8 + 8))(var_1d8, 1)
                    
                    if ((rsi_2.b & 4) != 0 && var_210 != 0)
                        var_210[1].d -= 1
                        
                        if (var_210[1].d == 1)
                            (**var_210)(var_210)
                            int32_t rax_42 = *(var_210 + 0xc)
                            *(var_210 + 0xc) -= 1
                            
                            if (rax_42 == 1)
                                (*(*var_210 + 8))(var_210, 1)
                    
                    int64_t* rcx_36 = *(rax_34 + 0x10)
                    (*(*rcx_36 + 0x48))(rcx_36)
                    float zmm5_1 = arg1[0x54].d
                    zmm6_1 = zmm0_1
                    float zmm3_1 = 3.40282347e+38f
                    float zmm4_1 = *(arg1 + 0x2a4)
                    
                    if (not(zmm5_1 == 3.40282347e+38f))
                        float var_180
                        float var_174
                        float zmm1_1 = var_174 - var_180
                        float var_17c
                        float var_170
                        float zmm2_1 = var_170 - var_17c
                        int32_t var_178
                        int32_t var_16c
                        zmm0_1.d = var_16c.d f- var_178
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm1_1 = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm0_1.d)
                            f* zmm6_1.d * zmm5_1
                        
                        if (zmm1_1 >= zmm4_1)
                            zmm3_1 = _mm_min_ss(zmm1_1, 0x7f7fffff)
                        else
                            zmm3_1 = zmm4_1
                    
                    float var_158_1 = zmm3_1
                    int64_t* var_258
                    void var_f8
                    sub_1426529b0(r12_1, &var_258, &arg1[0x49], sub_142642440(&var_f8, &var_188), 
                        arg1[0x55].d u>> 1 & 1)
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    double zmm0_2[0x2] = zx.o(0)
                    int64_t* rcx_40 = var_258
                    zmm0_2[0] = float.d(performanceCount_1)
                    zmm0_2[0] = zmm0_2[0] f* data_143d796f8
                    zmm0_2[0] = zmm0_2[0] f- zmm7_1.q
                    zmm0_2 = _mm_cvtpd_ps(zmm0_2)
                    zmm0_2[0].d = zmm0_2[0].d f* 1000000f
                    *(arg1 + 0x2bc) = zmm0_2[0].d
                    int32_t var_248
                    
                    if (var_248 == 1 || rcx_40 == 0 || ((rcx_40[0x13].d u>> 2).b & 1) == 0)
                        r15_1 = 0
                    
                    arg1[0x57].d &= 0xfffffffd
                    uint32_t rax_49
                    rax_49.b = var_248 == 3
                    int32_t r15_4 = ((r15_1 | arg1[0x57].d) & 0xfffffffe) | rax_49
                    arg1[0x57].d = r15_4
                    
                    if ((r15_4.b & 1) == 0)
                        rax_49.b = 0
                    else
                        rax_49 = rcx_40[0x13].d u>> 3
                    
                    int64_t* var_250
                    int64_t* rbx_12 = var_250
                    int64_t* rdx_10 = rbx_12
                    int64_t* var_268 = rcx_40
                    int64_t* var_260_1 = rbx_12
                    arg1[0x57].d = ((zx.d(rax_49.b) << 2 ^ r15_4) & 4) ^ r15_4
                    
                    if (rbx_12 != 0)
                        rbx_12[1].d += 1
                        rbx_12 = var_250
                        rcx_40 = var_258
                        rdx_10 = var_260_1
                    
                    if (&var_268 != &arg1[0x5e])
                        int128_t zmm1_2 = var_268.o
                        zmm0_2 = *(arg1 + 0x2f0)
                        int128_t var_70_1 = zmm1_2
                        var_268.o = zmm0_2
                        rdx_10 = var_260_1
                        *(arg1 + 0x2f0) = zmm1_2
                    
                    if (rdx_10 != 0)
                        rdx_10[1].d -= 1
                        
                        if (rdx_10[1].d == 1)
                            (**var_260_1)(var_260_1, rdx_10)
                            int32_t rax_58 = *(var_260_1 + 0xc)
                            *(var_260_1 + 0xc) -= 1
                            
                            if (rax_58 == 1)
                                (*(*var_260_1 + 8))(var_260_1, 1)
                        
                        rcx_40 = var_258
                        rbx_12 = var_250
                    
                    char rax_61 = (arg1[0x57].d).b
                    
                    if ((rax_61 & 1) == 0)
                        zmm0_2 = zx.o(0)
                    else
                        (*(*rcx_40 + 0x30))(rcx_40, 0)
                        rax_61 = (arg1[0x57].d).b
                    
                    arg1[0x58].d = zmm0_2[0].d
                    
                    if ((rax_61 & 1) != 0)
                        int64_t var_1d0 = 0
                        int32_t var_1c8_1 = 0
                        
                        if (&arg1[0x60] != &var_1d0 && arg1[0x61].d != 0)
                            int64_t* rcx_43 = arg1[0x60]
                            
                            if (rcx_43 != 0)
                                (*(*rcx_43 + 0x40))(rcx_43, &var_1d0)
                        
                        void var_198
                        sub_14091e890(arg1[0x5e] + 0x80, &var_198, &var_1d0)
                        sub_140745b20(&var_1d0)
                        uint128_t zmm1_3 = *(arg1 + 0x2dc)
                        
                        if (not(zmm1_3.d f<= zx.o(0).d))
                            sub_14265e2a0(arg1[0x5e], zmm1_3)
                    
                    if (rbx_12 != 0)
                        rbx_12[1].d -= 1
                        
                        if (rbx_12[1].d == 1)
                            (**var_250)(var_250)
                            int32_t rax_66 = *(var_250 + 0xc)
                            *(var_250 + 0xc) -= 1
                            
                            if (rax_66 == 1)
                                (*(*var_250 + 8))(var_250, 1)
                    
                    if (rax_35 != 0)
                        rax_35[1].d -= 1
                        
                        if (rax_35[1].d == 1)
                            (**rax_35)(rax_35)
                            int32_t rdi_1 = *(rax_35 + 0xc)
                            *(rax_35 + 0xc) -= 1
                            
                            if (rdi_1 == 1)
                                (*(*rax_35 + 8))(rax_35, zx.q(rdi_1))
                    
                    sub_142645530(&var_188)

__security_check_cookie(rax_2 ^ &var_298)
