// 函数: sub_141a6af80
// 地址: 0x141a6af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a284c0(arg2, arg3, arg1)
int128_t* rsi = arg1[1].q
void* r14 = rsi + sx.q(*(arg1 + 0x18)) * 0x14

if (rsi != r14)
    int32_t* rbx_1 = rsi + 0xc
    
    do
        uint128_t var_d0
        int64_t* rax_2 = sub_141a284c0(&var_d0, arg2, rsi)
        uint128_t zmm0_1 = *rax_2
        *arg2 = zmm0_1
        arg2[2] = rax_2[2]
        
        if (rbx_1[1] s> *rbx_1)
            int64_t var_c0
            
            if (zmm0_1.b == 2 || (*(arg2 + 0xc)).b == 2)
                sub_141a6ae40(rbx_1, &var_d0, arg2)
            else
                uint64_t var_f0_1 = *arg2
                int32_t var_e8_1 = arg2[1].d
                char* r8_3
                int32_t zmm6_1
                
                if (var_f0_1.b != 1)
                    void var_5c
                    int32_t* rax_7
                    rax_7, zmm6_1 = sub_141a35470(&var_5c, var_f0_1, rbx_1)
                    char var_94 = 0
                    r8_3 = &var_94
                    int64_t var_90_1 = *rax_7
                else
                    void var_64
                    int32_t* rax_5
                    rax_5, zmm6_1 = sub_141a35470(&var_64, var_f0_1, rbx_1)
                    char var_a0 = 1
                    r8_3 = &var_a0
                    int64_t var_9c_1 = *rax_5
                
                int64_t rdx_3 = *(arg2 + 4)
                int64_t rcx_5 = arg2[2]
                int32_t rax_9 = *(r8_3 + 8)
                uint128_t zmm0_2 = zx.o(*r8_3)
                float zmm2_1[0x4] = rcx_5:4.d
                zmm2_1[0] = zmm2_1[0] f- rdx_3:4.d
                int32_t var_d8_1 = rax_9
                uint64_t var_e0_1 = zmm0_2.q
                zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] - 0.5f
                int32_t rax_11 = int.d(zmm2_1[0]) s>> 1
                int32_t rdx_4 = rcx_5.d - rdx_3.d + rax_11
                zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_11))
                zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
                
                if (not(zmm2_1[0] f>= zmm6_1))
                    float arg_14 = 0f
                else if (zmm2_1[0] >= 0.99999994f)
                    arg_14 = 0.99999994f
                else
                    arg_14 = zmm2_1[0]
                
                zmm2_1 = rdx_4.q:4.d
                zmm2_1[0] = zmm2_1[0] f+ var_e0_1:4.d
                zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] - 0.5f
                float zmm1_2[0x4] = zmm2_1
                int32_t rax_17 = (int.d(zmm2_1[0]) s>> 1) + var_e0_1:4.d + rdx_4
                int32_t rcx_7 = int.d(zmm1_2[0])
                
                if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== zmm1_2[0]))
                    zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_7
                        - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1)))
                
                zmm2_1[0] = zmm2_1[0] - zmm1_2[0]
                
                if (not(zmm2_1[0] f>= zmm6_1))
                    float arg_c = 0f
                else if (zmm2_1[0] >= 0.99999994f)
                    arg_c = 0.99999994f
                else
                    arg_c = zmm2_1[0]
                
                int64_t rax_20 = rax_17.q
                char* rcx_9
                
                if ((*(arg2 + 0xc)).b != 1)
                    char var_70 = 0
                    rcx_9 = &var_70
                    int64_t var_6c_1 = rax_20
                else
                    char var_7c = 1
                    rcx_9 = &var_7c
                    int64_t var_78_1 = rax_20
                
                var_d0.q = *r8_3
                var_d0:8.d = *(r8_3 + 8)
                var_d0:0xc.q = *rcx_9
                var_c0:4.d = *(rcx_9 + 8)
            
            *arg2 = var_d0
            arg2[2] = var_c0
        
        rsi += 0x14
        rbx_1 = &rbx_1[5]
    while (rsi != r14)

return arg2
