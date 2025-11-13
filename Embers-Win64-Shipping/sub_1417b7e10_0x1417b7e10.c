// 函数: sub_1417b7e10
// 地址: 0x1417b7e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t result = __security_cookie ^ &var_148
int64_t result_1 = result

if (data_1439b8e68 != 0)
    int128_t zmm6 = zx.o(0)
    float var_110 = __minss_xmmss_memss(_mm_max_ss((*arg3)[0], 0)[0], 0x3f800000)[0]
    int32_t var_128
    sub_1405ba560(arg1 + 0x170, &var_128, arg2)
    result = sx.q(var_128)
    void* const rcx_3
    
    if (result.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = (result << 5) + *(arg1 + 0x170)
    
    if (*(rcx_3 + 0x10) s> 0)
        void*** rcx_4 = nullptr
        int32_t i = 1
        void*** var_100_1 = nullptr
        
        do
            void** rcx_5 = *(rcx_4 + *(rcx_3 + 8))
            void** var_108 = rcx_5
            void* rdi_1 = *rcx_5
            int64_t rdx_1 = sx.q(rcx_5[1].d)
            result = *(rdi_1 + 0x80)
            void* rcx_6 = *(result + (rdx_1 << 3))
            
            if (rcx_6 != 0 && *(rcx_6 + 0xc) != 0)
                int64_t rdi_2 = *(rdi_1 + 0x28)
                int64_t rbx_1 = rdx_1 * 3
                result = _isnan(_mm_cvtps_pd((*(rdi_2 + (rbx_1 << 2)))[0].q)[0].q)
                
                if (result.d == 0)
                    result = _isnan(_mm_cvtps_pd((*(rdi_2 + (rbx_1 << 2) + 4))[0].q)[0].q)
                    
                    if (result.d == 0)
                        result = _isnan(_mm_cvtps_pd((*(rdi_2 + (rbx_1 << 2) + 8))[0].q)[0].q)
                        
                        if (result.d == 0)
                            void** r8_1 = var_108
                            float temp0_6[0x4] = _mm_unpacklo_ps(data_14399f66c, zmm6.q)
                            float var_88[0x4] = *((sx.q(r8_1[1].d) << 4) + *(*r8_1 + 0x68))
                            float var_78_1[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(*(rdi_2 + (rbx_1 << 2)), 
                                    *(rdi_2 + (rbx_1 << 2) + 8)), 
                                _mm_unpacklo_ps(*(rdi_2 + (rbx_1 << 2) + 4), zmm6.q)[0].q)
                            float var_68_1[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), temp0_6[0].q)
                            int64_t* rcx_11 = *(*(*r8_1 + 0x80) + (sx.q(r8_1[1].d) << 3))
                            int32_t* var_c0
                            int64_t* rax_5
                            int64_t r9_1
                            rax_5, r9_1 = (*(*rcx_11 + 0x28))(rcx_11, &var_c0)
                            void** var_f8
                            sub_1417048d0(&var_f8, 3, 1)
                            var_f8 = &data_142fc4870
                            int32_t rsi_1 = *(rcx_3 + 0x10)
                            int64_t var_e8_1 = *rax_5
                            int32_t var_e0_1 = rax_5[1].d
                            int64_t var_dc_1 = *(rax_5 + 0xc)
                            int32_t var_d4_1 = *(rax_5 + 0x14)
                            var_128 = i
                            int64_t* var_120 = nullptr
                            int64_t var_118_1 = 0
                            int32_t j_4 = rsi_1 - i
                            
                            if (rsi_1 != i)
                                r9_1 = sub_1405a5410(&var_120, j_4)
                            
                            if (j_4 s> 0)
                                uint64_t j_3 = zx.q(j_4)
                                uint64_t j
                                
                                do
                                    int64_t rbx_3 = sx.q(var_118_1.d)
                                    int32_t rax_7 = (rbx_3 + 1).d
                                    var_118_1.d = rax_7
                                    
                                    if (rax_7 s> var_118_1:4.d)
                                        r9_1 = sub_1405a4f90(&var_120)
                                    
                                    int64_t* rax_10 = &var_120[rbx_3 * 2]
                                    
                                    if (rbx_3 << 4 != neg.q(var_120))
                                        *rax_10 = 0
                                        rax_10[1] = 0
                                    
                                    j = j_3
                                    j_3 -= 1
                                while (j != 1)
                            
                            int64_t* var_b8_1 = rcx_3 + 8
                            var_c0 = &var_128
                            float (* var_b0_1)[0x4] = &var_88
                            void*** var_a8_1 = &var_108
                            float* var_a0_1 = &var_110
                            int64_t* var_98_1 = &var_120
                            int32_t** var_c8_1 = &var_c0
                            int64_t (* var_d0)(int64_t* arg1, int32_t* arg2) = sub_1417a8e30
                            zmm6 = sub_1417487a0(j_4, &var_d0, 0, r9_1)
                            int64_t* rdi_3 = var_120
                            int64_t rbx_4 = sx.q(var_118_1.d)
                            void* r15_3 = &rdi_3[rbx_4 * 2]
                            
                            if (rdi_3 != r15_3)
                                do
                                    void* j_1 = *rdi_3
                                    
                                    for (void* rsi_4 = (sx.q(rdi_3[1].d) << 4) + j_1; j_1 != rsi_4; 
                                            j_1 += 0x10)
                                        zmm6 = sub_1417a98a0(arg1, *j_1, *(j_1 + 8))
                                    
                                    rdi_3 = &rdi_3[2]
                                while (rdi_3 != r15_3)
                                
                                rbx_4 = zx.q(var_118_1.d)
                                rdi_3 = var_120
                            
                            if (rbx_4.d != 0)
                                int32_t j_2
                                
                                do
                                    int64_t rcx_18 = *rdi_3
                                    
                                    if (rcx_18 != 0)
                                        sub_140a74f90(rcx_18)
                                    
                                    rdi_3 = &rdi_3[2]
                                    j_2 = rbx_4.d
                                    rbx_4 = zx.q(rbx_4.d - 1)
                                while (j_2 != 1)
                                rdi_3 = var_120
                            
                            if (rdi_3 != 0)
                                sub_140a74f90(rdi_3)
                            
                            var_f8 = &data_142fc4870
                            result = sub_141706890(&var_f8)
            
            i += 1
            rcx_4 = &var_100_1[1]
            var_100_1 = rcx_4
        while (i s<= *(rcx_3 + 0x10))

__security_check_cookie(result_1 ^ &var_148)
return result
