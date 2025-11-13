// 函数: sub_142b242a0
// 地址: 0x142b242a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_150 = -2
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* r14 = arg4
void* rdi = arg3
int64_t* r8 = arg1
int64_t result = arg6
int64_t* result_3 = result
int32_t* result_9 = arg8
int32_t* result_1 = result_9

if (*result_9 s<= 0)
    int64_t r10_1 = sx.q(*(rdi + 0x18))
    int32_t var_1b0_1 = r10_1.d
    int32_t r9 = *(&data_14366afe0 + (r10_1 s>> 0xc << 2))
    
    if (test_bit(r10_1.d, 0xa))
        r9 |= 8
    
    result = zx.q(not.d((1 << arg5) - 1))
    int32_t r9_1 = r9 & result.d
    
    if (r9_1 != 0)
        char* r12_1 = nullptr
        int32_t rax_7 = r10_1.d & 0xc
        int32_t var_188_1
        
        if (rax_7 != 0)
            var_188_1 = *(rdi + 0x1c) + 1
        else
            var_188_1 = 0
        
        int32_t result_8 = 0x3f3f
        
        if ((r10_1.d & 0x600) == 0x200)
            result_8 = 0xff3f
        
        void var_7b
        void* result_7 = &var_7b
        int32_t var_80_1 = 0x28
        char var_7c_1 = 0
        uint32_t var_50_1 = 0
        char var_4c_1 = 1
        void var_bb
        void* result_6 = &var_bb
        int32_t var_c0_1 = 0x28
        char var_bc_1 = 0
        uint32_t result_12 = 0
        char var_8c_1 = 1
        void var_13b
        void* result_4 = &var_13b
        int32_t var_140_1 = 0x28
        char var_13c_1 = 0
        uint32_t var_110_1 = 0
        char var_10c_1 = 1
        void var_fb
        void* result_5 = &var_fb
        int32_t var_100_1 = 0x28
        char var_fc_1 = 0
        uint32_t var_d0_1 = 0
        char var_cc_1 = 1
        int32_t var_184_1 = 0
        int32_t var_1b4_1 = 0
        int32_t rsi_1 = 0
        int32_t var_1b8_1 = 0
        int32_t r13_1 = 0
        int32_t var_198_1 = 0
        int32_t var_1a8_1 = 0
        uint32_t var_180_1 = 0
        uint32_t result_2 = 0
        
        while (true)
            if (r8[0x2e].d == r8[3].d)
                r8[3].d = 0
                r8[0x2e].d = 0
            
            int512_t zmm0_1
            result, zmm0_1 = sub_142aa4f90(r8, result_9)
            int32_t r15_1 = result.d
            int32_t rbx_2 = (result s>> 0x20).d
            
            if (rbx_2 u< var_188_1 && rbx_2 u> 0x2000000)
                uint32_t r8_1 = var_d0_1
                
                if (var_1a8_1 != 0)
                    int32_t r15_3 = var_1a8_1 - 1
                    
                    if (r15_3 s>= 0x71)
                        uint32_t i_18 = r15_3 u/ 0x71
                        uint64_t i_15 = zx.q(i_18)
                        r15_3 += i_18 * 0xffffff8f
                        uint64_t i
                        
                        do
                            if (r8_1 s< var_100_1)
                            label_142b244ff:
                                var_d0_1 = r8_1 + 1
                                *(sx.q(r8_1) + result_5) = 0x8c
                                r8_1 = var_d0_1
                            else if (var_cc_1 != 0)
                                int32_t rdx_2 = var_100_1 * 2
                                
                                if (rdx_2 s< r8_1 + 2)
                                    rdx_2 = r8_1 + 2
                                
                                if (rdx_2 s< 0xc8)
                                    rdx_2 = 0xc8
                                
                                int64_t rax_17 = sub_142a46cb0(&result_5, rdx_2, r8_1)
                                r8_1 = var_d0_1
                                
                                if (rax_17 != 0)
                                    goto label_142b244ff
                                
                                var_cc_1 = rax_17.b
                            
                            i = i_15
                            i_15 -= 1
                        while (i != 1)
                    
                    if (r8_1 s< var_100_1)
                    label_142b24552:
                        var_d0_1 = r8_1 + 1
                        r15_3.b += 0x1c
                        *(sx.q(r8_1) + result_5) = r15_3.b
                        r8_1 = var_d0_1
                    else if (var_cc_1 != 0)
                        int32_t rdx_4 = var_100_1 * 2
                        
                        if (rdx_4 s< r8_1 + 2)
                            rdx_4 = r8_1 + 2
                        
                        if (rdx_4 s< 0xc8)
                            rdx_4 = 0xc8
                        
                        int64_t rax_20 = sub_142a46cb0(&result_5, rdx_4, r8_1)
                        r8_1 = var_d0_1
                        
                        if (rax_20 != 0)
                            goto label_142b24552
                        
                        var_cc_1 = rax_20.b
                    
                    var_1a8_1 = 0
                
                while (true)
                    if ((r9_1 & 0x20) != 0)
                        int64_t rcx_6 = *(arg3 + 0x20)
                        
                        if (rcx_6 != 0)
                            char r9_4 = *((zx.q(rbx_2) u>> 0x18) + rcx_6)
                            
                            if (r9_4 != 0 || rbx_2 u<= 1)
                                rbx_2 = (rbx_2 & 0xffffff) | zx.d(r9_4) << 0x18
                            else
                                rbx_2 = sub_142b27270(arg3, rbx_2)
                                r8_1 = var_d0_1
                        
                        if ((rbx_2 & 0xff000000) u>= 0x1b000000)
                            if (r8_1 s< var_100_1)
                                var_d0_1 = r8_1 + 1
                                *(sx.q(r8_1) + result_5) = 0x1b
                            else if (var_cc_1 != 0)
                                int32_t rdx_7 = var_100_1 * 2
                                
                                if (rdx_7 s< r8_1 + 2)
                                    rdx_7 = r8_1 + 2
                                
                                if (rdx_7 s< 0xc8)
                                    rdx_7 = 0xc8
                                
                                int64_t rax_30 = sub_142a46cb0(&result_5, rdx_7, r8_1)
                                
                                if (rax_30 != 0)
                                    r8_1 = var_d0_1
                                    var_d0_1 = r8_1 + 1
                                    *(sx.q(r8_1) + result_5) = 0x1b
                                else
                                    var_cc_1 = rax_30.b
                        
                        sub_142b24190(&result_5, rbx_2)
                    
                    do
                        int64_t rax_32
                        rax_32, zmm0_1 = sub_142aa4f90(arg1, result_1)
                        r15_1 = rax_32.d
                        result = rax_32 s>> 0x20
                        rbx_2 = result.d
                    while (result.d == 0)
                    
                    if (result.d u>= var_188_1)
                        break
                    
                    if (result.d u<= 0x2000000)
                        break
                    
                    r8_1 = var_d0_1
                
                r13_1 = var_198_1
                r12_1 = nullptr
                r14 = arg4
                rsi_1 = var_1b8_1
                rdi = arg3
            
            char r9_5 = r9_1.b
            
            if (rbx_2 u> 1 && (r9_5 & 2) != 0)
                uint64_t rax_34 = zx.q(rbx_2) u>> 0x18
                char rsi_3 = *(rax_34 + arg2)
                int64_t rcx_13 = *(rdi + 0x20)
                
                if (rcx_13 != 0)
                    char rdx_10 = *(rax_34 + rcx_13)
                    
                    if (rdx_10 != 0)
                        rbx_2 = (rbx_2 & 0xffffff) | zx.d(rdx_10) << 0x18
                    else
                        rbx_2 = sub_142b27270(rdi, rbx_2)
                
                uint32_t rdi_4 = rbx_2 u>> 0x18
                
                if (rsi_3 == 0 || rdi_4 != var_184_1 u>> 0x18)
                    if (var_184_1 != 0)
                        if (rbx_2 u>= var_184_1)
                            sub_142b23f20(r14, -1, zmm0_1)
                        else if (rdi_4 u> 2)
                            sub_142b23f20(r14, 3, zmm0_1)
                    
                    int32_t rax_40 = r14[3].d
                    
                    if (rax_40 s<= 0)
                        int32_t r8_5 = *(r14 + 0x14)
                        char rax_43
                        
                        if (r8_5 s>= r14[2].d)
                            rax_43 = (*(*r14 + 0x28))(r14, 1, r8_5)
                        
                        if (r8_5 s< r14[2].d || rax_43 != 0)
                            sx.q(*(r14 + 0x14))[r14[1]] = rdi_4.b
                        
                        *(r14 + 0x14) += 1
                    else
                        r14[3].d = rax_40 - 1
                    
                    int32_t rcx_19 = 0
                    
                    if (rsi_3 != 0)
                        rcx_19 = rbx_2
                    
                    var_184_1 = rcx_19
                
                result = zx.q(rbx_2 u>> 0x10)
                
                if (result.b != 0)
                    char var_194 = result.b
                    uint8_t rax_47 = (rbx_2 u>> 8).b
                    uint8_t var_193_1 = rax_47
                    char var_192_1 = rbx_2.b
                    uint64_t r8_6
                    
                    if (rax_47 != 0)
                        int32_t r8_7
                        r8_7.b = rbx_2.b != 0
                        r8_6 = zx.q(r8_7 + 2)
                    else
                        r8_6 = 1
                    
                    result = (*(*r14 + 8))(r14, &var_194, r8_6)
                
                if (arg7 == 0)
                    result = zx.q(r14[2].d)
                    
                    if (*(r14 + 0x14) s> result.d)
                        result = result_1
                        
                        if (*result s<= 0 && r14[1] == 0)
                            *result = 7
                        
                        break
                
                r9_5 = r9_1.b
                rsi_1 = var_1b8_1
            
            r8 = arg1
            rdi = arg3
            
            if (r15_1 != 0)
                int32_t rcx_21 = var_1b0_1
                
                if ((r9_5 & 4) != 0)
                    uint32_t r14_3 = r15_1 u>> 0x10
                    
                    if (r14_3 != 0)
                        if (r14_3 != 0x500 || (test_bit(rcx_21, 0xb) && rbx_2 == 0x2000000))
                            if (test_bit(rcx_21, 0xb))
                                uint32_t result_11
                                
                                if (rsi_1 == 0)
                                    result_11 = result_12
                                else
                                    char var_1b8_2 = (rsi_1 - 1).b
                                    rsi_1 = (rsi_1 - 1) s/ 0x21 * 0x21
                                    char rax_61 = var_1b8_2 - rsi_1.b
                                    char rdi_8
                                    
                                    if (var_180_1 u>= 0x500)
                                        rdi_8 = 0x45 - rax_61
                                    else
                                        rdi_8 = rax_61 + 5
                                    
                                    result_11 = result_12
                                    
                                    if (result_11 s< var_c0_1)
                                    label_142b249fe:
                                        result_12 = result_11 + 1
                                        *(sx.q(result_11) + result_6) = rdi_8
                                        result_11 = result_12
                                    else if (var_8c_1 != 0)
                                        int32_t rdx_25 = var_c0_1 * 2
                                        
                                        if (rdx_25 s< result_11 + 2)
                                            rdx_25 = result_11 + 2
                                        
                                        if (rdx_25 s< 0xc8)
                                            rdx_25 = 0xc8
                                        
                                        int64_t rax_63
                                        rax_63, zmm0_1 = sub_142a46cb0(&result_6, rdx_25, result_11)
                                        result_11 = result_12
                                        
                                        if (rax_63 != 0)
                                            goto label_142b249fe
                                        
                                        var_8c_1 = rax_63.b
                                    
                                    var_1b8_1 = rsi_1
                                    
                                    if (rsi_1 s> 0)
                                        uint64_t i_17 = zx.q((rsi_1 - 1) u/ 0x21 + 1)
                                        var_1b8_1 = rsi_1 + ((rsi_1 - 1) u/ 0x21 + 1) * 0xffffffdf
                                        uint64_t i_1
                                        
                                        do
                                            if (result_11 s< var_c0_1)
                                            label_142b24a7b:
                                                result_12 = result_11 + 1
                                                *(sx.q(result_11) + result_6) = 0x25
                                                result_11 = result_12
                                            else if (var_8c_1 != 0)
                                                int32_t rdx_30 = var_c0_1 * 2
                                                
                                                if (rdx_30 s< result_11 + 2)
                                                    rdx_30 = result_11 + 2
                                                
                                                if (rdx_30 s< 0xc8)
                                                    rdx_30 = 0xc8
                                                
                                                int64_t rax_67
                                                rax_67, zmm0_1 =
                                                    sub_142a46cb0(&result_6, rdx_30, result_11)
                                                result_11 = result_12
                                                
                                                if (rax_67 != 0)
                                                    goto label_142b24a7b
                                                
                                                var_8c_1 = rax_67.b
                                            
                                            i_1 = i_17
                                            i_17 -= 1
                                        while (i_1 != 1)
                                        rsi_1 = var_1b8_1
                                
                                if (rbx_2 - 1 u> 0x1ffffff)
                                    result, zmm0_1 = sub_142b240c0(&result_6, r14_3)
                                    var_180_1 = r14_3
                                else
                                    result = sx.q(result_2)
                                    uint32_t rcx_36
                                    
                                    if (result.d s< result_11 - 1)
                                        void* rdx_32 = result + result_6
                                        void* r8_14 = sx.q(result_11 - 1) + result_6
                                        
                                        do
                                            rcx_36 = zx.d(*rdx_32)
                                            result = zx.q(*r8_14)
                                            *rdx_32 = result.b
                                            rdx_32 += 1
                                            *r8_14 = rcx_36.b
                                            r8_14 -= 1
                                        while (rdx_32 u< r8_14)
                                        
                                        result_11 = result_12
                                    
                                    if (result_11 s< var_c0_1)
                                    label_142b24b2b:
                                        result_12 = result_11 + 1
                                        rcx_36.b = rbx_2 != 1
                                        rcx_36.b += 1
                                        result = result_6
                                        *(sx.q(result_11) + result) = rcx_36.b
                                        result_11 = result_12
                                    else if (var_8c_1 != 0)
                                        int32_t rdx_34 = var_c0_1 * 2
                                        
                                        if (rdx_34 s< result_11 + 2)
                                            rdx_34 = result_11 + 2
                                        
                                        if (rdx_34 s< 0xc8)
                                            rdx_34 = 0xc8
                                        
                                        result, rcx_36, zmm0_1 =
                                            sub_142a46cb0(&result_6, rdx_34, result_11)
                                        result_11 = result_12
                                        
                                        if (result != 0)
                                            goto label_142b24b2b
                                        
                                        var_8c_1 = result.b
                                    
                                    var_180_1 = 0
                                    result_2 = result_11
                            else
                                uint32_t result_14 = result_12
                                
                                if (rsi_1 != 0)
                                    int32_t rsi_4 = rsi_1 - 1
                                    
                                    if (rsi_4 s>= 0x21)
                                        uint32_t i_22 = rsi_4 u/ 0x21
                                        uint64_t i_16 = zx.q(i_22)
                                        rsi_4 += i_22 * 0xffffffdf
                                        uint64_t i_2
                                        
                                        do
                                            if (result_14 s< var_c0_1)
                                            label_142b2486d:
                                                result_12 = result_14 + 1
                                                *(sx.q(result_14) + result_6) = 0x25
                                                result_14 = result_12
                                            else if (var_8c_1 != 0)
                                                int32_t rdx_16 = var_c0_1 * 2
                                                
                                                if (rdx_16 s< result_14 + 2)
                                                    rdx_16 = result_14 + 2
                                                
                                                if (rdx_16 s< 0xc8)
                                                    rdx_16 = 0xc8
                                                
                                                int64_t rax_51
                                                rax_51, zmm0_1 =
                                                    sub_142a46cb0(&result_6, rdx_16, result_14)
                                                result_14 = result_12
                                                
                                                if (rax_51 != 0)
                                                    goto label_142b2486d
                                                
                                                var_8c_1 = rax_51.b
                                            
                                            i_2 = i_16
                                            i_16 -= 1
                                        while (i_2 != 1)
                                        r12_1 = nullptr
                                    
                                    char rdi_5
                                    
                                    if (r14_3 u>= 0x500)
                                        rdi_5 = 0x45 - rsi_4.b
                                    else
                                        rdi_5 = rsi_4.b + 5
                                    
                                    if (result_14 s< var_c0_1)
                                    label_142b248db:
                                        result_12 = result_14 + 1
                                        *(sx.q(result_14) + result_6) = rdi_5
                                        result_14 = result_12
                                    else if (var_8c_1 != 0)
                                        int32_t rdx_18 = var_c0_1 * 2
                                        
                                        if (rdx_18 s< result_14 + 2)
                                            rdx_18 = result_14 + 2
                                        
                                        if (rdx_18 s< 0xc8)
                                            rdx_18 = 0xc8
                                        
                                        int64_t rax_54
                                        rax_54, zmm0_1 = sub_142a46cb0(&result_6, rdx_18, result_14)
                                        result_14 = result_12
                                        
                                        if (rax_54 != 0)
                                            goto label_142b248db
                                        
                                        var_8c_1 = rax_54.b
                                    
                                    rsi_1 = 0
                                    var_1b8_1 = 0
                                
                                int32_t rcx_26
                                rcx_26.b = r14_3.b != 0
                                uint64_t rcx_27 = zx.q(rcx_26 + 1)
                                result = zx.q(rcx_27.d + result_14)
                                
                                if (result.d s<= var_c0_1)
                                    goto label_142b2494e
                                
                                if (var_8c_1 != 0)
                                    int32_t rdx_20 = var_c0_1 * 2
                                    int32_t rax_56 = result_14 + (rcx_27 << 1).d
                                    
                                    if (rdx_20 s< rax_56)
                                        rdx_20 = rax_56
                                    
                                    if (rdx_20 s< 0xc8)
                                        rdx_20 = 0xc8
                                    
                                    result, zmm0_1 = sub_142a46cb0(&result_6, rdx_20, result_14)
                                    
                                    if (result != 0)
                                        result_14 = result_12
                                    label_142b2494e:
                                        result_12 = result_14 + 1
                                        result = result_6
                                        sx.q(result_14)[result] = (r14_3 u>> 8).b
                                        
                                        if (r14_3.b != 0)
                                            char* result_13 = sx.q(result_12)
                                            result_12 = result_13.d + 1
                                            result = result_6
                                            result_13[result] = r14_3.b
                                    else
                                        var_8c_1 = result.b
                            
                            rcx_21 = var_1b0_1
                        else
                            rsi_1 += 1
                            var_1b8_1 = rsi_1
                    
                    r14 = arg4
                
                if ((r9_1.b & 8) != 0)
                    if ((rcx_21 & 0xfffff000) != 0)
                        result.b = r15_1 u<= 0xffff
                    else
                        result.b = rbx_2 == 0
                    
                    if (result.d == 0)
                        result = zx.q(r15_1 u>> 8)
                        uint32_t rdi_9 = zx.d(result.b)
                        
                        if ((rdi_9.b & 0xc0) != 0 || rdi_9 u<= 1)
                            uint32_t r8_16 = var_50_1
                            
                            if (test_bit(rcx_21, 8))
                                if (var_1b4_1 != 0)
                                    rbx_2 = var_1b4_1 - 1
                                    
                                    if (rbx_2 s>= 0xd)
                                        uint32_t i_23 = rbx_2 u/ 0xd
                                        uint64_t i_10 = zx.q(i_23)
                                        result = zx.q(i_23 * 0xfffffff3)
                                        int32_t var_1b4_4 = rbx_2 + result.d
                                        uint64_t i_3
                                        
                                        do
                                            if (r8_16 s< var_80_1)
                                            label_142b24d86:
                                                var_50_1 = r8_16 + 1
                                                result = result_7
                                                *(sx.q(r8_16) + result) = 0x30
                                                r8_16 = var_50_1
                                            else if (var_4c_1 != 0)
                                                int32_t rdx_44 = var_80_1 * 2
                                                
                                                if (rdx_44 s< r8_16 + 2)
                                                    rdx_44 = r8_16 + 2
                                                
                                                if (rdx_44 s< 0xc8)
                                                    rdx_44 = 0xc8
                                                
                                                result, zmm0_1 =
                                                    sub_142a46cb0(&result_7, rdx_44, r8_16)
                                                r8_16 = var_50_1
                                                
                                                if (result != 0)
                                                    goto label_142b24d86
                                                
                                                var_4c_1 = result.b
                                            
                                            i_3 = i_10
                                            i_10 -= 1
                                        while (i_3 != 1)
                                        rsi_1 = var_1b8_1
                                        rbx_2 = var_1b4_4
                                    
                                    if (r8_16 s< var_80_1)
                                    label_142b24df3:
                                        var_50_1 = r8_16 + 1
                                        rbx_2.b += 3
                                        rbx_2.b <<= 4
                                        result = result_7
                                        sx.q(r8_16)[result] = rbx_2.b
                                        r8_16 = var_50_1
                                    else if (var_4c_1 != 0)
                                        int32_t rdx_46 = var_80_1 * 2
                                        
                                        if (rdx_46 s< r8_16 + 2)
                                            rdx_46 = r8_16 + 2
                                        
                                        if (rdx_46 s< 0xc8)
                                            rdx_46 = 0xc8
                                        
                                        result, zmm0_1 = sub_142a46cb0(&result_7, rdx_46, r8_16)
                                        r8_16 = var_50_1
                                        
                                        if (result != 0)
                                            goto label_142b24df3
                                        
                                        var_4c_1 = result.b
                                    
                                    var_1b4_1 = 0
                                
                                if (rdi_9 u> 1)
                                    result = zx.q(rdi_9 u>> 6)
                                    rdi_9 = (3 - result.d) << 4
                            else
                                if (var_1b4_1 != 0 && (rdi_9 u> 1 || r8_16 != 0))
                                    int32_t rcx_40 = var_1b4_1 - 1
                                    
                                    if (rcx_40 s>= 7)
                                        uint32_t i_19 = rcx_40 u/ 7
                                        uint64_t i_9 = zx.q(i_19)
                                        result = zx.q(i_19 * 0xfffffff9)
                                        int32_t rcx_41 = rcx_40 + result.d
                                        uint64_t i_4
                                        
                                        do
                                            if (r8_16 s< var_80_1)
                                            label_142b24c56:
                                                var_50_1 = r8_16 + 1
                                                result = result_7
                                                *(sx.q(r8_16) + result) = 0x70
                                                r8_16 = var_50_1
                                            else if (var_4c_1 != 0)
                                                int32_t rdx_39 = var_80_1 * 2
                                                
                                                if (rdx_39 s< r8_16 + 2)
                                                    rdx_39 = r8_16 + 2
                                                
                                                if (rdx_39 s< 0xc8)
                                                    rdx_39 = 0xc8
                                                
                                                result, zmm0_1 =
                                                    sub_142a46cb0(&result_7, rdx_39, r8_16)
                                                r8_16 = var_50_1
                                                
                                                if (result != 0)
                                                    goto label_142b24c56
                                                
                                                var_4c_1 = result.b
                                            
                                            i_4 = i_9
                                            i_9 -= 1
                                        while (i_4 != 1)
                                        r14 = arg4
                                        rcx_40 = rcx_41
                                    
                                    if (rdi_9 u> 1)
                                        rbx_2 = 0xd - rcx_40
                                    else
                                        rbx_2 = rcx_40 + 1
                                    
                                    if (r8_16 s< var_80_1)
                                    label_142b24cd5:
                                        var_50_1 = r8_16 + 1
                                        rbx_2.b <<= 4
                                        result = result_7
                                        sx.q(r8_16)[result] = rbx_2.b
                                        r8_16 = var_50_1
                                    else if (var_4c_1 != 0)
                                        int32_t rdx_41 = var_80_1 * 2
                                        
                                        if (rdx_41 s< r8_16 + 2)
                                            rdx_41 = r8_16 + 2
                                        
                                        if (rdx_41 s< 0xc8)
                                            rdx_41 = 0xc8
                                        
                                        result, zmm0_1 = sub_142a46cb0(&result_7, rdx_41, r8_16)
                                        r8_16 = var_50_1
                                        
                                        if (result != 0)
                                            goto label_142b24cd5
                                        
                                        var_4c_1 = result.b
                                    
                                    var_1b4_1 = 0
                                
                                if (rdi_9 u> 1)
                                    rdi_9 = (rdi_9 u>> 2 & 0x3ffffff0) + 0xd0
                            
                            if (r8_16 s< var_80_1)
                                goto label_142b24e70
                            
                            if (var_4c_1 != 0)
                                int32_t rdx_48 = var_80_1 * 2
                                
                                if (rdx_48 s< r8_16 + 2)
                                    rdx_48 = r8_16 + 2
                                
                                if (rdx_48 s< 0xc8)
                                    rdx_48 = 0xc8
                                
                                result, zmm0_1 = sub_142a46cb0(&result_7, rdx_48, r8_16)
                                
                                if (result != 0)
                                    r8_16 = var_50_1
                                label_142b24e70:
                                    var_50_1 = r8_16 + 1
                                    result = result_7
                                    sx.q(r8_16)[result] = rdi_9.b
                                else
                                    var_4c_1 = result.b
                        else
                            var_1b4_1 += 1
                
                if ((r9_1.b & 0x10) != 0)
                    result = zx.q(result_8)
                    int32_t rdi_14 = r15_1 & result.d
                    
                    if (rdi_14 != 0x500)
                        uint32_t r8_22
                        
                        if (not(test_bit(result.d, 0xf)))
                            r8_22 = var_110_1
                            
                            if (r13_1 != 0)
                                int32_t r13_2 = r13_1 - 1
                                
                                if (r13_2 s>= 0x61)
                                    uint32_t i_20 = r13_2 u/ 0x61
                                    uint64_t i_11 = zx.q(i_20)
                                    r13_2 += i_20 * 0xffffff9f
                                    uint64_t i_5
                                    
                                    do
                                        if (r8_22 s< var_140_1)
                                        label_142b24f2d:
                                            var_110_1 = r8_22 + 1
                                            *(sx.q(r8_22) + result_4) = 0x65
                                            r8_22 = var_110_1
                                        else if (var_10c_1 != 0)
                                            int32_t rdx_51 = var_140_1 * 2
                                            
                                            if (rdx_51 s< r8_22 + 2)
                                                rdx_51 = r8_22 + 2
                                            
                                            if (rdx_51 s< 0xc8)
                                                rdx_51 = 0xc8
                                            
                                            int64_t rax_88
                                            rax_88, zmm0_1 = sub_142a46cb0(&result_4, rdx_51, r8_22)
                                            r8_22 = var_110_1
                                            
                                            if (rax_88 != 0)
                                                goto label_142b24f2d
                                            
                                            var_10c_1 = rax_88.b
                                        
                                        i_5 = i_11
                                        i_11 -= 1
                                    while (i_5 != 1)
                                    r14 = arg4
                                
                                char rbx_5
                                
                                if (rdi_14 u>= 0x500)
                                    rbx_5 = -0x3b - r13_2.b
                                else
                                    rbx_5 = r13_2.b + 5
                                
                                if (r8_22 s< var_140_1)
                                label_142b24f9e:
                                    var_110_1 = r8_22 + 1
                                    *(sx.q(r8_22) + result_4) = rbx_5
                                    r8_22 = var_110_1
                                else if (var_10c_1 != 0)
                                    int32_t rdx_53 = var_140_1 * 2
                                    
                                    if (rdx_53 s< r8_22 + 2)
                                        rdx_53 = r8_22 + 2
                                    
                                    if (rdx_53 s< 0xc8)
                                        rdx_53 = 0xc8
                                    
                                    int64_t rax_91
                                    rax_91, zmm0_1 = sub_142a46cb0(&result_4, rdx_53, r8_22)
                                    r8_22 = var_110_1
                                    
                                    if (rax_91 != 0)
                                        goto label_142b24f9e
                                    
                                    var_10c_1 = rax_91.b
                                
                                r13_1 = 0
                                var_198_1 = 0
                            
                            if (rdi_14 u> 0x500)
                                rdi_14 += 0xc000
                        else if ((var_1b0_1 & 0x100) != 0)
                            if (rdi_14 u> 0x100)
                                if (r15_1 u<= 0xffff)
                                    rdi_14 += 0x4000
                                else
                                    rdi_14 ^= 0xc000
                                    
                                    if (rdi_14 u< 0xc500)
                                        rdi_14 -= 0x4000
                            
                            r8_22 = var_110_1
                            
                            if (r13_1 != 0)
                                int32_t r13_4 = r13_1 - 1
                                
                                if (r13_4 s>= 0x21)
                                    uint32_t i_25 = r13_4 u/ 0x21
                                    uint64_t i_13 = zx.q(i_25)
                                    r13_4 += i_25 * 0xffffffdf
                                    uint64_t i_6
                                    
                                    do
                                        if (r8_22 s< var_140_1)
                                        label_142b2517d:
                                            var_110_1 = r8_22 + 1
                                            *(sx.q(r8_22) + result_4) = 0xa5
                                            r8_22 = var_110_1
                                        else if (var_10c_1 != 0)
                                            int32_t rdx_61 = var_140_1 * 2
                                            
                                            if (rdx_61 s< r8_22 + 2)
                                                rdx_61 = r8_22 + 2
                                            
                                            if (rdx_61 s< 0xc8)
                                                rdx_61 = 0xc8
                                            
                                            int64_t rax_102
                                            rax_102, zmm0_1 =
                                                sub_142a46cb0(&result_4, rdx_61, r8_22)
                                            r8_22 = var_110_1
                                            
                                            if (rax_102 != 0)
                                                goto label_142b2517d
                                            
                                            var_10c_1 = rax_102.b
                                        
                                        i_6 = i_13
                                        i_13 -= 1
                                    while (i_6 != 1)
                                    r14 = arg4
                                
                                char rbx_7
                                
                                if (rdi_14 u>= 0x8500)
                                    rbx_7 = -0x3b - r13_4.b
                                else
                                    rbx_7 = r13_4.b - 0x7b
                                
                                if (r8_22 s< var_140_1)
                                label_142b251f1:
                                    var_110_1 = r8_22 + 1
                                    *(sx.q(r8_22) + result_4) = rbx_7
                                    r8_22 = var_110_1
                                else if (var_10c_1 != 0)
                                    int32_t rdx_63 = var_140_1 * 2
                                    
                                    if (rdx_63 s< r8_22 + 2)
                                        rdx_63 = r8_22 + 2
                                    
                                    if (rdx_63 s< 0xc8)
                                        rdx_63 = 0xc8
                                    
                                    int64_t rax_105
                                    rax_105, zmm0_1 = sub_142a46cb0(&result_4, rdx_63, r8_22)
                                    r8_22 = var_110_1
                                    
                                    if (rax_105 != 0)
                                        goto label_142b251f1
                                    
                                    var_10c_1 = rax_105.b
                                
                                r13_1 = 0
                                var_198_1 = 0
                        else
                            r8_22 = var_110_1
                            
                            if (r13_1 != 0)
                                int32_t r13_3 = r13_1 - 1
                                
                                if (r13_3 s>= 0x21)
                                    uint32_t i_24 = r13_3 u/ 0x21
                                    uint64_t i_12 = zx.q(i_24)
                                    r13_3 += i_24 * 0xffffffdf
                                    uint64_t i_7
                                    
                                    do
                                        if (r8_22 s< var_140_1)
                                        label_142b25043:
                                            var_110_1 = r8_22 + 1
                                            *(sx.q(r8_22) + result_4) = 0x25
                                            r8_22 = var_110_1
                                        else if (var_10c_1 != 0)
                                            int32_t rdx_56 = var_140_1 * 2
                                            
                                            if (rdx_56 s< r8_22 + 2)
                                                rdx_56 = r8_22 + 2
                                            
                                            if (rdx_56 s< 0xc8)
                                                rdx_56 = 0xc8
                                            
                                            int64_t rax_95
                                            rax_95, zmm0_1 = sub_142a46cb0(&result_4, rdx_56, r8_22)
                                            r8_22 = var_110_1
                                            
                                            if (rax_95 != 0)
                                                goto label_142b25043
                                            
                                            var_10c_1 = rax_95.b
                                        
                                        i_7 = i_12
                                        i_12 -= 1
                                    while (i_7 != 1)
                                    rsi_1 = var_1b8_1
                                
                                char rbx_6
                                
                                if (rdi_14 u>= 0x500)
                                    rbx_6 = 0x45 - r13_3.b
                                else
                                    rbx_6 = r13_3.b + 5
                                
                                if (r8_22 s< var_140_1)
                                label_142b250b3:
                                    var_110_1 = r8_22 + 1
                                    *(sx.q(r8_22) + result_4) = rbx_6
                                    r8_22 = var_110_1
                                else if (var_10c_1 != 0)
                                    int32_t rdx_58 = var_140_1 * 2
                                    
                                    if (rdx_58 s< r8_22 + 2)
                                        rdx_58 = r8_22 + 2
                                    
                                    if (rdx_58 s< 0xc8)
                                        rdx_58 = 0xc8
                                    
                                    int64_t rax_98
                                    rax_98, zmm0_1 = sub_142a46cb0(&result_4, rdx_58, r8_22)
                                    r8_22 = var_110_1
                                    
                                    if (rax_98 != 0)
                                        goto label_142b250b3
                                    
                                    var_10c_1 = rax_98.b
                                
                                r13_1 = 0
                                var_198_1 = 0
                            
                            if (rdi_14 u> 0x500)
                                rdi_14 += 0x4000
                        
                        int32_t rcx_64
                        rcx_64.b = rdi_14.b != 0
                        uint64_t rcx_65 = zx.q(rcx_64 + 1)
                        result = zx.q(rcx_65.d + r8_22)
                        
                        if (result.d s<= var_140_1)
                            goto label_142b2525b
                        
                        if (var_10c_1 != 0)
                            int32_t rax_107 = r8_22 + (rcx_65 << 1).d
                            int32_t rdx_65 = var_140_1 * 2
                            
                            if (rdx_65 s< rax_107)
                                rdx_65 = rax_107
                            
                            if (rdx_65 s< 0xc8)
                                rdx_65 = 0xc8
                            
                            result, zmm0_1 = sub_142a46cb0(&result_4, rdx_65, r8_22)
                            
                            if (result != 0)
                                r8_22 = var_110_1
                            label_142b2525b:
                                var_110_1 = r8_22 + 1
                                result = result_4
                                sx.q(r8_22)[result] = (rdi_14 u>> 8).b
                                
                                if (rdi_14.b != 0)
                                    int64_t rax_108 = sx.q(var_110_1)
                                    var_110_1 = rax_108.d + 1
                                    result = result_4
                                    *(rax_108 + result) = rdi_14.b
                            else
                                var_10c_1 = result.b
                    else
                        r13_1 += 1
                        var_198_1 = r13_1
                
                if ((r9_1.b & 0x20) != 0)
                    uint32_t rdi_15 = zx.d(r15_1.w)
                    
                    if ((rdi_15.b & 0xc0) != 0 || rdi_15 u<= 0x100)
                        uint32_t r8_30 = var_d0_1
                        int32_t rdi_16
                        
                        if (rdi_15 != 0x100)
                            rdi_16 = (rdi_15 u>> 6 & 3) + 0xfc
                        label_142b25328:
                            
                            if (var_1a8_1 != 0)
                                int32_t rcx_72 = var_1a8_1 - 1
                                
                                if (rcx_72 s>= 0x71)
                                    uint32_t i_21 = rcx_72 u/ 0x71
                                    uint64_t i_14 = zx.q(i_21)
                                    result = zx.q(i_21 * 0xffffff8f)
                                    int32_t rcx_73 = rcx_72 + result.d
                                    uint64_t i_8
                                    
                                    do
                                        if (r8_30 s< var_100_1)
                                        label_142b2539b:
                                            var_d0_1 = r8_30 + 1
                                            result = result_5
                                            *(sx.q(r8_30) + result) = 0x8c
                                            r8_30 = var_d0_1
                                        else if (var_cc_1 != 0)
                                            int32_t rdx_70 = var_100_1 * 2
                                            
                                            if (rdx_70 s< r8_30 + 2)
                                                rdx_70 = r8_30 + 2
                                            
                                            if (rdx_70 s< 0xc8)
                                                rdx_70 = 0xc8
                                            
                                            result, zmm0_1 = sub_142a46cb0(&result_5, rdx_70, r8_30)
                                            r8_30 = var_d0_1
                                            
                                            if (result != 0)
                                                goto label_142b2539b
                                            
                                            var_cc_1 = result.b
                                        
                                        i_8 = i_14
                                        i_14 -= 1
                                    while (i_8 != 1)
                                    rsi_1 = var_1b8_1
                                    rcx_72 = rcx_73
                                
                                if (rdi_16 u>= 0x1c)
                                    rbx_2 = 0xfc - rcx_72
                                else
                                    rbx_2 = rcx_72 + 0x1c
                                
                                if (r8_30 s< var_100_1)
                                label_142b2540a:
                                    var_d0_1 = r8_30 + 1
                                    result = result_5
                                    *(sx.q(r8_30) + result) = rbx_2.b
                                    r8_30 = var_d0_1
                                else if (var_cc_1 != 0)
                                    int32_t rdx_72 = var_100_1 * 2
                                    
                                    if (rdx_72 s< r8_30 + 2)
                                        rdx_72 = r8_30 + 2
                                    
                                    if (rdx_72 s< 0xc8)
                                        rdx_72 = 0xc8
                                    
                                    result, zmm0_1 = sub_142a46cb0(&result_5, rdx_72, r8_30)
                                    r8_30 = var_d0_1
                                    
                                    if (result != 0)
                                        goto label_142b2540a
                                    
                                    var_cc_1 = result.b
                                
                                var_1a8_1 = 0
                            
                            if (r8_30 s< var_100_1)
                                goto label_142b2545e
                            
                            if (var_cc_1 != 0)
                                int32_t rdx_74 = var_100_1 * 2
                                
                                if (rdx_74 s< r8_30 + 2)
                                    rdx_74 = r8_30 + 2
                                
                                if (rdx_74 s< 0xc8)
                                    rdx_74 = 0xc8
                                
                                result, zmm0_1 = sub_142a46cb0(&result_5, rdx_74, r8_30)
                                
                                if (result != 0)
                                    r8_30 = var_d0_1
                                label_142b2545e:
                                    var_d0_1 = r8_30 + 1
                                    result = result_5
                                    *(sx.q(r8_30) + result) = rdi_16.b
                                else
                                    var_cc_1 = result.b
                        else
                            if (rax_7 != 0 || r8_30 != 0)
                                rdi_16 = 1
                                goto label_142b25328
                            
                            if (var_100_1 s> 0)
                                goto label_142b252fe
                            
                            if (var_cc_1 != r8_30.b)
                                int32_t rdx_67 = var_100_1 * 2
                                
                                if (rdx_67 s<= 0xc7)
                                    rdx_67 = 0xc8
                                
                                result, zmm0_1 = sub_142a46cb0(&result_5, rdx_67, r8_30)
                                
                                if (result != 0)
                                    r8_30 = var_d0_1
                                label_142b252fe:
                                    var_d0_1 = r8_30 + 1
                                    result = result_5
                                    *(sx.q(r8_30) + result) = 1
                                else
                                    var_cc_1 = result.b
                    else
                        var_1a8_1 += 1
                
                if ((r15_1 & 0xff000000) == 0x1000000)
                    int32_t* result_10 = result_1
                    
                    if (*result_10 s<= 0)
                        rbx_2.b = 1
                        char rsi_7 = r9_1.b
                        
                        if ((rsi_7 & 4) == 0)
                            goto label_142b2550a
                        
                        result = (*(*result_3 + 8))(result_3, 2)
                        
                        if (result.b != 0)
                            rbx_2.b = var_8c_1 & 1
                            sub_142b23f20(r14, 1, zmm0_1)
                            result = (*(*r14 + 8))(r14, result_6, zx.q(result_12 - 1))
                        label_142b2550a:
                            
                            if ((rsi_7 & 8) == 0)
                            label_142b25593:
                                
                                if ((rsi_7 & 0x10) == 0)
                                    goto label_142b255cf
                                
                                result = (*(*result_3 + 8))(result_3, 4)
                                
                                if (result.b != 0)
                                    rbx_2.b &= var_10c_1
                                    sub_142b23f20(r14, 1, zmm0_1)
                                    result = (*(*r14 + 8))(r14, result_4, zx.q(var_110_1 - 1))
                                label_142b255cf:
                                    
                                    if ((rsi_7 & 0x20) == 0)
                                        goto label_142b2560b
                                    
                                    result = (*(*result_3 + 8))(result_3, 5)
                                    
                                    if (result.b != 0)
                                        rbx_2.b &= var_cc_1
                                        sub_142b23f20(r14, 1, zmm0_1)
                                        result = (*(*r14 + 8))(r14, result_5, zx.q(var_d0_1 - 1))
                                    label_142b2560b:
                                        
                                        if (rbx_2.b == 0 || r14[1] == 0)
                                            *result_10 = 7
                            else
                                result = (*(*result_3 + 8))(result_3, 3)
                                
                                if (result.b != 0)
                                    rbx_2.b &= var_4c_1
                                    sub_142b23f20(r14, 1, zmm0_1)
                                    result = zx.q(var_50_1 - 1)
                                    char rcx_85 = 0
                                    int64_t rdi_19 = sx.q(result.d)
                                    
                                    if (result.d s> 0)
                                        do
                                            result = result_7
                                            char rdx_76 = r12_1[result]
                                            
                                            if (rcx_85 != 0)
                                                result = sub_142b23f20(r14, rdx_76 u>> 4 | rcx_85, 
                                                    zmm0_1)
                                                rcx_85 = 0
                                            else
                                                rcx_85 = rdx_76
                                            
                                            r12_1 = &r12_1[1]
                                        while (r12_1 s< rdi_19)
                                        
                                        if (rcx_85 != 0)
                                            result = sub_142b23f20(r14, rcx_85, zmm0_1)
                                    
                                    result_10 = result_1
                                    goto label_142b25593
                    
                    break
                
                r8 = arg1
                rdi = arg3
            
            result_9 = result_1
        
        if (var_fc_1 != 0)
            result = sub_142a7dcd0(result_5)
        
        if (var_13c_1 != 0)
            result = sub_142a7dcd0(result_4)
        
        if (var_bc_1 != 0)
            result = sub_142a7dcd0(result_6)
        
        if (var_7c_1 != 0)
            result = sub_142a7dcd0(result_7)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
