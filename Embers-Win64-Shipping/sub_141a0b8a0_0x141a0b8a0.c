// 函数: sub_141a0b8a0
// 地址: 0x141a0b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t* result = nullptr
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t* rsi_1 = arg5
    int64_t* r12_1 = nullptr
    int32_t r15_1 = 1
    int128_t zmm9 = zx.o(0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int64_t* var_f0_1 = nullptr
    result = arg2
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    do
        if ((arg4 & r15_1) != 0)
            void*** (* var_b8)() = j_sub_140597fc0
            char var_f8
            char* var_b0_1 = &var_f8
            var_f8 = 0
            void* rax = sub_140a756e0(&var_b8, &data_143958018)
            void*** rbx_3 = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_1 = &rbx_3[3]
            
            if (rax_1 u> *(rax + 0x18))
                sub_140b0e3d0(rax + 0x10, 0x28)
                rbx_3 = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_1 = &rbx_3[3]
            
            *(rax + 0x10) = rax_1
            
            if (rbx_3 == 0)
                rbx_3 = nullptr
            else
                *rbx_3 = &data_14301ea58
                rbx_3[1] = 0
                rbx_3[2] = 0
            
            int64_t rsi_2 = sx.q(rsi_1[0x18].d)
            int32_t rax_2 = (rsi_2 + 1).d
            rsi_1[0x18].d = rax_2
            
            if (rax_2 s> *(rsi_1 + 0xc4))
                sub_14083a310(&rsi_1[0x17], rsi_2.d)
            
            *(rsi_1[0x17] + (rsi_2 << 3)) = rbx_3
            int64_t rbx_6 = sx.q(rbx_3[2].d)
            int32_t rax_4 = (rbx_6 + 1).d
            rbx_3[2].d = rax_4
            
            if (rax_4 s> *(rbx_3 + 0x14))
                sub_141a14580(&rbx_3[1], rbx_6.d)
            
            rbx_3[1][rbx_6 * 4] = 0
            int32_t rbx_7 = sx.d(arg1[0x34].b)
            int64_t* rdi_3 = *(r12_1 + *arg2)
            int32_t rax_10 = sub_1405bd500()
            int32_t r12_2 = sx.d(arg1[0x93].b)
            float zmm1_1 = *(arg1 + 0xc4)
            zmm6 = *(rdi_3 + 0xd5c)
            
            if ((*(*rdi_3 + 0x2c) & 0x10) == 0)
                rax_10 = 0
            
            float var_e8 = arg1[0x18].d
            float var_e4_1 = zmm1_1
            zmm1_1 = arg1[0x1b].d
            
            if (rax_10 s>= 0)
                rbx_7 = rax_10
            
            float var_e0_1 = arg1[0x19].d
            int32_t var_dc_1 = 0x3f800000
            
            if (rbx_7 s<= r12_2)
                r12_2 = rbx_7
            
            zmm6[0] = zmm6[0] f* *(data_143ed5cc8 + 4)
            float zmm0_2
            float zmm6_1
            zmm0_2, zmm6_1 = sub_1422dff00(&var_e8, zmm1_1, rdi_3)
            int32_t rbx_8
            
            if (r12_2 s< 0)
                rbx_8 = sx.d(sub_141a0dfa0(arg1, zmm0_2, zmm6_1 * zmm6_1))
            else
                rbx_8 = r12_2
            
            int32_t rax_13 = sub_14081f8e0(arg5, 1)
            int32_t var_110_1 = (&rbx_3[1]).d
            int64_t* rdi_6 = zx.q(rax_13 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_13 s/ 0x66) << 3))
            sub_1419f74a0(arg1, rbx_8, 0, zx.q((r12_2 u>> 0x1f).b) ^ 1, rdi_6)
            char rax_16 = sub_1422a6980(arg3)
            char rax_17
            
            if (rax_16 == 0 && data_143f28349 == rax_16)
                rax_17 = sub_14076deb0(arg1)
            
            if (rax_16 != 0 || data_143f28349 != rax_16 || rax_17 != 0 || (arg1[7].b & 0x10) != 0)
                *(rdi_6 + 0x9c) |= 0x10000
                rsi_1 = arg5
                *(rdi_6 + 0x9c) = zx.d(sub_14076deb0(arg1)) << 0x11 | (*(rdi_6 + 0x9c) & 0xfffdffff)
                zmm9 = sub_1422dd2a0(rsi_1, i, rdi_6)
            else
                rsi_1 = arg5
            
            if (data_143f28348 == 0)
                r12_1 = var_f0_1
            else
                int32_t var_f4 = 0xffffff00
                void var_90
                sub_140acc920(&var_90, &var_f4)
                zmm6 = arg1[0x18].d
                void* rcx_18 = &rsi_1[0xa]
                float zmm1_3[0x4] = *(arg1 + 0xd4)
                float zmm2_1 = arg1[0x19].d
                float zmm4_1[0x4] = *(arg1 + 0xcc)
                int128_t zmm3_1 = arg1[0x1a].d
                zmm1_3[0] = zmm1_3[0] + zmm2_1
                int64_t zmm5_1 = *(arg1 + 0xc4)
                zmm2_1 = zmm2_1 - zmm1_3[0]
                r12_1 = var_f0_1
                zmm4_1[0] = zmm4_1[0] + zmm6[0]
                char var_c0_1 = 1
                float var_94_1 = zmm1_3[0]
                zmm7.d = zmm3_1.d f+ zmm5_1.d
                zmm6[0] = zmm6[0] - zmm4_1[0]
                zmm5_1.d = zmm5_1.d f- zmm3_1.d
                float var_d0_1 = zmm2_1
                float var_c4_1 = var_94_1
                void* rax_24 = *(rcx_18 + 0x10)
                int64_t var_d8 = (_mm_unpacklo_ps(zmm6, zmm5_1)).q
                
                if (rax_24 != 0)
                    rcx_18 = rax_24
                
                int64_t var_cc_1 = (_mm_unpacklo_ps(zmm4_1, zmm7.q)).q
                int64_t* var_118_1
                var_118_1.d = zmm9.d
                zmm9 = sub_14229ae30(*(rcx_18 + r12_1), &var_d8, &var_90, 0, var_118_1.d, zmm9.d, 0)
            
            arg4 = arg_20
            result = arg2
        
        r12_1 = &r12_1[1]
        r15_1 = rol.d(r15_1, 1)
        i += 1
        var_f0_1 = r12_1
    while (i s< result[1].d)

return result
