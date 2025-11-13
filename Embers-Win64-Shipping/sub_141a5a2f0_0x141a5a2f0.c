// 函数: sub_141a5a2f0
// 地址: 0x141a5a2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int64_t* var_e0 = &arg1[7]
void* var_e8 = &arg1[2]
int32_t* rsi = arg2
int64_t var_f8 = 0
int64_t rax_2 = *arg1
int64_t* r15 = arg1
int64_t var_f0 = 0
int32_t* var_118 = nullptr
int32_t result_1 = 0
(*(rax_2 + 8))(arg3, &arg2[2], &var_f8, &var_118)
int32_t result = result_1

if (result s> 2)
    int64_t rbx_1 = 0
    int64_t var_108 = 0
    int32_t rdi_1 = 0
    int32_t var_fc_1 = 0
    int32_t i_1 = 1
    
    if (result - 1 s> 1)
        int64_t r15_1 = 4
        uint128_t zmm6
        uint128_t var_58_1 = zmm6
        int128_t zmm7
        int128_t var_68_1 = zmm7
        uint128_t zmm8
        uint128_t var_78_1 = zmm8
        int128_t zmm9
        int128_t var_88_1 = zmm9
        int32_t i
        
        do
            int32_t* rax_5 = var_118
            int32_t r13_1
            
            if (arg1 == -0x38)
                r13_1 = -1
            else
                r13_1 = sub_141f893b0(&arg1[7], *(rax_5 + r15_1))
                rax_5 = var_118
            
            int32_t r8_1
            
            if (arg1 == -0x38)
                r8_1 = -1
            else
                r8_1 = sub_141f893b0(&arg1[7], *(rax_5 + r15_1 + 4))
            
            int64_t rcx_3 = sx.q(r13_1)
            int64_t r8_2 = sx.q(r8_1)
            int64_t rdx_3 = arg1[4]
            int128_t* r10_2 = r8_2 * 0x1c + rdx_3
            zmm9 = *(rcx_3 * 0x1c + rdx_3)
            int64_t r9_1 = *var_e8
            int32_t rax_10 = *(r9_1 + (rcx_3 << 2))
            int64_t rcx_4 = *(rsi + 0x18)
            int64_t rax_11 = sx.q(r12)
            zmm8 = _mm_cvtepi32_pd(zx.q(rcx_4.d))
            int32_t rbx_2 = *(r9_1 + (rax_11 << 2))
            int128_t* rsi_2 = rax_11 * 0x1c + rdx_3
            int32_t rax_13 = *(r9_1 + (r8_2 << 2)) - rbx_2
            int64_t* rcx_6 = data_143f29fe8
            zmm8.q = zmm8.q f/ _mm_cvtepi32_pd(zx.q((rcx_4 u>> 0x20).d)).q
            int64_t rax_14 = *rcx_6
            zmm6.q = 0x3ff0000000000000 f/ zmm8.q
            double zmm1[0x2] = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(rax_13)).q)
            zmm1[0] = zmm1[0] f* zmm6.q
            zmm7 = _mm_cvtpd_ps(zmm1)
            int32_t rax_15 = (*(rax_14 + 0x90))(rcx_6)
            char rcx_7
            
            if (not(zmm7.d f<= 0f))
                rcx_7 = *(rsi_2 + 0x18)
            
            uint32_t zmm5_1[0x4]
            
            if (zmm7.d f<= 0f || rcx_7 == 1)
                zmm5_1 = *rsi_2
            else
                double zmm3[0x2] = *rsi_2
                zmm1 = _mm_cvtps_pd(zmm7.q)
                arg3 = _mm_cvtepi32_ps(zx.o(rax_10 - rbx_2))
                zmm5_1 = *r10_2
                double zmm2[0x2] = _mm_cvtps_pd(arg3.q)
                zmm2[0] = zmm2[0] f* zmm6.q
                zmm2[0] = zmm2[0] / zmm1[0]
                zmm6 = _mm_cvtpd_ps(zmm2)
                
                if (rcx_7 != 0 || (rax_15 != 0 && *(r10_2 + 0x18) == 2))
                    arg3.q = _mm_cvtps_pd((*(r10_2 + 4)).q).q f* zmm8.q
                    zmm1 = _mm_cvtpd_ps(arg3)
                    arg3 = _mm_cvtps_pd((*(rsi_2 + 8)).q)
                    zmm1[0].d = zmm1[0].d f* zmm7.d
                    arg3.q = arg3.q f* zmm8.q
                    zmm1[0].d = zmm1[0].d f* 0.333333343f
                    zmm5_1[0] = zmm5_1[0] f- zmm1[0].d
                    zmm1 = _mm_cvtpd_ps(arg3)
                    zmm5_1[0] = zmm5_1[0] f- zmm5_1[0]
                    zmm1[0].d = zmm1[0].d f* zmm7.d
                    zmm5_1[0] = zmm5_1[0] f* zmm6.d
                    zmm1[0].d = zmm1[0].d f* 0.333333343f
                    zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
                    zmm1[0].d = zmm1[0].d f+ zmm3[0].d
                    arg3.d = zmm1.d f- zmm3[0].d
                    arg3.d = arg3.d f* zmm6.d
                    arg3.d = arg3.d f+ zmm3[0].d
                    zmm3 = zmm5_1
                    zmm3[0].d = zmm3[0].d f- zmm1[0].d
                    zmm3[0].d = zmm3[0].d f* zmm6.d
                    zmm3[0].d = zmm3[0].d f+ zmm1[0].d
                    zmm5_1[0] = zmm5_1[0] f- zmm3[0].d
                    zmm3[0].d = zmm3[0].d f- arg3.d
                    zmm5_1[0] = zmm5_1[0] f* zmm6.d
                    zmm3[0].d = zmm3[0].d f* zmm6.d
                    zmm5_1[0] = zmm5_1[0] f+ zmm3[0].d
                    zmm3[0].d = zmm3[0].d f+ arg3.d
                    zmm5_1[0] = zmm5_1[0] f- zmm3[0].d
                    zmm5_1[0] = zmm5_1[0] f* zmm6.d
                    zmm5_1[0] = zmm5_1[0] f+ zmm3[0].d
                else
                    zmm5_1[0] = zmm5_1[0] f- zmm3[0].d
                    zmm5_1[0] = zmm5_1[0] f* zmm6.d
                    zmm5_1[0] = zmm5_1[0] f+ zmm3[0].d
            
            rsi = arg2
            zmm5_1[0] = zmm5_1[0] f- zmm9.d
            
            if (_mm_and_ps(zmm5_1, 0x7fffffff)[0] f<= *rsi)
                int32_t* rsi_3 = var_118
                int64_t rbx_3 = sx.q(rdi_1)
                rdi_1 = (rbx_3 + 1).d
                
                if (rdi_1 s> var_fc_1)
                    sub_1405a4cf0(&var_108)
                
                rbx_1 = var_108
                rsi = arg2
                *(rbx_1 + (rbx_3 << 2)) = *(rsi_3 + r15_1)
            else
                rbx_1 = var_108
                r12 = r13_1
            
            i = i_1 + 1
            r15_1 += 4
            i_1 = i
        while (i s< result_1 - 1)
        r15 = arg1
    
    var_108 = rbx_1
    int32_t var_100_2 = rdi_1
    var_108.o = var_108.o
    result = sub_141a424a0(&var_e8, &var_108)
    
    if (rsi[1].b != 0)
        result = sub_141a3b020(r15, zx.o(0))
    
    if (rbx_1 != 0)
        result = sub_140a74f90(rbx_1)

int32_t* rcx_14 = var_118

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_f8

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
