// 函数: sub_14217aa00
// 地址: 0x14217aa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void** var_110 = arg4
void** rdi = arg4
int32_t result = (*(*arg2 + 0x2b8))(arg2, 0)

if (result != 0)
    result = arg5
    int32_t result_2 = 0
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int32_t result_1 = 0
    
    if (result s> 0)
        zmm7 = 0x3ff0000000000000
        zmm6 = 0x3f800000
        zmm8 = 0x36ccce67
        zmm9 = 0x3fe0000000000000
        
        do
            void* rax_4 = *rdi
            int64_t** r12_1 = *(rax_4 + 8)
            
            if (r12_1 != 0)
                goto label_14217ac29
            
            void* rbx_1 = *(rax_4 + 0x18)
            
            if (rbx_1 == 0)
                result_2 = result_1
            label_14217ac29:
                int64_t* r14_1 = *(rax_4 + 0x10)
                
                if (r14_1 == 0 || r14_1[0xe] != 0)
                    int64_t* rsi_1 = *r12_1
                    char var_114_1 = 0
                    char rax_17 = (*(*arg1 + 0x3c8))(arg1, rsi_1, arg2)
                    uint128_t zmm0
                    
                    if (rax_17 != 0 && (rsi_1[0xb].b & 0x40) == 0)
                        if (r14_1 != 0)
                            zmm0.q = arg1[0x43] f- r14_1[0x10]
                        
                        if (r14_1 == 0 || not(zmm0.q f<= zmm7.q))
                            int64_t* rax_18 = arg3
                            int32_t i = 0
                            
                            if (rax_18[1].d s> 0)
                                int64_t rdi_1 = 0
                                
                                do
                                    int64_t rdx_11 = *rax_18
                                    
                                    if ((*(*rsi_1 + 0x460))(rsi_1, *(rdx_11 + rdi_1 + 8), 
                                            *(rdx_11 + rdi_1 + 0x10), 
                                            sx.q(i) * 0x30 + 0x18 + rdx_11, result_1, var_110) != 0)
                                        var_114_1 = 1
                                        goto label_14217ad77
                                    
                                    rax_18 = arg3
                                    i += 1
                                    rdi_1 += 0x30
                                while (i s< rax_18[1].d)
                            
                            if (*(arg1 + 0x2e4) != 0)
                                int64_t var_e0
                                sub_140d3a3a0(&var_e0, rsi_1)
                                int64_t rdi_2 = sx.q(arg1[0x64].d)
                                int32_t rax_21 = (rdi_2 + 1).d
                                arg1[0x64].d = rax_21
                                
                                if (rax_21 s> *(arg1 + 0x324))
                                    sub_1405a4d70(&arg1[0x63])
                                
                                *(arg1[0x63] + (rdi_2 << 3)) = var_e0
                    
                    if (r14_1 == 0)
                        if (*(r12_1 + 0xd4) u< arg2[0x40].d)
                            goto label_14217b0c6
                        
                        goto label_14217ad77
                    
                    double zmm1 = arg1[0x43] f- r14_1[0x10]
                    zmm0 = _mm_cvtps_pd(arg1[0xe].d.q)
                    
                    if (zmm1 f< zmm0.q || *(r12_1 + 0xd4) u>= arg2[0x40].d)
                    label_14217ad77:
                        char var_a8_1 = 0
                        int64_t var_b0
                        
                        if ((r12_1[0x1a].b & 8) != 0)
                            void var_d8
                            int64_t* rax_24 = sub_141fa4f00(&var_d8, rsi_1)
                            
                            if (rax_24 != &var_b0)
                                if (var_a8_1 != 0)
                                    char var_a8_2 = 0
                                    sub_141fa67d0(&var_b0)
                                
                                var_b0 = *rax_24
                                *rax_24 = 0
                                var_a8_1 = 1
                            
                            zmm6, zmm7, zmm8 = sub_141fa67d0(&var_d8)
                        
                        if (r14_1 != 0)
                            goto label_14217aede
                        
                        int64_t* rbx_5 = rsi_1[2]
                        void* rdi_3 = arg1[0x2a]
                        
                        if (rbx_5 == 0)
                        label_14217ae46:
                            int64_t* rax_32
                            
                            if (sub_141dce3a0(rsi_1) == 0)
                                rax_32, zmm6 = sub_140d209c0(rsi_1)
                            else
                                rax_32 = rsi_1
                            
                            if (sub_14217c860(arg1[0x2a], rax_32, nullptr) != 0)
                                if (rax_17 != 0)
                                    void var_e4
                                    int32_t* rax_34
                                    rax_34, zmm6 = sub_140b5e500(&var_e4, 0x66)
                                    int32_t var_f0 = *rax_34
                                    int32_t var_ec_1 = 0
                                    void* rax_35 = sub_14213fce0(arg2, &var_f0, 2, 0xffffffff)
                                    r14_1 = rax_35
                                    
                                    if (rax_35 != 0)
                                        zmm6, zmm7, zmm8, zmm9 = sub_141f9b710(rax_35, rsi_1, 0)
                                    label_14217aede:
                                        
                                        if (var_114_1 != 0)
                                            int32_t rax_37 = arg1[0xdb].d * 0xbb38435 + 0x3619636b
                                            arg1[0xdb].d = rax_37
                                            zmm0.d = (rax_37 u>> 9 | 0x3f800000).d f- zmm6.d
                                            r14_1[0x10] =
                                                _mm_cvtps_pd(zmm0.q) f* zmm9.q f+ arg1[0x43]
                                        
                                        if (sub_141f8dc80(r14_1, 0) == 0)
                                            (*(*rsi_1 + 0x5e8))(rsi_1)
                                        else
                                            if (*(arg1 + 0x2e4) != 0)
                                                int64_t var_c8
                                                sub_140d3a3a0(&var_c8, rsi_1)
                                                int64_t rdi_4 = sx.q(arg1[0x60].d)
                                                int32_t rax_41 = (rdi_4 + 1).d
                                                arg1[0x60].d = rax_41
                                                
                                                if (rax_41 s> *(arg1 + 0x304))
                                                    sub_1405a4d70(&arg1[0x5f])
                                                
                                                *(arg1[0x5f] + (rdi_4 << 3)) = var_c8
                                            
                                            uint64_t rax_43
                                            rax_43, zmm6, zmm7, zmm8, zmm9 = sub_141f97be0(r14_1)
                                            
                                            if (rax_43 != 0)
                                                if (*(arg1 + 0x2e4) != 0)
                                                    int64_t var_c0
                                                    sub_140d3a3a0(&var_c0, rsi_1)
                                                    int64_t rdi_5 = sx.q(arg1[0x62].d)
                                                    int32_t rax_44 = (rdi_5 + 1).d
                                                    arg1[0x62].d = rax_44
                                                    
                                                    if (rax_44 s> *(arg1 + 0x314))
                                                        sub_1405a4d70(&arg1[0x61])
                                                    
                                                    *(arg1[0x61] + (rdi_5 << 3)) = var_c0
                                                
                                                zmm1.d = zmm6.q.d f/ rsi_1[0x21].d
                                                zmm0.q = _mm_cvtps_pd((*(arg1[0x28] + 0x520)).q).q
                                                    f- r12_1[3]
                                                float zmm2_1 = _mm_cvtpd_ps(zmm0) * 0.699999988f
                                                
                                                if (not(zmm2_1 f< zmm1.d))
                                                    zmm0.d = zmm6.d f/ *(rsi_1 + 0x10c)
                                                    zmm1 = _mm_min_ss(_mm_max_ss(zmm0.d, zmm1.d).d, 
                                                        zmm2_1).q
                                                
                                                r12_1[4].d = zmm1.d
                                                r12_1[3] =
                                                    (_mm_cvtps_pd((*(arg1[0x28] + 0x520)).q)).q
                                            
                                            *arg6 += 1
                                        
                                        if ((*(*arg2 + 0x2b8))(arg2, 0) == 0)
                                            data_143f4cf40 += 1
                                            
                                            if (var_a8_1 != 0)
                                                char var_a8_4 = 0
                                                sub_141fa67d0(&var_b0)
                                            
                                            result = result_1
                                            break
                                else if (not(zmm6.d f<= rsi_1[0x21].d))
                                    zmm0 = zx.o(rand())
                                    void* rax_50 = arg1[0x28]
                                    zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm8.d
                                    zmm0.d = zmm0.d f+ *(rax_50 + 0x520)
                                    r12_1[2] = (_mm_cvtps_pd(zmm0.q)).q
                        else
                            int64_t var_d0
                            sub_140d3a3a0(&var_d0, rbx_5)
                            int32_t var_108
                            sub_141f87aa0(rdi_3 + 0x50, &var_108, var_d0)
                            int64_t rax_25 = sx.q(var_108)
                            void* rcx_23
                            
                            if (rax_25.d != 0xffffffff)
                                rcx_23 = *(rdi_3 + 0x50) + rax_25 * 0x14
                            
                            if (rax_25.d != 0xffffffff && rcx_23 != 0 && *(rcx_23 + 8) u> r14_1.d)
                                goto label_14217ae46
                            
                            if ((*(*rbx_5 + 0x1c0))(rbx_5) != 0)
                                goto label_14217ae46
                            
                            if ((*(*rbx_5 + 0x1c8))(rbx_5) != 0)
                                goto label_14217ae46
                        
                        if (var_a8_1 != 0)
                            char var_a8_3 = 0
                            zmm6, zmm7, zmm8 = sub_141fa67d0(&var_b0)
                        
                        if ((rsi_1[0xb].b & 0x40) != 0)
                            goto label_14217b0c6
                    else
                    label_14217b0c6:
                        
                        if (r14_1 != 0)
                            uint8_t rax_54
                            
                            if (rax_17 != 0)
                                rax_54 = sub_141dce3a0(rsi_1)
                            
                            if (rax_17 == 0 || rax_54 == 0)
                                (*(*r14_1 + 0x278))(r14_1, ((rsi_1[0xb].b & 0x40) != 0) + 3)
                    
                    rdi = var_110
                label_14217b0f9:
                    result_2 = result_1
            else
                int32_t rcx_1
                rcx_1.b = sub_140b5b8a0(*(rbx_1 + 0x30), 0) == 0
                
                if ((*(rbx_1 + 0x34) != r12_1.d | rcx_1.b) == 0)
                label_14217abad:
                    void var_e8
                    int32_t* rax_12
                    rax_12, zmm6 = sub_140b5e500(&var_e8, 0x66)
                    int32_t var_100 = *rax_12
                    int32_t var_fc_1 = 0
                    void* rax_13 = sub_14213fce0(arg2, &var_100, 2, 0xffffffff)
                    
                    if (rax_13 != 0)
                        sub_141f9ba40(rax_13, *(*rdi + 0x18))
                        int64_t* rcx_10 = arg2[0x278]
                        void* rdx_7 = *(*rdi + 0x18)
                        
                        if (rcx_10 == 0)
                            sub_141fc3c20(&arg2[0x279], rdx_7 + 0x1c)
                        else
                            (*(*rcx_10 + 0x288))(rcx_10, rdx_7)
                else
                    int64_t rbx_3 = *(*(*rdi + 0x18) + 0x30)
                    
                    if (arg2[0x298].d != *(arg2 + 0x14ec))
                        int32_t rax_9 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                        void* r8 = &arg2[0x29e]
                        void* rcx_3 = *(r8 + 8)
                        
                        if (rcx_3 != 0)
                            r8 = rcx_3
                        
                        int32_t rax_11 = *(r8 + (((sx.q(arg2[0x2a0].d) - 1) & sx.q(rax_9)) << 2))
                        
                        if (rax_11 != 0xffffffff)
                            int64_t rdx_3 = arg2[0x297]
                            
                            while (true)
                                int64_t rcx_5 = sx.q(rax_11) * 2
                                
                                if (*(rdx_3 + (rcx_5 << 3)) == rbx_3)
                                    break
                                
                                rax_11 = *(rdx_3 + (rcx_5 << 3) + 8)
                                
                                if (rax_11 == 0xffffffff)
                                    goto label_14217b0f9_1
                            
                            if (rax_11 != 0xffffffff)
                                goto label_14217abad
                
            label_14217b0f9_1:
                result_2 = result_1
            
            result = arg5
            result_2 += 1
            rdi = &rdi[1]
            result_1 = result_2
            var_110 = rdi
        while (result_2 s< result)
else
    data_143f4cf40 += 1

__security_check_cookie(rax_1 ^ &var_138)
return result
