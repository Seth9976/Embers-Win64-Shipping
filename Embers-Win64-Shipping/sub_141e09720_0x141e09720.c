// 函数: sub_141e09720
// 地址: 0x141e09720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_1424641d0()
    void* rdx = arg2[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        int32_t rcx_1
        rcx_1.b = arg3:4.d == 0
        
        if ((rcx_1.b & sub_140b5b8a0(arg3.d, 0)) == 0)
            void* r14_1 = arg2[7]
            char rax_4
            
            if (r14_1 == 0 || *(arg1 + 0x28) != r14_1)
                rax_4 = 0
            else
                rax_4 = 1
            
            if (rax_4 != 0 && (*(*arg2 + 0x320))(arg2) != 0)
                void* rax_7 = sub_140cde0b0()
                sub_140d19010(rax_7, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t arg_10 = 0
                void* rax_9
                int512_t zmm6_1
                int32_t zmm7_1
                rax_9, zmm6_1, zmm7_1 = sub_140d2dfc0(sub_1424641d0(), rax_7, 0, 0, 0, 0, 0, 0, 0)
                int64_t* rdi_2 = rax_9
                sub_141e6bf60(rax_9, r14_1)
                int64_t* rax_10 = rdi_2[0x2b]
                zmm6_1.o = zx.o(0)
                uint32_t zmm1_1[0x4] = 0x3f800000
                *rax_10 = arg3
                uint32_t zmm2_1[0x4] = *(arg2 + 0x94)
                int32_t zmm3_1 = arg2[0x12].d
                char var_ac_1 = 1
                int64_t var_c0_1 = 0
                int32_t var_b4_1 = 0x3f800000
                int32_t var_b0_1 = arg6
                
                if (not(_mm_and_ps(zmm2_1, 0x7fffffff)[0] f<= 9.99999994e-09f))
                    zmm1_1 = zmm2_1
                
                uint32_t zmm0[0x4] = _mm_cvtepi32_ps(zx.o(arg6))
                uint32_t temp0_3[0x4] = _mm_and_ps(zmm1_1, 0x7fffffff)
                zmm0[0] = zmm0[0] f* zmm3_1
                zmm0[0] = zmm0[0] f/ temp0_3[0]
                rdi_2[0x12].d = zmm0[0]
                int64_t rsi_1 = sx.q(rax_10[2].d)
                int32_t rax_11 = (rsi_1 + 1).d
                rax_10[2].d = rax_11
                
                if (rax_11 s> *(rax_10 + 0x14))
                    sub_1405c4e40(&rax_10[1])
                
                int64_t rax_12 = rax_10[1]
                uint32_t (* rcx_9)[0x4] = rsi_1 << 5
                *(rcx_9 + rax_12) = arg2.o
                *(rcx_9 + rax_12 + 0x10) = zmm3_1.o
                int64_t var_a0_1 = 0
                void** const var_a8 = &data_143242538
                int32_t var_98_1 = 0
                int32_t var_94_1 = 0xffffffff
                int16_t var_90_1 = 0
                int64_t var_8c
                __builtin_memset(&var_8c, 0, 0x28)
                int64_t var_60_1 = 0
                int64_t var_58_1 = 0
                int32_t zmm6_2 = sub_140b58260(&arg_10, u"Default", 1)
                int64_t var_78_1 = arg_10
                sub_141e31540(&var_a8, (zx.o(0)).d, 0)
                int64_t rsi_2 = sx.q(rdi_2[0x2a].d)
                int32_t rax_14 = (rsi_2 + 1).d
                rdi_2[0x2a].d = rax_14
                
                if (rax_14 s> *(rdi_2 + 0x154))
                    sub_1407755b0(&rdi_2[0x29])
                
                sub_141df2430(rsi_2 * 0x58 + rdi_2[0x29], &var_a8)
                sub_141defc90(&rdi_2[0x15], zmm7_1)
                sub_141defc90(&rdi_2[0x1c], arg4)
                int128_t result = sub_141e07230(arg1, rdi_2, arg5, 0, zmm6_2, 1)
                
                if (var_60_1 != 0)
                    sub_140a74f90(var_60_1)
                
                return result

return zx.o(0)
