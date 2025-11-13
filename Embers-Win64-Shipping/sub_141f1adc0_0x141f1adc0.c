// 函数: sub_141f1adc0
// 地址: 0x141f1adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
void* result = __security_cookie ^ &var_188
void* result_1 = result
void* rbx = arg1
void* rcx = *(arg1 + 0x410)

if (rcx != 0)
    int32_t i = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_7c_1 = 0x80
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    void* var_68_1 = nullptr
    int32_t var_60_1 = 0
    uint32_t j_2
    int64_t var_128
    int64_t var_108
    int32_t* var_100
    
    if (*(rbx + 0x430) s> 0)
        void* rdi_1 = nullptr
        var_100 = &j_2
        
        do
            int64_t rax_1 = *(rbx + 0x410)
            uint32_t j_7 = zx.d(*(rdi_1 + *(rbx + 0x428)))
            j_2 = j_7
            var_108 = (zx.q(j_7) << 6) + *(rax_1 + 0x28) + 0x14
            sub_1409994d0(&var_a8, &var_128, &var_108, nullptr)
            i += 1
            rdi_1 += 2
        while (i s< *(rbx + 0x430))
        
        rcx = *(rbx + 0x410)
    
    int32_t rax_3 = 0
    void* rsi_1 = nullptr
    int32_t var_12c_1 = 0
    int32_t r12_1 = 0
    void* var_148
    __builtin_memset(&var_148, 0, 0x18)
    int32_t i_1 = 0
    int64_t var_a0
    
    if (*(rcx + 0x70) s> 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int64_t* var_120_1 = nullptr
        int32_t* var_138
        
        do
            int32_t j_8 = 0
            
            if (rax_3 s< 0)
                int32_t j_9 = 0
                
                if (rax_3 != 0)
                    sub_1405dadb0(&var_138, 0)
                    j_8 = j_9
            
            sub_1409b3740(&var_a8, var_a0.d - var_74_1, 0)
            int64_t var_140_1
            
            if (var_60_1 != 0)
                void var_70
                void* rax_7 = &var_70
                
                if (var_68_1 != 0)
                    rax_7 = var_68_1
                
                uint32_t j_5 = *(rax_7 + ((sx.q(var_60_1 - 1) & sx.q(i_1)) << 2))
                
                if (j_5 != 0xffffffff)
                    int64_t rdx_4 = var_a8
                    uint32_t j
                    
                    do
                        int64_t rax_9 = sx.q(j_5) * 2
                        j = *(rdx_4 + (rax_9 << 3) + 8)
                        
                        if (*(rdx_4 + (rax_9 << 3)) == i_1)
                            if (j_5 != 0xffffffff)
                                int32_t r10_1 = var_12c_1
                                uint32_t j_3 = j
                                int32_t* r12_2 = var_138
                                uint32_t j_6 = j
                                var_128.d = j
                                j_2 = j
                                
                                while (true)
                                    int64_t j_10 = sx.q(j_8)
                                    j_8 = (j_10 + 1).d
                                    
                                    if (j_8 s> r10_1)
                                        sub_1405a4cf0(&var_138)
                                        j_3 = var_128.d
                                        j_6 = j_2
                                        rdx_4 = var_a8
                                        r10_1 = var_12c_1
                                        r12_2 = var_138
                                    
                                    void* r9_1 = &r12_2[j_10]
                                    
                                    if (r9_1 != 0)
                                        j_3 = j_6
                                        *r9_1 = *(rdx_4 + sx.q(j_5) * 0x10 + 4)
                                        rdx_4 = var_a8
                                    
                                    j_5 = j_3
                                    
                                    if (j == 0xffffffff)
                                        break
                                    
                                    while (true)
                                        j = *(rdx_4 + sx.q(j) * 0x10 + 8)
                                        j_3 = j
                                        
                                        if (*(rdx_4 + sx.q(j_5) * 0x10) == i_1)
                                            var_128.d = j_3
                                            j_6 = j_3
                                            j_2 = j_3
                                            break
                                        
                                        j_5 = j
                                        
                                        if (j == 0xffffffff)
                                            goto label_141f1b023
                                
                            label_141f1b023:
                                r12_1 = var_140_1:4.d
                            
                            break
                        
                        j_5 = j
                    while (j != 0xffffffff)
                    rbx = arg1
            
            if (j_8 != 0)
                void* r10_2 = arg1
                int32_t r9_2 = 0
                int64_t rbx_1 = *(*(r10_2 + 0x410) + 0x68)
                var_128 = rbx_1
                
                if (r12_1 s< 0)
                    var_140_1.d = 0
                    
                    if (r12_1 != 0)
                        sub_140638cc0(&var_148, 0)
                        r9_2 = var_140_1.d
                        r10_2 = arg1
                        r12_1 = var_140_1:4.d
                        rsi_1 = var_148
                
                float zmm2[0x4]
                float zmm3[0x4]
                
                if (j_8 s> 0)
                    int32_t* r13_1 = var_138
                    uint64_t j_4 = zx.q(j_8)
                    j_2.q = j_4
                    uint64_t j_1
                    
                    do
                        int32_t k = 0
                        void* rdi_4 = (sx.q(*r13_1) << 6) + *(*(r10_2 + 0x410) + 0x28)
                        
                        if (*(rdi_4 + 0x36) u> 0)
                            do
                                void* rax_19 = *(r10_2 + 0x410)
                                float zmm5_1[0x4] = *(r10_2 + 0x1c0)
                                int64_t r14_1 = sx.q(r9_2)
                                float zmm4_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                int64_t r8_1 = *(rax_19 + 0x58)
                                r9_2 = (r14_1 + 1).d
                                var_140_1.d = r9_2
                                int64_t rcx_13 =
                                    sx.q(*(*(rax_19 + 0x38) + sx.q(*(rdi_4 + 0x10) + k) * 0x18)) * 3
                                zmm3 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(*(r8_1 + (rcx_13 << 2)), 
                                        (*(r8_1 + (rcx_13 << 2) + 8))[0].q), 
                                    _mm_unpacklo_ps(*(r8_1 + (rcx_13 << 2) + 4), zx.o(0)[0].q)[0].q)
                                zmm2 = _mm_mul_ps(*(r10_2 + 0x1e0), zmm3)
                                float zmm1_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                float zmm0_1[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm5_1)
                                zmm3 = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm4_1), zmm0_1)
                                zmm3 = _mm_add_ps(zmm3, zmm3)
                                zmm0_1 = _mm_mul_ps(zmm3, zmm1_1)
                                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm4_1)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                zmm0_1 = _mm_add_ps(zmm0_1, zmm2)
                                zmm1_1 = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(zmm1_1, _mm_mul_ps(zmm3, zmm5_1)), 
                                        zmm0_1), 
                                    *(r10_2 + 0x1d0))
                                float var_f8_1 = zmm1_1[0]
                                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                float var_f0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                float var_f4_1 = zmm0_1[0]
                                
                                if (r9_2 s> r12_1)
                                    sub_140638a00(&var_148)
                                    r9_2 = var_140_1.d
                                    r10_2 = arg1
                                    r12_1 = var_140_1:4.d
                                    rsi_1 = var_148
                                
                                int64_t rcx_15 = r14_1 * 3
                                k += 1
                                *(rsi_1 + (rcx_15 << 2)) = var_f8_1.q
                                *(rsi_1 + (rcx_15 << 2) + 8) = var_f0_1
                            while (k s< zx.d(*(rdi_4 + 0x36)))
                            
                            j_4 = j_2.q
                        
                        r13_1 = &r13_1[1]
                        j_1 = j_4
                        j_4 -= 1
                        j_2.q = j_4
                    while (j_1 != 1)
                    rbx_1 = var_128
                
                sub_140acd0a0(&var_108, rsi_1, r9_2)
                zmm6 = data_143a2e998
                int64_t rdx_9 = *(*(arg1 + 0x410) + 0x48)
                int64_t rcx_18 = sx.q(*(var_120_1 + rbx_1 + 0x18)) * 3
                int64_t rax_28 = sx.q(*(var_120_1 + rbx_1 + 0x14))
                float zmm0_2 = *(rdx_9 + (rcx_18 << 2) + 4)
                zmm2 = *(rdx_9 + (rcx_18 << 2))
                float zmm1_2[0x4] = *(rdx_9 + (rcx_18 << 2) + 8)
                zmm2[0] = zmm2[0] * zmm2[0]
                int64_t rcx_19 = rax_28 * 3
                int64_t* rax_29 = *(var_120_1 + rbx_1)
                zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                zmm2[0] = zmm2[0] + zmm0_2 * zmm0_2
                zmm0_2 = *(rdx_9 + (rcx_19 << 2) + 4)
                zmm2[0] = zmm2[0] + zmm1_2[0]
                zmm1_2 = *(rdx_9 + (rcx_19 << 2) + 8)
                zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                zmm3 = _mm_sqrt_ss(0, zmm2[0])
                zmm2 = *(rdx_9 + (rcx_19 << 2))
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm2[0] = zmm2[0] + zmm0_2 * zmm0_2
                zmm2[0] = zmm2[0] + zmm1_2[0]
                zmm6.d = zmm6.d f/ _mm_max_ss(_mm_sqrt_ss(0, zmm2[0]), zmm3[0])
                
                if (rax_29 == 0)
                    rax_29, zmm6 = sub_14210f630(0)
                
                int32_t rcx_20 = data_1439c7a08
                char var_160_1 = 1
                int64_t* var_118 = nullptr
                int32_t var_110_1 = 0
                (*(*rax_29 + 0x2a0))(rax_29, &var_118, 3, 0, rcx_20, var_160_1, arg1)
                int32_t r13_2 = 0
                
                if (var_110_1 s> 0)
                    int64_t r14_2 = 0
                    
                    do
                        void* rdi_5 = *(var_118 + r14_2)
                        
                        if (rdi_5 != 0)
                            void* rax_31 = sub_1425b3af0()
                            void* rdx_11 = *(rdi_5 + 0x10)
                            int64_t rax_32 = sx.q(*(rax_31 + 0x38))
                            
                            if (rax_32.d s<= *(rdx_11 + 0x38)
                                    && *(*(rdx_11 + 0x30) + (rax_32 << 3)) == rax_31 + 0x30)
                                int64_t rbx_2 = sx.q(arg3[1].d)
                                int32_t rax_34 = (rbx_2 + 1).d
                                arg3[1].d = rax_34
                                
                                if (rax_34 s> *(arg3 + 0xc))
                                    sub_1405c4f50(arg3)
                                
                                int64_t rcx_25 = rbx_2 * 0x30
                                void** rcx_26 = rcx_25 + *arg3
                                
                                if (rcx_25 == neg.q(*arg3))
                                    rcx_26 = nullptr
                                else
                                    __builtin_memset(rcx_26, 0, 0x24)
                                    *(rcx_26 + 0x2c) &= 0xfffffffe
                                    *(rcx_26 + 0x24) = 0x3f800000
                                
                                zmm1_2 = var_100:4.d
                                zmm2 = zx.o(var_108)
                                int64_t var_dc_1 = (_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)).q
                                int32_t var_e0_1 = var_100.d
                                *rcx_26 = rdi_5
                                float var_b8_1 = zmm1_2[0]
                                float var_e8[0x4]
                                var_e8[0].q = zmm2.q
                                *(rcx_26 + 8) = var_e8
                                float var_d4_1 = var_b8_1
                                float var_d0_1 = zmm1_2[0]
                                rcx_26[3] = var_dc_1
                                rcx_26[4].d = var_d0_1
                                *(rcx_26 + 0x24) = zmm6.d
                        
                        r13_2 += 1
                        r14_2 += 8
                    while (r13_2 s< var_110_1)
                    
                    r12_1 = var_140_1:4.d
                
                int64_t* rcx_27 = var_118
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
                
                rbx = arg1
            
            i_1 += 1
            var_120_1 = &var_120_1[0xa]
            rax_3 = var_12c_1
        while (i_1 s< *(*(rbx + 0x410) + 0x70))
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        int32_t* rax_39 = var_138
        
        if (rax_39 != 0)
            sub_140a74f90(rax_39)
    
    int32_t var_60_2 = 0
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    bool cond:0_1 = var_a0:4.d == 0
    var_a0.d = 0
    
    if (not(cond:0_1))
        sub_1405a5410(&var_a8, 0)
    
    int32_t var_78_2 = 0xffffffff
    int32_t var_74_2 = 0
    int64_t var_98
    result = sub_14059a8e0(&var_98, 0)
    int64_t var_88
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)
    
    int64_t rcx_34 = var_a8
    
    if (rcx_34 != 0)
        result = sub_140a74f90(rcx_34)

__security_check_cookie(result_1 ^ &var_188)
return result
