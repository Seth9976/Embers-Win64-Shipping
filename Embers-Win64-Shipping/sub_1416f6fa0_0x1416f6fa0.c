// 函数: sub_1416f6fa0
// 地址: 0x1416f6fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
float zmm6[0x4]
float var_58[0x4] = zmm6
void* r14 = arg1
int64_t* r12 = arg3
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
int64_t* rcx_1 = *arg5
float zmm11[0x4]
float var_a8[0x4] = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm13[0x4]
float var_c8[0x4] = zmm13
float zmm14[0x4]
float var_d8[0x4] = zmm14
float zmm15[0x4]
float var_e8[0x4] = zmm15
(*(*rcx_1 + 0x20))(rcx_1)
int32_t* rdi = *(r14 + 0x10)
void* rsi_1 = sx.q(*(r14 + 0x18)) * 0x1c + rdi
float var_208
float var_204
float var_200
float var_1f8
int32_t var_1e8
int64_t result
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4_1[0x4]
float zmm5_1[0x4]

if (rdi == rsi_1)
label_1416f71cf:
    float (* rdi_1)[0x4] = *(r14 + 0x70)
    void* rsi_3 = sx.q(*(r14 + 0x78)) * 0x34 + rdi_1
    
    if (rdi_1 != rsi_3)
        int32_t* rbx_2 = &rdi_1[1]
    label_1416f71fc:
        zmm0 = *rdi_1
        zmm5_1 = rbx_2[-2]
        void* rdx_2 = r12 + 0x1c
        zmm4_1 = rbx_2[-3]
        int32_t r8_2 = 0
        zmm8 = *(arg4 + 8)
        zmm7 = *(arg4 + 4)
        zmm5_1[0] = zmm5_1[0] - zmm8[0]
        zmm6 = *arg4
        zmm4_1[0] = zmm4_1[0] - zmm7[0]
        zmm8[0] = zmm8[0] f+ rbx_2[1]
        zmm7[0] = zmm7[0] f+ *rbx_2
        zmm0[0] = zmm0[0] - zmm6[0]
        zmm6[0] = zmm6[0] f+ rbx_2[-1]
        zmm5_1[0] = zmm5_1[0] f- arg2[2]
        zmm8[0] = zmm8[0] f- arg2[2]
        zmm7[0] = zmm7[0] f- arg2[1]
        zmm0[0] = zmm0[0] f- *arg2
        zmm6[0] = zmm6[0] f- *arg2
        zmm4_1[0] = zmm4_1[0] f- arg2[1]
        float var_1f0_2 = zmm8[0]
        result = &var_1f8
        float var_1f4_2 = zmm7[0]
        zmm1 = 0x7f7fffff
        var_208 = zmm0[0]
        var_1f8 = zmm6[0]
        zmm0 = zx.o(0)
        var_204 = zmm4_1[0]
        var_200 = zmm5_1[0]
        
        while (true)
            int32_t* rcx_4 = &r12[1] - &var_1f8 + result
            zmm2 = *(&var_208 - &r12[1] + rcx_4)
            zmm3 = zmm1
            
            if (*rdx_2 == 0)
                zmm1 = *result
                zmm1[0] = zmm1[0] f* *rcx_4
                zmm2[0] = zmm2[0] f* *rcx_4
            else
                if (zmm2[0] > 0f)
                    goto label_1416f7348
                
                if ((*result)[0] < 0f)
                    goto label_1416f7348
                
                zmm2 = zx.o(0)
                zmm1 = 0x7f7fffff
            
            float temp0_5[0x4] = _mm_max_ss(zmm1[0], zmm2[0])
            float temp0_6[0x4] = _mm_min_ss(zmm1[0], zmm2[0])
            zmm1 = _mm_min_ss(temp0_5[0], zmm3[0])
            zmm0 = _mm_max_ss(temp0_6[0], zmm0[0])
            
            if (zmm0[0] > zmm1[0])
                goto label_1416f7348
            
            r8_2 += 1
            rdx_2 += 1
            result += 4
            
            if (r8_2 s>= 3)
                if (not(zmm0[0] f> *(r12 + 0x14)) && not(zmm1[0] < 0f))
                    var_1e8 = rbx_2[2]
                    int64_t* rcx_5 = *arg5
                    
                    if ((*(*rcx_5 + 0x18))(rcx_5, &var_1e8, r12).b == 0)
                        goto label_1416f83bb
                
            label_1416f7348:
                rdi_1 = &(*rdi_1)[0xd]
                rbx_2 = &rbx_2[0xd]
                
                if (rdi_1 != rsi_3)
                    goto label_1416f71fc
                
                r14 = arg_8
                break
    
    if (*(r14 + 0x94) == 0)
        float (* rbx_3)[0x4] = arg4
        zmm0 = *(r14 + 0x28)
        zmm1 = *(r14 + 0x24)
        zmm2 = *(r14 + 0x20)
        zmm13 = zmm1
        zmm3 = (*rbx_3)[2]
        zmm4_1 = (*rbx_3)[1]
        zmm0[0] = zmm0[0] - zmm3[0]
        zmm5_1 = *rbx_3
        zmm13[0] = zmm13[0] - zmm4_1[0]
        zmm7 = arg2[2]
        zmm2[0] = zmm2[0] - zmm5_1[0]
        zmm6 = arg2[1]
        zmm7[0] = zmm7[0] - zmm3[0]
        zmm14 = zmm3
        zmm6[0] = zmm6[0] - zmm4_1[0]
        zmm3 = *arg2
        zmm15 = zmm4_1
        zmm14[0] = zmm14[0] f+ *(r14 + 0x34)
        zmm15[0] = zmm15[0] f+ *(r14 + 0x30)
        zmm7[0] = zmm7[0] - zmm0[0]
        uint128_t zmm10
        zmm10.d = zmm5_1.d f+ *(r14 + 0x2c)
        zmm3[0] = zmm3[0] - zmm5_1[0]
        zmm6[0] = zmm6[0] - zmm1[0]
        zmm3[0] = zmm3[0] - zmm2[0]
        zmm7[0] = zmm7[0] f/ *(r14 + 0x4c)
        bool cond:0_1 = zmm3[0] >= 0f
        zmm3[0] = zmm3[0] f/ *(r14 + 0x44)
        zmm6[0] = zmm6[0] f/ *(r14 + 0x48)
        int32_t rax_11 = int.d(zmm3[0])
        int32_t rcx_6 = int.d(zmm6[0])
        int32_t var_228 = rax_11
        int32_t rdx_4 = int.d(zmm7[0])
        int32_t var_224_1 = rcx_6
        int32_t var_220_1 = rdx_4
        
        if (not(cond:0_1))
            var_228 = rax_11 - 1
        
        if (not(zmm6[0] >= 0f))
            int32_t var_224_2 = rcx_6 - 1
        
        if (not(zmm7[0] >= 0f))
            int32_t var_220_2 = rdx_4 - 1
        
        float var_1a8
        sub_1417a90d0(r14 + 0x20, &var_1a8, &var_228)
        zmm5_1 = (*rbx_3)[2]
        zmm4_1 = (*rbx_3)[1]
        zmm3 = *rbx_3
        zmm5_1[0] = zmm5_1[0] f+ arg2[2]
        zmm4_1[0] = zmm4_1[0] f+ arg2[1]
        zmm3[0] = zmm3[0] f+ *arg2
        zmm5_1[0] = zmm5_1[0] f- *(r14 + 0x28)
        zmm4_1[0] = zmm4_1[0] f- *(r14 + 0x24)
        zmm3[0] = zmm3[0] f- *(r14 + 0x20)
        zmm5_1[0] = zmm5_1[0] f/ *(r14 + 0x4c)
        bool cond:3_1 = zmm3[0] >= 0f
        zmm4_1[0] = zmm4_1[0] f/ *(r14 + 0x48)
        zmm3[0] = zmm3[0] f/ *(r14 + 0x44)
        int32_t rcx_8 = int.d(zmm4_1[0])
        int32_t rax_15 = int.d(zmm3[0])
        int32_t var_224_3 = rcx_8
        int32_t rdx_6 = int.d(zmm5_1[0])
        var_228 = rax_15
        int32_t var_220_3 = rdx_6
        
        if (not(cond:3_1))
            var_228 = rax_15 - 1
        
        if (not(zmm4_1[0] >= 0f))
            int32_t var_224_4 = rcx_8 - 1
        
        if (not(zmm5_1[0] >= 0f))
            int32_t var_220_4 = rdx_6 - 1
        
        int32_t var_198
        sub_1417a90d0(r14 + 0x20, &var_198, &var_228)
        int32_t var_1a4
        int32_t var_1a0
        int32_t var_194
        int32_t var_190
        int32_t var_180
        
        if (var_1a8 != var_198 || var_1a4 != var_194 || var_1a0 != var_190)
        label_1416f787c:
            int32_t rsi_6 = *(r14 + 0x40)
            var_208.q = *(r14 + 0x38)
            uint32_t rax_44 = (var_208.q u>> 0x20).d
            int32_t var_1b8_1 = rsi_6
            int32_t temp0_13
            int32_t temp1_1
            temp0_13:temp1_1 = sx.q(rax_44 * rsi_6 i* var_208)
            int64_t rbx_5 = sx.q((temp1_1 + (temp0_13 & 7)) s>> 3)
            char* rax_50 = j_sub_140a82f30(rbx_5 + 1)
            char* rdi_3 = rax_50
            memset(rax_50, 0, rbx_5 + 1)
            int32_t rcx_19 = *(r14 + 0x40)
            var_208.q = *(r14 + 0x38)
            uint32_t rax_52 = (var_208.q u>> 0x20).d
            var_1e8 = rcx_19
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_52 * rcx_19 i* var_208)
            int64_t rbx_6 = sx.q((temp3_1 + (temp2_1 & 7)) s>> 3)
            int64_t rax_58 = j_sub_140a82f30(rbx_6 + 1)
            int64_t r13_1 = rax_58
            memset(rax_58, 0, rbx_6 + 1)
            float r15_1 = var_1a8
            int32_t r9_4 = 0
            int32_t rdx_19 = var_198
            int64_t rbx_7 = 0
            int32_t r14_3 = 0
            int64_t var_1e0 = 0
            int32_t var_214_1 = 0
            int32_t var_1d4_1 = 0
            float var_218_1 = r15_1
            int64_t var_1d0
            int32_t var_1c8
            
            if (r15_1 s<= rdx_19)
                int32_t rax_59 = var_190
                int32_t r12_2 = r15_1 i* rax_44
                int32_t r13_2 = 0
                int32_t rcx_22 = var_194
                int64_t r10_5 = 0
                uint32_t r8_13 = rax_44
                
                do
                    int32_t r14_4 = var_1a4
                    
                    if (r14_4 s<= rcx_22)
                        do
                            int32_t rbx_8 = var_1a0
                            
                            if (rbx_8 s<= rax_59)
                                var_208 = r15_1
                                int32_t var_204_1 = r14_4
                                zmm6 = zx.o(var_208.q)
                                int32_t var_1c4_1 = 0
                                
                                do
                                    int64_t rdi_4 = sx.q(r9_4)
                                    var_1d0 = zmm6.q
                                    var_1c8 = rbx_8
                                    r9_4 = (rdi_4 + 1).d
                                    
                                    if (r9_4 s> r13_2)
                                        sub_1405a4f90(&var_1e0)
                                        r10_5 = var_1e0
                                        r13_2 = var_1d4_1
                                    
                                    *(r10_5 + rdi_4 * 0x10) = var_1d0.o
                                    int32_t rax_62 = (r12_2 + r14_4) * var_1b8_1 + rbx_8
                                    rbx_8 += 1
                                    int32_t temp4_1
                                    int32_t temp5_1
                                    temp4_1:temp5_1 = sx.q(rax_62)
                                    int32_t rdx_22 = temp4_1 & 7
                                    int32_t rax_64 = temp5_1 + rdx_22
                                    int64_t rax_67 = sx.q(rax_64 s>> 3)
                                    rax_50[rax_67] |= 1 << ((rax_64.b & 7) - rdx_22.b)
                                    rax_59 = var_190
                                while (rbx_8 s<= rax_59)
                                
                                rcx_22 = var_194
                                r15_1 = var_218_1
                                var_214_1 = r9_4
                            
                            r14_4 += 1
                        while (r14_4 s<= rcx_22)
                        
                        rdx_19 = var_198
                        r8_13 = rax_44
                    
                    r15_1 += 1
                    r12_2 += r8_13
                    var_218_1 = r15_1
                while (r15_1 s<= rdx_19)
                
                r13_1 = rax_58
                r14_3 = var_1d4_1
                rbx_7 = var_1e0
                rdi_3 = rax_50
                r12 = arg3
                rsi_6 = var_1b8_1
            
            int32_t* r11_1 = *r12
            int32_t r8_16 = 0
            zmm7 = arg2[2]
            uint128_t zmm9 = *arg2
            zmm0[0] = zmm0[0] - zmm7[0]
            zmm8 = arg2[1]
            zmm2[0] = zmm2[0] f- zmm9.d
            zmm6 = zx.o(0)
            zmm13[0] = zmm13[0] - zmm8[0]
            zmm14[0] = zmm14[0] - zmm7[0]
            void* rdx_24 = r12 + 0x1c
            zmm15[0] = zmm15[0] - zmm8[0]
            float var_200_1 = zmm0[0]
            zmm10.d = zmm10.d f- zmm9.d
            var_208 = zmm2[0]
            float* rax_70 = &var_1f8
            zmm1 = 0x7f7fffff
            float var_204_2 = zmm13[0]
            float var_1f0_4 = zmm14[0]
            float var_1f4_4 = zmm15[0]
            var_1f8 = zmm10.d
            
            while (true)
                int32_t* rcx_26 = &r12[1] - &var_1f8 + rax_70
                zmm2 = *(rcx_26 + &var_208 - &r12[1])
                zmm3 = zmm1
                
                if (*rdx_24 == 0)
                    zmm1 = *rax_70
                    zmm1[0] = zmm1[0] f* *rcx_26
                    zmm2[0] = zmm2[0] f* *rcx_26
                else
                    if (zmm2[0] > 0f)
                        break
                    
                    if ((*rax_70).d f< 0f)
                        break
                    
                    zmm2 = zx.o(0)
                    zmm1 = 0x7f7fffff
                
                float temp0_14[0x4] = _mm_max_ss(zmm1[0], zmm2[0])
                float temp0_15[0x4] = _mm_min_ss(zmm1[0], zmm2[0])
                zmm1 = _mm_min_ss(temp0_14[0], zmm3[0])
                zmm6 = _mm_max_ss(temp0_15[0], zmm6[0])
                
                if (zmm6[0] > zmm1[0])
                    break
                
                r8_16 += 1
                rdx_24 += 1
                rax_70 = &rax_70[1]
                
                if (r8_16 s>= 3)
                    if (not(zmm6[0] f> *(r12 + 0x14)) && not(zmm1[0] < 0f))
                        void* r9_6 = arg_8
                        zmm6[0] = zmm6[0] f* r11_1[2]
                        zmm6[0] = zmm6[0] f* r11_1[1]
                        zmm6[0] = zmm6[0] f* *r11_1
                        zmm6[0] = zmm6[0] + zmm7[0]
                        zmm6[0] = zmm6[0] + zmm8[0]
                        zmm6[0] = zmm6[0] f+ zmm9.d
                        zmm6[0] = zmm6[0] f- *(r9_6 + 0x28)
                        zmm6[0] = zmm6[0] f- *(r9_6 + 0x24)
                        zmm6[0] = zmm6[0] f- *(r9_6 + 0x20)
                        zmm6[0] = zmm6[0] f/ *(r9_6 + 0x4c)
                        bool cond:7_1 = zmm6[0] >= 0f
                        zmm6[0] = zmm6[0] f/ *(r9_6 + 0x48)
                        uint128_t zmm0_2
                        zmm0_2.d = zmm6.d f/ *(r9_6 + 0x44)
                        int32_t rcx_27 = int.d(zmm6[0])
                        int32_t rax_71 = int.d(zmm0_2.d)
                        int32_t var_224_10 = rcx_27
                        int32_t rdx_25 = int.d(zmm6[0])
                        var_228 = rax_71
                        int32_t var_220_10 = rdx_25
                        
                        if (not(cond:7_1))
                            var_228 = rax_71 - 1
                        
                        if (not(zmm6[0] >= 0f))
                            int32_t var_224_11 = rcx_27 - 1
                        
                        if (not(zmm6[0] >= 0f))
                            int32_t var_220_11 = rdx_25 - 1
                        
                        int32_t* rax_75 = sub_1417a90d0(r9_6 + 0x20, &var_208, &var_228)
                        char* r15_3 = rax_50
                        int32_t rcx_29 = *rax_75
                        var_228 = rcx_29
                        int32_t rdx_27 = rax_75[1]
                        int32_t var_224_12 = rdx_27
                        int32_t r9_7 = rax_75[2]
                        int32_t var_220_12 = r9_7
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q((rax_44 * rcx_29 + rdx_27) * rsi_6 + r9_7)
                        int32_t rdx_29 = temp6_1 & 7
                        int32_t rax_82 = temp7_1 + rdx_29
                        int32_t r12_4
                        
                        if ((r15_3[sx.q(rax_82 s>> 3)] u>> ((rax_82.b & 7) - rdx_29.b) & 1) != 0)
                            r12_4 = var_214_1
                        else
                            int64_t r12_3 = sx.q(var_214_1)
                            r12_4 = r12_3.d + 1
                            float var_1c4_2 = zmm6[0]
                            var_1d0 = var_228.q
                            var_1c8 = r9_7
                            
                            if (r12_4 s> r14_3)
                                sub_1405a4f90(&var_1e0)
                                r14_3 = var_1d4_1
                            
                            rbx_7 = var_1e0
                            *((r12_3 << 4) + rbx_7) = var_1d0.o
                        
                        void* rsi_9 = arg_8
                        int32_t rcx_32 = 0
                        zmm1 = *(rsi_9 + 0x44)
                        zmm14 = *(rsi_9 + 0x4c)
                        zmm15 = *(rsi_9 + 0x48)
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm14[0] = zmm14[0] * 0.5f
                        zmm15[0] = zmm15[0] * 0.5f
                        float var_214_2 = zmm1[0]
                        
                        if (r12_4 s<= 0)
                            rdi_3 = r15_3
                        else
                            uint64_t r8_20 = zx.q(data_14401b1a0)
                            uint128_t* rdx_32 = nullptr
                            TEB* gsbase
                            void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                            int64_t* rax_89 = arg3
                            
                            while (true)
                                zmm0_2 = *(rdx_32 + rbx_7)
                                rcx_32 += 1
                                rdx_32 = &rdx_32[1]
                                var_1d0.o = zmm0_2
                                
                                if (not(_mm_shuffle_ps(zmm0_2, zmm0_2, 0xff).d f> *(rax_89 + 0x14)))
                                    if (data_143ef7998 s>
                                            *(0x14 + *(ThreadLocalStoragePointer + (r8_20 << 3))))
                                        _Init_thread_header(&data_143ef7998)
                                        
                                        if (data_143ef7998 == 0xffffffff)
                                            __builtin_memcpy(&data_143ef7860, 
                                                "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x"
                                            "00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x01\x00\x00"
                                            "00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00"
                                            "00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00"
                                            "00\xff\xff\xff\xff\x01\x00\x00\x00\x00\x00\x00\x00\xff"
                                            "ff\xff\xff\xff\xff\xff\xff\x01\x00\x00\x00\xff\xff\xff"
                                            "ff\x00\x00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\x01"
                                            "00\x00\x00\x01\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff"
                                            "ff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff"
                                            "ff\xff\xff\x"
                                            "
                                                0x138)
                                            atexit(sub_142ce9b30)
                                            _Init_thread_footer(&data_143ef7998)
                                        
                                        zmm1 = var_214_2
                                    
                                    int32_t r9_8 = var_1d0.d
                                    int64_t r13_3 = var_1e0
                                    int128_t* i = &data_143ef7860
                                    int32_t r8_21 = var_1c8
                                    int32_t var_218_2 = r9_8
                                    float zmm4_2[0x4]
                                    float zmm5_2[0x4]
                                    
                                    do
                                        float* rax_92 = &var_1f8
                                        float r10_9 = *i + r9_8
                                        int32_t r11_3 = var_1d0:4.d + *(i + 4)
                                        int32_t rbx_11 = *(i + 8) + r8_21
                                        var_1f8 = r10_9
                                        int32_t var_1f4_5 = r11_3
                                        int32_t rcx_33 = 0
                                        int32_t var_1f0_5 = rbx_11
                                        
                                        while (true)
                                            float rdx_33 = *rax_92
                                            
                                            if (rdx_33 s< 0)
                                                break
                                            
                                            if (rdx_33 s>= *(rsi_9 - &var_1f8 + rax_92 + 0x38))
                                                break
                                            
                                            rcx_33 += 1
                                            rax_92 = &rax_92[1]
                                            
                                            if (rcx_33 s>= 3)
                                                int32_t temp8_1
                                                int32_t temp9_1
                                                temp8_1:temp9_1 = sx.q(
                                                    (r10_9 i* rax_44 + r11_3) * var_1b8_1 + rbx_11)
                                                int32_t rdx_35 = temp8_1 & 7
                                                int32_t rax_99 = temp9_1 + rdx_35
                                                int32_t rax_101 = (rax_99 & 7) - rdx_35
                                                int64_t r8_22 = sx.q(rax_99 s>> 3)
                                                uint8_t r9_9 = r15_3[r8_22]
                                                
                                                if ((r9_9 u>> rax_101.b & 1) == 0)
                                                    void* rdx_37 = r12 + 0x1c
                                                    r15_3[r8_22] = r9_9 | (1 << (rax_101 u% 0x20)).b
                                                    int32_t r8_23 = 0
                                                    void* rcx_39 = arg_8
                                                    zmm5_2 = *arg4
                                                    zmm6 = *(arg4 + 4)
                                                    zmm7 = *(arg4 + 8)
                                                    float temp0_19[0x4] =
                                                        _mm_cvtepi32_ps(zx.o(r10_9))
                                                    zmm9 = _mm_cvtepi32_ps(zx.o(r11_3))
                                                    temp0_19[0] = temp0_19[0] + 0.5f
                                                    zmm10 = _mm_cvtepi32_ps(zx.o(rbx_11))
                                                    temp0_19[0] = temp0_19[0] f* *(rcx_39 + 0x44)
                                                    zmm9.d = zmm9.d f+ 0.5f
                                                    zmm10.d = zmm10.d f+ 0.5f
                                                    temp0_19[0] = temp0_19[0] f+ *(rcx_39 + 0x20)
                                                    zmm9.d = zmm9.d f* *(rcx_39 + 0x48)
                                                    zmm10.d = zmm10.d f* *(rcx_39 + 0x4c)
                                                    zmm9.d = zmm9.d f+ *(rcx_39 + 0x24)
                                                    temp0_19[0] = temp0_19[0] + zmm5_2[0]
                                                    zmm10.d = zmm10.d f+ *(rcx_39 + 0x28)
                                                    zmm0_2.d = temp0_19.d f- zmm5_2[0]
                                                    temp0_19[0] = temp0_19[0] + var_214_2
                                                    zmm0_2.d = zmm0_2.d f- zmm1[0]
                                                    zmm1 = zmm9
                                                    zmm1[0] = zmm1[0] - zmm6[0]
                                                    zmm9.d = zmm9.d f+ zmm6[0]
                                                    temp0_19[0] = temp0_19[0] f- *arg2
                                                    zmm0_2.d = zmm0_2.d f- *arg2
                                                    zmm1[0] = zmm1[0] - zmm15[0]
                                                    zmm9.d = zmm9.d f+ zmm15[0]
                                                    float var_140 = temp0_19[0]
                                                    int32_t var_150 = zmm0_2.d
                                                    zmm1[0] = zmm1[0] f- arg2[1]
                                                    zmm9.d = zmm9.d f- arg2[1]
                                                    zmm0_2.d = zmm10.d f- zmm7[0]
                                                    zmm10.d = zmm10.d f+ zmm7[0]
                                                    float var_14c_1 = zmm1[0]
                                                    zmm1 = zx.o(0)
                                                    int32_t var_13c_1 = zmm9.d
                                                    zmm0_2.d = zmm0_2.d f- zmm14[0]
                                                    zmm10.d = zmm10.d f+ zmm14[0]
                                                    zmm0_2.d = zmm0_2.d f- arg2[2]
                                                    zmm10.d = zmm10.d f- arg2[2]
                                                    int64_t rax_104 = 0
                                                    int32_t var_148_1 = zmm0_2.d
                                                    zmm0_2 = 0x7f7fffff
                                                    int32_t var_138_1 = zmm10.d
                                                    
                                                    while (true)
                                                        zmm3 = zmm0_2
                                                        float (* rcx_40)[0x4] = &var_150 + rax_104
                                                        zmm4_2 = zmm1
                                                        zmm2 = *rcx_40
                                                        
                                                        if (*rdx_37 == 0)
                                                            zmm0_2 = *(rcx_40 + &r12[1] - &var_150)
                                                            zmm2[0] = zmm2[0] f* zmm0_2.d
                                                            zmm0_2.d =
                                                                zmm0_2.d f* *(&var_140 + rax_104)
                                                        else
                                                            if (zmm2[0] > 0f)
                                                                break
                                                            
                                                            if (0f f> *(&var_140 + rax_104))
                                                                break
                                                            
                                                            zmm2 = zx.o(0)
                                                            zmm0_2 = 0x7f7fffff
                                                        
                                                        zmm1 = zmm0_2
                                                        zmm0_2 = _mm_max_ss(zmm0_2.d, zmm2[0])
                                                        float temp0_23[0x4] =
                                                            _mm_min_ss(zmm1[0], zmm2[0])
                                                        zmm0_2 = _mm_min_ss(zmm0_2.d, zmm3[0])
                                                        zmm1 = _mm_max_ss(temp0_23[0], zmm4_2[0])
                                                        
                                                        if (zmm1[0] f> zmm0_2.d)
                                                            break
                                                        
                                                        r8_23 += 1
                                                        rdx_37 += 1
                                                        rax_104 += 4
                                                        
                                                        if (r8_23 s>= 3)
                                                            if (not(zmm1[0] f> *(arg3 + 0x14))
                                                                    && not(zmm0_2.d f< 0f))
                                                                int32_t var_f8_1 = rbx_11
                                                                int64_t rbx_12 = sx.q(r12_4)
                                                                float var_f4_1 = zmm1[0]
                                                                uint64_t var_100_1 = var_1f8.q
                                                                r12_4 = (rbx_12 + 1).d
                                                                
                                                                if (r12_4 s> r14_3)
                                                                    sub_1405a4f90(&var_1e0)
                                                                    r14_3 = var_1d4_1
                                                                    r13_3 = var_1e0
                                                                
                                                                *(r13_3 + rbx_12 * 0x10) = var_100_1.o
                                                            
                                                            break
                                                
                                                r9_8 = var_218_2
                                                r8_21 = var_1c8
                                                break
                                        
                                        zmm1 = var_214_2
                                        i += 0xc
                                    while (i != &data_143ef7998)
                                    
                                    rsi_9 = arg_8
                                    r13_1 = rax_58
                                    void** rax_115 = (sx.q(
                                        (*(rsi_9 + 0x54) * r9_8 + var_1d0:4.d) * *(rsi_9 + 0x58)
                                        + r8_21) << 4) + *(rsi_9 + 0x60)
                                    void* r8_24 = *rax_115
                                    void* var_158_1 = r8_24
                                    void* rax_118 = sx.q(rax_115[1].d) * 0x34 + r8_24
                                    
                                    if (r8_24 != rax_118)
                                        void* r15_4 = r8_24 + 0x14
                                        void* var_118_1 = r15_4
                                        
                                        do
                                            int32_t rcx_42 = *(r15_4 + 0x14)
                                            r14_3.b = 0
                                            int32_t rdx_39 = *(r15_4 + 8)
                                            bool cond:8_1 = rdx_39 s> rcx_42
                                            
                                            if (rdx_39 != rcx_42)
                                                goto label_1416f80ea
                                            
                                            if (*(r15_4 + 0xc) == *(r15_4 + 0x18)
                                                    && *(r15_4 + 0x10) == *(r15_4 + 0x1c))
                                                goto label_1416f81ae
                                            
                                            cond:8_1 = rdx_39 s> rcx_42
                                        label_1416f80ea:
                                            
                                            if (cond:8_1)
                                                goto label_1416f81ae
                                            
                                            int32_t rsi_11 = *(r15_4 + 0x18)
                                            int32_t rbx_14 = rdx_39 * rax_52
                                            uint64_t i_2 = zx.q(rcx_42 - rdx_39 + 1)
                                            uint32_t rcx_44 = rax_52
                                            uint64_t i_3 = i_2
                                            uint64_t i_1
                                            
                                            do
                                                int32_t r11_4 = *(r15_4 + 0xc)
                                                
                                                if (r11_4 s<= rsi_11)
                                                    int32_t rdi_5 = *(r15_4 + 0x10)
                                                    int32_t r10_10 = *(r15_4 + 0x1c)
                                                    
                                                    do
                                                        int32_t r9_12 = rdi_5
                                                        
                                                        if (rdi_5 s<= r10_10)
                                                            int32_t r8_27 =
                                                                (r11_4 + rbx_14) * var_1e8 + rdi_5
                                                            
                                                            do
                                                                int32_t rax_121 = r8_27
                                                                int32_t rcx_46 = r8_27 & 7
                                                                
                                                                if (r8_27 s< 0)
                                                                    rax_121 = r8_27 + 7
                                                                    rcx_46 -= 8
                                                                
                                                                if ((*(sx.q(rax_121 s>> 3) + r13_1)
                                                                        u>> rcx_46.b & 1) != 0)
                                                                    r14_3.b = 1
                                                                    break
                                                                
                                                                r9_12 += 1
                                                                r8_27 += 1
                                                            while (r9_12 s<= r10_10)
                                                        
                                                        r11_4 += 1
                                                    while (r11_4 s<= rsi_11)
                                                    
                                                    r15_4 = var_118_1
                                                    i_2 = i_3
                                                    rcx_44 = rax_52
                                                
                                                rbx_14 += rcx_44
                                                i_1 = i_2
                                                i_2 -= 1
                                                i_3 = i_2
                                            while (i_1 != 1)
                                            
                                            if (r14_3.b == 0)
                                                r8_24 = var_158_1
                                            label_1416f81ae:
                                                zmm3 = zx.o(0)
                                                int32_t r8_28 = 0
                                                zmm1 = *(r15_4 - 0x10)
                                                zmm5_2 = *arg4
                                                zmm6 = *(arg4 + 4)
                                                zmm0_2.d = (*r8_24).d f- zmm5_2[0]
                                                zmm7 = *(arg4 + 8)
                                                zmm1[0] = zmm1[0] - zmm6[0]
                                                zmm5_2[0] = zmm5_2[0] f+ *(r15_4 - 8)
                                                zmm6[0] = zmm6[0] f+ *(r15_4 - 4)
                                                void* rdx_41 = r12 + 0x1c
                                                zmm0_2.d = zmm0_2.d f- *arg2
                                                zmm1[0] = zmm1[0] f- arg2[1]
                                                zmm5_2[0] = zmm5_2[0] f- *arg2
                                                zmm6[0] = zmm6[0] f- arg2[1]
                                                var_180 = zmm0_2.d
                                                zmm0_2.d = (*(r15_4 - 0xc)).d f- zmm7[0]
                                                float var_17c_1 = zmm1[0]
                                                zmm7[0] = zmm7[0] f+ *r15_4
                                                var_208 = zmm5_2[0]
                                                float var_204_3 = zmm6[0]
                                                zmm0_2.d = zmm0_2.d f- arg2[2]
                                                zmm7[0] = zmm7[0] f- arg2[2]
                                                int64_t rax_126 = 0
                                                int32_t var_178_1 = zmm0_2.d
                                                zmm0_2 = 0x7f7fffff
                                                float var_200_2 = zmm7[0]
                                                
                                                while (true)
                                                    zmm2 = zmm0_2
                                                    uint128_t* rcx_47 = &var_180 + rax_126
                                                    zmm4_2 = zmm3
                                                    zmm1 = *rcx_47
                                                    
                                                    if (*rdx_41 == 0)
                                                        zmm0_2 = *(rcx_47 + &r12[1] - &var_180)
                                                        zmm1[0] = zmm1[0] f* zmm0_2.d
                                                        zmm0_2.d = zmm0_2.d f* *(&var_208 + rax_126)
                                                    else
                                                        if (zmm1[0] > 0f)
                                                            goto label_1416f82f7
                                                        
                                                        if (0f f> *(&var_208 + rax_126))
                                                            goto label_1416f82f7
                                                        
                                                        zmm1 = zx.o(0)
                                                        zmm0_2 = 0x7f7fffff
                                                    
                                                    zmm3 = zmm0_2
                                                    zmm0_2 = _mm_max_ss(zmm0_2.d, zmm1[0])
                                                    float temp0_27[0x4] =
                                                        _mm_min_ss(zmm3[0], zmm1[0])
                                                    zmm0_2 = _mm_min_ss(zmm0_2.d, zmm2[0])
                                                    zmm3 = _mm_max_ss(temp0_27[0], zmm4_2[0])
                                                    
                                                    if (zmm3[0] f> zmm0_2.d)
                                                        goto label_1416f82f7
                                                    
                                                    r8_28 += 1
                                                    rdx_41 += 1
                                                    rax_126 += 4
                                                    
                                                    if (r8_28 s>= 3)
                                                        if (zmm3[0] f> *(arg3 + 0x14))
                                                            break
                                                        
                                                        if (zmm0_2.d f< 0f)
                                                            break
                                                        
                                                        i_3.d = *(r15_4 + 4)
                                                        int64_t* rcx_48 = *arg5
                                                        
                                                        if ((*(*rcx_48 + 0x18))(rcx_48, &i_3, arg3)
                                                                != 0)
                                                            break
                                                        
                                                        int64_t rax_133 = var_1e0
                                                        
                                                        if (rax_133 != 0)
                                                            sub_140a74f90(rax_133)
                                                        
                                                        j_sub_140a74f90(r13_1)
                                                        j_sub_140a74f90(rax_50)
                                                        goto label_1416f83bb
                                            
                                        label_1416f82f7:
                                            r15_4 += 0x34
                                            r8_24 = var_158_1 + 0x34
                                            var_118_1 = r15_4
                                            var_158_1 = r8_24
                                        while (r8_24 != rax_118)
                                        
                                        r15_3 = rax_50
                                        r9_8 = var_218_2
                                        rsi_9 = arg_8
                                    
                                    int32_t r9_18 =
                                        (r9_8 * rax_52 + var_1d0:4.d) * var_1e8 + var_1c8
                                    int32_t rdx_45 = r9_18 & 7
                                    
                                    if (r9_18 s< 0)
                                        r9_18 += 7
                                        rdx_45 -= 8
                                    
                                    zmm1 = var_214_2
                                    rbx_7 = var_1e0
                                    r8_20 = zx.q(data_14401b1a0)
                                    int64_t rcx_49 = sx.q(r9_18 s>> 3)
                                    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                                    *(rcx_49 + r13_1) |= (1 << (rdx_45 u% 0x20)).b
                                    rax_89 = arg3
                                
                                if (rcx_32 s>= r12_4)
                                    break
                                
                                r14_3 = var_1d4_1
                            
                            rdi_3 = rax_50
                    
                    break
            
            if (rbx_7 != 0)
                sub_140a74f90(rbx_7)
            
            j_sub_140a74f90(r13_1)
            j_sub_140a74f90(rdi_3)
        else
            int32_t* rax_22 = *r12
            zmm6 = *(r12 + 0x14)
            zmm6[0] = zmm6[0] f* rax_22[2]
            zmm6[0] = zmm6[0] f* rax_22[1]
            zmm6[0] = zmm6[0] f* *rax_22
            zmm6[0] = zmm6[0] f+ arg2[2]
            zmm6[0] = zmm6[0] f+ arg2[1]
            zmm6[0] = zmm6[0] f+ *arg2
            zmm6[0] = zmm6[0] - (*rbx_3)[2]
            zmm6[0] = zmm6[0] - (*rbx_3)[1]
            zmm6[0] = zmm6[0] - *rbx_3
            zmm6[0] = zmm6[0] f- *(r14 + 0x28)
            zmm6[0] = zmm6[0] f- *(r14 + 0x24)
            zmm6[0] = zmm6[0] f- *(r14 + 0x20)
            zmm6[0] = zmm6[0] f/ *(r14 + 0x4c)
            bool cond:4_1 = zmm6[0] >= 0f
            zmm6[0] = zmm6[0] f/ *(r14 + 0x48)
            zmm6[0] = zmm6[0] f/ *(r14 + 0x44)
            int32_t rcx_10 = int.d(zmm6[0])
            int32_t rax_23 = int.d(zmm6[0])
            int32_t var_224_5 = rcx_10
            int32_t rdx_8 = int.d(zmm6[0])
            var_228 = rax_23
            int32_t var_220_5 = rdx_8
            
            if (not(cond:4_1))
                var_228 = rax_23 - 1
            
            if (not(zmm6[0] >= 0f))
                int32_t var_224_6 = rcx_10 - 1
            
            if (not(zmm6[0] >= 0f))
                int32_t var_220_6 = rdx_8 - 1
            
            sub_1417a90d0(r14 + 0x20, &var_208, &var_228)
            zmm5_1 = (*rbx_3)[2]
            zmm4_1 = (*rbx_3)[1]
            zmm5_1[0] = zmm5_1[0] + zmm6[0]
            zmm3 = *rbx_3
            zmm4_1[0] = zmm4_1[0] + zmm6[0]
            zmm3[0] = zmm3[0] + zmm6[0]
            zmm5_1[0] = zmm5_1[0] f- *(r14 + 0x28)
            zmm4_1[0] = zmm4_1[0] f- *(r14 + 0x24)
            zmm3[0] = zmm3[0] f- *(r14 + 0x20)
            zmm5_1[0] = zmm5_1[0] f/ *(r14 + 0x4c)
            bool cond:6_1 = zmm3[0] >= 0f
            zmm4_1[0] = zmm4_1[0] f/ *(r14 + 0x48)
            zmm3[0] = zmm3[0] f/ *(r14 + 0x44)
            int32_t rcx_12 = int.d(zmm4_1[0])
            int32_t rax_27 = int.d(zmm3[0])
            int32_t var_224_7 = rcx_12
            int32_t rdx_10 = int.d(zmm5_1[0])
            var_228 = rax_27
            int32_t var_220_7 = rdx_10
            
            if (not(cond:6_1))
                var_228 = rax_27 - 1
            
            if (not(zmm4_1[0] >= 0f))
                int32_t var_224_8 = rcx_12 - 1
            
            if (not(zmm5_1[0] >= 0f))
                int32_t var_220_8 = rdx_10 - 1
            
            sub_1417a90d0(r14 + 0x20, &var_180, &var_228)
            float r8_8 = var_1a8
            int32_t var_17c
            int32_t var_178
            
            if (r8_8 != var_208 || var_1a4 != var_204 || var_1a0 != var_200 || r8_8 != var_180
                    || var_1a4 != var_17c || var_1a0 != var_178)
                goto label_1416f787c
            
            int64_t* rax_38 = (sx.q((*(r14 + 0x54) i* r8_8 + var_1a4) * *(r14 + 0x58) + var_1a0)
                << 4) + *(r14 + 0x60)
            float (* rdi_2)[0x4] = *rax_38
            void* rsi_5 = sx.q(rax_38[1].d) * 0x34 + rdi_2
            
            if (rdi_2 != rsi_5)
                void* rbx_4 = &(*rdi_2)[5]
                
                while (true)
                    zmm0 = *rdi_2
                    void* rcx_15 = r12 + 0x1c
                    zmm1 = *(rbx_4 - 0x10)
                    int32_t rdx_13 = 0
                    zmm5_1 = *arg4
                    zmm6 = *(arg4 + 4)
                    zmm0[0] = zmm0[0] - zmm5_1[0]
                    zmm7 = *(arg4 + 8)
                    zmm1[0] = zmm1[0] - zmm6[0]
                    zmm5_1[0] = zmm5_1[0] f+ *(rbx_4 - 8)
                    zmm6[0] = zmm6[0] f+ *(rbx_4 - 4)
                    zmm0[0] = zmm0[0] f- *arg2
                    zmm1[0] = zmm1[0] f- arg2[1]
                    zmm5_1[0] = zmm5_1[0] f- *arg2
                    zmm6[0] = zmm6[0] f- arg2[1]
                    var_1f8 = zmm0[0]
                    result = 0
                    zmm0 = *(rbx_4 - 0xc)
                    zmm0[0] = zmm0[0] - zmm7[0]
                    float var_1f4_3 = zmm1[0]
                    zmm7[0] = zmm7[0] f+ *rbx_4
                    var_228 = zmm5_1[0]
                    zmm1 = zx.o(0)
                    float var_224_9 = zmm6[0]
                    zmm0[0] = zmm0[0] f- arg2[2]
                    zmm7[0] = zmm7[0] f- arg2[2]
                    float var_1f0_3 = zmm0[0]
                    zmm0 = 0x7f7fffff
                    float var_220_9 = zmm7[0]
                    
                    while (true)
                        zmm4_1 = zmm0
                        void* r8_9 = &var_1f8 + result
                        zmm3 = *r8_9
                        
                        if (*rcx_15 == 0)
                            zmm0 = *(&r12[1] - &var_1f8 + r8_9)
                            zmm2 = zmm0
                            zmm0[0] = zmm0[0] f* *(&var_228 + result)
                            zmm2[0] = zmm2[0] * zmm3[0]
                        else
                            if (zmm3[0] > 0f)
                                goto label_1416f7866
                            
                            if (0f f> *(&var_228 + result))
                                goto label_1416f7866
                            
                            zmm2 = zx.o(0)
                            zmm0 = 0x7f7fffff
                        
                        float temp0_9[0x4] = _mm_max_ss(zmm0[0], zmm2[0])
                        float temp0_10[0x4] = _mm_min_ss(zmm0[0], zmm2[0])
                        zmm0 = _mm_min_ss(temp0_9[0], zmm4_1[0])
                        zmm1 = _mm_max_ss(temp0_10[0], zmm1[0])
                        
                        if (zmm1[0] > zmm0[0])
                            goto label_1416f7866
                        
                        rdx_13 += 1
                        rcx_15 += 1
                        result += 4
                        
                        if (rdx_13 s>= 3)
                            if (not(zmm1[0] f> *(r12 + 0x14)) && not(zmm0[0] < 0f))
                                arg_8.d = *(rbx_4 + 4)
                                int64_t* rcx_16 = *arg5
                                
                                if ((*(*rcx_16 + 0x18))(rcx_16, &arg_8, r12).b == 0)
                                    goto label_1416f83bb
                            
                        label_1416f7866:
                            rdi_2 = &(*rdi_2)[0xd]
                            rbx_4 += 0x34
                            
                            if (rdi_2 != rsi_5)
                                break
                            
                            goto label_1416f83e5
    
label_1416f83e5:
    result.b = 1
    return result

void* rbx_1 = &rdi[5]

while (true)
    zmm0 = *(rbx_1 - 0x10)
    zmm5_1 = *(rbx_1 - 8)
    void* rdx = r12 + 0x1c
    zmm4_1 = *(rbx_1 - 0xc)
    int32_t r8 = 0
    zmm8 = *(arg4 + 8)
    zmm7 = *(arg4 + 4)
    zmm5_1[0] = zmm5_1[0] - zmm8[0]
    zmm6 = *arg4
    zmm4_1[0] = zmm4_1[0] - zmm7[0]
    zmm8[0] = zmm8[0] f+ *(rbx_1 + 4)
    zmm7[0] = zmm7[0] f+ *rbx_1
    zmm0[0] = zmm0[0] - zmm6[0]
    zmm6[0] = zmm6[0] f+ *(rbx_1 - 4)
    zmm5_1[0] = zmm5_1[0] f- arg2[2]
    zmm8[0] = zmm8[0] f- arg2[2]
    zmm7[0] = zmm7[0] f- arg2[1]
    zmm0[0] = zmm0[0] f- *arg2
    zmm6[0] = zmm6[0] f- *arg2
    zmm4_1[0] = zmm4_1[0] f- arg2[1]
    float var_1f0_1 = zmm8[0]
    int32_t* rax_3 = &var_1f8
    float var_1f4_1 = zmm7[0]
    zmm1 = 0x7f7fffff
    var_208 = zmm0[0]
    var_1f8 = zmm6[0]
    zmm0 = zx.o(0)
    var_204 = zmm4_1[0]
    var_200 = zmm5_1[0]
    
    while (true)
        int128_t* rcx_2 = &r12[1] - &var_1f8 + rax_3
        zmm2 = *(rcx_2 + &var_208 - &r12[1])
        zmm3 = zmm1
        
        if (*rdx == 0)
            zmm1 = *rax_3
            zmm1[0] = zmm1[0] f* *rcx_2
            zmm2[0] = zmm2[0] f* *rcx_2
        else
            if (zmm2[0] > 0f)
                goto label_1416f71b7
            
            if ((*rax_3)[0] < 0f)
                goto label_1416f71b7
            
            zmm2 = zx.o(0)
            zmm1 = 0x7f7fffff
        
        float temp0_1[0x4] = _mm_max_ss(zmm1[0], zmm2[0])
        float temp0_2[0x4] = _mm_min_ss(zmm1[0], zmm2[0])
        zmm1 = _mm_min_ss(temp0_1[0], zmm3[0])
        zmm0 = _mm_max_ss(temp0_2[0], zmm0[0])
        
        if (zmm0[0] > zmm1[0])
            goto label_1416f71b7
        
        r8 += 1
        rdx += 1
        rax_3 = &rax_3[1]
        
        if (r8 s>= 3)
            if (not(zmm0[0] f> *(r12 + 0x14)) && not(zmm1[0] < 0f))
                var_1e8 = *rdi
                int64_t* rcx_3 = *arg5
                
                if ((*(*rcx_3 + 0x18))(rcx_3, &var_1e8, r12).b == 0)
                label_1416f83bb:
                    result.b = 0
                    return result
            
        label_1416f71b7:
            rdi = &rdi[7]
            rbx_1 += 0x1c
            
            if (rdi != rsi_1)
                break
            
            r14 = arg_8
            goto label_1416f71cf
