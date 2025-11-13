// 函数: sub_140b9f480
// 地址: 0x140b9f480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
void arg_8
sub_140cad130(&arg_8)
int32_t r14 = 0

if (*(arg1 + 0xa4) s< *(*(arg1 + 0x50) + 0x20))
    zmm8 = 0x4170000000000000
    zmm9 = 0x3a8461fa
    
    do
        void* rcx_1 = *(arg1 + 0x1d8)
        bool z_1
        
        if (0 == *(rcx_1 + 0x84))
            *(rcx_1 + 0x84) = 0
            z_1 = true
        else
            *(rcx_1 + 0x84)
            z_1 = false
        
        if (not(z_1))
            break
        
        zmm7 = *(arg1 + 0xc4)
        zmm6 = zx.o(*(arg1 + 0xd0))
        uint128_t zmm0
        uint128_t zmm1
        uint128_t entry_zmm2
        
        if (*(arg1 + 0xc8) != 0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            entry_zmm2.q = float.d(performanceCount)
            zmm0 = _mm_cvtps_pd(zmm7.q)
            entry_zmm2.q = entry_zmm2.q f* data_143d796f8
            entry_zmm2.q = entry_zmm2.q f+ zmm8.q
            zmm1.q = entry_zmm2.q f- zmm6.q
            bool rax_2 = zmm1.q f> zmm0.q
            
            if (rax_2 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                    && not(zmm1.q f<= _mm_cvtps_pd(data_1439a9644.q).q))
                zmm0.d = data_1439a9640.d f* zmm7.d
                
                if (not(zmm1.q f<= _mm_cvtps_pd(zmm0.q).q))
                    data_1439a9888 = zmm6.q
            
            data_1439a9890 = entry_zmm2.q
            
            if (rax_2 != 0)
                break
        
        void* rcx_3 = data_143e1adf0
        bool z_2
        
        if (0 == *(rcx_3 + 8))
            *(rcx_3 + 8) = 0
            z_2 = true
        else
            *(rcx_3 + 8)
            z_2 = false
        
        rcx_3.b = not(z_2)
        
        if (rcx_3.b != 0)
            break
        
        void* rcx_4 = *(arg1 + 0x50)
        int64_t rdx_2 = sx.q(*(arg1 + 0xa4)) << 7
        int64_t r9_1 = *(rcx_4 + 0x18)
        void* const rdi_1
        
        if (*(rcx_4 + 0x2a2) == 0)
            rdi_1 = nullptr
        else
            rdi_1 = *(rcx_4 + 0x2d8)
        
        if (rdi_1 == 0)
            if (*(rcx_4 + 0x295) == 0)
                int64_t* rcx_15 = *(rcx_4 + 0x2d8)
                
                if ((*(*rcx_15 + 0x198))(rcx_15, *(rdx_2 + r9_1 + 0x28), *(rdx_2 + r9_1 + 0x20))
                        != 0)
                    goto label_140b9f6c4
                
                goto label_140b9f7bc
            
        label_140b9f6c4:
            int32_t rdx_4 = *(arg1 + 0xa4)
            void* rcx_9 = *(arg1 + 0x50)
            *(arg1 + 0xa4) = rdx_4 + 1
            uint64_t rax_8
            rax_8, entry_zmm2, zmm8, zmm9 = sub_140cb4600(rcx_9, rdx_4, entry_zmm2)
            
            if (rax_8 != 0)
                entry_zmm2, zmm8, zmm9 = sub_140cc45a0(*(arg1 + 0x50) + 0x200, rax_8)
                int64_t rbp_2 = sx.q(*(arg1 + 0x120))
                int32_t rcx_12 = (rbp_2 + 1).d
                *(arg1 + 0x120) = rcx_12
                
                if (rcx_12 s> *(arg1 + 0x124))
                    sub_1405a4d70(arg1 + 0x118)
                
                *(*(arg1 + 0x118) + (rbp_2 << 3)) = rax_8
            
            void* r8_2 = *(arg1 + 0x50)
            zmm1 = zx.o(0)
            *(arg1 + 0xd8) = rax_8
            *(arg1 + 0xe0) = u"creating exports for"
            int32_t rax_15
            
            if (r8_2 == 0)
                rax_15 = *(arg1 + 0x100)
                
                if (rax_15 s> 0)
                    zmm1.d =
                        _mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8))).d f/ _mm_cvtepi32_ps(zx.o(rax_15)).d
            else
                int32_t rdx_7 = *(r8_2 + 0x10)
                int32_t rcx_14 = *(arg1 + 0x100)
                int32_t rax_13 = rdx_7
                
                if (rcx_14 s>= rdx_7)
                    rax_13 = rcx_14
                
                rax_15 = rax_13 + *(r8_2 + 0x20) + rdx_7
                zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8) + *(arg1 + 0x9c) + *(arg1 + 0xa4))).d
                    f* 100f
                zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(rax_15)).d
            *(arg1 + 0xf0) = _mm_max_ss((*(arg1 + 0xf0)).d, zmm1.d).d
        else
            int32_t rax_4 = *(rdi_1 + 0x110)
            zmm6 = *(arg1 + 0xc4)
            zmm7 = zx.o(*(arg1 + 0xd0))
            char rbp_1 = *(arg1 + 0xc9)
            char rsi_1 = *(arg1 + 0xc8)
            uint64_t r15_1 = *(rdx_2 + r9_1 + 0x20)
            int64_t r12_1 = *(rdx_2 + r9_1 + 0x28)
            
            if (rax_4 u> 2)
                if (rax_4 == 3)
                    r9_1, zmm6, zmm7, zmm8 = sub_140ba8c30(rdi_1)
                
                if (rsi_1 == 0)
                    goto label_140b9f6c4
                
                r9_1.b = 1
                
                if (sub_140bb0fd0(rdi_1, r12_1, r15_1, r9_1.b, 0) != 0)
                    goto label_140b9f6c4
                
                if (rbp_1 == 0)
                    goto label_140b9f7bc
                
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                zmm0.q = float.d(performanceCount_1)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ zmm8.q
                zmm0.q = zmm0.q f- zmm7.q
                zmm6.d = zmm6.d f- _mm_cvtpd_ps(zmm0).d
                
                if (zmm6.d f<= zmm9.d)
                    goto label_140b9f7bc
                
                if (sub_140bbdcf0(rdi_1, zmm6) == 0)
                    goto label_140b9f7bc
                
                goto label_140b9f6c4
            
        label_140b9f7bc:
            
            if (*(arg1 + 0xc8) != 0 && *(arg1 + 0xc9) == 0)
                *(arg1 + 0xca) = 1
            
            if (*(arg1 + 0xca) != 0)
                goto label_140b9f890
    while (*(arg1 + 0xa4) s< *(*(arg1 + 0x50) + 0x20))

int32_t i = 0

if (*(arg1 + 0x88) s> 0)
    int64_t r8_4 = 0
    
    do
        r8_4 += 8
        i += 1
        void* rcx_17 = *(*(arg1 + 0x80) + r8_4 - 8)
        *(rcx_17 + 0x98) -= 1
    while (i s< *(arg1 + 0x88))

*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) != 0)
    sub_1405c5570(arg1 + 0x80, 0)

int32_t rcx_19 = *(*(arg1 + 0x50) + 0x20)
int32_t temp0_9 = *(arg1 + 0xa4)

if (temp0_9 == rcx_19)
    r14 = 2

if (temp0_9 == rcx_19)
    *(arg1 + 0x4fa) = 1

label_140b9f890:
sub_140cad790()
return zx.q(r14)
