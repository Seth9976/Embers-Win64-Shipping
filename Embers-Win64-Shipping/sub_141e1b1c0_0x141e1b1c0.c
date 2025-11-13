// 函数: sub_141e1b1c0
// 地址: 0x141e1b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_1424641d0()
    void* rdx = arg1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        int32_t rcx_1
        rcx_1.b = arg2:4.d == 0
        
        if ((rcx_1.b & sub_140b5b8a0(arg2.d, 0)) == 0)
            void* r14_1 = arg1[7]
            
            if ((*(*arg1 + 0x320))(arg1) != 0)
                void* rax_7 = sub_140cde0b0()
                sub_140d19010(rax_7, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t arg_8 = 0
                void* result
                int512_t zmm6_1
                int32_t zmm7_1
                float zmm8_1
                result, zmm6_1, zmm7_1, zmm8_1 =
                    sub_140d2dfc0(sub_1424641d0(), rax_7, 0, 0, 0, 0, 0, 0, 0)
                sub_141e6bf60(result, r14_1)
                int64_t* rax_9 = *(result + 0x158)
                zmm6_1.o = zx.o(0)
                uint32_t zmm1_1[0x4] = 0x3f800000
                *rax_9 = arg2
                uint32_t zmm2_1[0x4] = *(arg1 + 0x94)
                int32_t zmm3_1 = arg1[0x12].d
                char var_bc_1 = 1
                int64_t var_d0_1 = 0
                int32_t var_c4_1 = 0x3f800000
                int32_t var_c0_1 = arg3
                
                if (not(_mm_and_ps(zmm2_1, 0x7fffffff)[0] f<= 9.99999994e-09f))
                    zmm1_1 = zmm2_1
                
                uint32_t zmm0_1[0x4] = _mm_cvtepi32_ps(zx.o(arg3))
                uint32_t temp0_3[0x4] = _mm_and_ps(zmm1_1, 0x7fffffff)
                zmm0_1[0] = zmm0_1[0] f* zmm3_1
                zmm0_1[0] = zmm0_1[0] f/ temp0_3[0]
                *(result + 0x90) = zmm0_1[0]
                int64_t r14_2 = sx.q(rax_9[2].d)
                int32_t rax_10 = (r14_2 + 1).d
                rax_9[2].d = rax_10
                
                if (rax_10 s> *(rax_9 + 0x14))
                    sub_1405c4e40(&rax_9[1])
                
                int64_t rax_11 = rax_9[1]
                uint32_t (* rcx_9)[0x4] = r14_2 << 5
                *(rcx_9 + rax_11) = arg1.o
                *(rcx_9 + rax_11 + 0x10) = zmm3_1.o
                int64_t var_b0_1 = 0
                void** const var_b8 = &data_143242538
                int32_t var_a8_1 = 0
                int32_t var_a4_1 = 0xffffffff
                int16_t var_a0_1 = 0
                int64_t var_9c
                __builtin_memset(&var_9c, 0, 0x14)
                int64_t var_80_1 = 0
                int32_t var_78_1 = 0
                int64_t var_70_1 = 0
                int64_t var_68_1 = 0
                float zmm6_2 = sub_140b58260(&arg_8, u"Default", 1)
                float zmm1_2 = arg1[0x12].d
                int64_t var_88_1 = arg_8
                
                if (not(zmm1_2 <= zmm6_2))
                    var_9c:4.d = zmm1_2
                    int64_t* var_90_1 = arg1
                    int32_t var_a4_2 = 0
                    var_b8[1](&var_b8, zmm1_2, 0)
                
                char rax_14 = var_a0_1:1.b
                
                if (rax_14 == 0)
                    int32_t var_94_3 = 0
                else
                    uint32_t rcx_12 = zx.d(rax_14)
                    
                    if (rcx_12 == 1)
                        int32_t var_94_2 = (var_9c.d ^ data_142d3f780).d
                    else if (rcx_12 == 2)
                        zmm1_2 = var_9c:4.d
                        
                        if (zmm1_2 == zmm6_2)
                            var_94_3 = 0
                        else
                            int128_t zmm0_2
                            zmm0_2.d = var_9c.d.d f/ zmm1_2
                            int32_t var_94_1 = (zmm0_2 ^ data_142d3f780).d
                
                int64_t rsi_1 = sx.q(*(result + 0x150))
                int32_t rax_15 = (rsi_1 + 1).d
                *(result + 0x150) = rax_15
                
                if (rax_15 s> *(result + 0x154))
                    sub_1407755b0(result + 0x148)
                
                sub_141df2430(rsi_1 * 0x58 + *(result + 0x148), &var_b8)
                sub_141defc90(result + 0xa8, zmm8_1)
                sub_141defc90(result + 0xe0, zmm7_1)
                *(result + 0x114) = arg4
                
                if (var_70_1 != 0)
                    sub_140a74f90(var_70_1)
                
                return result

return nullptr
