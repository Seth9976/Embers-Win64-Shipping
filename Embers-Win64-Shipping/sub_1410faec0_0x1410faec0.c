// 函数: sub_1410faec0
// 地址: 0x1410faec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int64_t* r12 = arg2
uint64_t r14 = arg2[8]
int64_t* result_1 = &data_143ec4c60
sub_1422e5a30(*r12)
int32_t rax_2 = sub_1422e5a30(*r12)
int64_t* result_2 = result_1
bool cond:1 = 0f f<= *(data_143e51050 + 4)
int64_t rbx = *(result_2[8] + 8)
void*** rcx_6 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_6[4]

if (rax_5 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x28)
    result_2 = result_1
    rcx_6 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_6[4]

*(r14 + 0x30) = rax_5
*(r14 + 0x14) += 1
void* r15
r15.b = 0
**(r14 + 8) = rcx_6
*(r14 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142f115e8
rcx_6[2].d = 0x20
rcx_6[3] = rbx
int64_t* rbx_1 = *r12
int64_t* var_338 = rbx_1
void* r13 = *rbx_1
int32_t rdi_1 = *(r13 + 0x28) & 0x200
char var_3a0
int128_t var_298
void var_190
char var_181
float var_178[0x4]
int32_t var_b8
uint128_t var_b4
int64_t var_a0

if (arg1[0x17].d == 0 && rdi_1 != 0)
    void* rax_9 = *(r13 + 0x20)
    
    if (*(rax_9 + 0xfd0) - *(rax_9 + 0xffc) s> 0 || rbx_1[0x317].d s> 0)
        int64_t rax_10 = sx.q(data_143f0f1a0)
        uint8_t rax_13
        
        if (((rax_10 - 2).d & 0xfffffffd) == 0
                || (1 & (*(rax_10 * 0x14 + &data_143f025fc) u>> 0x12).b) != 0)
            rax_13 = 1
        else
            rax_13 = 0
        
        int32_t rcx_12 = data_143f02318
        int64_t rax_14 = *(result_2 + 0x37c)
        int32_t var_164_1 = rax_14.d
        int32_t rbx_3 = sbb.d(rbx_1.d, rbx_1.d, rax_13 != 0) & 0x10008000
        int32_t var_160_1 = rax_14:4.d
        int16_t var_140_1 = 0
        int32_t var_148_1 = data_143ed33fc | rbx_3
        wchar16 const* const var_138_1 = u"UnknownTexture2D"
        var_178 = data_143f02308
        int32_t var_168_1 = rcx_12
        int32_t var_15c_1 = 0
        int32_t var_158_1 = 1
        int32_t var_154_1 = 0x10000
        int16_t var_150_1 = 1
        int32_t var_14c_1 = 2
        int32_t var_144_1 = 9
        int16_t var_130_1 = 0x101
        char var_12e_1 = 0
        int32_t var_3a8
        
        if (result_2[0x14] == 0)
            char var_390_1 = 0
            char var_398_1 = 1
            var_3a0 = 1
            int32_t var_168_2 = data_1439c7ae8
            var_178 = data_1439c7ad8
            var_3a8.q = u"DBufferA"
            sub_1419a0ce0(&data_1439c9260, r14, &var_178, &result_2[0x14], var_3a8, var_3a0, 
                var_398_1, var_390_1)
            result_2 = result_1
        
        void* r12_1 = &result_2[0x15]
        float zmm0[0x4]
        uint128_t zmm1
        
        if (*r12_1 == 0)
            zmm1 = data_142f19cc0
            int32_t rax_20 = data_143ed3400 | rbx_3
            var_b8 = 1
            var_b4 = zmm1
            char var_390_2 = 0
            zmm0 = var_b8.o
            int32_t var_148_2 = rax_20
            zmm1 = _mm_bsrli_si128(zmm1, 0xc)
            char var_398_2 = 1
            var_3a0 = 1
            var_178 = zmm0
            var_3a8.q = u"DBufferB"
            int32_t var_168_3 = zmm1.d
            sub_1419a0ce0(&data_1439c9260, r14, &var_178, r12_1, var_3a8, var_3a0, var_398_2, 
                var_390_2)
            result_2 = result_1
        
        r15 = &result_2[0x16]
        
        if (*r15 == 0)
            zmm1 = data_142d3f660
            char var_390_3 = 0
            int32_t var_148_3 = data_143ed3404 | rbx_3
            char var_398_3 = 1
            var_b8 = 1
            var_b4 = zmm1
            var_3a0 = 1
            zmm0 = var_b8.o
            var_3a8.q = u"DBufferC"
            zmm1 = _mm_bsrli_si128(zmm1, 0xc)
            var_178 = zmm0
            int32_t var_168_4 = zmm1.d
            sub_1419a0ce0(&data_1439c9260, r14, &var_178, r15, var_3a8, var_3a0, var_398_3, 
                var_390_3)
            result_2 = result_1
        
        if (rax_2 - 0x19 u<= 1)
            char var_390_4 = 0
            int32_t var_148_4 = 0
            int32_t var_168_5 = data_1439c7b30
            char var_398_4 = 1
            var_3a0 = 1
            var_3a8.q = u"DBufferMask"
            var_178 = data_1439c7b20
            sub_1419a0ce0(&data_1439c9260, r14, &var_178, &result_2[0x17], var_3a8, var_3a0, 
                var_398_4, var_390_4)
        
        int64_t* rdx_5 = *arg2
        
        if (***rdx_5 == rdx_5 || *(r13 + 0x44) != 0)
            int32_t rdx_6 = 3
            var_b8.q = *(result_1[0x14] + 8)
            var_b4:4.q = *(*r12_1 + 8)
            var_b4:0xc.q = *(*r15 + 8)
            
            if (rax_2 - 0x19 u<= 1)
                rdx_6 = 4
                var_a0 = *(result_1[0x17] + 8)
            
            sub_14108c030(&var_298, rdx_6, &var_b8, 9)
            int64_t* rax_29 = sub_1410f83c0(result_1)
            int64_t rbx_7 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t var_1d8_1 = *rax_29
            char var_1c8_1 = 0x45
            int64_t rax_30 = rbx_7 + 0x2c
            int32_t var_1c4_1 = 0x21
            
            if (rax_30 u> *(r14 + 0x38))
                sub_140b0e3d0(r14 + 0x30, 0x2e)
                rbx_7 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
                rax_30 = rbx_7 + 0x2c
            
            wchar16 const* const rcx_21 = u"InitialDeferredDecals"
            *(r14 + 0x30) = rax_30
            wchar16 const i
            
            do
                i = *rcx_21
                *(rbx_7 - u"InitialDeferredDecals" + rcx_21) = i
                rcx_21 = &rcx_21[1]
            while (i != 0)
            void*** rcx_24 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_31 = &rcx_24[0x27]
            
            if (rax_31 u> *(r14 + 0x38))
                sub_140b0e3d0(r14 + 0x30, 0x140)
                rcx_24 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                rax_31 = &rcx_24[0x27]
            
            *(r14 + 0x30) = rax_31
            void**** rax_32 = *(r14 + 8)
            *(r14 + 0x14) += 1
            *rax_32 = rcx_24
            *(r14 + 8) = &rcx_24[1]
            sub_1405d11b0(rcx_24, &var_298, rbx_7)
            *(r14 + 0x1c4) = 1
            sub_1405d19b0(r14, &var_298)
            *(r14 + 0x178) = var_181
            r15.b = 1
            *(r14 + 0x179) = 0
            *(r14 + 0x1c4) = 1
            sub_1405d1550(&var_190)
        else
            r15.b = 0
        
        rbx_1 = var_338
        r12 = arg2

rcx_6.b = 0
uint32_t var_36c = rcx_6.d

if (rdi_1 != 0)
    char var_387_1 = 0
    int32_t rdx_11 = arg1[0x17].d
    int32_t rcx_30
    
    if ((rdx_11 & 0xfffffffd) != 0)
        rcx_30 = rdx_11
    
    if ((rdx_11 & 0xfffffffd) == 0 || rdx_11 == 5)
        rcx_30 = rdx_11
        
        if (*(*r12 + 0x18b8) s> 0)
            sub_141102fb0(r12, rdx_11)
            rcx_30 = arg1[0x17].d
            var_387_1 = 1
    
    int64_t r9_6 = sx.q(r12[0xb].d)
    void* r13_1 = *(r13 + 0x20)
    void var_128
    sub_1410ea190(&var_128, r14, (*U"1111")[r9_6], r9_6.d, rcx_30)
    int32_t rcx_33 = *(r13_1 + 0xfd0)
    int32_t rcx_34 = rcx_33 - *(r13_1 + 0xffc)
    
    if (rcx_33 != *(r13_1 + 0xffc) || *(*r12 + 0x18b8) s> rcx_34)
        int64_t var_310 = 0
        int32_t i_5 = 0
        
        if (rcx_34 != 0)
            float zmm6_1[0x4]
            int128_t zmm8_1
            int128_t zmm9_1
            zmm6_1, zmm8_1, zmm9_1 = sub_1410edd90(r13_1, rbx_1, arg1[0x17].d, &var_310)
            int64_t i_4 = sx.q(i_5)
            
            if (i_4.d s> 0)
                int64_t var_23c
                __builtin_memset(&var_23c, 0, 0x43)
                int16_t var_1f8_1 = 0
                __builtin_memset(&var_298, 0, 0x30)
                int128_t var_250_1 = zx.o(0)
                
                if (r15.b != 0)
                    sub_140fdc870(r14, &var_298)
                
                void*** rcx_39 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_37 = &rcx_39[2]
                
                if (rax_37 u> *(r14 + 0x38))
                    zmm6_1 = sub_140b0e3d0(r14 + 0x30, 0x18)
                    rcx_39 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_37 = &rcx_39[2]
                
                *(r14 + 0x30) = rax_37
                int64_t* rax_38 = *(r14 + 8)
                *(r14 + 0x14) += 1
                int32_t var_358_1 = 0
                int32_t var_330_1 = 0
                *rax_38 = rcx_39
                *(r14 + 8) = &rcx_39[1]
                rcx_39[1] = 0
                *rcx_39 = &data_142da7758
                int32_t rax_40 = r12[0xb].d
                char var_32c_1 = 0
                int32_t var_370_1 = 0xffffffff
                uint32_t var_368_1 = 0xffffffff
                int32_t var_384_1 = 0
                uint32_t var_340_1 = 0xffffffff
                int64_t i_3 = i_4
                
                if (i_4.d s> 0)
                    int64_t rcx_43 = var_310
                    void* rax_41 = nullptr
                    char var_c8
                    uint64_t r12_2 = zx.q(var_c8)
                    int64_t rbx_10 = var_330_1.q
                    float var_48_1[0x4] = zmm6_1
                    void* var_320_1 = nullptr
                    int64_t var_2f8_1 = rcx_43
                    int512_t zmm8_3
                    int512_t zmm9_3
                    int64_t i_1
                    
                    do
                        int64_t* rdi_3 = rax_41 + rcx_43
                        void* rax_42 = *(rax_41 + rcx_43 + 0x10)
                        float zmm1_1[0x4] = *(rax_42 + 0x10)
                        float zmm0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                        float zmm3_1[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                        float zmm2_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x29), zmm0_1)
                        float zmm4_1[0x4] = _mm_mul_ps(zmm3_1, zmm1_1)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), 
                            _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff))
                        zmm1_1 = *(rax_42 + 0x30)
                        zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                        float zmm5_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                        zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                        zmm4_1 = data_143e51070
                        zmm6_1 = _mm_add_ps(zmm3_1, zmm2_1)
                        zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                        zmm3_1 = _mm_sub_ps(zmm4_1, zmm0_1)
                        zmm6_1 = _mm_mul_ps(zmm6_1, zmm1_1)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                        zmm3_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm3_1, zmm1_1), data_143e51080)
                        zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm3_1, 0x32)
                        zmm1_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm3_1, 0), zmm0_1, 0x82)
                        zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm3_1, 0x31)
                        zmm2_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm3_1, 0x10), zmm0_1, 0x88)
                        zmm0_1 = *(rax_42 + 0x20)
                        zmm4_1[0].q = zmm0_1 u>> 0x40
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm5_1, 0x12)
                        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm3_1, 0xe8)
                        int96_t var_2a8_1 = zmm0_1[0].12
                        float var_2d8[0x4] = zmm1_1
                        float var_2c8_1[0x4] = zmm2_1
                        float var_2b8_1[0x4] = zmm6_1
                        int128_t zmm7_1
                        uint128_t zmm8_2
                        int32_t zmm9_2
                        zmm7_1, zmm8_2, zmm9_2 = sub_1410eee30(&var_178, var_338, &var_2d8)
                        int32_t r15_1 = rdi_3[4].d
                        
                        if (arg1[0x17].d == 5)
                            int32_t rax_44 = 0xb
                            
                            if (r15_1 == 0xc)
                                rax_44 = 0xd
                            
                            r15_1 = rax_44
                        
                        int32_t rax_46 = sub_1410f0700(sub_1422e5a30(var_338), r15_1)
                        char var_388_1
                        
                        if (rax_46 u<= 5)
                            var_388_1 = 1
                        
                        if (rax_46 u> 5 || not(test_bit(0x25, rax_46)))
                            var_388_1 = 0
                        
                        uint32_t rax_48 =
                            sub_1410f07b0(sub_1422e5a30(var_338), r15_1, *(rdi_3 + 0x24))
                        uint32_t rdi_4 = rax_48
                        int64_t var_108
                        uint128_t zmm0_2
                        
                        if (r12_2.b != 0 && sub_14212f0f0(*(var_320_1 + var_2f8_1 + 8)).b != 0)
                            var_b8.o = data_142d57d10
                            void*** rdi_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                            zmm0_2 = data_142d57920
                            var_b4 = data_142d3f800
                            r12_2 = *(result_1[0xe] + 8)
                            void* rax_52 = &rdi_7[0xa]
                            
                            if (rax_52 u> *(r14 + 0x38))
                                sub_140b0e3d0(r14 + 0x30, 0x58)
                                rdi_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_52 = &rdi_7[0xa]
                            
                            *(r14 + 0x30) = rax_52
                            void**** rax_53 = *(r14 + 8)
                            *(r14 + 0x14) += 1
                            *rax_53 = rdi_7
                            *(r14 + 8) = &rdi_7[1]
                            rdi_7[1] = 0
                            *rdi_7 = &data_142d56628
                            rdi_7[2].d = var_b8
                            *(rdi_7 + 0x14) = var_b4.d
                            rdi_7[3].d = var_b4:4.d
                            *(rdi_7 + 0x1c) = var_b4:8.d
                            rdi_7[4].d = var_b4:0xc.d
                            int32_t var_a4
                            *(rdi_7 + 0x24) = var_a4
                            rdi_7[5].d = var_a0.d
                            *(rdi_7 + 0x2c) = var_a0:4.d
                            rdi_7[6].d = zmm0_2.d
                            *(rdi_7 + 0x34) = zmm0_2:4.d
                            rdi_7[7].d = zmm0_2:8.d
                            *(rdi_7 + 0x3c) = zmm0_2:0xc.d
                            rdi_7[8] = r12_2
                            rdi_7[9] = r12_2
                            
                            if ((*(*r12_2 + 8))(r12_2) == 0)
                                int64_t* rcx_53 = rdi_7[8]
                                
                                if ((*(*rcx_53 + 0x18))(rcx_53) == 0)
                                    int64_t* rcx_54 = rdi_7[8]
                                    
                                    if ((*(*rcx_54 + 0x20))(rcx_54) == 0)
                                        int64_t* rcx_55 = rdi_7[8]
                                        (*(*rcx_55 + 0x10))(rcx_55)
                            
                            int64_t* rcx_56 = rdi_7[9]
                            
                            if ((*(*rcx_56 + 8))(rcx_56) == 0)
                                int64_t* rcx_57 = rdi_7[9]
                                
                                if ((*(*rcx_57 + 0x18))(rcx_57) == 0)
                                    int64_t* rcx_58 = rdi_7[9]
                                    
                                    if ((*(*rcx_58 + 0x20))(rcx_58) == 0)
                                        int64_t* rcx_59 = rdi_7[9]
                                        (*(*rcx_59 + 0x10))(rcx_59)
                            
                            rdi_4 = rax_48
                            r12_2.b = 0
                            var_108 = 0
                            var_c8 = 0
                        
                        if (rdi_4 != var_340_1)
                            var_340_1 = rdi_4
                            sub_141107990(&var_128, rdi_4, zx.d(*(var_320_1 + var_2f8_1 + 0x24)), 
                                rax_2 - 0x19 u<= 1)
                            var_b8.o = *(*arg2 + 0x1598)
                            zmm7_1, zmm9_2 = sub_1410b7780(arg2, &var_b8, zmm7_1, zmm8_2)
                            sub_140fdc870(r14, &var_298)
                            r12_2 = zx.q(var_c8)
                        
                        rdi_4.b = 0
                        int32_t rdx_22
                        
                        if (var_388_1 == 0 || cond:1 == 0)
                            rdx_22 = var_370_1
                        else
                            char rax_83
                            rax_83, zmm7_1, zmm9_2 = sub_141104690(arg2, &var_2d8, &var_178)
                            rdi_4 = zx.d(rax_83)
                            rdx_22 = -1
                            var_370_1 = 0xffffffff
                            char var_2ec_1 = 0
                            rbx_10 = 0.q
                            var_330_1.q = rbx_10
                            var_358_1 = 0
                        
                        if (data_143f0f1bf == 0 || r15_1 u> 1 || zx.d(*(rdi_3 + 0x24)) == var_368_1)
                            rax_48.b = 0
                        else
                            rax_48.b = 1
                        
                        int64_t* r15_2
                        
                        if (r15_1 != rdx_22 || rax_48.b != 0)
                            uint32_t rax_84 = zx.d(*(rdi_3 + 0x24))
                            var_370_1 = r15_1
                            r15_2 = arg1
                            var_368_1 = rax_84
                            int64_t var_268_1 =
                                sub_1410f80a0(zx.q(rax_40), r15_2[0x17].d, r15_1, rax_84.b)
                        else
                            r15_2 = arg1
                        
                        zmm0_2 = zx.o(*(var_338 + 0x60c))
                        uint128_t zmm4_2 = zmm0_2
                        float zmm1_2[0x4] = *(rdi_3 + 0x1c)
                        uint128_t zmm3_2 = zmm0_2
                        zmm0_2 = var_338[0x1a6].d
                        zmm3_2.d = zmm3_2.d f- var_2a8_1.d
                        zmm0_2.d = zmm0_2.d f+ zmm0_2.d
                        int128_t zmm2_2
                        zmm2_2.d = (*(var_338 + 0x614)).d f- var_2a8_1:8.d
                        zmm4_2.d = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55).d f- var_2a8_1:4.d
                        zmm1_2[0] = zmm1_2[0] f* zmm9_2
                        zmm3_2.d = zmm3_2.d f* zmm3_2.d
                        zmm1_2[0] = zmm1_2[0] f+ zmm0_2.d
                        zmm4_2.d = zmm4_2.d f* zmm4_2.d
                        zmm2_2.d = zmm2_2.d f* zmm2_2.d
                        zmm4_2.d = zmm4_2.d f+ zmm3_2.d
                        zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                        zmm4_2.d = zmm4_2.d f+ zmm2_2.d
                        bool cond:6_1 = zmm1_2[0] f> zmm4_2.d
                        zmm1_2 = *(rax_42 + 0x30)
                        zmm0_2.d = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d f* zmm1_2[0]
                        zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                        bool rcx_67 = cond:6_1 ^ 1
                        
                        if (*(var_338 + 0xd34) == 0)
                            rcx_67 = cond:6_1
                        
                        zmm0_2.d = zmm0_2.d f* zmm1_2[0]
                        bool rdx_25 = rcx_67
                        
                        if (zmm0_2.d f< zmm7_1.d)
                            rdx_25 ^= 1
                        
                        if (var_358_1 != zx.d(rdx_25) + 1)
                            var_358_1 = zx.d(rdx_25) + 1
                            int64_t rax_90
                            
                            if (zx.d(rdx_25) == 0)
                                rax_90 = data_1439b5500
                            else if (zx.d(rdx_25) == 1)
                                rax_90 = data_1439b54e8
                            else
                                rax_90 = 0
                            
                            int64_t var_260_1 = rax_90
                        
                        rdx_25 = rax_46 == 1
                        bool var_34c_1 = rdx_25
                        int32_t rcx_72
                        
                        if (rax_46 != 1)
                            int32_t rax_91
                            
                            if (((rax_46 - 2) & 0xfffffffc) != 0 || rax_46 == 3)
                                rax_91.b = 0
                            else
                                rax_91.b = 1
                            
                            if (cond:6_1 == 0)
                                if (rdi_4.b == 0)
                                    rcx_72 = 2
                                    
                                    if (rax_91.b != 0)
                                        rcx_72 = 8
                                else
                                    rcx_72 = (zx.d(rax_91.b) ^ 1) + 6
                            else if (rdi_4.b == 0)
                                rcx_72 = ((zx.q(rax_91.b) << 2) + 1).d
                            else
                                rcx_72 = (zx.d(rax_91.b) ^ 1) + 3
                        else
                            rcx_72 = 2
                        
                        if (var_330_1 != rcx_72 || (rbx_10 u>> 0x20).b != rdx_25)
                            rbx_10 = rcx_72.q
                            var_330_1.q = rbx_10
                            int64_t rax_96
                            
                            if (rcx_72 - 1 u> 7)
                                rax_96 = 0
                            else
                                switch (rcx_72)
                                    case 1
                                        var_384_1 = 0
                                        rax_96 = data_14395d9e8
                                    case 2
                                        var_384_1 = 0
                                        
                                        if (rdx_25 == 0)
                                            rax_96 = data_1439b53d0
                                        else
                                            rax_96 = data_1439b5400
                                    case 3
                                        rax_96 = data_1439b5818
                                        var_384_1 = 0x81
                                    case 4
                                        rax_96 = data_1439b5830
                                        var_384_1 = 1
                                    case 5
                                        rax_96 = data_1439b5848
                                        var_384_1 = 0x80
                                    case 6
                                        rax_96 = data_1439b5860
                                        var_384_1 = 0x81
                                    case 7
                                        rax_96 = data_1439b5878
                                        var_384_1 = 1
                                    case 8
                                        rax_96 = data_1439b5890
                                        var_384_1 = 0x80
                            
                            int64_t var_258_1 = rax_96
                        
                        var_3a0.q = &var_178
                        int32_t var_240_1 = 0
                        int64_t r9_11
                        r9_11, zmm8_3, zmm9_3 =
                            sub_141107ff0(r14, &var_298, var_338, rdi_3, r15_2[0x17].d, var_3a0)
                        void*** rcx_83 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_98 = &rcx_83[3]
                        
                        if (rax_98 u> *(r14 + 0x38))
                            r9_11 = sub_140b0e3d0(r14 + 0x30, 0x20)
                            rcx_83 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_98 = &rcx_83[3]
                        
                        *(r14 + 0x30) = rax_98
                        int64_t* rax_99 = *(r14 + 8)
                        *(r14 + 0x14) += 1
                        *rax_99 = rcx_83
                        *(r14 + 8) = &rcx_83[1]
                        rcx_83[1] = 0
                        *rcx_83 = &data_142f18bb8
                        rcx_83[2].d = var_384_1
                        int64_t rdi_10 = data_1439c9470
                        
                        if (rdi_10 == 0)
                            sub_140af98a0("Unknown", 0xbc8, 
                                Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_11)
                            sub_140afbb40()
                        
                        void*** rcx_89 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_102 = &rcx_89[6]
                        
                        if (rax_102 u> *(r14 + 0x38))
                            sub_140b0e3d0(r14 + 0x30, 0x38)
                            rcx_89 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_102 = &rcx_89[6]
                        
                        *(r14 + 0x30) = rax_102
                        int64_t* rax_103 = *(r14 + 8)
                        *(r14 + 0x14) += 1
                        *rax_103 = rcx_89
                        *(r14 + 8) = &rcx_89[1]
                        rcx_89[1] = 0
                        *rcx_89 = &data_142f11598
                        *(rcx_89 + 0x2c) = 1
                        rcx_89[2] = rdi_10
                        rcx_89[3] = 0
                        rcx_89[4] = 8
                        r12_2.b |= var_108 != 0
                        rcx_89[5].d = 0xc
                        rcx_43 = var_2f8_1
                        rax_41 = var_320_1 + 0x28
                        i_1 = i_3
                        i_3 -= 1
                        var_c8 = r12_2.b
                        var_320_1 = rax_41
                    while (i_1 != 1)
                    r12 = arg2
                    zmm9_3.o = zmm9_1
                    zmm8_3.o = zmm8_1
                
                sub_141096650(r14)
                void*** rcx_96 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_107 = &rcx_96[2]
                
                if (rax_107 u> *(r14 + 0x38))
                    sub_140b0e3d0(r14 + 0x30, 0x18)
                    rcx_96 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_107 = &rcx_96[2]
                
                *(r14 + 0x30) = rax_107
                int64_t* rax_108 = *(r14 + 8)
                *(r14 + 0x14) += 1
                *rax_108 = rcx_96
                *(r14 + 8) = &rcx_96[1]
                rcx_96[1] = 0
                *rcx_96 = &data_142da7768
        
        if (*(r14 + 0x1c4) != 0)
            sub_141096650(r14)
        
        int64_t* rdi_11 = *r12
        int64_t* rax_110 = *rdi_11
        int64_t r15_3 = *(*rax_110 + (sx.q(rax_110[1].d) << 3) - 8)
        int64_t* result_3
        
        if (*(r13_1 + 0xfd0) - *(r13_1 + 0xffc) s<= 0 || r15_3 != rdi_11 || arg1[0x17].d != 4)
            result_3 = result_1
        else
            memset(&var_298, 0, 0x120)
            result_3 = result_1
            char var_1c8_2 = 9
            void*** rcx_105 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rbx_11 = *(result_3[8] + 8)
            int64_t var_1d0_1 = 0
            void* rax_116 = &rcx_105[4]
            int64_t var_1d8_2 = rbx_11
            int32_t var_1c4_2 = 0x20
            
            if (rax_116 u> *(r14 + 0x38))
                sub_140b0e3d0(r14 + 0x30, 0x28)
                rcx_105 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                rax_116 = &rcx_105[4]
            
            *(r14 + 0x30) = rax_116
            int64_t* rax_117 = *(r14 + 8)
            *(r14 + 0x14) += 1
            *rax_117 = rcx_105
            *(r14 + 8) = &rcx_105[1]
            rcx_105[1] = 0
            rcx_105[3] = rbx_11
            *rcx_105 = &data_142f115e8
            rcx_105[2].d = 0x20
            int64_t rbx_14 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_119 = rbx_14 + 0x1a
            
            if (rax_119 u> *(r14 + 0x38))
                sub_140b0e3d0(r14 + 0x30, 0x1c)
                rbx_14 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
                rax_119 = rbx_14 + 0x1a
            
            wchar16 const* const rcx_110 = u"ClearStencil"
            *(r14 + 0x30) = rax_119
            wchar16 const i_2
            
            do
                i_2 = *rcx_110
                *(rcx_110 + rbx_14 - u"ClearStencil") = i_2
                rcx_110 = &rcx_110[1]
            while (i_2 != 0)
            void*** rcx_113 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_120 = &rcx_113[0x27]
            
            if (rax_120 u> *(r14 + 0x38))
                sub_140b0e3d0(r14 + 0x30, 0x140)
                rcx_113 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
                rax_120 = &rcx_113[0x27]
            
            *(r14 + 0x30) = rax_120
            void**** rax_121 = *(r14 + 8)
            *(r14 + 0x14) += 1
            *rax_121 = rcx_113
            *(r14 + 8) = &rcx_113[1]
            sub_1405d11b0(rcx_113, &var_298, rbx_14)
            *(r14 + 0x1c4) = 1
            sub_1405d19b0(r14, &var_298)
            *(r14 + 0x178) = var_181
            *(r14 + 0x179) = 0
            *(r14 + 0x1c4) = 1
            sub_141096650(r14)
            sub_1405d1550(&var_190)
        
        if (arg1[0x17].d != 0)
        label_1410fc198:
            
            if (r15_3 != rdi_11)
                goto label_1410fc19d
            
            sub_1411051f0(&var_128)
        else
            if (r15_3 == rdi_11)
                int64_t rax_124 = sx.q(data_143f0f1a0)
                
                if (((rax_124 - 2).d & 0xfffffffd) == 0
                        || ((*(rax_124 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) != 0)
                    var_b8.q = result_3[0x14]
                    var_b4:4.q = result_3[0x15]
                    var_b4:0xc.q = result_3[0x16]
                    var_3a0.q = u"DBufferMask"
                    sub_14140ea60(r12[8], r12[0xc], &var_b8, &result_3[0x17], data_143ed3408, 
                        var_3a0)
                
                uint32_t rax_133 = zx.d(var_36c.b)
                
                if (result_3[0x17] != 0)
                    rax_133 = 1
                
                var_36c = rax_133
                goto label_1410fc198
            
        label_1410fc19d:
            int64_t rax_134 = sx.q(data_143f0f1a0)
            
            if (((rax_134 - 2).d & 0xfffffffd) == 0)
                goto label_1410fc1c8
            
            if (((*(rax_134 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) == 0 || var_387_1 != 0)
                sub_1411051f0(&var_128)
    else
    label_1410fc1c8:
        
        if (var_387_1 != 0)
            sub_1411051f0(&var_128)
    
    rcx_6 = zx.q(var_36c)

int64_t* result = arg1

if (result[0x17].d == 0 && rcx_6.b == 0)
    result = result_1
    int64_t* rcx_124 = result[0x17]
    result[0x17] = 0
    
    if (rcx_124 != 0)
        result = (*(*rcx_124 + 0x38))(rcx_124)

__security_check_cookie(rax_1 ^ &var_3c8)
return result
