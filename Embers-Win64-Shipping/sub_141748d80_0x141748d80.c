// 函数: sub_141748d80
// 地址: 0x141748d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int128_t* result = *arg1
int64_t* rbp = arg3
int64_t i_1 = sx.q(*(result + 8))

if (i_1 s> 0)
    int64_t* r15_1 = nullptr
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int64_t i
    
    do
        int64_t r8 = **arg1
        int64_t* rsi_1 = *(r15_1 + r8)
        int64_t* rdi_1 = *(r15_1 + r8 + 8)
        void* r9 = *(*rsi_1 + 0x140) + sx.q(rsi_1[1].d) * 0x18
        result = r9 + 0xc
        int64_t rcx_2 = 0
        void* r8_2 = *(*rdi_1 + 0x140) + sx.q(rdi_1[1].d) * 0x18 - r9
        
        while (not((*(result - 0xc))[0] f> *(r8_2 + result)))
            if ((*result)[0] f< *(r8_2 + result - 0xc))
                break
            
            rcx_2 += 1
            result += 4
            
            if (rcx_2 s>= 3)
                if (rsi_1 != 0 && rdi_1 != 0)
                    int64_t* var_c8 = rdi_1
                    int128_t* rax_7 = sub_141746340(&var_c8)
                    int128_t* rax_8 = sub_141749180(&var_c8)
                    zmm6 = data_14399f668
                    var_c8 = rsi_1
                    float var_b8[0x4] = *rax_8
                    int64_t zmm1 = *(rax_7 + 8)
                    float zmm3[0x4] = *rax_7
                    float zmm0[0x4] = _mm_unpacklo_ps(*(rax_7 + 4), zx.o(0)[0].q)
                    float zmm2[0x4] = data_14399f66c
                    zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm1), zmm0[0].q)
                    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, data_14399f670[0].q), 
                        _mm_unpacklo_ps(zmm2, 0)[0].q)
                    float var_98_1[0x4] = zmm6
                    float var_a8_1[0x4] = zmm3
                    float (* rax_9)[0x4] = sub_141746340(&var_c8)
                    float (* rax_10)[0x4] = sub_141749180(&var_c8)
                    int64_t r11_1 = sx.q(rsi_1[1].d)
                    void* rax_11 = *rdi_1
                    float var_88[0x4] = *rax_10
                    zmm1 = (*rax_9)[2]
                    zmm3 = *rax_9
                    int64_t rbx_3 = sx.q(rdi_1[1].d)
                    float var_68_1[0x4] = zmm6
                    zmm0 = _mm_unpacklo_ps((*rax_9)[1], 0)
                    float var_78_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm1), zmm0[0].q)
                    __acrt_fltout(rsi_1, rdi_1, *(*(*rsi_1 + 0x80) + (r11_1 << 3)), 
                        *(*(rax_11 + 0x80) + (rbx_3 << 3)), &var_88, &var_b8, arg1[1].d[0], *rbp, 
                        &arg1[2])
                
                int128_t* j_3 = arg1[0xe2]
                int128_t* j = &arg1[2]
                
                if (j_3 != 0)
                    j = j_3
                
                for (void* rdi_3 = sx.q(arg1[0xe4].d) * 0xe0 + j; j != rdi_3; j = &j[0xe])
                    sub_141763a70(*arg4, j)
                
                void* j_4 = arg1[0x30a]
                void* j_1 = &arg1[0x1ca]
                
                if (j_4 != 0)
                    j_1 = j_4
                
                for (void* rdi_6 = sx.q(arg1[0x30c].d) * 0x140 + j_1; j_1 != rdi_6; j_1 += 0x140)
                    sub_141763950(*arg4, j_1)
                
                arg1[0xe4].d = 0
                
                if (*(arg1 + 0x724) != 0)
                    sub_141750670(&arg1[2], 0)
                
                arg1[0x1c8].d = 0
                
                if (*(arg1 + 0xe44) != 0)
                    sub_141750670(&arg1[0xe6], 0)
                
                result = arg1[0x30a]
                int128_t* result_1 = &arg1[0x1ca]
                int32_t j_5 = arg1[0x30c].d
                
                if (result != 0)
                    result_1 = result
                
                if (j_5 != 0)
                    void* rbx_4 = result_1 + 0x128
                    int32_t j_2
                    
                    do
                        int64_t rcx_12 = *rbx_4
                        
                        if (rcx_12 != 0)
                            result = sub_140a74f90(rcx_12)
                        
                        rbx_4 += 0x140
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                
                arg1[0x30c].d = 0
                
                if (*(arg1 + 0x1864) != 0)
                    result = sub_1417505f0(&arg1[0x1ca], 0)
                
                rbp = arg3
                break
        
        r15_1 = &r15_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
