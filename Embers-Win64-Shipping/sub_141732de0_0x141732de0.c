// 函数: sub_141732de0
// 地址: 0x141732de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
int128_t zmm9
int128_t var_68 = zmm9
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t r12 = *(arg1 + 0x18)
void** result

if (r12 u< 4)
    result = nullptr
else
    zmm6 = 0x7f7fffff
    int32_t var_f8
    int32_t* r14_1 = &var_f8
    zmm7 = 0xff7fffff
    var_f8 = 0xffffffff
    int32_t* rbx_1 = nullptr
    int32_t* rsi_1 = nullptr
    int32_t rdi_1 = 0
    int128_t var_f0_1 = zx.o(0)
    
    if (r12 s<= 0)
        result = nullptr
    else
        int64_t rbp_1 = 0
        int32_t* rax_4
        int128_t* r8_1
        float zmm1[0x4]
        
        do
            int32_t* rax_2 = j_sub_140a82f30(0x28)
            int32_t* rcx = rax_2
            
            if (rax_2 == 0)
                rcx = nullptr
            else
                *rax_2 = rdi_1
            
            *(r14_1 + 0x10) = rcx
            int32_t* rax_3 = rcx
            *(rcx + 8) = r14_1
            r14_1 = rcx
            *(rcx + 0x10) = 0
            r8_1 = *(arg1 + 0x28)
            zmm1 = *(r8_1 + rbp_1)
            bool cond:0_1 = zmm6[0] <= zmm1[0]
            float temp0_1[0x4] = _mm_min_ss(zmm1[0], zmm6[0])
            
            if (cond:0_1)
                rax_3 = rbx_1
            
            bool cond:1_1 = zmm1[0] <= zmm7[0]
            rbx_1 = rax_3
            rax_4 = rcx
            float temp0_2[0x4] = _mm_max_ss(zmm1[0], zmm7[0])
            zmm6 = temp0_1
            
            if (cond:1_1)
                rax_4 = rsi_1
            
            rdi_1 += 1
            rbp_1 += 0xc
            rsi_1 = rax_4
            zmm7 = temp0_2
        while (rdi_1 s< r12)
        
        if (rbx_1 == rax_4)
            result = nullptr
        else
            int64_t rdx_1 = sx.q(*rax_4) * 3
            int64_t rcx_1 = sx.q(*rbx_1) * 3
            zmm1 = *(r8_1 + (rcx_1 << 2))
            float zmm2[0x4] = *(r8_1 + (rcx_1 << 2) + 4)
            zmm2[0] = zmm2[0] f- *(r8_1 + (rdx_1 << 2) + 4)
            zmm1[0] = zmm1[0] f- *(r8_1 + (rdx_1 << 2))
            float zmm0_1[0x4] = *(r8_1 + (rcx_1 << 2) + 8)
            zmm0_1[0] = zmm0_1[0] f- *(r8_1 + (rdx_1 << 2) + 8)
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            zmm2[0] = zmm2[0] + zmm1[0]
            zmm2[0] = zmm2[0] + zmm0_1[0]
            
            if (zmm2[0] < 9.99999975e-05f)
                result = nullptr
            else
                *(*(rbx_1 + 8) + 0x10) = *(rbx_1 + 0x10)
                void* rcx_3 = *(rbx_1 + 0x10)
                
                if (rcx_3 != 0)
                    *(rcx_3 + 8) = *(rbx_1 + 8)
                
                *(*(rsi_1 + 8) + 0x10) = *(rsi_1 + 0x10)
                void* rcx_5 = *(rsi_1 + 0x10)
                
                if (rcx_5 != 0)
                    *(rcx_5 + 8) = *(rsi_1 + 8)
                
                int64_t r8_2 = *(arg1 + 0x28)
                float zmm13[0x4] = 0x38d1b717
                int32_t* i_7 = nullptr
                int64_t rdx_2 = sx.q(*rbx_1) * 3
                int128_t zmm10 = *(r8_2 + (rdx_2 << 2))
                int128_t zmm11 = *(r8_2 + (rdx_2 << 2) + 4)
                int128_t zmm12 = *(r8_2 + (rdx_2 << 2) + 8)
                int32_t* i = var_f0_1:8.q
                int64_t rcx_6 = sx.q(*rsi_1) * 3
                zmm7 = *(r8_2 + (rcx_6 << 2))
                float zmm8[0x4] = *(r8_2 + (rcx_6 << 2) + 4)
                zmm7[0] = zmm7[0] f- zmm10.d
                zmm6 = *(r8_2 + (rcx_6 << 2) + 8)
                zmm8[0] = zmm8[0] f- zmm11.d
                zmm6[0] = zmm6[0] f- zmm12.d
                void** result_1
                
                if (i == 0)
                    result_1 = nullptr
                else
                    int32_t* i_2
                    float zmm3
                    float zmm4_1
                    
                    do
                        zmm4_1 = zmm8[0]
                        int64_t rcx_7 = sx.q(*i) * 3
                        i_2 = i
                        zmm1 = *(r8_2 + (rcx_7 << 2) + 8)
                        zmm2 = *(r8_2 + (rcx_7 << 2) + 4)
                        zmm1[0] = zmm1[0] f- zmm12.d
                        zmm3 = *(r8_2 + (rcx_7 << 2))
                        zmm2[0] = zmm2[0] f- zmm11.d
                        i = *(i + 0x10)
                        zmm3 = zmm3 f- zmm10.d
                        zmm4_1 = zmm4_1 * zmm1[0]
                        zmm6[0] = zmm6[0] * zmm3
                        zmm6[0] = zmm6[0] * zmm2[0]
                        zmm4_1 = zmm4_1 - zmm6[0]
                        zmm7[0] = zmm7[0] * zmm1[0]
                        zmm7[0] = zmm7[0] * zmm2[0]
                        zmm6[0] = zmm6[0] - zmm7[0]
                        zmm8[0] = zmm8[0] * zmm3
                        zmm6[0] = zmm6[0] * zmm6[0]
                        zmm7[0] = zmm7[0] - zmm8[0]
                        zmm6[0] = zmm6[0] + zmm4_1 * zmm4_1
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm6[0] = zmm6[0] + zmm7[0]
                        bool cond:2_1 = zmm6[0] <= zmm13[0]
                        float temp0_3[0x4] = _mm_max_ss(zmm6[0], zmm13[0])
                        
                        if (cond:2_1)
                            i_2 = i_7
                        
                        i_7 = i_2
                        zmm13 = temp0_3
                    while (i != 0)
                    
                    if (i_2 == 0)
                        result_1 = nullptr
                    else
                        *(*(i_2 + 8) + 0x10) = *(i_2 + 0x10)
                        void* rcx_9 = *(i_7 + 0x10)
                        
                        if (rcx_9 != 0)
                            *(rcx_9 + 8) = *(i_7 + 8)
                        
                        int64_t r8_3 = *(arg1 + 0x28)
                        zmm4_1 = 9.99999975e-05f
                        int32_t* i_6 = nullptr
                        int32_t* i_5 = nullptr
                        int64_t rdx_3 = sx.q(*rbx_1) * 3
                        zmm11 = *(r8_3 + (rdx_3 << 2) + 4)
                        zmm12 = *(r8_3 + (rdx_3 << 2) + 8)
                        zmm10 = *(r8_3 + (rdx_3 << 2))
                        int32_t* i_1 = var_f0_1:8.q
                        int64_t rcx_10 = sx.q(*i_7) * 3
                        zmm2 = *(r8_3 + (rcx_10 << 2) + 4)
                        zmm3 = *(r8_3 + (rcx_10 << 2)) f- zmm10.d
                        zmm1 = *(r8_3 + (rcx_10 << 2) + 8)
                        zmm2[0] = zmm2[0] f- zmm11.d
                        zmm1[0] = zmm1[0] f- zmm12.d
                        zmm6[0] = zmm6[0] * zmm3
                        zmm6[0] = zmm6[0] * zmm2[0]
                        zmm8[0] = zmm8[0] * zmm3
                        zmm3 = 9.99999975e-05f
                        zmm8[0] = zmm8[0] * zmm1[0]
                        zmm8[0] = zmm8[0] - zmm6[0]
                        zmm7[0] = zmm7[0] * zmm1[0]
                        zmm7[0] = zmm7[0] * zmm2[0]
                        zmm6[0] = zmm6[0] - zmm7[0]
                        zmm7[0] = zmm7[0] - zmm8[0]
                        
                        if (i_1 == 0)
                            result_1 = nullptr
                        else
                            float temp0_4[0x4]
                            
                            do
                                int64_t rcx_11 = sx.q(*i_1) * 3
                                int32_t* i_3 = i_1
                                zmm2 = *(r8_3 + (rcx_11 << 2) + 4)
                                zmm0_1 = *(r8_3 + (rcx_11 << 2))
                                zmm2[0] = zmm2[0] f- zmm11.d
                                zmm1 = *(r8_3 + (rcx_11 << 2) + 8)
                                zmm0_1[0] = zmm0_1[0] f- zmm10.d
                                zmm1[0] = zmm1[0] f- zmm12.d
                                zmm2[0] = zmm2[0] * zmm6[0]
                                zmm0_1[0] = zmm0_1[0] * zmm8[0]
                                zmm1[0] = zmm1[0] * zmm7[0]
                                zmm2[0] = zmm2[0] + zmm0_1[0]
                                zmm2[0] = zmm2[0] + zmm1[0]
                                bool cond:3_1 = zmm2[0] <= zmm4_1
                                zmm0_1 = zmm2
                                zmm2 ^= 0x80000000
                                temp0_4 = _mm_max_ss(zmm0_1[0], zmm4_1)
                                
                                if (cond:3_1)
                                    i_3 = i_6
                                
                                bool cond:4_1 = zmm2[0] <= zmm3
                                i_6 = i_3
                                int32_t* i_4 = i_1
                                i_1 = *(i_1 + 0x10)
                                zmm4_1 = temp0_4[0]
                                zmm3 = _mm_max_ss(zmm3, zmm2[0])
                                
                                if (cond:4_1)
                                    i_4 = i_5
                                
                                i_5 = i_4
                            while (i_1 != 0)
                            
                            if (zmm3 != 9.99999975e-05f || not(temp0_4[0] == 9.99999975e-05f))
                                i_1.b = temp0_4[0] > zmm3
                                
                                if (i_1.b != 0)
                                    i_5 = i_6
                                
                                *(*(i_5 + 8) + 0x10) = *(i_5 + 0x10)
                                void* rcx_13 = *(i_5 + 0x10)
                                
                                if (rcx_13 != 0)
                                    *(rcx_13 + 8) = *(i_5 + 8)
                                
                                char temp0_6 = i_1.b
                                int32_t* rbp_2 = rsi_1
                                
                                if (temp0_6 == 0)
                                    rbp_2 = rbx_1
                                
                                if (temp0_6 == 0)
                                    rbx_1 = rsi_1
                                
                                void** result_2 = sub_1417352f0(arg1, rbp_2, rbx_1, i_7)
                                void** result_3 = result_2
                                result_1 = result_2
                                int32_t* rax_21 = j_sub_140a82f30(0x28)
                                int32_t* r12_1 = rax_21
                                
                                if (rax_21 == 0)
                                    r12_1 = nullptr
                                else
                                    *rax_21 = *rbp_2
                                
                                int32_t* rax_22 = j_sub_140a82f30(0x28)
                                
                                if (rax_22 == 0)
                                    rax_22 = nullptr
                                else
                                    *rax_22 = *rbx_1
                                
                                void** rax_23 = sub_1417352f0(arg1, rax_22, r12_1, i_5)
                                int32_t* rax_24 = j_sub_140a82f30(0x28)
                                int32_t* r13_1 = rax_24
                                
                                if (rax_24 == 0)
                                    r13_1 = nullptr
                                else
                                    *rax_24 = *i_5
                                
                                int32_t* rax_25 = j_sub_140a82f30(0x28)
                                int32_t* r12_2 = rax_25
                                
                                if (rax_25 == 0)
                                    r12_2 = nullptr
                                else
                                    *rax_25 = *i_7
                                
                                int32_t* rax_26 = j_sub_140a82f30(0x28)
                                
                                if (rax_26 != 0)
                                    *rax_26 = *rbp_2
                                
                                void** rax_27 = sub_1417352f0(arg1, rax_26, r12_2, r13_1)
                                void** var_c0_1 = rax_27
                                int32_t* rax_28 = j_sub_140a82f30(0x28)
                                int32_t* r13_2 = rax_28
                                
                                if (rax_28 == 0)
                                    r13_2 = nullptr
                                else
                                    *rax_28 = *i_5
                                
                                int32_t* rax_29 = j_sub_140a82f30(0x28)
                                int32_t* rdi_2 = rax_29
                                
                                if (rax_29 == 0)
                                    rdi_2 = nullptr
                                else
                                    *rax_29 = *rbx_1
                                
                                int32_t* rax_30 = j_sub_140a82f30(0x28)
                                
                                if (rax_30 != 0)
                                    *rax_30 = *i_7
                                
                                void** rax_31 = sub_1417352f0(arg1, rax_30, rdi_2, r13_2)
                                void** var_b8_1 = rax_31
                                void* rcx_26 = *rax_23
                                *(rbp_2 + 0x18) = rcx_26
                                *(rcx_26 + 0x18) = rbp_2
                                void* rcx_27 = *rax_31
                                *(rbx_1 + 0x18) = rcx_27
                                *(rcx_27 + 0x18) = rbx_1
                                void* rcx_28 = *rax_27
                                *(i_7 + 0x18) = rcx_28
                                *(rcx_28 + 0x18) = i_7
                                void* r8_8 = *(*rax_27 + 8)
                                void* rdx_8 = *(*rax_23 + 0x10)
                                *(rdx_8 + 0x18) = r8_8
                                *(r8_8 + 0x18) = rdx_8
                                void* rdx_9 = *(*rax_31 + 0x10)
                                void* rcx_31 = *(*rax_23 + 8)
                                *(rcx_31 + 0x18) = rdx_9
                                *(rdx_9 + 0x18) = rcx_31
                                void* r8_9 = *(*rax_31 + 8)
                                void* rdx_10 = *(*rax_27 + 0x10)
                                *(rdx_10 + 0x18) = r8_9
                                *(r8_9 + 0x18) = rdx_10
                                result_1[5] = 0
                                result_1[6] = rax_23
                                rax_23[5] = result_1
                                rax_23[6] = rax_27
                                rax_27[5] = rax_23
                                rax_27[6] = rax_31
                                rax_31[5] = rax_27
                                rax_31[6] = 0
                                sub_1417589b0(arg1, var_f0_1:8.q, &result_3, 4)
                            else
                                result_1 = nullptr
                
                result = result_1

__security_check_cookie(rax_1 ^ &var_118)
return result
