// 函数: sub_141187d50
// 地址: 0x141187d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t* result = arg1
int64_t* r12 = arg4
int64_t var_4b8
TEB* gsbase
float zmm6[0x4]

if (data_143e72660 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e72660)
    
    if (data_143e72660 == 0xffffffff)
        zmm6 = sub_140b4c820(&var_4b8, u"FHairStrandsVertexFactory")
        data_143e72658 = sub_1419cfe40(&var_4b8)
        _Init_thread_footer(&data_143e72660)

*result = 0
int32_t i = 0
result[1] = 0
int32_t i_1 = 0

if (r12[1].d s> 0)
    int64_t rdx = 0
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int128_t zmm9 = 0x38d1b717
    int128_t zmm10 = zx.o(0)
    var_4b8 = 0
    
    do
        int64_t* r12_2 = *r12 + rdx
        int64_t* var_4a0 = r12_2
        
        if (*r12_2 != 0)
            int64_t rbx_1 = sx.q(result[1].d)
            int32_t var_4ac = 0
            int32_t rax_4 = (rbx_1 + 1).d
            result[1].d = rax_4
            
            if (rax_4 s> *(result + 0xc))
                sub_14119aa60(result, rbx_1.d)
                rdx = var_4b8
            
            int64_t* rsi_2 = rbx_1 * 0x130 + *result
            __builtin_memset(rsi_2, 0, 0x14)
            *(rsi_2 + 0x1c) = 0
            __builtin_memset(&rsi_2[4], 0, 0x20)
            __builtin_memset(&rsi_2[0x10], 0, 0x28)
            rsi_2[0x16] = 0
            __builtin_memset(&rsi_2[0x18], 0, 0x58)
            rsi_2[0x24].d = 0
            rsi_2[0x25] = 0
            
            if (r12_2[0x3b3].d != 0 && *(r12_2 + 0xd75) == 0 && *(r12_2 + 0xd74) == 0)
                int32_t var_4b0_1 = 0
                int64_t* r15_1 = r12_2[0x3b2]
                void* rax_6 = &r15_1[sx.q(r12_2[0x3b3].d) * 3]
                void*** var_458
                float zmm2[0x4]
                float zmm5[0x4]
                
                if (r15_1 != rax_6)
                    do
                        void* r13 = r15_1[1]
                        int64_t* rcx_4 = *(*r15_1 + 0x78)
                        
                        if (*((*(*rcx_4 + 0x40))(rcx_4) + 0x20) == *(data_143e72658 + 0x20))
                            void* rdi = *rsi_2
                            char rdx_2 = 0
                            void* rcx_7 = sx.q(rsi_2[1].d) * 0xe0 + rdi
                            
                            if (rdi != rcx_7)
                                int32_t zmm4_1 = *(r13 + 0xc0)
                                void* rax_12 = rdi + 0xa8
                                zmm5 = *(r13 + 0xc4)
                                zmm6 = *(r13 + 0xc8)
                                zmm7 = *(r13 + 0xd8)
                                
                                do
                                    zmm2 = *(rax_12 - 8)
                                    zmm7[0] = zmm7[0] f+ *(rax_12 + 0x10)
                                    float zmm3 = *(rax_12 - 4)
                                    zmm2[0] = zmm2[0] f- zmm4_1
                                    zmm3 = zmm3 - zmm5[0]
                                    float zmm1 = *rax_12 - zmm6[0]
                                    zmm7[0] = zmm7[0] f+ zmm9.d
                                    zmm2[0] = zmm2[0] * zmm2[0]
                                    float temp0_1[0x4] = _mm_max_ss(zmm7[0], zmm10.d)
                                    zmm3 = zmm3 * zmm3 + zmm2[0]
                                    temp0_1[0] = temp0_1[0] * temp0_1[0]
                                    
                                    if (zmm3 + zmm1 * zmm1 <= temp0_1[0])
                                        int32_t* rax_13
                                        rax_13, zmm9, zmm10 =
                                            sub_1411a4780(&var_458, rdi + 0xa0, r13 + 0xc0)
                                        *(rdi + 0xa0) = *rax_13
                                        *(rdi + 0xb0) = *(rax_13 + 0x10)
                                        *(rdi + 0xb8) = rax_13[6]
                                        sub_141191280(rdi, &var_4ac, r15_1)
                                        rdx_2 = 1
                                        break
                                    
                                    rdi += 0xe0
                                    rax_12 += 0xe0
                                while (rdi != rcx_7)
                            
                            if (rdx_2 == 0)
                                int32_t rax_15 = data_143dbb200
                                float zmm0[0x4] = zx.o(data_143dbb1f8.q)
                                int32_t var_3f0_1 = rax_15
                                int32_t var_3e4_1 = rax_15
                                int32_t var_3d8_1 = data_143dbb190
                                int64_t var_3f8 = zmm0.q
                                int64_t var_3ec_1 = zmm0.q
                                zmm0 = zx.o(data_143dbb188.q)
                                int32_t var_32c_1 = var_4b0_1
                                int64_t var_388
                                __builtin_memset(&var_388, 0, 0x30)
                                int64_t var_33c_1 = 0
                                int64_t var_334_1 = 0
                                char var_328_1 = 0
                                int64_t var_3e0_1 = zmm0.q
                                var_4b0_1 += 1
                                sub_141191280(&var_3f8, &var_4ac, r15_1)
                                int64_t rbx_3 = sx.q(rsi_2[1].d)
                                int32_t var_340_1 = *(r13 + 0xd8)
                                int32_t rax_18 = (rbx_3 + 1).d
                                int128_t var_358_1 = *(r13 + 0xc0)
                                int64_t var_348_1 = *(r13 + 0xd0)
                                rsi_2[1].d = rax_18
                                
                                if (rax_18 s> *(rsi_2 + 0xc))
                                    sub_14119a930(rsi_2, rbx_3.d)
                                
                                sub_14117a8e0(rbx_3 * 0xe0 + *rsi_2, &var_3f8)
                        
                        r15_1 = &r15_1[3]
                    while (r15_1 != rax_6)
                    
                    r12_2 = var_4a0
                    i = i_1
                
                void* rdi_3 = *rsi_2
                uint64_t rbx_4 = sx.q(rsi_2[1].d)
                void* r14_3 = rbx_4 * 0xe0 + rdi_3
                
                if (rdi_3 != r14_3)
                    void* rbx_5 = rdi_3 + 0xb4
                    
                    do
                        zmm6 = *(rbx_5 - 0x14)
                        zmm2 = *(rbx_5 - 0xc)
                        zmm5 = *(rbx_5 - 0x10)
                        zmm2[0] = zmm2[0] f+ *rbx_5
                        zmm2[0] = zmm2[0] f- *rbx_5
                        char var_420_1 = 1
                        zmm6[0] = zmm6[0] f- *(rbx_5 - 8)
                        zmm6[0] = zmm6[0] f+ *(rbx_5 - 8)
                        float var_408_1 = zmm2[0]
                        zmm5[0] = zmm5[0] f- *(rbx_5 - 4)
                        zmm5[0] = zmm5[0] f+ *(rbx_5 - 4)
                        float var_430_1 = zmm2[0]
                        int64_t var_438 = (_mm_unpacklo_ps(zmm6, zmm5[0].q)).q
                        int64_t var_42c_1 = (_mm_unpacklo_ps(zmm6, zmm5[0].q)).q
                        float var_424_1 = var_408_1
                        int32_t var_318[0x4]
                        int32_t* rax_21
                        rax_21, zmm9 = sub_1411db3a0(&var_318, &var_438, r12_2)
                        rdi_3 += 0xe0
                        *(rbx_5 + 8) = *rax_21
                        *(rbx_5 + 0xc) = rax_21[1]
                        *(rbx_5 + 0x10) = rax_21[2]
                        *(rbx_5 + 0x14) = rax_21[3]
                        rbx_5 += 0xe0
                    while (rdi_3 != r14_3)
                    
                    rbx_4 = zx.q(rsi_2[1].d)
                
                if (rbx_4.d != 0)
                    void var_308
                    sub_1419928d0(&var_308, arg2)
                    int64_t var_488_1 = 0x209
                    int32_t var_490_1 = 4
                    uint32_t var_48c_1 = (rbx_4 * 3).d * 2
                    int64_t* var_300
                    void*** rax_28 = sub_14081d830(0x48, var_300, 1, 0)
                    void*** rdi_4 = rax_28
                    
                    if (rax_28 == 0)
                        rdi_4 = nullptr
                    else
                        rdi_4[2] = 0
                        rdi_4[1] = u"HairMacroGroupAABBBuffer"
                        rdi_4[3].b = 0
                        *(rdi_4 + 0x1c) = 0
                        rdi_4[4] = 0
                        rdi_4[5].w = 0x200
                        *rdi_4 = &data_142f285d0
                        *(rdi_4 + 0x30) = var_490_1.o
                        rdi_4[8] = 0
                    
                    int32_t var_478_1 = 0x1d
                    int16_t var_474_1 = 0
                    int64_t* rax_29 = sub_14081d830(0x28, var_300, 1, 0)
                    int64_t* rcx_17 = rax_29
                    
                    if (rax_29 == 0)
                        rcx_17 = nullptr
                    else
                        rcx_17[1] = rdi_4[1]
                        *rcx_17 = &data_142f285c0
                        rcx_17[2] = 0
                        *(rcx_17 + 0x18) = rdi_4.o
                    
                    void* rbx_6 = *rsi_2
                    var_4a0 = rcx_17
                    uint64_t rcx_18 = sx.q(rsi_2[1].d)
                    void* r14_5 = rcx_18 * 0xe0 + rbx_6
                    
                    if (rbx_6 != r14_5)
                        do
                            sub_141182980(&var_308, rbx_6, &var_4a0)
                            rbx_6 += 0xe0
                        while (rbx_6 != r14_5)
                        
                        rcx_18 = zx.q(rsi_2[1].d)
                    
                    int32_t var_190
                    int64_t rbx_7 = sx.q(var_190)
                    void* var_450_1 = &rsi_2[0x25]
                    rsi_2[0x24].d = rcx_18.d
                    var_458 = rdi_4
                    int32_t rax_32 = (rbx_7 + 1).d
                    int16_t var_448_1 = 0x100
                    var_190 = rax_32
                    int64_t var_198
                    int32_t var_18c
                    
                    if (rax_32 s> var_18c)
                        sub_14119a720(&var_198, rbx_7.d)
                    
                    int64_t rax_33 = var_198
                    int64_t rcx_21 = rbx_7 * 3
                    *(rax_33 + (rcx_21 << 3)) = var_458.o
                    *(rax_33 + (rcx_21 << 3) + 0x10) = var_448_1.q
                    sub_14199ef00(&var_308)
                    int32_t var_e0_1 = 0
                    int32_t var_dc
                    void var_e8
                    
                    if (var_dc != 0)
                        sub_1410b3aa0(&var_e8, 0)
                    int32_t var_158_1 = 0
                    int32_t var_154
                    void var_160
                    
                    if (var_154 != 0)
                        sub_1410b3aa0(&var_160, 0)
                    int32_t var_1b0_1 = 0
                    int32_t var_1f0_1 = 0
                    int32_t var_1ec
                    void var_1f8
                    
                    if (var_1ec != 0)
                        sub_1410b3bb0(&var_1f8, 0)
                    int32_t var_1c8_1 = 0xffffffff
                    int32_t var_1c4_1 = 0
                    void var_1e8
                    sub_141095ed0(&var_1e8, 0)
                    int32_t var_200_1 = 0
                    int32_t var_240_1 = 0
                    int32_t var_23c
                    void var_248
                    
                    if (var_23c != 0)
                        sub_1410b3bb0(&var_248, 0)
                    int32_t var_218_1 = 0xffffffff
                    int32_t var_214_1 = 0
                    void var_238
                    sub_141095ed0(&var_238, 0)
                    int32_t var_250_1 = 0
                    void var_298
                    sub_141096480(&var_298, 0)
                    int32_t var_2a0_1 = 0
                    void var_2e8
                    sub_14108c840(&var_2e8)
                
                rdx = var_4b8
                result = arg1
        
        r12 = arg4
        i += 1
        rdx += 0x5240
        i_1 = i
        var_4b8 = rdx
    while (i s< r12[1].d)

__security_check_cookie(rax_1 ^ &var_4d8)
return result
