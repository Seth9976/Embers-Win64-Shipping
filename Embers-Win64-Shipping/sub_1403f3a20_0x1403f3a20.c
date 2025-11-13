// 函数: sub_1403f3a20
// 地址: 0x1403f3a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rdi = sx.q(arg2)
int32_t* r10 = arg1
int32_t* rsi = arg4
int32_t* var_108 = arg3
int32_t i = 1
int64_t r14 = rdi
uint64_t result = rdi * rdi
var_138 = 0
uint128_t zmm0
zmm0.d = r10[result - 1].d f+ *r10
zmm0.d = zmm0.d f* 4.99999987e-06f
int64_t temp0 = _mm_cvtps_pd(zmm0.q)

if (arg2 s> 0)
    while (i == 1)
        int64_t r15_1 = r14 << 2
        void* rax_4 = r10 - arg3
        int64_t r9 = 0
        int32_t r13_1 = 0
        int64_t rbx_1 = r14
        int32_t* rdx = arg3
        void var_e8
        void* r11_1 = &var_e8 - rsi
        int32_t i_1 = 0
        int32_t var_130_1 = 0
        int32_t* rbp_1 = rsi
        void* var_100_1 = r11_1
        int64_t var_110_1 = rbx_1
        int64_t r12_1 = r15_1 + 4
        int32_t* var_120_1 = rdx
        void* var_f0_1 = rax_4
        
        while (true)
            int64_t rsi_1 = sx.q(r13_1)
            int64_t rcx = 0
            float zmm3[0x2] = _mm_cvtps_pd(*(rax_4 + rdx))
            void* r8 = &arg3[rsi_1]
            void var_a4
            uint128_t zmm1
            uint128_t zmm2
            
            if (r9 s>= 4)
                int64_t rax_6 = neg.q(r8)
                void* r10_1 = &var_e8 + rax_6
                void var_a8
                void* r11_2 = &var_a8 + rax_6
                void var_e4
                void* rbx_2 = &var_e4 + rax_6
                void* rdi_1 = &var_a4 + rax_6
                void* rdx_1 = r8 + 8
                int64_t j_4 = ((r9 - 4) u>> 2) + 1
                rcx = j_4 << 2
                int64_t j
                
                do
                    zmm0 = *(rdx_1 - 8)
                    zmm2 = *(rdx_1 - 4)
                    rdx_1 += 0x10
                    zmm1.d = zmm0.d f* *(r10_1 + rdx_1 - 0x18)
                    *(r11_2 + rdx_1 - 0x18) = zmm1.d
                    zmm1.d = zmm1.d f* zmm0.d
                    zmm3 = zmm3 f- _mm_cvtps_pd(zmm1.q).q
                    zmm1.d = zmm2.d f* *(rbx_2 + rdx_1 - 0x18)
                    *(rdi_1 + rdx_1 - 0x18) = zmm1.d
                    zmm1.d = zmm1.d f* zmm2.d
                    zmm2 = *(rdx_1 - 0x10)
                    zmm3 = zmm3 f- _mm_cvtps_pd(zmm1.q).q
                    zmm1.d = zmm2.d f* *(r10_1 + rdx_1 - 0x10)
                    *(r11_2 + rdx_1 - 0x10) = zmm1.d
                    zmm1.d = zmm1.d f* zmm2.d
                    zmm2 = *(rdx_1 - 0xc)
                    zmm3 = zmm3 f- _mm_cvtps_pd(zmm1.q).q
                    zmm1.d = zmm2.d f* *(rbx_2 + rdx_1 - 0x10)
                    *(rdi_1 + rdx_1 - 0x10) = zmm1.d
                    zmm1.d = zmm1.d f* zmm2.d
                    zmm3 = zmm3 f- _mm_cvtps_pd(zmm1.q).q
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                rdx = var_120_1
                rbx_1 = var_110_1
                r10 = arg1
                r11_1 = var_100_1
                rdi = zx.q(r14.d)
            
            void var_ac
            
            while (rcx s< r9)
                void* rax_9 = &var_e8 + (rcx << 2)
                rcx += 1
                zmm0 = *(rax_9 + r8 - &var_e8)
                zmm1.d = zmm0.d f* *rax_9
                *(&var_ac + (rcx << 2)) = zmm1.d
                zmm1.d = zmm1.d f* zmm0.d
                zmm3 = zmm3 f- _mm_cvtps_pd(zmm1.q).q
            
            if (temp0 f> zmm3)
                int64_t r11_4 = 0
                uint128_t zmm4
                zmm4.q = _mm_cvtepi32_pd(zx.q(var_138 + 1)).q f* temp0
                zmm4.q = zmm4.q f- zmm3
                
                if (r14 s>= 4)
                    zmm2 = _mm_cvtpd_ps(zmm4)
                    int64_t rax_19 = r14 * 0xc
                    void* rdx_5 = r15_1 + 4 + r10
                    int64_t r8_5 = (r14 + 1) << 4
                    void* rcx_4 = rax_19 + 0xc + r10
                    int64_t j_5 = ((r14 - 4) u>> 2) + 1
                    r11_4 = j_5 << 2
                    int64_t j_1
                    
                    do
                        zmm0.d = zmm2.d f+ *(-0xc - rax_19 + rcx_4)
                        *(-0xc - rax_19 + rcx_4) = zmm0.d
                        zmm1.d = zmm2.d f+ *rdx_5
                        *rdx_5 = zmm1.d
                        zmm0.d = zmm2.d f+ *(-4 - r15_1 + rcx_4)
                        rdx_5 += r8_5
                        *(-4 - r15_1 + rcx_4) = zmm0.d
                        zmm1.d = zmm2.d f+ *rcx_4
                        *rcx_4 = zmm1.d
                        rcx_4 += r8_5
                        j_1 = j_5
                        j_5 -= 1
                    while (j_1 != 1)
                
                if (r11_4 s< r14)
                    zmm1.d = fconvert.s(zmm4.q)
                    void* rcx_6 = &arg1[(r14 + 1) * r11_4]
                    int64_t j_6 = r14 - r11_4
                    int64_t j_2
                    
                    do
                        zmm0.d = zmm1.d f+ *rcx_6
                        *rcx_6 = zmm0.d
                        rcx_6 += r12_1
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                i = 1
                break
            
            arg3 = var_108
            zmm1.q = 0x3ff0000000000000 f/ zmm3
            zmm0.d = fconvert.s(zmm3)
            void* rax_11 = &arg3[sx.q(rdi.d + r13_1)]
            *(r11_1 + rbp_1) = zmm0.d
            int64_t r11_3 = r9 + 1
            zmm0.d = fconvert.s(zmm1.q)
            *rbp_1 = zmm0.d
            *rdx = 0x3f800000
            
            if (r9 + 1 s< r14)
                void* r10_2 = rax_11 + 8
                int32_t* rbx_3 = &arg3[rbx_1 + r9]
                int64_t rdx_3 = &var_a4 - rax_11 - 8
                
                do
                    int64_t rcx_2 = 0
                    zmm3 = (zx.o(0)).q
                    
                    if (r9 s>= 4)
                        void* rax_13 = r10_2
                        int64_t j_7 = ((r9 - 4) u>> 2) + 1
                        rcx_2 = j_7 << 2
                        int64_t j_3
                        
                        do
                            zmm0 = *(rax_13 + rdx_3 - 4)
                            zmm1 = *(rax_13 + rdx_3)
                            rax_13 += 0x10
                            zmm1.d = zmm1.d f* *(rax_13 - 0x14)
                            zmm0.d = zmm0.d f* *(rax_13 - 0x18)
                            zmm2 = _mm_cvtps_pd(zmm0.q)
                            zmm0 = _mm_cvtps_pd(zmm1.q)
                            zmm1.d = (*(rax_13 + rdx_3 - 0xc)).d f* *(rax_13 - 0x10)
                            zmm2.q = zmm2.q f+ zmm3
                            zmm3 = zmm2.q f+ zmm0.q
                            zmm0 = _mm_cvtps_pd(zmm1.q)
                            zmm1.d = (*(rax_13 + rdx_3 - 8)).d f* *(rax_13 - 0xc)
                            zmm3 = zmm3 f+ zmm0.q f+ _mm_cvtps_pd(zmm1.q).q
                            j_3 = j_7
                            j_7 -= 1
                        while (j_3 != 1)
                    
                    while (rcx_2 s< r9)
                        zmm0 = *(r10_2 + (rcx_2 << 2) - 8)
                        rcx_2 += 1
                        zmm0.d = zmm0.d f* *(&var_ac + (rcx_2 << 2))
                        zmm3 = zmm3 f+ _mm_cvtps_pd(zmm0.q).q
                    
                    zmm1 = r10[rsi_1 + r11_3]
                    zmm0 = *rbp_1
                    r11_3 += 1
                    r10_2 += r15_1
                    rdx_3 += neg.q(r14) << 2
                    zmm1.q = _mm_cvtps_pd(zmm1.q).q f- zmm3
                    zmm1.q = zmm1.q f* _mm_cvtps_pd(zmm0.q).q
                    *rbx_3 = _mm_cvtpd_ps(zmm1).d
                    rbx_3 = &rbx_3[r14]
                while (r11_3 s< r14)
                
                rdx = var_120_1
                rbx_1 = var_110_1
                arg3 = var_108
                r10 = arg1
                rdi = zx.q(r14.d)
            
            r11_1 = var_100_1
            rbx_1 += r14
            int32_t rax_15 = var_130_1 + 1
            r12_1 = r15_1 + 4
            r13_1 += rdi.d
            rdx += r12_1
            rbp_1 = &rbp_1[1]
            var_130_1 = rax_15
            rax_4 = var_f0_1
            r9 += 1
            var_110_1 = rbx_1
            var_120_1 = rdx
            
            if (rax_15 s>= rdi.d)
                i = i_1
                break
        
        arg3 = var_108
        r10 = arg1
        rsi = arg4
        result = zx.q(var_138 + 1)
        var_138 = result.d
        
        if (result.d s>= rdi.d)
            break

__security_check_cookie(rax_1 ^ &var_138)
return result
