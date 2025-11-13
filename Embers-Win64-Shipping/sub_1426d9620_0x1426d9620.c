// 函数: sub_1426d9620
// 地址: 0x1426d9620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
int64_t* r15 = arg1
void* result_1 = nullptr
int32_t k_3 = 0
void* rdx

if (arg1[0x38] == 0)
    rdx = nullptr
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        rdx = r15[0x38]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx = nullptr

uint128_t zmm8 = sub_1426e7790(rdi, rdx, &result_1)
uint64_t k_2 = zx.q(k_3)

if (k_2.d s> 0)
    uint128_t var_78_1 = zmm8
    int64_t rax_4 = sub_140d3c6e0(rdi + 0x34)
    int64_t* rcx_3 = r15[0x12]
    
    if (rcx_3 != 0 && rax_4 != 0)
        int64_t r9_1 = *rcx_3
        (*(r9_1 + 0x260))(rcx_3, rax_4, zx.q(*(rdi + 0x30)), r9_1)
        r15[0x11] = sub_140cdb8f0(*(r15[0x12] + 0x10), r15[0x13])
    
    int64_t* rcx_6 = r15[0x19]
    
    if (rcx_6 != 0 && rax_4 != 0)
        (*(*rcx_6 + 0x260))(rcx_6, rax_4, zx.q(*(rdi + 0x30)))
        r15[0x18] = sub_140cdb8f0(*(r15[0x19] + 0x10), r15[0x1a])
    
    int64_t* rcx_8 = r15[0x20]
    
    if (rcx_8 != 0 && rax_4 != 0)
        (*(*rcx_8 + 0x260))(rcx_8, rax_4, zx.q(*(rdi + 0x30)))
        r15[0x1f] = sub_140cdb8f0(*(r15[0x20] + 0x10), r15[0x21])
    
    int64_t* rcx_10 = r15[0x27]
    
    if (rcx_10 != 0 && rax_4 != 0)
        (*(*rcx_10 + 0x260))(rcx_10, rax_4, zx.q(*(rdi + 0x30)))
        r15[0x26] = sub_140cdb8f0(*(r15[0x27] + 0x10), r15[0x28])
    
    int64_t* rcx_12 = r15[0x32]
    
    if (rcx_12 != 0 && rax_4 != 0)
        (*(*rcx_12 + 0x260))(rcx_12, rax_4, zx.q(*(rdi + 0x30)))
        r15[0x31] = sub_140cdb8f0(*(r15[0x32] + 0x10), r15[0x33])
    
    void* rax_18 = r15[0x31]
    int64_t rax_19
    
    if (rax_18 != 0)
        rax_19 = sx.q(*(rax_18 + 0x4c))
    
    int128_t zmm15
    
    if (rax_18 == 0 || rax_19 == neg.q(r15[0x32]))
        zmm15 = r15[0x36].d
    else
        zmm15 = *(rax_19 + r15[0x32])
    
    void* rax_21 = r15[0x11]
    int64_t rax_22
    
    if (rax_21 != 0)
        rax_22 = sx.q(*(rax_21 + 0x4c))
    
    int128_t zmm12
    
    if (rax_21 == 0 || rax_22 == neg.q(r15[0x12]))
        zmm12 = r15[0x16].d
    else
        zmm12 = *(rax_22 + r15[0x12])
    
    void* rax_24 = r15[0x18]
    int64_t rax_25
    
    if (rax_24 != 0)
        rax_25 = sx.q(*(rax_24 + 0x4c))
    
    int128_t zmm13
    
    if (rax_24 == 0 || rax_25 == neg.q(r15[0x19]))
        zmm13 = r15[0x1d].d
    else
        zmm13 = *(rax_25 + r15[0x19])
    
    void* rax_27 = r15[0x1f]
    int64_t rax_28
    
    if (rax_27 != 0)
        rax_28 = sx.q(*(rax_27 + 0x4c))
    
    uint64_t i_3
    
    if (rax_27 == 0 || rax_28 == neg.q(r15[0x20]))
        i_3 = zx.q(r15[0x24].d)
    else
        i_3 = zx.q(*(rax_28 + r15[0x20]))
    
    void* rax_30 = r15[0x26]
    int64_t rax_31
    
    if (rax_30 != 0)
        rax_31 = sx.q(*(rax_30 + 0x4c))
    
    uint64_t i_2
    
    if (rax_30 == 0 || rax_31 == neg.q(r15[0x27]))
        i_2 = zx.q(r15[0x2b].d)
    else
        i_2 = zx.q(*(rax_31 + r15[0x27]))
    
    int32_t i_4 = i_2.d
    
    if (not(zmm12.d f< 0f) && not(zmm13.d f<= 0f) && not(zmm12.d f> zmm13.d) && i_3.d s>= 1
            && i_2.d s>= 1)
        char r9_2
        uint128_t zmm0_1
        int512_t zmm3_1
        uint128_t zmm6_1
        uint128_t zmm7_1
        float zmm9_1[0x4]
        r9_2, zmm0_1, zmm3_1, zmm6_1, zmm7_1, zmm8, zmm9_1 = sub_1426dab20(r15, rdi)
        uint128_t zmm2_1 = zmm0_1
        int32_t arg_18 = zmm2_1.d
        
        if (zmm15.d f>= zmm8.d)
            zmm15 = __minss_xmmss_memss(zmm15.d, 0x43b40000)
        else
            zmm15 = zx.o(0)
        
        zmm13.d = zmm13.d f- zmm12.d
        zmm0_1 = _mm_cvtepi32_ps(zx.o((i_3 - 1).d))
        int64_t var_128 = 0
        int64_t var_120_1 = 0
        zmm13.d = zmm13.d f/ zmm0_1.d
        uint128_t zmm11
        zmm11.d = zmm2_1.d f* 0.0174532924f
        zmm0_1.q = 0x401921fb60000000 f/ _mm_cvtepi32_pd(zx.q(i_2.d)).q
        int32_t rdx_13 = i_2.d * i_3.d
        float zmm14[0x4] = _mm_cvtpd_ps(zmm0_1)
        
        if (rdx_13 s> 0)
            r9_2 = sub_1405a5130(&var_128, rdx_13)
            zmm2_1 = arg_18
        
        uint128_t var_58_1 = zmm6_1
        uint128_t var_68_1 = zmm7_1
        float var_88_1[0x4] = zmm9_1
        uint128_t zmm1_1
        
        if (r15[0x37].b != 0)
            zmm9_1 = zmm14
            zmm0_1 = _mm_cvtepi32_ps(zx.o(i_3.d))
            zmm9_1[0] = zmm9_1[0] f/ zmm0_1.d
            int64_t* arg_8
            arg_8.d = zmm9_1[0]
            
            if (i_3.d s> 0)
                uint64_t i
                
                do
                    if (i_2.d s> 0)
                        zmm9_1 = arg_18
                        uint64_t j_3 = zx.q(i_2.d)
                        void* result_2 = result_1
                        uint64_t j
                        
                        do
                            zmm6_1.d = zmm8.d f+ zmm11.d
                            zmm3_1.o = zmm15
                            char var_148_2 = r15[0x39].b & 1
                            char rax_40
                            rax_40, r9_2, zmm6_1, zmm8, zmm9_1 =
                                sub_1426e2e80(r15, zmm6_1, zmm9_1.d, r9_2)
                            
                            if (rax_40 != 0)
                                float zmm0_4[0x4] = zx.o(0)
                                zmm0_4[0] = zmm6_1.d
                                float zmm0_5[0x4]
                                r9_2, zmm0_5, zmm3_1, zmm8, zmm9_1, zmm11, zmm12, zmm13, zmm14, 
                                    zmm15 = __libm_sse2_sincosf_(zmm0_4)
                                zmm7_1.d = _mm_shuffle_ps(zmm0_5, zmm0_5, 1).d f* zmm12.d
                                zmm6_1.d = zmm0_5.d f* zmm12.d
                                
                                if (k_2.d s> 0)
                                    void* rbx_3 = result_2 + 8
                                    uint64_t k
                                    
                                    do
                                        zmm1_1.d = zmm7_1.d f+ *(rbx_3 - 8)
                                        int64_t rdi_2 = sx.q(var_120_1.d)
                                        zmm2_1.d = zmm6_1.d f+ *(rbx_3 - 4)
                                        float var_100_2 = (*rbx_3)[0]
                                        int32_t rax_42 = (rdi_2 + 1).d
                                        int64_t var_f8_2 = 0
                                        uint64_t var_108_2 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                                        var_120_1.d = rax_42
                                        
                                        if (rax_42 s> var_120_1:4.d)
                                            r9_2 = sub_1405a4df0(&var_128)
                                        
                                        int64_t rax_43 = var_128
                                        int64_t rcx_21 = rdi_2 * 3
                                        rbx_3 += 0xc
                                        *(rax_43 + (rcx_21 << 3)) = var_108_2.o
                                        *(rax_43 + (rcx_21 << 3) + 0x10) = var_f8_2
                                        k = k_2
                                        k_2 -= 1
                                    while (k != 1)
                                    k_2 = zx.q(k_3)
                            
                            zmm11.d = zmm11.d f+ zmm14[0]
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        zmm9_1 = arg_8.d
                        i_2 = zx.q(i_4)
                    
                    zmm12.d = zmm12.d f+ zmm13.d
                    zmm8.d = zmm8.d f+ zmm9_1[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                rdi = arg2
        else if (i_2.d s> 0)
            float zmm10[0x4]
            float var_98_1[0x4] = zmm10
            uint64_t i_1
            
            do
                zmm3_1.o = zmm15
                char var_148_1 = r15[0x39].b & 1
                char rax_35
                rax_35, r9_2 = sub_1426e2e80(r15, zmm11, zmm2_1.d, r9_2)
                
                if (rax_35 != 0)
                    float zmm0_2[0x4] = zx.o(0)
                    zmm0_2[0] = zmm11.d
                    float zmm0_3[0x4]
                    uint128_t zmm12_1
                    int32_t zmm13_1
                    r9_2, zmm0_3, zmm3_1, zmm11, zmm12_1, zmm13_1, zmm14, zmm15 =
                        __libm_sse2_sincosf_(zmm0_2)
                    zmm10 = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
                    zmm8 = zmm12_1
                    
                    if (i_3.d s> 0)
                        void* result_3 = result_1
                        uint64_t j_2 = zx.q(i_3.d)
                        uint64_t j_1
                        
                        do
                            zmm6_1.d = zmm8.d f* zmm10[0]
                            zmm7_1.d = zmm8.d f* zmm0_3[0]
                            
                            if (k_2.d s> 0)
                                void* rdi_1 = result_3 + 8
                                uint64_t k_1
                                
                                do
                                    zmm1_1.d = zmm6_1.d f+ *(rdi_1 - 8)
                                    int64_t rbx_2 = sx.q(var_120_1.d)
                                    zmm2_1.d = zmm7_1.d f+ *(rdi_1 - 4)
                                    float var_100_1 = (*rdi_1)[0]
                                    int32_t rax_37 = (rbx_2 + 1).d
                                    int64_t var_f8_1 = 0
                                    uint64_t var_108_1 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                                    var_120_1.d = rax_37
                                    
                                    if (rax_37 s> var_120_1:4.d)
                                        r9_2 = sub_1405a4df0(&var_128)
                                    
                                    int64_t rax_38 = var_128
                                    int64_t rcx_18 = rbx_2 * 3
                                    rdi_1 += 0xc
                                    *(rax_38 + (rcx_18 << 3)) = var_108_1.o
                                    *(rax_38 + (rcx_18 << 3) + 0x10) = var_f8_1
                                    k_1 = k_2
                                    k_2 -= 1
                                while (k_1 != 1)
                                k_2 = zx.q(k_3)
                            
                            zmm8.d = zmm8.d f+ zmm13_1
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        r15 = arg1
                
                zmm2_1 = arg_18
                zmm11.d = zmm11.d f+ zmm14[0]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rdi = arg2
        (*(*r15 + 0x280))(r15, &var_128, rdi)
        (*(*r15 + 0x288))(r15, &var_128, rdi)
        int64_t rcx_24 = var_128
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)

void* result = result_1

if (result == 0)
    return result

return sub_140a74f90(result)
