// 函数: sub_14260c5b0
// 地址: 0x14260c5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_68 = zmm7
int128_t zmm12
int128_t var_b8 = zmm12
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r13 = nullptr
int32_t* rbx = nullptr
void* r9 = *arg1
int64_t* r15 = arg1
float zmm6[0x4] = zx.o(0)
int32_t i = 0
int64_t* var_160 = arg1
int32_t result

if (*(r9 + 0x30) s<= 0)
    result = -0x80000000
else
    int64_t r14_1 = 0
    
    do
        void* rdi_1 = *(r9 + 0x90)
        int32_t* rdi_2 = rdi_1 + r14_1
        
        if (rdi_1 != neg.q(r14_1) && *(rdi_2 + 8) != 0)
            zmm6[0] = zmm6[0] + 1f
            arg3()
            arg5[0] = arg5[0] * zmm6[0]
            
            if (arg5[0] <= 1f)
                rbx = rdi_2
        
        r9 = *r15
        i += 1
        r14_1 += 0xb0
    while (i s< *(r9 + 0x30))
    
    if (rbx == 0)
        result = -0x80000000
    else
        char r8 = (*(r9 + 0xa0)).b
        int64_t rax_3
        int64_t rdx
        rdx:rax_3 = muls.dp.q(0x2e8ba2e8ba2e8ba3, rbx - *(r9 + 0x90))
        zmm12 = zx.o(0)
        int64_t var_178 = 0
        int64_t rdx_1 = rdx s>> 5
        int64_t r14_2 = 0
        int32_t i_1 = 0
        void* rcx_5 = *(rbx + 8)
        int64_t r10_6 =
            zx.q((rdx_1 u>> 0x3f).d + rdx_1.d) << r8 | zx.q(*rbx) << ((*(r9 + 0x9c)).b + r8)
        int64_t var_170_1 = r10_6
        
        if (*(rcx_5 + 0x18) s<= 0)
            result = -0x80000000
        else
            void* r12_1 = nullptr
            int128_t zmm8
            int128_t var_78_1 = zmm8
            int128_t zmm9
            int128_t var_88_1 = zmm9
            int128_t zmm10
            int128_t var_98_1 = zmm10
            int128_t zmm11
            int128_t var_a8_1 = zmm11
            float zmm1
            
            do
                int64_t rax_4 = *(rbx + 0x10)
                char rdx_4 = *(r12_1 + rax_4 + 0x1f)
                void* rdi_3 = r12_1 + rax_4
                
                if (rdx_4 u< 0x40)
                    r14_2 = sx.q(i_1) | r10_6
                    
                    if (arg2[0x43].b != 0)
                        if ((*(*arg2 + 8))(arg2, r14_2, rbx, rdi_3) == 0)
                            r10_6 = var_170_1
                            r14_2 = var_178
                        else
                            rcx_5 = *(rbx + 8)
                        label_14260c7a5:
                            int32_t rdx_6 = *(rcx_5 + 0x3c)
                            int64_t* r8_2 = r15[1]
                            int32_t rax_11 = i_1 - rdx_6
                            
                            if (r8_2 == 0 || i_1 s< rdx_6 || rax_11 s>= *(rcx_5 + 0x34))
                            label_14260c7e1:
                                uint64_t r10_7 = zx.q(*(rdi_3 + 0x1e))
                                void* r11_1 = 2
                                zmm9 = zx.o(0)
                                
                                if (r10_7 u> 2)
                                    int128_t zmm2
                                    float zmm3[0x4]
                                    float zmm4
                                    
                                    if (r10_7 u>= 6)
                                        int64_t r9_2 = *(rbx + 0x18)
                                        void* r15_1 = rdi_3 + 8
                                        int64_t j_2 = ((r10_7 - 6) u>> 2) + 1
                                        uint64_t rcx_9 = zx.q(*(rdi_3 + 4)) * 3
                                        zmm10 = *(r9_2 + (rcx_9 << 2) + 8)
                                        zmm11 = *(r9_2 + (rcx_9 << 2))
                                        r11_1 = (j_2 << 2) + 2
                                        int64_t j
                                        
                                        do
                                            uint64_t rdx_8 = zx.q(*(r15_1 - 2)) * 3
                                            uint64_t rax_18 = zx.q(*r15_1)
                                            arg5 = *(r9_2 + (rdx_8 << 2))
                                            zmm2.d = (*(r9_2 + (rdx_8 << 2) + 8)).d f- zmm10.d
                                            arg5[0] = arg5[0] f- zmm11.d
                                            uint64_t rcx_10 = rax_18 * 3
                                            zmm7.d = (*(r9_2 + (rcx_10 << 2))).d f- zmm11.d
                                            zmm4 = *(r9_2 + (rcx_10 << 2) + 8) f- zmm10.d
                                            uint64_t rcx_11 = zx.q(*(r15_1 + 2)) * 3
                                            uint64_t rax_20 = zx.q(*(r15_1 + 4))
                                            zmm6 = *(r9_2 + (rcx_11 << 2))
                                            zmm3 = *(r9_2 + (rcx_11 << 2) + 8)
                                            zmm6[0] = zmm6[0] f- zmm11.d
                                            zmm2.d = zmm2.d f* zmm7.d
                                            zmm3[0] = zmm3[0] f- zmm10.d
                                            uint64_t rcx_12 = rax_20 * 3
                                            uint64_t rax_21 = zx.q(*(r15_1 + 6))
                                            arg5[0] = arg5[0] * zmm4
                                            r15_1 += 8
                                            float zmm5[0x4] = *(r9_2 + (rcx_12 << 2) + 8)
                                            zmm8.d = (*(r9_2 + (rcx_12 << 2))).d f- zmm11.d
                                            zmm1 = zmm6[0] * zmm4
                                            zmm2.d = zmm2.d f- arg5[0]
                                            uint64_t rcx_13 = rax_21 * 3
                                            zmm5[0] = zmm5[0] f- zmm10.d
                                            zmm3[0] = zmm3[0] f* zmm7.d
                                            zmm2.d = zmm2.d f+ zmm9.d
                                            zmm1 = zmm1 - zmm3[0]
                                            zmm5[0] = zmm5[0] * zmm6[0]
                                            zmm9 = zmm2
                                            zmm2.d = zmm8.d f* zmm3[0]
                                            zmm9.d = zmm9.d f+ zmm1
                                            zmm1 = *(r9_2 + (rcx_13 << 2)) f- zmm11.d
                                            zmm2.d = zmm2.d f- zmm5[0]
                                            arg5 = *(r9_2 + (rcx_13 << 2) + 8)
                                            arg5[0] = arg5[0] f- zmm10.d
                                            zmm1 = zmm1 * zmm5[0]
                                            arg5[0] = arg5[0] f* zmm8.d
                                            zmm9.d = zmm9.d f+ zmm2.d
                                            zmm9.d = zmm9.d f+ zmm1 - arg5[0]
                                            j = j_2
                                            j_2 -= 1
                                        while (j != 1)
                                        r15 = var_160
                                    
                                    if (r11_1 s< r10_7)
                                        int64_t r8_5 = *(rbx + 0x18)
                                        void* r9_4 = rdi_3 + ((r11_1 + 2) << 1)
                                        void* j_3 = r10_7 - r11_1
                                        uint64_t rcx_14 = zx.q(*(rdi_3 + 4)) * 3
                                        zmm3 = *(r8_5 + (rcx_14 << 2) + 8)
                                        zmm4 = *(r8_5 + (rcx_14 << 2))
                                        void* j_1
                                        
                                        do
                                            uint64_t rdx_9 = zx.q(*(r9_4 - 2)) * 3
                                            uint64_t rax_24 = zx.q(*r9_4)
                                            r9_4 += 2
                                            zmm2.d = (*(r8_5 + (rdx_9 << 2) + 8)).d f- zmm3[0]
                                            uint64_t rcx_15 = rax_24 * 3
                                            arg5 = *(r8_5 + (rcx_15 << 2))
                                            zmm1 = *(r8_5 + (rcx_15 << 2) + 8)
                                            arg5[0] = arg5[0] - zmm4
                                            zmm1 = zmm1 - zmm3[0]
                                            zmm2.d = zmm2.d f* arg5[0]
                                            arg5 = *(r8_5 + (rdx_9 << 2))
                                            arg5[0] = arg5[0] - zmm4
                                            zmm2.d = zmm2.d f- zmm1 * arg5[0]
                                            zmm9.d = zmm9.d f+ zmm2.d
                                            j_1 = j_3
                                            j_3 -= 1
                                        while (j_1 != 1)
                                
                                zmm12.d = zmm12.d f+ zmm9.d
                                arg3()
                                r10_6 = var_170_1
                                arg5[0] = arg5[0] f* zmm12.d
                                
                                if (arg5[0] f> zmm9.d)
                                    r14_2 = var_178
                                else
                                    r13 = rdi_3
                                    var_178 = r14_2
                            else
                                int32_t rdx_7 = *(*(rbx + 0x48) + sx.q(rax_11) * 0x28 + 0x20)
                                
                                if (rdx_7 == 0)
                                    goto label_14260c7e1
                                
                                if ((*(*r8_2 + 8))(r8_2, rdx_7) != 0)
                                    goto label_14260c7e1
                                
                                r10_6 = var_170_1
                                r14_2 = var_178
                    else
                        int16_t rax_5 = *(rdi_3 + 0x1c)
                        
                        if ((arg2[0x42].w & rax_5) == 0 || (*(arg2 + 0x212) & rax_5) != 0)
                            r14_2 = var_178
                        else
                            uint64_t rax_7 = zx.q(rdx_4) & 0x3f
                            
                            if (not(3.40282347e+38f f<= *(arg2 + (rax_7 << 2) + 8))
                                    && not(3.40282347e+38f f<= *(arg2 + (rax_7 << 2) + 0x108)))
                                goto label_14260c7a5
                            
                            r14_2 = var_178
                
                rcx_5 = *(rbx + 8)
                i_1 += 1
                r12_1 += 0x20
            while (i_1 s< *(rcx_5 + 0x18))
            
            if (r13 == 0)
                result = -0x80000000
            else
                int64_t rdx_10 = *(rbx + 0x18)
                uint64_t r10_8 = zx.q(*(r13 + 0x1e))
                uint64_t rcx_16 = zx.q(*(r13 + 4)) * 3
                zmm1 = *(rdx_10 + (rcx_16 << 2) + 4)
                float var_138 = (*(rdx_10 + (rcx_16 << 2)))[0]
                arg5 = *(rdx_10 + (rcx_16 << 2) + 8)
                float var_130 = arg5[0]
                float var_134_1 = zmm1
                
                if (r10_8 u> 1)
                    void* rbx_1 = 1
                    
                    if (r10_8 u>= 5)
                        void* r9_5 = r13 + 8
                        int64_t i_5 = ((r10_8 - 5) u>> 2) + 1
                        void var_124
                        void* r8_6 = &var_124
                        rbx_1 = (i_5 << 2) + 1
                        int64_t i_2
                        
                        do
                            uint64_t rax_26 = zx.q(*(r9_5 - 2))
                            r8_6 += 0x30
                            r9_5 += 8
                            uint64_t rcx_17 = rax_26 * 3
                            *(r8_6 - 0x38) = *(rdx_10 + (rcx_17 << 2))
                            *(r8_6 - 0x34) = *(rdx_10 + (rcx_17 << 2) + 4)
                            *(r8_6 - 0x30) = *(rdx_10 + (rcx_17 << 2) + 8)
                            uint64_t rcx_18 = zx.q(*(r9_5 - 8)) * 3
                            *(r8_6 - 0x2c) = *(rdx_10 + (rcx_18 << 2))
                            *(r8_6 - 0x28) = *(rdx_10 + (rcx_18 << 2) + 4)
                            *(r8_6 - 0x24) = *(rdx_10 + (rcx_18 << 2) + 8)
                            uint64_t rcx_19 = zx.q(*(r9_5 - 6)) * 3
                            *(r8_6 - 0x20) = *(rdx_10 + (rcx_19 << 2))
                            *(r8_6 - 0x1c) = *(rdx_10 + (rcx_19 << 2) + 4)
                            *(r8_6 - 0x18) = *(rdx_10 + (rcx_19 << 2) + 8)
                            rcx_16 = zx.q(*(r9_5 - 4)) * 3
                            *(r8_6 - 0x14) = *(rdx_10 + (rcx_16 << 2))
                            *(r8_6 - 0x10) = *(rdx_10 + (rcx_16 << 2) + 4)
                            *(r8_6 - 0xc) = *(rdx_10 + (rcx_16 << 2) + 8)
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                    
                    if (rbx_1 s< r10_8)
                        void* r9_7 = (rbx_1 << 1) + 4 + r13
                        void* i_4 = r10_8 - rbx_1
                        void* r8_7 = &(&var_130)[rbx_1 * 3]
                        void* i_3
                        
                        do
                            uint64_t rax_43 = zx.q(*r9_7)
                            r8_7 += 0xc
                            r9_7 += 2
                            rcx_16 = rax_43 * 3
                            *(r8_7 - 0x14) = *(rdx_10 + (rcx_16 << 2))
                            *(r8_7 - 0x10) = *(rdx_10 + (rcx_16 << 2) + 4)
                            *(r8_7 - 0xc) = *(rdx_10 + (rcx_16 << 2) + 8)
                            i_3 = i_4
                            i_4 -= 1
                        while (i_3 != 1)
                
                arg3(rcx_16)
                arg3()
                void var_e8
                sub_142609670(&var_138, zx.d(*(r13 + 0x1e)), &var_e8, arg5, arg5[0], &var_160)
                var_178.d = 0
                result = sub_142610360(r15, r14_2, &var_160, &var_178)
                
                if ((result u>> 0x1f).b == 0)
                    int32_t zmm1_1 = var_178.d
                    *arg6 = var_160.d
                    int32_t var_158
                    arg6[2] = var_158
                    arg6[1] = zmm1_1
                    *arg4 = r14_2
                    result = 0x40000000

__security_check_cookie(rax_1 ^ &var_1a8)
return result
