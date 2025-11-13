// 函数: sub_141d39380
// 地址: 0x141d39380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_798
int64_t rax_1 = __security_cookie ^ &var_798
uint64_t result = zx.q(*(arg1 + 0x50))
void* r12 = arg2

if (result.d != *(arg1 + 0x7c) && arg2 != 0)
    result = sub_141d3c3c0(arg1, arg2)
    uint64_t result_1 = result
    uint64_t result_2 = result
    
    if (result != 0)
        int64_t rbx_1 = sx.q(*(result + 8))
        int64_t rdi_1 = 0
        int32_t r13_1 = 0
        int64_t var_778 = 0
        int64_t var_770_1 = 0
        
        if (rbx_1.d s> 0)
            sub_1405dadb0(&var_778, rbx_1.d)
            result_2 = result_1
            r13_1 = var_770_1.d
            rdi_1 = var_778
        
        int64_t* var_730 = nullptr
        int64_t* r14_1 = nullptr
        int32_t var_728_1 = 0
        int32_t rsi_1 = 0
        void* var_6f0 = nullptr
        void* r15_1 = nullptr
        int32_t var_768_1 = 0
        int32_t var_6e4_1 = 0
        void* var_6e0 = nullptr
        int32_t var_764_1 = 0
        int32_t var_6d4_1 = 0
        int32_t var_6f8_1 = 0
        int32_t var_760_1 = 0
        int32_t rcx_172
        
        if (rbx_1.d s<= 0)
            rcx_172 = var_770_1.d
        else
            int64_t rax_2 = 0
            int128_t zmm7 = 0x34000000
            int64_t var_650_1 = 0
            
            while (true)
                int64_t* rbx_4 = rax_2 * 0x60 + *result_2
                int32_t rdi_2
                
                if (sub_141d3c610(rbx_4, 1) == 0)
                    rdi_2 = 0
                else
                    void* const rcx_6
                    
                    if (rbx_4[3].d == *(rbx_4 + 0x44))
                        rcx_6 = nullptr
                    else
                        void* rax_5 = rbx_4[0xa]
                        void* rdx_1 = &rbx_4[9]
                        
                        if (rax_5 != 0)
                            rdx_1 = rax_5
                        
                        int32_t rax_6 = *(rdx_1 + ((zx.q(rbx_4[0xb].d - 1) & 1) << 2))
                        
                        if (rax_6 == 0xffffffff)
                            rcx_6 = nullptr
                        else
                            int64_t r8 = rbx_4[2]
                            
                            while (true)
                                int64_t rdx_2 = sx.q(rax_6) * 3
                                rcx_6 = r8 + (rdx_2 << 3)
                                
                                if (*(r8 + (rdx_2 << 3)) == 1)
                                    break
                                
                                rax_6 = *(rcx_6 + 0x10)
                                
                                if (rax_6 == 0xffffffff)
                                    rdi_2 = *(*8 + 8)
                                    goto label_141d3953d
                            
                            if (rax_6 == 0xffffffff)
                                rcx_6 = nullptr
                    
                    rdi_2 = *(*(rcx_6 + 8) + 8)
                
            label_141d3953d:
                void* rdi_3
                
                if (var_6f8_1 != rdi_2 || rsi_1 == 0)
                    sub_141d3bb30(&var_730, r12, rdi_2, 1)
                    rsi_1 = var_728_1
                    var_6f8_1 = rdi_2
                    int32_t rcx_9 = rsi_1 + var_768_1
                    var_768_1 = rcx_9
                    
                    if (rcx_9 s> var_6e4_1)
                        sub_140638a00(&var_6f0)
                        var_768_1 = rcx_9
                    
                    int32_t rax_10 = rsi_1 + var_764_1
                    var_764_1 = rax_10
                    
                    if (rax_10 s> var_6d4_1)
                        sub_1405a4d70(&var_6e0)
                        r15_1 = var_6e0
                        var_764_1 = rax_10
                    
                    rdi_3 = var_6f0
                    r14_1 = var_730
                    int32_t r8_2 = 0
                    
                    if (rsi_1 s> 0)
                        void* r9_3 = r15_1
                        void* r10_1 = rdi_3
                        
                        do
                            int64_t* rcx_12 = *(r14_1 - r15_1 + r9_3)
                            r9_3 += 8
                            int32_t var_628_1 = r8_2
                            r10_1 += 0xc
                            int32_t var_624_1 = r8_2
                            r8_2 += 1
                            int64_t rdx_6 = sx.q(rcx_12[1].d) * 3
                            int64_t rcx_13 = *(*rcx_12 + 0x28)
                            *(r10_1 - 0xc) = *(rcx_13 + (rdx_6 << 2))
                            *(r10_1 - 4) = *(rcx_13 + (rdx_6 << 2) + 8)
                            *(r9_3 - 8) = var_628_1.q
                        while (r8_2 s< rsi_1)
                else
                    rdi_3 = var_6f0
                
                int64_t var_5ac
                float zmm6_1[0x4] = sub_140b58170(&var_5ac, "DynamicState", 1)
                float var_758[0x4]
                void* var_1e8
                int32_t var_1d0
                int128_t* var_198
                int64_t* var_138
                int64_t rcx_40
                
                if (*rbx_4 == var_5ac)
                    if (rsi_1 == 0)
                        goto label_141d3b475
                    
                    int32_t var_240_1 = var_768_1
                    int32_t var_250_1 = var_764_1
                    void* var_248 = rdi_3
                    void* var_258 = r15_1
                    sub_141d2d270(&var_198, &var_258, &var_248, &rbx_4[2])
                    int64_t rdi_4 = sx.q(var_728_1)
                    int64_t var_618 = 0
                    int64_t r15_2 = 0
                    int32_t var_60c_1 = 0
                    
                    if (rdi_4.d s> 0)
                        sub_1405a4cf0(&var_618)
                        r15_2 = var_618
                    
                    void* rdi_5 = &r14_1[rdi_4]
                    int32_t r11_3 = 0
                    int64_t r10_2 = 0
                    int64_t* r9_5 = r14_1
                    
                    if (r14_1 != rdi_5)
                        do
                            int64_t* rax_19 = *r9_5
                            int64_t* rcx_17 = nullptr
                            int64_t r8_4 = r10_2
                            
                            if (*(rax_19 + 0xc) u>= 1)
                                rcx_17 = rax_19
                            
                            if (rcx_17 == 0)
                                rax_19.b = 3
                            else
                                rax_19 = nullptr
                                
                                if (*(rcx_17 + 0xc) u>= 2)
                                    rax_19 = rcx_17
                                
                                if (rax_19 == 0)
                                    rax_19.b = 2
                                else
                                    rax_19 = zx.q(*(sx.q(rax_19[1].d) + *(*rax_19 + 0x398)))
                            
                            r11_3 += 1
                            int32_t rcx_19 = sx.d(rax_19.b)
                            r10_2 += 1
                            
                            if (rcx_19 == 1)
                                *(r15_2 + (r8_4 << 2)) = 1
                            else if (rcx_19 == 2)
                                *(r15_2 + (r8_4 << 2)) = 2
                            else if (rcx_19 == 3)
                                *(r15_2 + (r8_4 << 2)) = 3
                            else
                                *(r15_2 + (r8_4 << 2)) = 4
                            
                            r9_5 = &r9_5[1]
                        while (r9_5 != rdi_5)
                    
                    int64_t* rcx_22 = rbx_4[1]
                    int64_t var_518 = r15_2
                    int32_t var_510_1 = rsi_1
                    int32_t rax_22
                    int64_t rdx_9
                    rax_22, rdx_9 = (*(*rcx_22 + 8))(rcx_22)
                    
                    if (rax_22 == 2)
                        int64_t* rcx_23 = rbx_4[1]
                        (*(*rcx_23 + 0x30))(rcx_23, &var_198, &var_518)
                    
                    rsi_1.b = 0
                    float rax_26
                    int32_t* rdi_6
                    
                    if (var_138[1].b != 0)
                        rdi_6 = var_138[2]
                        rax_26 = var_138[3].d
                    else
                        var_758 = *var_198
                        rax_26 = var_758[2]
                        rdi_6 = var_758[0].q
                    
                    void* r14_2 = &rdi_6[sx.q(rax_26) * 2]
                    
                    if (rdi_6 != r14_2)
                        int64_t* r13_2 = var_730
                        
                        do
                            int64_t* rbx_5 = nullptr
                            int64_t* rax_29 = r13_2[sx.q(*rdi_6)]
                            uint64_t rcx_24 = zx.q(*(rax_29 + 0xc))
                            
                            if (rcx_24.b u>= 2)
                                rbx_5 = rax_29
                            
                            if (rbx_5 != 0)
                                if (rcx_24.b == 6 || (rcx_24.b == 3
                                        && *(sx.q(rax_29[1].d) + *(*rax_29 + 0x470)) == 0))
                                    rcx_24.b = 1
                                else
                                    rcx_24.b = 0
                                
                                void* r10_3 = *rbx_5
                                rdx_9 = sx.q(rbx_5[1].d)
                                char r8_6 = *(rdx_9 + *(r10_3 + 0x398))
                                
                                if (rcx_24.b != 0 || r8_6 == 4)
                                    int32_t r9_6 = *(var_518 + (sx.q(rdi_6[1]) << 2))
                                    
                                    if (r9_6 != 4)
                                        float zmm0_2[0x4]
                                        
                                        if (r9_6 != 2)
                                            if (r9_6 != 3)
                                                if (r9_6 == 1 && r8_6 != r9_6.b)
                                                    sub_14177fa60(r10_3, rdx_9, r9_6.b)
                                                    rsi_1.b = 1
                                            else if (r8_6 != r9_6.b)
                                                sub_14177fa60(r10_3, rdx_9, r9_6.b)
                                                int64_t rax_40 = sx.q(rbx_5[1].d)
                                                zmm0_2 = _mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)
                                                int32_t var_1ec_1 = 0
                                                int32_t var_210_1 = 0
                                                int64_t rdx_13 = rax_40 * 3
                                                int64_t rcx_30 = *(*rbx_5 + 0x1b8)
                                                *(rcx_30 + (rdx_13 << 2)) = zmm0_2.q
                                                *(rcx_30 + (rdx_13 << 2) + 8) = 0
                                                int64_t rax_42 = sx.q(rbx_5[1].d)
                                                zmm0_2 = _mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)
                                                rdx_9 = rax_42 * 3
                                                int64_t rcx_31 = *(*rbx_5 + 0x1d0)
                                                *(rcx_31 + (rdx_9 << 2)) = zmm0_2.q
                                                *(rcx_31 + (rdx_9 << 2) + 8) = var_210_1
                                                rsi_1.b = 1
                                        else if (r8_6 != r9_6.b)
                                            sub_14177fa60(r10_3, rdx_9, r9_6.b)
                                            int64_t rax_35 = sx.q(rbx_5[1].d)
                                            zmm0_2 = _mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)
                                            int32_t var_1f8_1 = 0
                                            int32_t var_204_1 = 0
                                            int64_t rdx_12 = rax_35 * 3
                                            int64_t rcx_27 = *(*rbx_5 + 0x1b8)
                                            *(rcx_27 + (rdx_12 << 2)) = zmm0_2.q
                                            *(rcx_27 + (rdx_12 << 2) + 8) = 0
                                            int64_t rax_37 = sx.q(rbx_5[1].d)
                                            zmm0_2 = _mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)
                                            rdx_9 = rax_37 * 3
                                            int64_t rcx_28 = *(*rbx_5 + 0x1d0)
                                            *(rcx_28 + (rdx_9 << 2)) = zmm0_2.q
                                            *(rcx_28 + (rdx_9 << 2) + 8) = var_204_1
                                            rsi_1.b = 1
                                    else if (r8_6 - 2 u<= 1
                                            && not(zmm7.d f>= *(*(r10_3 + 0x2c0) + (rdx_9 << 2))))
                                        sub_14177fa60(r10_3, rdx_9, r9_6.b)
                                        rsi_1.b = 1
                                    else if (r8_6 == 1)
                                        sub_14177fa60(r10_3, rdx_9, 4)
                                        rsi_1.b = 1
                            
                            rdi_6 = &rdi_6[2]
                        while (rdi_6 != r14_2)
                        
                        r13_1 = var_770_1.d
                        
                        if (rsi_1.b != 0)
                            rdx_9.b = 1
                            sub_14175a890(r12 + 0x88, rdx_9.b)
                    
                    void* rdi_7 = *(r12 + 0x348)
                    
                    if (*(r12 + 0x110) != 0)
                        sub_14175a890(r12 + 0x88, 0)
                    
                    var_1e8 = r12 + 0x238
                    int128_t var_1e0_1
                    __builtin_memset(&var_1e0_1, 0, 0x15)
                    int32_t var_1c8 = 0
                    sub_141750820(&var_1e8)
                    
                    if (var_1e0_1:8.q != 0)
                        int64_t* rbx_6 = var_1e0_1.q
                        
                        do
                            int64_t* rax_47 = nullptr
                            int64_t* r8_9 = *(*(var_1e0_1:8.q + 0xc8) + (sx.q(var_1d0) << 3))
                            char r9_7 = *(r8_9 + 0xc)
                            
                            if (r9_7 u>= 3)
                                rax_47 = r8_9
                            
                            if (rax_47 != 0
                                    && *(*(*rax_47 + 0x428) + sx.q(rax_47[1].d) * 0x10 + 8) != 0)
                                int64_t* rdx_17 = nullptr
                                
                                if (r9_7 u>= 2)
                                    rdx_17 = r8_9
                                
                                sub_1417ba180(rdi_7 + 0x368, rdx_17)
                            
                            if (rbx_6 != 0)
                                int32_t var_1c0
                                int32_t rax_52 = var_1c0 + 1
                                var_1c0 = rax_52
                                
                                if (rax_52 s>= rbx_6[1].d)
                                label_141d39ac7:
                                    var_1c8 += 1
                                    sub_141750820(&var_1e8)
                                    rbx_6 = var_1e0_1.q
                                else
                                    int64_t* rdx_18 = *(*rbx_6 + (sx.q(rax_52) << 3))
                                    void* rcx_42 = *rdx_18
                                    int32_t var_500_1 = rdx_18[1].d
                                    char rax_55
                                    
                                    if (rcx_42 == 0)
                                        rax_55 = 0
                                    else
                                        rax_55 = *(rcx_42 + 0x40)
                                    
                                    char var_4fc_1 = rax_55
                                    var_1e0_1 = rcx_42.o
                            else
                                int32_t rax_50 = var_1d0 + 1
                                var_1d0 = rax_50
                                int32_t var_1c4
                                
                                if (rax_50 s>= var_1c4)
                                    goto label_141d39ac7
                        while (var_1e0_1:8.q != 0)
                    
                    if (r15_2 == 0)
                        goto label_141d3aeec
                    
                    rcx_40 = r15_2
                    goto label_141d3aee7
                
                int64_t var_5a4
                sub_140b58170(&var_5a4, "ActivateDisabled", 1)
                int128_t* var_128
                int64_t rdi_8
                int64_t* r8_12
                
                if (*rbx_4 == var_5a4)
                    if (rsi_1 == 0)
                        goto label_141d3b475
                    
                    int64_t rsi_2 = sx.q(var_764_1)
                    int32_t var_220_1 = rsi_2.d
                    void* var_238 = rdi_3
                    int32_t var_230_1 = var_768_1
                    void* var_228 = r15_1
                    sub_141d2d270(&var_128, &var_228, &var_238, &rbx_4[2])
                    void* r11_4 = arg3
                    rdi_8 = 0
                    int64_t var_608 = 0
                    int32_t var_5fc_1 = 0
                    int32_t r10_4 = *(r11_4 + 0x18)
                    
                    if (r10_4 s> 0)
                        sub_1405a4cf0(&var_608)
                        r11_4 = arg3
                        rdi_8 = var_608
                    
                    void* r9_9 = r15_1 + (rsi_2 << 3)
                    void* rcx_46 = r15_1
                    
                    if (r15_1 != r9_9)
                        do
                            int64_t rax_58 = sx.q(*rcx_46)
                            rcx_46 += 8
                            *(rdi_8 + (rax_58 << 2)) = 0
                        while (rcx_46 != r9_9)
                    
                    void* r8_11 = r15_1
                    
                    if (r15_1 != r9_9)
                        do
                            int64_t rdx_21 = sx.q(*r8_11)
                            int32_t rcx_47
                            rcx_47.b = *(rdx_21 + *(r11_4 + 0x368)) != 0
                            r8_11 += 8
                            *(rdi_8 + (rdx_21 << 2)) = rcx_47
                        while (r8_11 != r9_9)
                    
                    int64_t* rcx_48 = rbx_4[1]
                    int64_t var_438 = rdi_8
                    int32_t var_430_1 = r10_4
                    
                    if ((*(*rcx_48 + 8))(rcx_48) == 2)
                        r8_12 = &var_438
                    label_141d3b435:
                        int64_t* rcx_199 = rbx_4[1]
                        (*(*rcx_199 + 0x30))(rcx_199, &var_128, r8_12)
                    
                    if (rdi_8 == 0)
                        goto label_141d3b45d
                    
                    sub_140a74f90(rdi_8)
                    goto label_141d3b45d
                
                int64_t var_59c
                float zmm6_2 = sub_140b58170(&var_59c, "ExternalClusterStrain", 1)
                void var_188
                int64_t* var_c8
                
                if (*rbx_4 == var_59c)
                    int64_t* rcx_50 = rbx_4[1]
                    
                    if ((*(*rcx_50 + 8))(rcx_50) != 3 || rsi_1 == 0)
                        goto label_141d3b475
                    
                    int32_t var_420_1 = var_764_1
                    void* var_4f8 = rdi_3
                    void* var_428 = r15_1
                    sub_141d2d270(&var_128, &var_428, &var_4f8, &rbx_4[2])
                    int64_t rsi_3 = sx.q(var_768_1)
                    int64_t var_690 = 0
                    int64_t r15_3 = 0
                    int32_t var_684_1 = 0
                    int32_t r14_3 = rsi_3.d
                    int32_t var_688_1 = rsi_3.d
                    
                    if (rsi_3.d s> 0)
                        sub_1406105e0(&var_690)
                        r14_3 = var_688_1
                        r15_3 = var_690
                    
                    memset(r15_3, 0, rsi_3 << 2)
                    int64_t* rcx_54 = rbx_4[1]
                    int64_t var_418 = r15_3
                    int32_t var_410_1 = r14_3
                    (*(*rcx_54 + 0x30))(rcx_54, &var_128, &var_418)
                    
                    if (rbx_4[3].d != *(rbx_4 + 0x44))
                        void* rax_69 = rbx_4[0xa]
                        void* rdx_25 = &rbx_4[9]
                        
                        if (rax_69 != 0)
                            rdx_25 = rax_69
                        
                        int32_t j = *(rdx_25 + ((zx.q(rbx_4[0xb].d - 1) & 3) << 2))
                        int32_t i = j
                        
                        if (j != 0xffffffff)
                            int64_t r8_17 = rbx_4[2]
                            
                            do
                                int64_t r9_11 = sx.q(i) * 3
                                
                                if (*(r8_17 + (r9_11 << 3)) == 3)
                                    if (i != 0xffffffff && j != 0xffffffff)
                                        do
                                            int64_t rcx_58 = sx.q(j) * 3
                                            
                                            if (*(r8_17 + (rcx_58 << 3)) == 3)
                                                break
                                            
                                            j = *(r8_17 + (rcx_58 << 3) + 0x10)
                                        while (j != 0xffffffff)
                                    
                                    break
                                
                                i = *(r8_17 + (r9_11 << 3) + 0x10)
                            while (i != 0xffffffff)
                    
                    if (r14_3 != 0)
                        int64_t var_b8
                        __builtin_memset(&var_b8, 0, 0x2c)
                        int32_t var_8c_1 = 0x80
                        int32_t var_88_1 = 0xffffffff
                        int32_t var_84_1 = 0
                        int64_t var_78_1 = 0
                        int32_t var_70_1 = 0
                        float rax_73
                        int32_t* rbx_7
                        
                        if (var_c8[1].b != 0)
                            rbx_7 = var_c8[2]
                            rax_73 = var_c8[3].d
                        else
                            var_758 = *var_128
                            rax_73 = var_758[2]
                            rbx_7 = var_758[0].q
                        
                        void* rdi_9 = &rbx_7[sx.q(rax_73) * 2]
                        
                        if (rbx_7 != rdi_9)
                            int64_t* r12_1 = var_730
                            
                            do
                                int64_t rax_75 = sx.q(rbx_7[1])
                                
                                if (not(zmm6_2 f>= *(r15_3 + (rax_75 << 2))))
                                    int64_t var_400_1 = r15_3 + (rax_75 << 2)
                                    void* var_408 = &r12_1[sx.q(*rbx_7)]
                                    void var_5b0
                                    sub_141d2bcc0(&var_b8, &var_5b0, &var_408, nullptr)
                                
                                rbx_7 = &rbx_7[2]
                            while (rbx_7 != rdi_9)
                            
                            r12 = arg2
                        
                        zmm7 = sub_1417a8870(*(r12 + 0x348) + 0x368, &var_198, &var_b8)
                        var_758[2].q = &var_188
                        int32_t rcx_63 = 0
                        var_758[0] = 0
                        int32_t r8_20 = 0
                        var_758[1] = 1
                        int32_t var_748_1 = 0xffffffff
                        int64_t var_744_1 = 0
                        void* var_178
                        int32_t var_170
                        
                        if (var_170 != 0)
                            void* r9_12 = &var_188
                            
                            if (var_178 != 0)
                                r9_12 = var_178
                            
                            int32_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(var_170 - 1)
                            int32_t rdx_32 = *r9_12
                            
                            if (rdx_32 != 0)
                            label_141d39fab:
                                int32_t rax_84 = neg.d(rdx_32) & rdx_32
                                uint64_t rflags_1
                                int32_t temp0_5
                                temp0_5, rflags_1 = _bit_scan_reverse(rax_84)
                                var_758[1] = rax_84
                                int32_t rax_85
                                
                                if (rax_84 == 0)
                                    rax_85 = 0x20
                                else
                                    rax_85 = 0x1f - temp0_5
                                
                                int32_t rax_86 = r8_20 - rax_85 + 0x1f
                                
                                if (rax_86 s> var_170)
                                    rax_86 = var_170
                                
                                var_744_1.d = rax_86
                            else
                                while (true)
                                    int64_t rdx_33 = sx.q(rcx_63)
                                    r8_20 += 0x20
                                    rcx_63 += 1
                                    var_744_1:4.d = r8_20
                                    var_758[0] = rcx_63
                                    
                                    if (rdx_33.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                        var_744_1.d = var_170
                                        break
                                    
                                    rdx_32 = *(r9_12 + (rdx_33 << 2) + 4)
                                    var_748_1 = 0xffffffff
                                    
                                    if (rdx_32 != 0)
                                        goto label_141d39fab
                        
                        float zmm2_1[0x4] = var_748_1.o
                        float var_718_1[0x4] = var_758
                        float var_708_1[0x4] = zmm2_1
                        int128_t** var_720 = &var_198
                        var_718_1[2] = 0xffffffff << (var_170.b & 0x1f)
                        float zmm0_5[0x4] = var_720.o
                        var_718_1[3] = var_170
                        uint64_t rdx_36 = var_718_1[2].q u>> 0x20
                        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0].q)
                        var_758[0].q = rdx_36
                        float var_460[0x4] = zmm0_5
                        int64_t var_440_1 = zmm2_1.q
                        
                        while (true)
                            int64_t rax_87 = sx.q(var_718_1[3])
                            int64_t rcx_67 = var_460[0].q
                            
                            if (rax_87.d == rdx_36.d && var_718_1[0].q == &var_188
                                    && rcx_67 == &var_198)
                                break
                            
                            var_720.d = 0
                            int64_t* rbx_10 = rax_87 * 0x60 + *rcx_67
                            int32_t r8_22 = rbx_10[6].d
                            void* r13_3 = &rbx_10[1]
                            int64_t* var_548_1 = rbx_10
                            void* r9_13 = r13_3 + 0x10
                            var_718_1[0].q = r9_13
                            void* var_540_1 = r13_3
                            var_720:4.d = 1
                            var_718_1[2] = 0xffffffff
                            var_718_1[3].q = 0
                            
                            if (r8_22 != 0)
                                sub_14059bdd0(&var_720)
                                r8_22 = *(r13_3 + 0x28)
                                r9_13 = r13_3 + 0x10
                            
                            zmm0_5 = var_720.o
                            var_1e8 = r13_3
                            var_718_1[2] = 0xffffffff << (r8_22.b & 0x1f)
                            float var_1e0_2[0x4] = zmm0_5
                            var_718_1[3] = r8_22
                            zmm0_5 = var_1e8.o
                            uint64_t rdx_39 = var_718_1[2].q u>> 0x20
                            var_1d0.o = var_718_1
                            uint64_t var_550_1 = rdx_39
                            zmm2_1 = _mm_unpackhi_pd(var_718_1, var_718_1[0].q)
                            float var_488[0x4] = zmm0_5
                            int64_t var_468_1 = zmm2_1.q
                            
                            while (true)
                                int64_t rcx_71 = sx.q(var_1e0_2[3])
                                int64_t* rax_88 = var_488[0].q
                                
                                if (rcx_71.d == rdx_39.d && var_1e0_2[0].q == r9_13
                                        && rax_88 == r13_3)
                                    break
                                
                                int64_t r12_2 = *(*rax_88 + rcx_71 * 0x10)
                                int32_t var_6d0
                                sub_140ba6ab0(arg2 + 0x368, &var_6d0, r12_2)
                                int64_t rax_90 = sx.q(var_6d0)
                                int64_t rdx_43
                                
                                if (rax_90.d == 0xffffffff)
                                    rdx_43 = 0
                                else
                                    rdx_43 = rax_90 * 0x60 + *(arg2 + 0x368)
                                
                                int64_t rax_91 = rdx_43 + 8
                                
                                if (rdx_43 == 0)
                                    rax_91 = 0
                                
                                if (rax_91 == 0)
                                    int32_t var_6cc
                                    sub_140ba6ab0(arg2 + 0x368, &var_6cc, *rbx_10)
                                    int64_t rax_92 = sx.q(var_6cc)
                                    void* const rax_95
                                    
                                    if (rax_92.d == 0xffffffff)
                                        rax_95 = nullptr
                                    else
                                        rax_95 = rax_92 * 0x60 + *(arg2 + 0x368)
                                    
                                    void* rsi_4 = rax_95 + 8
                                    
                                    if (rax_95 == 0)
                                        rsi_4 = nullptr
                                    
                                    if (rsi_4 != 0)
                                        int32_t r8_25 = *(rsi_4 + 0x28)
                                        var_718_1[0].q = rsi_4 + 0x10
                                        var_720.d = 0
                                        var_720:4.d = 1
                                        var_718_1[2] = 0xffffffff
                                        var_718_1[3].q = 0
                                        
                                        if (r8_25 != 0)
                                            sub_14059bdd0(&var_720)
                                            r8_25 = *(rsi_4 + 0x28)
                                        
                                        zmm0_5 = var_720.o
                                        var_1e8 = rsi_4
                                        float var_1e0_3[0x4] = zmm0_5
                                        var_718_1[2] = 0xffffffff << (r8_25.b & 0x1f)
                                        zmm0_5 = var_1e8.o
                                        var_718_1[3] = r8_25
                                        var_1d0.o = var_718_1
                                        uint32_t r14_5 = (var_718_1[2].q u>> 0x20).d
                                        zmm2_1 = _mm_unpackhi_pd(var_718_1, var_718_1[0].q)
                                        float var_4b0[0x4] = zmm0_5
                                        int64_t var_490_1 = zmm2_1.q
                                        
                                        while (true)
                                            int64_t rcx_78 = sx.q(var_1e0_3[3])
                                            int64_t* rax_96 = var_4b0[0].q
                                            
                                            if (rcx_78.d == r14_5 && var_1e0_3[0].q == rsi_4 + 0x10
                                                    && rax_96 == rsi_4)
                                                break
                                            
                                            int64_t rax_97 = *rax_96
                                            int64_t rbx_11 = r12_2
                                            int64_t var_620 = rbx_11
                                            int64_t var_4b8 = *(rax_97 + rcx_78 * 0x10)
                                            int32_t var_6c8
                                            sub_140ba6ab0(arg2 + 0x368, &var_6c8, r12_2)
                                            int64_t rax_98 = sx.q(var_6c8)
                                            int64_t rdx_49
                                            
                                            if (rax_98.d == 0xffffffff)
                                                rdx_49 = 0
                                            else
                                                rdx_49 = rax_98 * 0x60 + *(arg2 + 0x368)
                                            
                                            int64_t rax_99 = rdx_49 + 8
                                            
                                            if (rdx_49 == 0)
                                                rax_99 = 0
                                            
                                            if (rax_99 == 0)
                                                __builtin_memset(&var_1e8, 0, 0x2c)
                                                int64_t* var_3f8 = &var_620
                                                void** var_3f0_1 = &var_1e8
                                                int32_t var_1bc_1 = 0x80
                                                int32_t var_1b8_1 = 0xffffffff
                                                int32_t var_1b4_1 = 0
                                                int64_t var_1a8_1 = 0
                                                int32_t var_1a0_1 = 0
                                                void var_5b8
                                                sub_141d2be70(arg2 + 0x368, &var_5b8, &var_3f8, 
                                                    nullptr)
                                                int32_t var_1a0_2 = 0
                                                
                                                if (var_1a8_1 != 0)
                                                    sub_140a74f90(var_1a8_1)
                                                
                                                sub_14100e680(&var_1e8)
                                                rbx_11 = var_620
                                            
                                            int32_t var_6c4
                                            sub_140ba6ab0(arg2 + 0x368, &var_6c4, rbx_11)
                                            int64_t rax_100 = sx.q(var_6c4)
                                            void* const rcx_88
                                            
                                            if (rax_100.d == 0xffffffff)
                                                rcx_88 = nullptr
                                            else
                                                rcx_88 = rax_100 * 0x60 + *(arg2 + 0x368)
                                            
                                            void var_5b4
                                            sub_140946410(rcx_88 + 8, &var_5b4, &var_4b8, nullptr)
                                            var_1e0_3[2] &= not.d(var_4b0[3])
                                            sub_14059bdd0(&var_4b0[2])
                                        
                                        r13_3 = var_540_1
                                        rbx_10 = var_548_1
                                
                                var_1e0_2[2] &= not.d(var_488[3])
                                sub_14059bdd0(&var_488[2])
                                rdx_39 = var_550_1
                                r9_13 = r13_3 + 0x10
                            
                            var_718_1[2] &= not.d(var_460[3])
                            sub_14059bdd0(&var_460[2])
                            rdx_36 = var_758[0].q
                        
                        int32_t var_150_1 = 0
                        int64_t var_158
                        
                        if (var_158 != 0)
                            sub_140a74f90(var_158)
                        
                        sub_14095d460(&var_198, 0)
                        
                        if (var_178 != 0)
                            sub_140a74f90(var_178)
                        
                        int128_t* rcx_96 = var_198
                        
                        if (rcx_96 != 0)
                            sub_140a74f90(rcx_96)
                        
                        sub_1405ae080(&var_b8)
                        r15_3 = var_690
                        r13_1 = var_770_1.d
                        r12 = arg2
                    
                    if (r15_3 == 0)
                        goto label_141d3b45d
                    
                    sub_140a74f90(r15_3)
                    goto label_141d3b45d
                
                int64_t var_55c
                int32_t zmm6_3 = sub_140b58170(&var_55c, "Kill", 1)
                int64_t* rcx_104
                void* rcx_164
                
                if (*rbx_4 == var_55c)
                    int64_t* rcx_100 = rbx_4[1]
                    
                    if ((*(*rcx_100 + 8))(rcx_100) != 3 || rsi_1 == 0)
                        goto label_141d3b475
                    
                    int32_t var_3e0_1 = var_768_1
                    int32_t var_3d0_1 = var_764_1
                    void* var_3e8 = rdi_3
                    void* var_3d8 = r15_1
                    sub_141d2d270(&var_198, &var_3d8, &var_3e8, &rbx_4[2])
                    int64_t var_5d8 = 0
                    int32_t var_5d0_1 = 0
                    sub_141c56710(&var_5d8, rsi_1)
                    int64_t* rcx_103 = rbx_4[1]
                    int64_t rsi_5 = var_5d8
                    int64_t var_4e8 = rsi_5
                    int32_t var_4e0_1 = var_5d0_1
                    (*(*rcx_103 + 0x30))(rcx_103, &var_198, &var_4e8)
                    rcx_104 = var_138
                    float rax_115
                    int32_t* rbx_12
                    
                    if (rcx_104[1].b != 0)
                        rbx_12 = rcx_104[2]
                        rax_115 = rcx_104[3].d
                    else
                        var_758 = *var_198
                        rax_115 = var_758[2]
                        rbx_12 = var_758[0].q
                    
                    void* rdi_12 = &rbx_12[sx.q(rax_115) * 2]
                    
                    if (rbx_12 != rdi_12)
                        do
                            int64_t* rdx_56 = nullptr
                            int64_t* rcx_105 = r14_1[sx.q(*rbx_12)]
                            
                            if (*(rcx_105 + 0xc) u>= 2)
                                rdx_56 = rcx_105
                            
                            if (rdx_56 != 0 && not(zmm6_3 f>= *(var_4e8 + (sx.q(rbx_12[1]) << 2))))
                                zmm6_3, zmm7 = sub_1417abc90(*(r12 + 0x348), rdx_56)
                            
                            rbx_12 = &rbx_12[2]
                        while (rbx_12 != rdi_12)
                        
                        rcx_104 = var_138
                    
                    if (rsi_5 == 0)
                        goto label_141d3aef6
                    
                    rcx_40 = rsi_5
                label_141d3aee7:
                    sub_140a74f90(rcx_40)
                label_141d3aeec:
                    rcx_104 = var_138
                label_141d3aef6:
                    
                    if (rcx_104 != 0)
                        (**rcx_104)(rcx_104, 1)
                    
                    rcx_164 = &var_188
                    goto label_141d3b470
                
                int64_t var_564
                sub_140b58170(&var_564, "LinearVelocity", 1)
                int64_t rdi_13
                
                if (*rbx_4 == var_564)
                    int64_t* rcx_109 = rbx_4[1]
                    
                    if ((*(*rcx_109 + 8))(rcx_109) != 4 || rsi_1 == 0)
                        goto label_141d3b475
                    
                    int32_t var_3c0_1 = var_768_1
                    int32_t var_3b0_1 = var_764_1
                    void* var_3c8 = rdi_3
                    void* var_3b8 = r15_1
                    sub_141d2d270(&var_198, &var_3b8, &var_3c8, &rbx_4[2])
                    rdi_13 = 0
                    int64_t var_638 = 0
                    int32_t var_62c_1 = 0
                    
                    if (rsi_1 s> 0)
                        sub_140638a00(&var_638)
                        rdi_13 = var_638
                    
                    int64_t* rcx_112 = rbx_4[1]
                    int64_t var_4d8 = rdi_13
                    int32_t var_4d0_1 = rsi_1
                    (*(*rcx_112 + 0x30))(rcx_112, &var_198, &var_4d8)
                    rcx_104 = var_138
                    float rax_127
                    int32_t* r9_16
                    
                    if (rcx_104[1].b != 0)
                        r9_16 = rcx_104[2]
                        rax_127 = rcx_104[3].d
                    else
                        var_758 = *var_198
                        rax_127 = var_758[2]
                        r9_16 = var_758[0].q
                    
                    void* r11_5 = &r9_16[sx.q(rax_127) * 2]
                    
                    if (r9_16 == r11_5)
                        goto label_141d3aedf
                    
                    do
                        int64_t* rcx_113 = r14_1[sx.q(*r9_16)]
                        int64_t* rax_130 = nullptr
                        
                        if (*(rcx_113 + 0xc) u>= 2)
                            rax_130 = rcx_113
                        
                        if (rax_130 != 0)
                            int64_t rdx_60 = sx.q(rax_130[1].d)
                            void* r10_6 = *rax_130
                            
                            if (*(rdx_60 + *(r10_6 + 0x398)) == 4)
                                int64_t rcx_114 = var_4d8
                                int64_t rdx_61 = rdx_60 * 3
                                int64_t r8_34 = sx.q(r9_16[1]) * 3
                                int64_t rax_133 = *(r10_6 + 0x1b8)
                                float zmm0_7[0x4] = *(rax_133 + (rdx_61 << 2))
                                zmm0_7[0] = zmm0_7[0] f+ *(rcx_114 + (r8_34 << 2))
                                *(rax_133 + (rdx_61 << 2)) = zmm0_7[0]
                                *(rax_133 + (rdx_61 << 2) + 4) =
                                    *(rcx_114 + (r8_34 << 2) + 4) f+ *(rax_133 + (rdx_61 << 2) + 4)
                                zmm0_7 = *(rcx_114 + (r8_34 << 2) + 8)
                                zmm0_7[0] = zmm0_7[0] f+ *(rax_133 + (rdx_61 << 2) + 8)
                                *(rax_133 + (rdx_61 << 2) + 8) = zmm0_7[0]
                        
                        r9_16 = &r9_16[2]
                    while (r9_16 != r11_5)
                    
                    goto label_141d3aed8
                
                int64_t var_56c
                sub_140b58170(&var_56c, "AngularVelocity", 1)
                void var_118
                int64_t rbx_15
                
                if (*rbx_4 != var_56c)
                    int64_t var_574
                    sub_140b58170(&var_574, "SleepingThreshold", 1)
                    int64_t r15_5
                    
                    if (*rbx_4 == var_574)
                        int64_t* rcx_121 = rbx_4[1]
                        
                        if ((*(*rcx_121 + 8))(rcx_121) != 3 || rsi_1 == 0)
                            goto label_141d3b475
                        
                        int32_t var_370_1 = var_768_1
                        int32_t var_360_1 = var_764_1
                        void* var_378 = rdi_3
                        void* var_368 = r15_1
                        sub_141d2d270(&var_198, &var_368, &var_378, &rbx_4[2])
                        int64_t var_670 = 0
                        int32_t var_668_1 = 0
                        sub_141c56710(&var_670, rsi_1)
                        int64_t* rcx_124 = rbx_4[1]
                        r15_5 = var_670
                        int64_t var_6a0 = r15_5
                        (*(*rcx_124 + 0x30))(rcx_124, &var_198, &var_6a0)
                        rcx_104 = var_138
                        float rax_150
                        void* rdi_14
                        
                        if (rcx_104[1].b != 0)
                            rdi_14 = rcx_104[2]
                            rax_150 = rcx_104[3].d
                        else
                            var_758 = *var_198
                            rax_150 = var_758[2]
                            rdi_14 = var_758[0].q
                        
                        void* i_1 = rdi_14 + (sx.q(rax_150) << 3)
                        
                        if (rdi_14 == i_1)
                            goto label_141d3ad6b
                        
                        int64_t* r13_4 = var_730
                        int32_t* rdi_15 = rdi_14 + 4
                        
                        do
                            void* rsi_6 = nullptr
                            void* rcx_125 = r13_4[sx.q(rdi_15[-1])]
                            
                            if (*(rcx_125 + 0xc) u>= 2)
                                rsi_6 = rcx_125
                            
                            if (rsi_6 != 0 && var_668_1 s> 0)
                                int64_t r8_39 = sx.q(*(rsi_6 + 0x10))
                                int64_t r9_19 = *(*(r12 + 0x348) + 0x220)
                                void* rdx_67 = *(r9_19 + (r8_39 << 3))
                                
                                if (rdx_67 != 0)
                                    float zmm0_8[0x4] = *(var_6a0 + (sx.q(*rdi_15) << 2))
                                    
                                    if (not(zmm0_8[0] f== *(rdx_67 + 0x1c)))
                                        *(rdx_67 + 0x14) = zmm0_8[0]
                                        *(*(r9_19 + (r8_39 << 3)) + 0x18) =
                                            *(var_6a0 + (sx.q(*rdi_15) << 2))
                                else
                                    int64_t* rax_154 = j_sub_140a82f30(zx.q((rdx_67 + 0x30).d))
                                    int64_t* rbx_13 = rax_154
                                    
                                    if (rax_154 == 0)
                                        rbx_13 = nullptr
                                    else
                                        *rax_154 = 0x3f000000
                                        rax_154[1] = 0x3dcccccd
                                        rax_154[2].d = 0
                                        *(rax_154 + 0x14) = 0x3f800000
                                        rax_154[3] = 0x3f800000
                                        rax_154[4] = 0
                                        rax_154[5] = 0
                                    
                                    *(rbx_13 + 0x14) = *(var_6a0 + (sx.q(*rdi_15) << 2))
                                    rbx_13[3].d = *(var_6a0 + (sx.q(*rdi_15) << 2))
                                    *(*(*(r12 + 0x348) + 0x208) + (sx.q(*(rsi_6 + 0x10)) << 3)) =
                                        rbx_13
                                    int64_t** rax_159 =
                                        *(*(r12 + 0x348) + 0x220) + (sx.q(*(rsi_6 + 0x10)) << 3)
                                    
                                    if (rax_159 != &var_758)
                                        int64_t* rcx_133 = *rax_159
                                        *rax_159 = rbx_13
                                        rbx_13 = nullptr
                                        j_sub_140a74f90(rcx_133)
                                    
                                    j_sub_140a74f90(rbx_13)
                            
                            rdi_15 = &rdi_15[2]
                        while (&rdi_15[-1] != i_1)
                        
                        r15_5 = var_670
                        goto label_141d3ad5f
                    
                    int64_t var_57c
                    sub_140b58170(&var_57c, "DisableThreshold", 1)
                    
                    if (*rbx_4 == var_57c)
                        int64_t* rcx_139 = rbx_4[1]
                        
                        if ((*(*rcx_139 + 8))(rcx_139) != 3 || rsi_1 == 0)
                            goto label_141d3b475
                        
                        int32_t var_350_1 = var_768_1
                        int32_t var_340_1 = var_764_1
                        void* var_358 = rdi_3
                        void* var_348 = r15_1
                        sub_141d2d270(&var_198, &var_348, &var_358, &rbx_4[2])
                        int64_t var_680 = 0
                        r15_5 = 0
                        int32_t var_674_1 = 0
                        
                        if (rsi_1 s> 0)
                            sub_1406105e0(&var_680)
                            r15_5 = var_680
                        
                        int64_t* rcx_142 = rbx_4[1]
                        int64_t var_6c0 = r15_5
                        (*(*rcx_142 + 0x30))(rcx_142, &var_198, &var_6c0)
                        rcx_104 = var_138
                        float rax_171
                        void* rsi_7
                        
                        if (rcx_104[1].b != 0)
                            rsi_7 = rcx_104[2]
                            rax_171 = rcx_104[3].d
                        else
                            var_758 = *var_198
                            rax_171 = var_758[2]
                            rsi_7 = var_758[0].q
                        
                        void* i_2 = rsi_7 + (sx.q(rax_171) << 3)
                        
                        if (rsi_7 != i_2)
                            int64_t* r13_5 = var_730
                            int32_t* rsi_8 = rsi_7 + 4
                            
                            do
                                int64_t* rdi_16 = nullptr
                                int64_t* rcx_143 = r13_5[sx.q(rsi_8[-1])]
                                
                                if (*(rcx_143 + 0xc) u>= 2)
                                    rdi_16 = rcx_143
                                
                                if (rdi_16 != 0 && *(sx.q(rdi_16[1].d) + *(*rdi_16 + 0x398)) == 4
                                        && rsi_1 s> 0)
                                    int64_t r8_42 = sx.q(rdi_16[2].d)
                                    int64_t r9_21 = *(*(r12 + 0x348) + 0x220)
                                    void* rdx_77 = *(r9_21 + (r8_42 << 3))
                                    
                                    if (rdx_77 != 0)
                                        float zmm0_9[0x4] = *(var_6c0 + (sx.q(*rsi_8) << 2))
                                        
                                        if (not(zmm0_9[0] f== *(rdx_77 + 0x1c)))
                                            *(rdx_77 + 0x1c) = zmm0_9[0]
                                            *(*(r9_21 + (r8_42 << 3)) + 0x20) =
                                                *(var_6c0 + (sx.q(*rsi_8) << 2))
                                    else
                                        int64_t* rax_176 = j_sub_140a82f30(zx.q((rdx_77 + 0x30).d))
                                        int64_t* rbx_14 = rax_176
                                        
                                        if (rax_176 == 0)
                                            rbx_14 = nullptr
                                        else
                                            *rax_176 = 0x3f000000
                                            rax_176[1] = 0x3dcccccd
                                            rax_176[2].d = 0
                                            *(rax_176 + 0x14) = 0x3f800000
                                            rax_176[3] = 0x3f800000
                                            rax_176[4] = 0
                                            rax_176[5] = 0
                                        
                                        *(rbx_14 + 0x1c) = *(var_6c0 + (sx.q(*rsi_8) << 2))
                                        rbx_14[4].d = *(var_6c0 + (sx.q(*rsi_8) << 2))
                                        *(*(*(r12 + 0x348) + 0x208) + (sx.q(rdi_16[2].d) << 3)) =
                                            rbx_14
                                        int64_t** rax_181 =
                                            *(*(r12 + 0x348) + 0x220) + (sx.q(rdi_16[2].d) << 3)
                                        
                                        if (rax_181 != &var_758)
                                            int64_t* rcx_152 = *rax_181
                                            *rax_181 = rbx_14
                                            rbx_14 = nullptr
                                            j_sub_140a74f90(rcx_152)
                                        
                                        j_sub_140a74f90(rbx_14)
                                
                                rsi_8 = &rsi_8[2]
                            while (&rsi_8[-1] != i_2)
                            
                            r15_5 = var_680
                        label_141d3ad5f:
                            rcx_104 = var_138
                            r13_1 = var_770_1.d
                        
                    label_141d3ad6b:
                        
                        if (r15_5 == 0)
                            goto label_141d3aef6
                        
                        rcx_40 = r15_5
                        goto label_141d3aee7
                    
                    int64_t var_584
                    sub_140b58170(&var_584, "InternalClusterStrain", 1)
                    
                    if (*rbx_4 == var_584)
                        int64_t* rcx_158 = rbx_4[1]
                        
                        if ((*(*rcx_158 + 8))(rcx_158) != 3 || rsi_1 == 0)
                            goto label_141d3b475
                        
                        int32_t var_330_1 = var_768_1
                        int32_t var_320_1 = var_764_1
                        void* var_338 = rdi_3
                        void* var_328 = r15_1
                        sub_141d2d270(&var_198, &var_328, &var_338, &rbx_4[2])
                        int64_t var_648 = 0
                        int32_t var_640_1 = 0
                        sub_141c56710(&var_648, rsi_1)
                        int64_t* rcx_161 = rbx_4[1]
                        rdi_13 = var_648
                        int64_t var_4c8 = rdi_13
                        int32_t var_4c0_1 = var_640_1
                        (*(*rcx_161 + 0x30))(rcx_161, &var_198, &var_4c8)
                        rcx_104 = var_138
                        float rax_193
                        int32_t* r8_45
                        
                        if (rcx_104[1].b != 0)
                            r8_45 = rcx_104[2]
                            rax_193 = rcx_104[3].d
                        else
                            var_758 = *var_198
                            rax_193 = var_758[2]
                            r8_45 = var_758[0].q
                        
                        void* r10_7 = &r8_45[sx.q(rax_193) * 2]
                        
                        if (r8_45 != r10_7)
                            do
                                int64_t* rcx_162 = r14_1[sx.q(*r8_45)]
                                int64_t* rax_196 = nullptr
                                
                                if (*(rcx_162 + 0xc) u>= 3)
                                    rax_196 = rcx_162
                                
                                if (rax_196 != 0)
                                    int64_t r9_23 = sx.q(rax_196[1].d)
                                    void* rdx_86 = *rax_196
                                    
                                    if (*(r9_23 + *(rdx_86 + 0x398)) == 4)
                                        int64_t rdx_87 = *(rdx_86 + 0x4e8)
                                        float zmm0_10[0x4] = *(var_4c8 + (sx.q(r8_45[1]) << 2))
                                        zmm0_10[0] = zmm0_10[0] f+ *(rdx_87 + (r9_23 << 2))
                                        *(rdx_87 + (r9_23 << 2)) = zmm0_10[0]
                                
                                r8_45 = &r8_45[2]
                            while (r8_45 != r10_7)
                            
                        label_141d3aed8:
                            rcx_104 = var_138
                        
                    label_141d3aedf:
                        
                        if (rdi_13 == 0)
                            goto label_141d3aef6
                        
                        rcx_40 = rdi_13
                        goto label_141d3aee7
                    
                    int64_t var_530
                    sub_140b58170(&var_530, "CollisionGroup", 1)
                    
                    if (*rbx_4 != var_530)
                        int64_t var_594
                        sub_140b58170(&var_594, "PositionStatic", 1)
                        
                        if (*rbx_4 != var_594)
                            int64_t var_528
                            sub_140b58170(&var_528, "PositionTarget", 1)
                            
                            if (*rbx_4 != var_528)
                                int64_t var_520
                                sub_140b58170(&var_520, "PositionAnimated", 1)
                                
                                if (*rbx_4 == var_520)
                                    int64_t* rcx_195 = rbx_4[1]
                                    
                                    if ((*(*rcx_195 + 8))(rcx_195) != 2 || rsi_1 == 0)
                                        goto label_141d3b475
                                    
                                    int64_t rsi_11 = sx.q(var_764_1)
                                    int32_t var_270_1 = rsi_11.d
                                    void* var_288 = rdi_3
                                    int32_t var_280_1 = var_768_1
                                    void* var_278 = r15_1
                                    sub_141d2d270(&var_128, &var_278, &var_288, &rbx_4[2])
                                    rdi_8 = 0
                                    int64_t var_5e8 = 0
                                    int32_t var_5dc_1 = 0
                                    int32_t r8_55 = *(arg3 + 0x18)
                                    
                                    if (r8_55 s> 0)
                                        sub_1405a4cf0(&var_5e8)
                                        rdi_8 = var_5e8
                                    
                                    void* rdx_106 = r15_1 + (rsi_11 << 3)
                                    void* rcx_198 = r15_1
                                    
                                    if (r15_1 != rdx_106)
                                        do
                                            int64_t rax_230 = sx.q(*rcx_198)
                                            rcx_198 += 8
                                            *(rdi_8 + (rax_230 << 2)) = 0
                                        while (rcx_198 != rdx_106)
                                    
                                    int32_t var_260_1 = r8_55
                                    int64_t var_268
                                    r8_12 = &var_268
                                    var_268 = rdi_8
                                    goto label_141d3b435
                                
                                int64_t var_58c
                                sub_140b58170(&var_58c, "DynamicConstraint", 1)
                                
                                if (*rbx_4 == var_58c)
                                    int64_t* rcx_203 = rbx_4[1]
                                    (*(*rcx_203 + 8))(rcx_203)
                                    goto label_141d3b475
                                
                                rdi_1 = var_778
                                rcx_172 = var_770_1.d
                            else
                                int64_t* rcx_185 = rbx_4[1]
                                
                                if ((*(*rcx_185 + 8))(rcx_185) == 4 && rsi_1 != 0)
                                    int64_t rsi_10 = sx.q(var_764_1)
                                    int32_t var_2a0_1 = rsi_10.d
                                    void* var_2b8 = rdi_3
                                    int32_t var_2b0_1 = var_768_1
                                    void* var_2a8 = r15_1
                                    sub_141d2d270(&var_128, &var_2a8, &var_2b8, &rbx_4[2])
                                    int64_t rdi_18 = 0
                                    int64_t var_5f8 = 0
                                    int32_t var_5ec_1 = 0
                                    int32_t r10_8 = *(arg3 + 0x18)
                                    
                                    if (r10_8 s> 0)
                                        sub_140638a00(&var_5f8)
                                        rdi_18 = var_5f8
                                    
                                    void* r8_52 = r15_1 + (rsi_10 << 3)
                                    void* rdx_100 = r15_1
                                    
                                    if (r15_1 != r8_52)
                                        int32_t var_65c_1 = 0x7f7fffff
                                        int32_t var_658_1 = 0x7f7fffff
                                        
                                        do
                                            int64_t rax_222 = sx.q(*rdx_100)
                                            rdx_100 += 8
                                            int64_t rcx_188 = rax_222 * 3
                                            *(rdi_18 + (rcx_188 << 2)) = 0x7f7fffff.q
                                            *(rdi_18 + (rcx_188 << 2) + 8) = 0x7f7fffff
                                        while (rdx_100 != r8_52)
                                    
                                    int64_t* rcx_189 = rbx_4[1]
                                    int64_t var_298 = rdi_18
                                    int32_t var_290_1 = r10_8
                                    (*(*rcx_189 + 0x30))(rcx_189, &var_128, &var_298)
                                    
                                    if (rdi_18 != 0)
                                        sub_140a74f90(rdi_18)
                                    
                                    if (var_c8 != 0)
                                        (**var_c8)(var_c8, 1)
                                    
                                    sub_1405ae080(&var_118)
                                
                                rbx_15 = sx.q(r13_1)
                                rcx_172 = (rbx_15 + 1).d
                                var_770_1.d = rcx_172
                                
                                if (rcx_172 s<= var_770_1:4.d)
                                    rdi_1 = var_778
                                    *(rdi_1 + (rbx_15 << 2)) = var_760_1
                                else
                                    sub_1405a4cf0(&var_778)
                                    rdi_1 = var_778
                                    *(rdi_1 + (rbx_15 << 2)) = var_760_1
                                    rcx_172 = var_770_1.d
                        else
                            int64_t* rcx_175 = rbx_4[1]
                            
                            if ((*(*rcx_175 + 8))(rcx_175) == 2 && rsi_1 != 0)
                                int64_t rsi_9 = sx.q(var_764_1)
                                int32_t var_2d0_1 = rsi_9.d
                                void* var_2e8 = rdi_3
                                int32_t var_2e0_1 = var_768_1
                                void* var_2d8 = r15_1
                                sub_141d2d270(&var_128, &var_2d8, &var_2e8, &rbx_4[2])
                                int64_t rdi_17 = 0
                                int64_t var_5c8 = 0
                                int32_t var_5bc_1 = 0
                                int32_t r8_49 = *(arg3 + 0x18)
                                
                                if (r8_49 s> 0)
                                    sub_1405a4cf0(&var_5c8)
                                    rdi_17 = var_5c8
                                
                                void* rdx_94 = r15_1 + (rsi_9 << 3)
                                void* rcx_178 = r15_1
                                
                                if (r15_1 != rdx_94)
                                    do
                                        int64_t rax_214 = sx.q(*rcx_178)
                                        rcx_178 += 8
                                        *(rdi_17 + (rax_214 << 2)) = 0
                                    while (rcx_178 != rdx_94)
                                
                                int64_t* rcx_179 = rbx_4[1]
                                int32_t var_2c0_1 = r8_49
                                int64_t var_2c8 = rdi_17
                                (*(*rcx_179 + 0x30))(rcx_179, &var_128, &var_2c8, 0)
                                
                                if (rdi_17 != 0)
                                    sub_140a74f90(rdi_17)
                                
                                if (var_c8 != 0)
                                    (**var_c8)(var_c8, 1)
                                
                                sub_1405ae080(&var_118)
                            
                            rbx_15 = sx.q(r13_1)
                            rcx_172 = (rbx_15 + 1).d
                            var_770_1.d = rcx_172
                            
                            if (rcx_172 s<= var_770_1:4.d)
                                rdi_1 = var_778
                                *(rdi_1 + (rbx_15 << 2)) = var_760_1
                            else
                                sub_1405a4cf0(&var_778)
                                rdi_1 = var_778
                                *(rdi_1 + (rbx_15 << 2)) = var_760_1
                                rcx_172 = var_770_1.d
                    else
                        int64_t* rcx_166 = rbx_4[1]
                        
                        if ((*(*rcx_166 + 8))(rcx_166) == 2 && rsi_1 != 0)
                            int32_t var_310_1 = var_768_1
                            int32_t var_300_1 = var_764_1
                            void* var_318 = rdi_3
                            void* var_308 = r15_1
                            sub_141d2d270(&var_128, &var_308, &var_318, &rbx_4[2])
                            int64_t var_2f8 = *(arg3 + 0x338)
                            int64_t* rcx_169 = rbx_4[1]
                            int32_t var_2f0_1 = *(arg3 + 0x18)
                            (*(*rcx_169 + 0x30))(rcx_169, &var_128, &var_2f8)
                            
                            if (var_c8 != 0)
                                (**var_c8)(var_c8, 1)
                            
                            sub_1405ae080(&var_118)
                        
                        rbx_15 = sx.q(r13_1)
                        rcx_172 = (rbx_15 + 1).d
                        var_770_1.d = rcx_172
                        
                        if (rcx_172 s<= var_770_1:4.d)
                            rdi_1 = var_778
                            *(rdi_1 + (rbx_15 << 2)) = var_760_1
                        else
                            sub_1405a4cf0(&var_778)
                            rdi_1 = var_778
                            *(rdi_1 + (rbx_15 << 2)) = var_760_1
                            rcx_172 = var_770_1.d
                else
                    int64_t* rcx_116 = rbx_4[1]
                    
                    if ((*(*rcx_116 + 8))(rcx_116) != 4 || rsi_1 == 0)
                        goto label_141d3b475
                    
                    int32_t var_3a0_1 = var_768_1
                    int32_t var_390_1 = var_764_1
                    void* var_3a8 = rdi_3
                    void* var_398 = r15_1
                    sub_141d2d270(&var_128, &var_398, &var_3a8, &rbx_4[2])
                    int64_t var_388 = *(arg3 + 0x1d0)
                    int64_t* rcx_119 = rbx_4[1]
                    int32_t var_380_1 = *(arg3 + 0x18)
                    (*(*rcx_119 + 0x30))(rcx_119, &var_128, &var_388)
                label_141d3b45d:
                    
                    if (var_c8 != 0)
                        (**var_c8)(var_c8, 1)
                    
                    rcx_164 = &var_118
                label_141d3b470:
                    sub_1405ae080(rcx_164)
                label_141d3b475:
                    rbx_15 = sx.q(r13_1)
                    rcx_172 = (rbx_15 + 1).d
                    var_770_1.d = rcx_172
                    
                    if (rcx_172 s> var_770_1:4.d)
                        sub_1405a4cf0(&var_778)
                        rcx_172 = var_770_1.d
                    
                    rdi_1 = var_778
                    *(rdi_1 + (rbx_15 << 2)) = var_760_1
                var_760_1 += 1
                rax_2 = var_650_1 + 1
                r14_1 = var_730
                rsi_1 = var_728_1
                r15_1 = var_6e0
                result_2 = result_1
                var_650_1 = rax_2
                
                if (rax_2 s>= rbx_1)
                    break
                
                r13_1 = var_770_1.d
        
        result = zx.q(rcx_172 - 1)
        int64_t rbx_16 = sx.q(result.d)
        
        if (result.d s>= 0)
            int64_t temp0_9
            
            do
                result = sub_141d40ab0(result_1, *(rdi_1 + (rbx_16 << 2)), 1, 1)
                temp0_9 = rbx_16
                rbx_16 -= 1
            while (temp0_9 - 1 s>= 0)
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)
        
        void* rcx_206 = var_6f0
        
        if (rcx_206 != 0)
            result = sub_140a74f90(rcx_206)
        
        if (r14_1 != 0)
            result = sub_140a74f90(r14_1)
        
        if (rdi_1 != 0)
            result = sub_140a74f90(rdi_1)

__security_check_cookie(rax_1 ^ &var_798)
return result
