// 函数: sub_141e78140
// 地址: 0x141e78140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2[0xf] != 0)
    int64_t* rcx = data_143f5b298
    
    if (rcx != 0 && (*(*rcx + 0x388))(rcx) != 0)
        void* rax_3 = arg2[0xe]
        void* const rax_11
        
        if (rax_3 != 0)
            int32_t rax_4 = *(rax_3 + 0xc)
            
            if (rax_4 s>= data_143e1d9b4)
                rax_11 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_4)
                uint32_t rdx_1 = zx.d(temp0_1)
                int32_t rax_6 = temp1_1 + rdx_1
                rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_6.w) - rdx_1) * 0x18
        
        if (rax_3 == 0 || ((*(rax_11 + 8) u>> 0x1d).b & 1) == 0)
            void* rax_12 = *arg2
            void* rsi
            
            if (rax_12 == 0)
                rsi = (*(*arg1 + 0x278))(arg1)
            else
                rsi = rax_12 + 0x28
            
            if (arg2[0x10].b != 0)
                int64_t rdx_3 = *arg1
                int128_t zmm6 = _mm_max_ss(data_143a2d480.d, 0)
                (*(rdx_3 + 0x288))(arg1, rdx_3)
                
                if (not(arg3[0] f> zmm6.d))
                    void* r8_1 = arg2[0xd]
                    void* rcx_9 = arg2[0xf]
                    int32_t arg_18 = 0
                    sub_141e7e530(rcx_9, arg1, r8_1, arg2 + 0x84, arg3, rsi, &arg_18)
                    int32_t* var_80_1
                    var_80_1.d = arg_18
                    
                    if (sub_141e87c50(arg2[0xf], arg1, arg2[0xd], arg2 + 0x84, rsi, var_80_1.d, 0)
                            == 0)
                        return nullptr
            
            int64_t* result_1
            int512_t zmm1_2
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            int32_t arg_8
            
            if (arg2[0xe] == 0)
                void* const rbx_1
                
                if (arg2[1] == 0)
                    rbx_1 = sub_142470a10()
                else
                    void* rax_25 = sub_142470a10()
                    
                    if (rax_25 == 0)
                        rbx_1 = sub_142470a10()
                    else
                        void* rdx_9 = arg2[1]
                        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                        
                        if (rax_26.d s> *(rdx_9 + 0x38)
                                || *(*(rdx_9 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30
                                || rdx_9 == 0)
                            rbx_1 = sub_142470a10()
                        else
                            void* rax_28 = sub_142470a10()
                            int64_t rax_29
                            
                            if (rax_28 != 0)
                                rbx_1 = arg2[1]
                                rax_29 = sx.q(*(rax_28 + 0x38))
                            
                            if (rax_28 == 0 || rax_29.d s> *(rbx_1 + 0x38)
                                    || *(*(rbx_1 + 0x30) + (rax_29 << 3)) != rax_28 + 0x30)
                                rbx_1 = nullptr
                
                sub_140d19010(rbx_1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                arg_8.q = 0
                result_1, zmm1_2, zmm6_1, zmm7_1, zmm8_1 =
                    sub_140d2dfc0(sub_142470a10(), rbx_1, 0, 0, 0, 0, 0, 0, 0)
            else
                int64_t* rsi_1
                
                if (arg2[1] == 0)
                    rsi_1 = sub_142470a10()
                else
                    void* rax_17 = sub_142470a10()
                    
                    if (rax_17 == 0)
                        rsi_1 = sub_142470a10()
                    else
                        void* rdx_6 = arg2[1]
                        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                        
                        if (rax_18.d s> *(rdx_6 + 0x38)
                                || *(*(rdx_6 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30
                                || rdx_6 == 0)
                            rsi_1 = sub_142470a10()
                        else
                            void* rax_20 = sub_142470a10()
                            int64_t rax_21
                            
                            if (rax_20 != 0)
                                rsi_1 = arg2[1]
                                rax_21 = sx.q(*(rax_20 + 0x38))
                            
                            if (rax_20 == 0 || rax_21.d s> rsi_1[7].d
                                    || *(rsi_1[6] + (rax_21 << 3)) != rax_20 + 0x30)
                                rsi_1 = nullptr
                
                void* rbp_1 = arg2[0xe]
                arg_8.q = 0
                
                if ((1 & sub_140b5b8a0(0, 0)) != 0)
                    sub_140d19010(rbp_1, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                result_1, zmm1_2, zmm6_1, zmm7_1, zmm8_1 =
                    sub_140d2dfc0(rsi_1, rbp_1, 0, 0, 0, 0, 0, 0, 0)
            char rcx_19 = result_1[0x42].b
            int64_t* result = result_1
            *(result_1 + 0x89) &= 0x7f
            rcx_19 &= 0xbf
            result_1[0x42].b = rcx_19
            result_1[0x3e] = arg1
            
            if (*(arg2 + 0x61) == 0 || arg2[0xc].b == 0)
                result_1 = nullptr
            else
                result_1.b = 1
            
            rcx_19 = (rcx_19 & 0xfe) | result_1.b
            result[0x42].b = rcx_19
            result[0x42].b = (((*(arg2 + 0x62) * 2) ^ rcx_19) & 2) ^ rcx_19
            result[0x4c] = *arg2
            sub_140cd48b0(&result[0xc2], &arg2[2])
            
            if (arg2[0x10].b != 0)
                int32_t rax_35 = *(arg2 + 0x8c)
                int64_t var_58 = *(arg2 + 0x84)
                int32_t var_50_1 = rax_35
                sub_141f49c70(result, &var_58, 0, 0, zmm6_1, zmm7_1, zmm8_1, 0)
            
            void* rdx_14 = arg2[0xd]
            
            if (rdx_14 == 0)
                *(result + 0x214) = *(arg2[0xf] + 0x28)
            else
                sub_141ef14c0(result, rdx_14, 0)
            
            if (*(arg2 + 0x61) != 0)
                zmm1_2.o = zx.o(0)
                (*(*result + 0x530))(result, zmm1_2)
            
            return result

return 0
