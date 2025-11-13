// 函数: sub_141dd50b0
// 地址: 0x141dd50b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rsi = arg1
void var_197
sub_140d15810(&var_197)

if (*(rsi + 0x5a) s>= 0)
    int32_t rax_2 = *(rsi + 0xc)
    int64_t r12_1 = 0
    void* const rax_8
    
    if (rax_2 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0 && (*(rsi + 8) & 0x18000) == 0)
        char rax_11 = sub_140d3e110(rsi + 0x160)
        int64_t* rcx_7
        
        if (rax_11 != 0)
            rcx_7 = *(sub_140d3c6e0(rsi + 0x160) + 0xa0)
        
        if (rax_11 == 0 || rcx_7 == 0)
            char rax_14 = data_143de5423
            float zmm0[0x4] = data_143dbb0c0
            int128_t zmm1 = data_143dbb0d0
            int64_t rax_15 = data_143ddb408
            int32_t rax_16 = data_143dbb210
            data_143de5423 = 1
            data_143ddb408 = 0
            int64_t* rdi_1 = *(rsi + 0x1f0)
            float var_98[0x4] = zmm0
            int64_t* r14_1 = nullptr
            int32_t var_f0_1 = rax_16
            int128_t var_88_1 = zmm1
            float var_78_1[0x4] = data_143dbb0e0
            zmm0 = zx.o(data_143dbb208)
            void* r13_1 = &rdi_1[sx.q(*(rsi + 0x1f8))]
            int32_t r15_1 = 0
            int128_t var_108 = data_14399f720
            int64_t var_f8_1 = zmm0.q
            int64_t var_170_1 = 0
            void* var_140_1 = nullptr
            int64_t* var_138_1 = nullptr
            int64_t* var_158 = nullptr
            int32_t var_14c_1 = 0
            
            if (rdi_1 != r13_1)
                do
                    int64_t* rbx_1 = *rdi_1
                    
                    if (rbx_1 != 0 && (rbx_1[0x11].b & 1) == 0)
                        void* rax_18 = sub_1425881f0()
                        void* rdx_4 = rbx_1[2]
                        int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                        
                        if (rax_19.d s<= *(rdx_4 + 0x38)
                                && *(*(rdx_4 + 0x30) + (rax_19 << 3)) == rax_18 + 0x30)
                            int64_t* r12_2 = rbx_1[0x18]
                            
                            if (r12_2 != 0 && sub_141ee7380(r12_2) != 0)
                                arg2, arg3, arg4 =
                                    sub_141f32b40(rbx_1, r12_2, &data_143f3f280, rbx_1[0x19])
                    
                    rdi_1 = &rdi_1[1]
                while (rdi_1 != r13_1)
                
                r12_1 = 0
            
            int64_t* rax_22 = j_sub_140a82f30(0x60)
            int64_t* var_148_1
            
            if (rax_22 == 0)
                var_148_1 = nullptr
            else
                int64_t* rax_23
                rax_23, arg2, arg3, arg4 = sub_141eb55c0(rax_22, rsi)
                var_148_1 = rax_23
            
            uint32_t var_38_1[0x4] = arg2
            int64_t* var_168
            int64_t* var_190 = &var_168
            float var_48_1[0x4] = arg3
            int64_t** var_120_1 = &var_190
            int128_t var_58_1 = arg4
            int64_t (* var_128)(int64_t** arg1, int64_t* arg2) = sub_141dbb9c0
            var_168 = nullptr
            int32_t var_160_1 = 0
            sub_141dc4750(rsi, &var_128)
            int64_t* rdi_2 = var_168
            void* rcx_13 = &rdi_2[sx.q(var_160_1)]
            uint64_t rax_28 = (rcx_13 - rdi_2 + 7) u>> 3
            
            if (rdi_2 u> rcx_13)
                rax_28 = 0
            
            if (rax_28 != 0)
                do
                    void* r13_2 = *rdi_2
                    
                    if (sub_140d3e110(r13_2 + 0x160) == 0)
                        int64_t* rbx_2 = *(r13_2 + 0x130)
                        
                        if (rbx_2 != 0)
                            void* rcx_15 = rbx_2[0x18]
                            
                            if (rcx_15 != 0 && sub_141ee7380(rcx_15) != 0)
                                arg2 = data_143f38c20
                                arg4 = zx.o(0)
                                int64_t rax_31 = rbx_2[0x19]
                                uint32_t zmm0_1[0x4] = arg2
                                arg2 = __andps_xmmxud_memxud(arg2, data_143f38c30)
                                int64_t r13_3 = sx.q(r15_1)
                                zmm0_1[0].q = arg4 u>> 0x40
                                arg3 = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
                                int64_t var_e0_1 = rax_31
                                r15_1 = (r13_3 + 1).d
                                char var_d8_1 = 0
                                
                                if (r15_1 s> var_14c_1)
                                    sub_141dd5e90(&var_158)
                                    r14_1 = var_158
                                
                                int64_t rdx_11 = r13_3 * 0xa
                                *(r14_1 + (rdx_11 << 3)) = r13_2.o
                                *(r14_1 + (rdx_11 << 3) + 0x10) = var_d8_1.o
                                *(r14_1 + (rdx_11 << 3) + 0x20) = arg3
                                *(r14_1 + (rdx_11 << 3) + 0x30) = arg4
                                *(r14_1 + (rdx_11 << 3) + 0x40) = arg2
                                (*(*rbx_2 + 0x400))(rbx_2, &data_143a2de54)
                    
                    rdi_2 = &rdi_2[1]
                    r12_1 += 1
                while (r12_1 != rax_28)
                
                rdi_2 = var_168
                rsi = arg1
            
            void* rcx_18 = *(rsi + 0x130)
            int64_t rbx_3
            
            if (rcx_18 == 0)
                rbx_3 = var_170_1
            else
                bool rax_33
                
                if (*(rcx_18 + 0xc0) != 0)
                    rax_33 = sub_141ee7380(rcx_18)
                
                if (*(rcx_18 + 0xc0) == 0 || rax_33 == 0)
                    rbx_3 = var_170_1
                else
                    int64_t* rcx_19 = *(rsi + 0x130)
                    int64_t* rdi_3 = rcx_19[0x18]
                    rbx_3 = rcx_19[0x19]
                    var_138_1 = rdi_3
                    void* rdi_4 = rdi_3[0x14]
                    (*(*rcx_19 + 0x400))(rcx_19, &data_143a2de54)
                    void* rax_35 = nullptr
                    
                    if (rdi_4 != rsi)
                        rax_35 = rdi_4
                    
                    var_140_1 = rax_35
                
                sub_1405c6ac0(*(rsi + 0x130), 0, 0)
                void* rax_36 = *(rsi + 0x130)
                rdi_2 = var_168
                var_98 = *(rax_36 + 0x1c0)
                int128_t var_88_2 = *(rax_36 + 0x1d0)
                float var_78_2[0x4] = *(rax_36 + 0x1e0)
                var_108 = *(rax_36 + 0x1a0)
                var_f8_1.o = *(rax_36 + 0x1b0)
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
            
            sub_141dbe680(rsi)
            sub_141dd5a70(rsi)
            void* rax_38 = (*(*rsi + 0x150))(rsi)
            
            if (rax_38 != 0 && sub_14243af00(rax_38) == 0)
                char rax_40 = *(rsi + 0x58)
                
                if (rax_40 s>= 0)
                    if (rsi + 0xf0 != rsi + 0x5f)
                        char rax_41 = *(rsi + 0xf0)
                        *(rsi + 0xf0) = *(rsi + 0x5f)
                        *(rsi + 0x5f) = rax_41
                        rax_40 = *(rsi + 0x58)
                    
                    *(rsi + 0x58) = rax_40 | 0x80
            
            int512_t zmm6
            int512_t zmm7
            int512_t zmm8
            zmm6, zmm7, zmm8 = sub_141dc21a0(rsi, &var_98, &var_108, var_148_1, 0)
            
            if (var_140_1 != 0)
                int64_t* rax_42 = var_138_1
                int64_t* rcx_28 = *(rsi + 0x130)
                
                if (rax_42 == 0)
                    rax_42 = *(var_140_1 + 0x130)
                
                if (rcx_28 != 0 && rax_42 != 0)
                    zmm6, zmm7, zmm8 = sub_141f32b40(rcx_28, rax_42, &data_143a2de48, rbx_3)
            
            int64_t* rdi_5 = r14_1
            void* r15_4 = &r14_1[sx.q(r15_1) * 0xa]
            
            if (r14_1 != r15_4)
                do
                    void* rbx_4 = *rdi_5
                    int32_t rax_44 = *(rbx_4 + 0xc)
                    void* const rax_48
                    
                    if (rax_44 s>= data_143e1d9b4)
                        rax_48 = nullptr
                    else
                        uint32_t rdx_16 = zx.d(rax_44.w)
                        
                        if (rax_44 s< 0)
                            rax_44 += 0xffff
                            rdx_16 -= 0x10000
                        
                        rax_48 =
                            *(data_143e1d9a0 + (sx.q(rax_44 s>> 0x10) << 3)) + sx.q(rdx_16) * 0x18
                    
                    if (((*(rax_48 + 8) u>> 0x1d).b & 1) == 0)
                        int64_t* rbx_5 = *(rbx_4 + 0x130)
                        
                        if (rbx_5 != 0)
                            void* rax_51 = rbx_5[0x18]
                            
                            if ((rax_51 == 0 || *(rax_51 + 0xa0) == 0) && rbx_5 != 0)
                                int64_t* rdx_18 = *(rsi + 0x130)
                                
                                if (rbx_5[0x18] != rdx_18)
                                    float zmm6_1[0x4]
                                    float zmm8_1[0x4]
                                    float zmm9_1[0x4]
                                    float zmm11_1[0x4]
                                    uint128_t zmm12_1
                                    uint128_t zmm15_1
                                    zmm6_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm15_1 =
                                        sub_141f32b40(rbx_5, rdx_18, &data_143a2de48, rdi_5[1])
                                    
                                    if (rdi_5[2].b != 0)
                                        zmm6_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm15_1 =
                                            sub_141f49090(rbx_5, &rdi_5[4], 0, 0, 0)
                                    
                                    uint128_t zmm0_3 = zx.o(rbx_5[0x25])
                                    bool cond:2_1 = zmm0_3.d f!= rbx_5[0x36].d
                                    int32_t rax_52 = rbx_5[0x26].d
                                    var_190 = zmm0_3.q
                                    
                                    if (cond:2_1 || var_190:4.d.d f!= *(rbx_5 + 0x1b4)
                                            || rax_52.d f!= rbx_5[0x37].d)
                                        rax_52.b = 1
                                    else
                                        rax_52.b = 0
                                    
                                    if (rax_52.b != 0)
                                        float zmm7_1[0x4] = data_143f38d20
                                        uint128_t zmm4_1 = zx.o(rbx_5[0x25])
                                        int32_t rax_53 = rbx_5[0x26].d
                                        uint32_t zmm5_1[0x4] = data_143f38d00
                                        zmm0_3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                        zmm5_1 = _mm_and_ps(zmm5_1, zmm7_1)
                                        float zmm2_1[0x4] = _mm_unpacklo_ps(zmm0_3, zx.o(0)[0].q)
                                        zmm6_1 = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(zmm4_1, rax_53[0].q), zmm2_1[0].q)
                                        zmm2_1 = data_143f38d30
                                        float zmm3_1[0x4] = _mm_div_ps(zmm6_1, zmm7_1)
                                        zmm4_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3_1))
                                        zmm6_1 = _mm_sub_ps(zmm6_1, 
                                            _mm_mul_ps(
                                                _mm_and_ps(
                                                    _mm_cmpeq_ps(zmm2_1, 
                                                        __andps_xmmxud_memxud(zmm3_1, 
                                                            data_143f38d00), 
                                                        2), 
                                                    zmm4_1 ^ zmm3_1) ^ zmm4_1, 
                                                zmm7_1))
                                        zmm2_1 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), 
                                            _mm_min_ps(zmm6_1, zmm5_1))
                                        zmm8_1 = _mm_cmpeq_ps(zx.o(0), zmm2_1, 2)
                                        float zmm1_3[0x4] = _mm_add_ps(zmm2_1, zmm7_1)
                                        zmm8_1 = _mm_and_ps(zmm8_1, zmm1_3 ^ zmm2_1) ^ zmm1_3
                                        zmm0_3 = _mm_cmpeq_ps(data_143f38d10, zmm8_1, 1)
                                        zmm2_1 =
                                            _mm_and_ps(_mm_sub_ps(zmm8_1, zmm7_1) ^ zmm8_1, zmm0_3)
                                            ^ zmm8_1
                                        int32_t var_178_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
                                        rbx_5[0x36] = (_mm_unpacklo_ps(zmm2_1, 
                                            _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
                                        rbx_5[0x37].d = var_178_2
                                        float (* rax_55)[0x4]
                                        rax_55, zmm6_1, zmm8_1 =
                                            sub_140ade170(&rbx_5[0x36], &var_158)
                                        *(rbx_5 + 0x1a0) = *rax_55
                                    
                                    var_128.o = *(rbx_5 + 0x1a0)
                                    char var_1a8_1
                                    var_1a8_1.q = &var_128
                                    zmm6, zmm7, zmm8 = sub_141f4d380(rbx_5, rbx_5[0x18], 
                                        rbx_5[0x19], 0, zmm6_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, 
                                        zmm15_1, var_1a8_1, 0)
                    
                    rdi_5 = &rdi_5[0xa]
                while (rdi_5 != r15_4)
            
            zmm8.o = var_58_1
            zmm7.o = var_48_1
            zmm6.o = var_38_1
            data_143ddb408 = rax_15
            
            if (var_148_1 != 0)
                var_148_1[0xb].d = 0
                int64_t rcx_35 = var_148_1[0xa]
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                var_148_1[3].d = 0
                
                if (*(var_148_1 + 0x1c) != 0)
                    sub_1405a5310(&var_148_1[2], 0)
                
                var_148_1[8].d = 0xffffffff
                *(var_148_1 + 0x44) = 0
                sub_14059a8e0(&var_148_1[4], 0)
                int64_t rcx_38 = var_148_1[6]
                
                if (rcx_38 != 0)
                    sub_140a74f90(rcx_38)
                
                int64_t rcx_39 = var_148_1[2]
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                int32_t i_1 = var_148_1[1].d
                void*** rbx_6 = *var_148_1
                
                if (i_1 != 0)
                    int32_t i
                    
                    do
                        sub_141afd710(rbx_6)
                        rbx_6 = &rbx_6[5]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    rbx_6 = *var_148_1
                
                if (rbx_6 != 0)
                    sub_140a74f90(rbx_6)
                
                j_sub_140a74f90(var_148_1)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            data_143de5423 = rax_14
        else
            (*(*rcx_7 + 0x518))(rcx_7)

int64_t result = sub_140d16250(&var_197)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
