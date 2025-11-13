// 函数: sub_141193a20
// 地址: 0x141193a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_448
int64_t var_80_1 = __security_cookie ^ &var_448
int64_t* rsi_1 = arg3
int64_t* r12_1 = arg2
int64_t var_380_1 = arg1

if (arg3[1].d != 0)
    void var_2f8
    sub_1419928d0(&var_2f8, arg1)
    void*** var_388 = sub_1410fccd0(&var_2f8, sub_14139d440(&data_143ec4c60), SceneColorTexture", 0)
    void*** rax_4
    int128_t zmm6_1
    rax_4, zmm6_1 = sub_1410fccd0(&var_2f8, &data_143ec4ca0, u"SceneDepthTexture", 0)
    int32_t i = 0
    void*** var_3c0 = rax_4
    
    if (r12_1[1].d s> 0)
        int64_t rdi_2 = 0
        int64_t r15_1 = 0
        int128_t var_48_1 = zmm6_1
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        int64_t var_3b8_1 = 0
        int64_t var_3e8_1 = 0
        
        do
            void* r13_2 = *r12_1 + r15_1
            
            if (*r13_2 != 0 && i s< rsi_1[1].d)
                void* rbx_2 = *rsi_1 + rdi_2
                int64_t* rax_5 = *(rbx_2 + 0x28)
                int64_t* var_3d0 = rax_5
                
                if (rax_5 != 0)
                    int64_t rdx_2 = *rax_5
                    (*(rdx_2 + 0x30))(rax_5, rdx_2)
                    
                    if (var_3d0 != 0)
                        void*** var_408 =
                            sub_1410fccd0(&var_2f8, &var_3d0, HairVisibilityCategorisationTexture", 
                            0)
                        void**** var_420_1 = &var_3c0
                        sub_141183a60(&var_2f8, r13_2, rbx_2, &var_408, &var_388)
                        void* rdx_5 = *rsi_1
                        void*** var_3c8
                        
                        if (*(rdi_2 + rdx_5 + 0x20) != 0)
                            var_3c8 = sub_1410fccd0(&var_2f8, rdx_5 + sx.q(i) * 0xe8 + 0x20, 
                                HairVisibilityVelocityTexture", 0)
                            sub_141183d00(&var_2f8, r13_2, &var_3c8, &var_3c0)
                        
                        if (data_1439b5f6c s> 0)
                            var_3c8 = &data_143ec4cd0
                            void*** rsi_2
                            
                            if (data_143ec4cd0 == 0)
                                rsi_2 = nullptr
                            else
                                rsi_2 = sub_1410fccd0(&var_2f8, &data_143ec4cd0, u"GBufferA", 0)
                            
                            void*** r15_2
                            
                            if (data_143ec4cd8 == 0)
                                r15_2 = nullptr
                            else
                                r15_2 = sub_1410fccd0(&var_2f8, &data_143ec4cd8, u"GBufferB", 0)
                            
                            if (rsi_2 != 0 && r15_2 != 0)
                                int64_t rbx_3 = *(rsi_2 + 0x44)
                                int64_t* var_2f0
                                void**** rax_12
                                int512_t zmm6_2
                                rax_12, zmm6_2 = sub_14081d830(0xa0, var_2f0, 1, 0)
                                void**** rdi_3 = rax_12
                                
                                if (rax_12 == 0)
                                    rdi_3 = nullptr
                                else
                                    sub_14117af20(&rax_12[2])
                                
                                rdi_3[1] = 0
                                memset(&rdi_3[6], 0, 0x70)
                                *rdi_3 = var_408
                                int16_t var_3a0_1 = 1
                                char var_39e_1 = 0
                                int32_t var_39c_1 = 0xffffffff
                                *(rdi_3 + 0x10) = rsi_2.o
                                int16_t var_390_1 = 1
                                char var_38e_1 = 0
                                int32_t var_38c_1 = 0xffffffff
                                *(rdi_3 + 0x20) = r15_2.o
                                int128_t var_318
                                sub_1419a2ec0(*(r13_2 + 0x5150), &var_318, &data_143ed5e80, 0)
                                zmm9 = var_318
                                int128_t var_308
                                char rcx_17 =
                                    sub_1419a2ec0(*(r13_2 + 0x5150), &var_308, &data_143e6bcc0, 0)
                                zmm8 = var_308
                                zmm6_2.o = zx.o(0)
                                zmm7 = *(r13_2 + 0x1598)
                                var_408.o = sub_14118eba0(rcx_17)
                                sub_141998c50(zmm8.q, &data_143e72ef0, rdi_3)
                                int64_t var_330_1 = rbx_3
                                int128_t var_350_1 = zmm8
                                void*** rax_14
                                char rcx_19
                                rax_14, rcx_19 = sub_14081d830(0x80, var_2f0, 1, 0)
                                void*** rbx_4 = rax_14
                                
                                if (rax_14 == 0)
                                    rbx_4 = nullptr
                                else
                                    sub_14118eba0(rcx_19)
                                    void* var_370_1 = &data_143e72f20
                                    var_408.o = rdi_3.o
                                    void var_418
                                    sub_141992bd0(rbx_4, &var_418, &var_408, 1)
                                    *rbx_4 = &data_142f2c918
                                    *(rbx_4 + 0x38) = rdi_3.o
                                    *(rbx_4 + 0x48) = zmm9
                                    uint128_t var_348
                                    *(rbx_4 + 0x58) = var_348
                                    *(rbx_4 + 0x68) = zmm7
                                    rbx_4[0xf] = r13_2
                                
                                sub_1419968d0(&var_2f8, rbx_4)
                                int32_t var_190
                                int64_t rbx_5 = sx.q(var_190)
                                void*** var_400_1 = var_3c8
                                var_408 = rsi_2
                                int32_t rax_16 = (rbx_5 + 1).d
                                char var_3f8_1 = 1
                                int64_t var_198
                                int32_t var_18c
                                
                                if (rax_16 s> var_18c)
                                    sub_14119a720(&var_198, rbx_5.d)
                                
                                int64_t rax_17 = var_198
                                int64_t rcx_23 = rbx_5 * 3
                                int128_t zmm0_4 = var_408.o
                                var_408 = r15_2
                                *(rax_17 + (rcx_23 << 3)) = zmm0_4
                                int64_t* var_400_2 = &data_143ec4cd8
                                *(rax_17 + (rcx_23 << 3) + 0x10) = var_3f8_1.q
                                int64_t rbx_6 = sx.q(rax_16)
                                char var_3f8_2 = 1
                                int32_t rax_18 = (rbx_6 + 1).d
                                var_190 = rax_18
                                
                                if (rax_18 s> var_18c)
                                    sub_14119a720(&var_198, rbx_6.d)
                                
                                int64_t rax_19 = var_198
                                int64_t rcx_25 = rbx_6 * 3
                                rdi_2 = var_3b8_1
                                *(rax_19 + (rcx_25 << 3)) = var_408.o
                                *(rax_19 + (rcx_25 << 3) + 0x10) = var_3f8_2.q
                            
                            rsi_1 = arg3
                            r15_1 = var_3e8_1
                            r12_1 = arg2
                        
                        int64_t* rcx_26 = var_3d0
                        
                        if (rcx_26 != 0)
                            (*(*rcx_26 + 0x38))(rcx_26)
            
            r15_1 += 0x5240
            rdi_2 += 0xe8
            i += 1
            var_3e8_1 = r15_1
            var_3b8_1 = rdi_2
        while (i s< r12_1[1].d)
    
    sub_14199ef00(&var_2f8)
    sub_1410eb9e0(&var_2f8)

__security_check_cookie(var_80_1 ^ &var_448)
