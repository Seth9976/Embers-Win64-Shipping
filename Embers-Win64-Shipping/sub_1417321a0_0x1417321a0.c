// 函数: sub_1417321a0
// 地址: 0x1417321a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_14083ad30(r14, 0)

void** result = sub_141732de0(arg1)

if (result != 0)
    int64_t var_80_1 = 0
    int128_t var_78_1 = *(result + 0x10)
    void** result_1 = result
    int64_t var_68_1 = result[4]
    int64_t var_60_1 = 0
    void var_88
    result[5] = &var_88
    float zmm6_1
    float zmm7_1
    result, zmm6_1, zmm7_1 = sub_141739ef0(arg1, result_1)
    void** rbx_1 = result
    int64_t* var_c8
    void** i_4
    
    if (result == 0)
        i_4 = result_1
    else
        float var_38_1 = zmm6_1
        float var_48_1 = zmm7_1
        
        while (true)
            int64_t var_a8 = 0
            int64_t var_a0_1 = 0
            var_c8 = nullptr
            int32_t var_c0_1 = 0
            sub_141732a00(arg1, rbx_1, &var_a8, &var_c8)
            int64_t rdi_1 = sx.q(var_c0_1)
            int64_t* r12_1 = var_c8
            uint64_t var_98 = 0
            int64_t var_90_1 = 0
            void** var_b8 = nullptr
            int32_t var_b0_1 = rdi_1.d
            
            if (rdi_1.d != 0)
                sub_1405c4a00(&var_b8, rdi_1.d, 0)
                memcpy(var_b8, r12_1, (rdi_1 << 3).d)
            else
                int32_t var_ac_1 = 0
            
            float zmm7_2
            result, zmm7_2 = sub_141732570(arg1, rbx_1, &var_a8, &var_b8, &var_98)
            void* rcx_7 = &r12_1[rdi_1]
            int64_t r14_1 = 0
            uint64_t r15_4 = (rcx_7 - r12_1 + 7) u>> 3
            
            if (r12_1 u> rcx_7)
                r15_4 = 0
            
            int64_t* rsi_1 = r12_1
            
            if (r15_4 != 0)
                do
                    int64_t* rdi_2 = *rsi_1
                    void* i_3 = *rdi_2
                    void* i
                    
                    do
                        i = *(i_3 + 0x10)
                        j_sub_140a74f90(i_3)
                        i_3 = i
                    while (i != *rdi_2)
                    void* rcx_8 = rdi_2[5]
                    
                    if (rcx_8 != 0)
                        *(rcx_8 + 0x30) = rdi_2[6]
                    
                    void* rcx_9 = rdi_2[6]
                    
                    if (rcx_9 != 0)
                        *(rcx_9 + 0x28) = rdi_2[5]
                    
                    result = j_sub_140a74f90(rdi_2)
                    rsi_1 = &rsi_1[1]
                    r14_1 += 1
                while (r14_1 != r15_4)
            
            uint64_t rcx_11 = var_98
            
            if (rcx_11 != 0)
                result = sub_140a74f90(rcx_11)
            
            if (r12_1 != 0)
                result = sub_140a74f90(r12_1)
            
            int64_t rcx_13 = var_a8
            
            if (rcx_13 != 0)
                result = sub_140a74f90(rcx_13)
            
            i_4 = result_1
            void** i_5 = i_4
            
            if (i_4 == 0)
                break
            
            while (true)
                void** i_1 = i_5[1]
                float zmm3_1 = zmm7_2
                void** r10_1 = nullptr
                
                if (i_1 != 0)
                    int64_t r9_3 = *(arg1 + 0x28)
                    float zmm4_1 = i_5[4].d
                    int64_t* zmm5_1 = *(i_5 + 0x1c)
                    float zmm6_2 = *(i_5 + 0x24)
                    
                    do
                        result = sx.q(*i_1)
                        rbx_1 = i_1
                        i_1 = i_1[2]
                        void* rcx_14 = result * 3
                        int64_t* zmm0_2
                        zmm0_2.d = zmm5_1.d f* *(r9_3 + (rcx_14 << 2))
                        float zmm2_1 = zmm4_1 f* *(r9_3 + (rcx_14 << 2) + 4) f+ zmm0_2.d
                            + zmm6_2 f* *(r9_3 + (rcx_14 << 2) + 8)
                        float temp0_1 = _mm_max_ss(zmm2_1, zmm3_1)
                        
                        if (zmm2_1 <= zmm3_1)
                            rbx_1 = r10_1
                        
                        r10_1 = rbx_1
                        zmm3_1 = temp0_1
                    while (i_1 != 0)
                    
                    if (rbx_1 != 0)
                        void* rcx_23 = rbx_1[1]
                        
                        if (rcx_23 != 0)
                            *(rcx_23 + 0x10) = rbx_1[2]
                        
                        void* rcx_24 = rbx_1[2]
                        
                        if (rcx_24 != 0)
                            *(rcx_24 + 8) = rbx_1[1]
                        
                        if (rbx_1 == i_5[1])
                            i_5[1] = rbx_1[2]
                        
                        rbx_1[4] = i_5
                        break
                
                i_5 = i_5[6]
                
                if (i_5 == 0)
                    goto label_14173243f
        
    label_14173243f:
        r14 = arg2
    
    if (i_4 != 0)
        void** i_2
        
        do
            int32_t* rcx_15 = *i_4
            int64_t rbx_2 = sx.q(r14[1].d)
            int32_t* rdx_7 = *(rcx_15 + 0x10)
            var_c8.d = *rcx_15
            var_c8:4.d = *rdx_7
            int32_t rsi_2 = **(rdx_7 + 0x10)
            int32_t rax_5 = (rbx_2 + 1).d
            r14[1].d = rax_5
            
            if (rax_5 s> *(r14 + 0xc))
                sub_14083a7e0(r14)
            
            int64_t rax_6 = *r14
            int64_t rdx_9 = rbx_2 * 3
            *(rax_6 + (rdx_9 << 2)) = var_c8
            *(rax_6 + (rdx_9 << 2) + 8) = rsi_2
            j_sub_140a74f90(*(*i_4 + 0x10))
            j_sub_140a74f90(*(*i_4 + 8))
            j_sub_140a74f90(*i_4)
            i_2 = i_4[6]
            result = j_sub_140a74f90(i_4)
            i_4 = i_2
        while (i_2 != 0)

return result
