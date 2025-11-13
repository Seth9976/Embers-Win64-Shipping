// 函数: sub_1429c8350
// 地址: 0x1429c8350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* r14 = arg1
int64_t* var_88 = arg1
__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t i_10 = 0
int32_t rax_3 = (**r14)(r14)
int128_t zmm6
zmm6.d = arg2.d f* 3.14159274f
zmm6.d = zmm6.d f/ 180f
double zmm0_1 = cos(fconvert.d(zmm6.d))
int64_t* rcx_1 = *r14
int128_t zmm9
zmm9.d = fconvert.s(zmm0_1)
int64_t result

if (*rcx_1 == 0 || rcx_1[1] == 0 || rcx_1[2] == 0 || rcx_1[3] == 0 || rcx_1[4] == 0)
    result = 0
else
    int32_t rbx_1 = 0
    
    if (rax_3 s<= 0)
        result = 0
    else
        do
            int32_t rax_5 = (*(*r14 + 8))(r14, zx.q(rbx_1))
            
            if (rax_5 == 3)
                i_10 += 1
            else if (rax_5 == 4)
                i_10 += 2
            
            rbx_1 += 1
        while (rbx_1 s< rax_3)
        
        if (i_10 s<= 0)
            result = 0
        else
            int64_t i_12 = sx.q(i_10)
            int32_t* rax_6 = malloc(i_12 * 0xc)
            int32_t* r13_1 = rax_6
            int32_t* var_f8_1 = rax_6
            void* rax_7 = malloc(i_12 * 0x58)
            void* var_f0_1 = rax_7
            void* rsi_1 = rax_7
            
            if (r13_1 == 0)
                if (rsi_1 != 0)
                    free(rsi_1)
                
                result = 0
            else if (rax_7 == 0)
                free(r13_1)
                result = 0
            else
                int32_t i_8 = sub_1429c5700(rax_7, r13_1, r14, i_10)
                int128_t zmm8_1 = sub_1429c5b80(r13_1, r14, i_10)
                int32_t rax_8 = 0
                int32_t var_128_1 = 0
                int32_t var_110
                uint64_t var_d8
                float var_d0
                int64_t var_c8
                int32_t* var_b8
                void* var_a8
                int64_t var_98
                
                if (i_10 s> 0)
                    int128_t var_58_1 = zmm8_1
                    void* r15_1 = rsi_1 + 0x4c
                    void* r13_2 = &r13_1[2]
                    int64_t i_7 = sx.q(i_10)
                    int64_t i
                    
                    do
                        int32_t rbx_2 = *(r13_2 - 4)
                        int32_t rdi_1 = *r13_2
                        int32_t* rax_9 = sub_1429c7090(&var_a8, r14, *(r13_2 - 8))
                        uint128_t zmm7_1 = zx.o(*rax_9)
                        var_d0 = rax_9[2]
                        int32_t* rax_11 = sub_1429c7090(&var_b8, r14, rbx_2)
                        uint128_t zmm6_1 = zx.o(*rax_11)
                        var_110 = rax_11[2]
                        int32_t* rax_13 = sub_1429c7090(&var_c8, r14, rdi_1)
                        uint128_t zmm4_1 = zmm6_1
                        var_d8 = zmm7_1.q
                        uint128_t zmm3_1 = zmm7_1
                        zmm7_1 = var_110
                        float rax_14 = rax_13[2]
                        uint32_t var_118_1 = zmm6_1.d
                        zmm6_1 = var_d8.d
                        zmm8_1 = var_118_1
                        zmm6_1.d f- zmm8_1.d
                        var_98 = *rax_13
                        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                        
                        if (is_unordered.d(zmm6_1.d, zmm8_1.d) || zmm6_1.d f!= zmm8_1.d)
                        label_1429c8580:
                            float zmm1 = var_98.d
                            zmm6_1.d f- zmm1
                            int64_t zmm0_2 = var_98:4.d
                            
                            if (not(is_unordered.d(zmm6_1.d, zmm1)) && not(zmm6_1.d f!= zmm1))
                                zmm3_1.d f- zmm0_2.d
                                
                                if (is_unordered.d(zmm3_1.d, zmm0_2.d) || zmm3_1.d f!= zmm0_2.d)
                                    goto label_1429c85a4
                                
                                var_d0 - rax_14
                                
                                if (is_unordered.d(var_d0, rax_14) || not(var_d0 == rax_14))
                                    goto label_1429c85a4
                                
                                goto label_1429c85be
                            
                        label_1429c85a4:
                            zmm8_1.d f- zmm1
                            
                            if (is_unordered.d(zmm8_1.d, zmm1) || zmm8_1.d f!= zmm1)
                                rax_8 = var_128_1
                            else
                                zmm4_1.d f- zmm0_2.d
                                
                                if (is_unordered.d(zmm4_1.d, zmm0_2.d) || zmm4_1.d f!= zmm0_2.d)
                                    rax_8 = var_128_1
                                else
                                    zmm7_1.d f- rax_14
                                    
                                    if (not(is_unordered.d(zmm7_1.d, rax_14))
                                            && not(zmm7_1.d f!= rax_14))
                                        goto label_1429c85be
                                    
                                    rax_8 = var_128_1
                        else
                            zmm3_1.d f- zmm4_1.d
                            
                            if (is_unordered.d(zmm3_1.d, zmm4_1.d) || zmm3_1.d f!= zmm4_1.d)
                                goto label_1429c8580
                            
                            var_d0 f- zmm7_1.d
                            
                            if (is_unordered.d(var_d0, zmm7_1.d) || not(var_d0 f== zmm7_1.d))
                                goto label_1429c8580
                            
                        label_1429c85be:
                            *r15_1 |= 1
                            rax_8 = var_128_1 + 1
                            var_128_1 = rax_8
                        
                        r13_2 += 0xc
                        r15_1 += 0x58
                        i = i_7
                        i_7 -= 1
                    while (i != 1)
                    rsi_1 = var_f0_1
                    r13_1 = var_f8_1
                
                uint64_t r12 = zx.q(i_10 - rax_8)
                int32_t var_e8_1 = r12.d
                uint32_t zmm2_2[0x4]
                uint32_t zmm3_2[0x4]
                zmm2_2, zmm3_2 = sub_1429c49d0(rsi_1, r13_1, r12.d, i_10)
                int32_t i_13 = sub_1429c7120(rsi_1, r13_1, r14, r12.d, zmm2_2, zmm3_2)
                int32_t* rax_17 = malloc(sx.q((r12 * 3).d) * 0x18)
                int64_t i_9 = sx.q(r12.d)
                int64_t i_5 = i_9
                int32_t* rax_18 = malloc(i_9 * 0xc)
                int32_t* rdx_9 = rax_17
                var_b8 = rax_18
                int32_t* rcx_52
                
                if (rdx_9 == 0)
                    if (rax_18 != 0)
                        rcx_52 = rax_18
                    label_1429c8aa9:
                        free(rcx_52)
                    
                    free(r13_1)
                    free(rsi_1)
                    result = 0
                else
                    if (rax_18 == 0)
                        rcx_52 = rdx_9
                        goto label_1429c8aa9
                    
                    int32_t r11_1 = 0
                    int32_t var_128_2 = 0
                    int32_t var_124_1 = 0
                    int64_t var_108
                    
                    if (r12.d s> 0)
                        int64_t r10_1 = 0
                        var_a8 = rsi_1
                        int32_t* r12_1 = nullptr
                        var_c8 = 0
                        void* rcx_19 = 2
                        var_f8_1 = nullptr
                        var_f0_1 = 2
                        void* r9_4 = rsi_1
                        int32_t r14_1 = 0
                        int64_t i_1
                        
                        do
                            int32_t j = 0
                            int64_t r8_8 = -4
                            uint64_t rdx_10 = &rdx_9[r10_1 * 6]
                            int64_t rdi_2 = 0
                            var_108 = -4
                            
                            do
                                if ((*(r9_4 + 0x4c) & 4) == 0)
                                    void* rbx_3 = rcx_19 + rdi_2
                                    
                                    if (*(rsi_1 + (rbx_3 << 3)) == 0)
                                        var_128_2 += 1
                                        int64_t rax_21 = var_c8 + rdi_2
                                        var_98 = r10_1 + 1
                                        int32_t rcx_20 = r13_1[rax_21]
                                        *(rsi_1 + (rbx_3 << 3)) = rdx_10
                                        *(rdx_10 + 0x10) = rcx_20
                                        var_d8 = rdx_10 + 0x18
                                        *(*(rsi_1 + (rbx_3 << 3)) + 0x14) = *(r9_4 + 0x4c) u>> 3 & 1
                                        int32_t* rcx_24 = var_b8
                                        **(rsi_1 + (rbx_3 << 3)) = 0
                                        *(*(rsi_1 + (rbx_3 << 3)) + 8) = &rcx_24[sx.q(r14_1)]
                                        int32_t* rdx_12 = *(rsi_1 + (rbx_3 << 3))
                                        *(*(rdx_12 + 8) + (sx.q(*rdx_12) << 2)) = r11_1
                                        *rdx_12 += 1
                                        int32_t rcx_27 = *(rsi_1 + ((r12_1 + rdi_2) << 2))
                                        int64_t rax_28 = 8
                                        
                                        if (j s> 0)
                                            rax_28 = r8_8
                                        
                                        int32_t r12_2 = *(r9_4 + rax_28)
                                        
                                        if (rcx_27 s>= 0)
                                            sub_1429c39c0(r13_1, rsi_1, rcx_27, 
                                                *(rsi_1 + (rbx_3 << 3)))
                                        
                                        if (r12_2 s>= 0)
                                            sub_1429c39c0(r13_1, rsi_1, r12_2, 
                                                *(rsi_1 + (rbx_3 << 3)))
                                        
                                        r8_8 = var_108
                                        r9_4 = var_a8
                                        rcx_19 = var_f0_1
                                        r14_1 += **(rsi_1 + (rbx_3 << 3))
                                        rdx_10 = var_d8
                                        r10_1 = var_98
                                        r11_1 = var_124_1
                                        r12_1 = var_f8_1
                                
                                r8_8 += 4
                                j += 1
                                rdi_2 += 1
                                var_108 = r8_8
                            while (j s< 3)
                            
                            var_c8 += 3
                            r11_1 += 1
                            rdx_9 = rax_17
                            r9_4 += 0x58
                            r12_1 += 0x16
                            var_124_1 = r11_1
                            rcx_19 += 0xb
                            var_a8 = r9_4
                            i_1 = i_5
                            i_5 -= 1
                            var_f8_1 = r12_1
                            var_f0_1 = rcx_19
                        while (i_1 != 1)
                        r14 = var_88
                        r12 = zx.q(var_e8_1)
                    
                    int64_t i_6 = sx.q(i_8)
                    int64_t r15_3 = i_6 * 0x28
                    int32_t* rax_30 = malloc(r15_3)
                    
                    if (rax_30 != 0)
                        memset(rax_30, 0, r15_3)
                        
                        if (i_6 s> 0)
                            void* rax_31 = &rax_30[2]
                            int64_t i_2
                            
                            do
                                *(rax_31 - 8) = 0x3f800000
                                *rax_31 = 0
                                __builtin_memcpy(rax_31 + 4, 
                                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
                                "00\x00\x80\x3f", 
                                    0x14)
                                rax_31 += 0x28
                                i_2 = i_6
                                i_6 -= 1
                            while (i_2 != 1)
                        
                        int64_t* var_138_1 = r14
                        int32_t i_11 = i_13
                        int32_t rax_32
                        int512_t zmm2_3
                        int512_t zmm3_3
                        rax_32, zmm2_3, zmm3_3 =
                            sub_1429c6480(rax_30, rsi_1, rax_17, var_128_2, r13_1, i_11, var_138_1)
                        free(rax_17)
                        free(var_b8)
                        
                        if (rax_32 != 0)
                            int32_t* var_148_1
                            
                            if (r14[2].d == 0)
                                i_11 = i_10
                                var_148_1.d = r12.d
                                sub_1429c45a0(rax_30, rsi_1, r13_1, r14, var_148_1.d, i_11)
                            
                            free(rsi_1)
                            free(r13_1)
                            int32_t rsi_2 = 0
                            int64_t r12_3 = 0
                            
                            do
                                uint64_t r15_4 = zx.q((*(*r14 + 8))(r14, zx.q(rsi_2)))
                                
                                if ((r15_4 - 3).d u<= 1)
                                    int32_t i_3 = 0
                                    
                                    if (r15_4.d s> 0)
                                        int64_t rcx_48 = r12_3 * 5
                                        r12_3 += r15_4
                                        void* rbx_6 = &rax_30[2 + rcx_48 * 2]
                                        
                                        do
                                            void* rax_36 = *r14
                                            var_88.d = *(rbx_6 - 8)
                                            var_88:4.d = *(rbx_6 - 4)
                                            int32_t var_80_1 = *rbx_6
                                            var_98.d = *(rbx_6 + 8)
                                            var_98:4.d = *(rbx_6 + 0xc)
                                            int32_t var_90_2 = *(rbx_6 + 0x10)
                                            int64_t r9_9 = *(rax_36 + 0x30)
                                            int32_t i_4
                                            
                                            if (r9_9 != 0)
                                                zmm3_3.o = *(rbx_6 + 4)
                                                i_4 = i_3
                                                var_138_1.d = rsi_2
                                                i_11 = *(rbx_6 + 0x1c)
                                                var_148_1.d = *(rbx_6 + 0x14)
                                                r9_9(r14, &var_88, &var_98, zmm3_3, var_148_1, 
                                                    i_11, var_138_1, i_4, var_128_2, i_10, i_5, 
                                                    var_110, var_108, rax_17, var_f8_1, var_f0_1, 
                                                    var_e8_1, rax_3, var_d8, var_d0)
                                                rax_36 = *r14
                                            
                                            int64_t r8_15 = *(rax_36 + 0x28)
                                            
                                            if (r8_15 != 0)
                                                if (*(rbx_6 + 0x1c) != 1)
                                                    zmm2_3.o = 0xbf800000
                                                else
                                                    zmm2_3.o = 0x3f800000
                                                
                                                var_148_1.d = i_3
                                                r8_15(r14, &var_88, zmm2_3, zx.q(rsi_2), var_148_1, 
                                                    i_11, var_138_1, i_4, var_128_2, i_10, i_5, 
                                                    var_110, var_108, rax_17, var_f8_1, var_f0_1, 
                                                    var_e8_1, rax_3, var_d8, var_d0)
                                            
                                            rbx_6 += 0x28
                                            i_3 += 1
                                        while (i_3 s< r15_4.d)
                                
                                rsi_2 += 1
                            while (rsi_2 s< rax_3)
                            
                            free(rax_30)
                            result = 1
                        else
                            free(rsi_1)
                            free(r13_1)
                            free(rax_30)
                            result = 0
                    else
                        free(r13_1)
                        free(rsi_1)
                        free(rax_17)
                        free(var_b8)
                        result = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
