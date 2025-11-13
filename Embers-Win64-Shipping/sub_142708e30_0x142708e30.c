// 函数: sub_142708e30
// 地址: 0x142708e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x54) & 1) != 0)
    int64_t rsi_1 = arg1[5]
    int32_t i_11 = arg1[6].d
    int32_t i_8 = i_11
    void** result_1 = nullptr
    int32_t i_14 = i_11
    int32_t i_13 = i_11
    
    if (i_11 != 0)
        sub_142467eb0(&result_1, i_11, 0)
        void** result_2 = result_1
        void* rsi_2 = rsi_1 - result_2
        void* rbx_1 = &result_2[0x10]
        int32_t i
        
        do
            sub_1426f21f0(rbx_1 - 0x80, rsi_2 - 0x80 + rbx_1)
            *rbx_1 = 0
            int64_t rdi_1 = sx.q(*(rsi_2 + rbx_1 + 8))
            int64_t r14_1 = *(rsi_2 + rbx_1)
            *(rbx_1 + 8) = rdi_1.d
            
            if (rdi_1.d != 0)
                sub_140638750(rbx_1, rdi_1.d, 0)
                memcpy(*rbx_1, r14_1, (rdi_1 << 2).d)
            else
                *(rbx_1 + 0xc) = 0
            
            rbx_1 += 0x90
            i = i_11
            i_11 -= 1
        while (i != 1)
        i_8 = arg1[6].d
        i_14 = i_13
    
    int32_t rax_1 = *(arg1 + 0x34)
    void* rbx_2 = arg1[5]
    
    if (rax_1 s< 0)
        if (i_8 != 0)
            void* rbx_4 = rbx_2 + 0x58
            int32_t i_1
            
            do
                int64_t rcx_7 = *(rbx_4 + 0x28)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int64_t rcx_8 = *rbx_4
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t rcx_9 = *(rbx_4 - 0x10)
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rbx_4 += 0x90
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
            rax_1 = *(arg1 + 0x34)
        
        arg1[6].d = 0
        
        if (rax_1 != 0)
            sub_140dbd2c0(&arg1[5], 0)
    else
        if (i_8 != 0)
            void* rbx_3 = rbx_2 + 0x58
            int32_t i_2
            
            do
                int64_t rcx_4 = *(rbx_3 + 0x28)
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                int64_t rcx_5 = *rbx_3
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                int64_t rcx_6 = *(rbx_3 - 0x10)
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_3 += 0x90
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
        
        arg1[6].d = 0
    
    int64_t rbx_5 = sx.q(arg1[8].d)
    *(arg1 + 0x54) &= 0xfffffffe
    int32_t arg_10 = rbx_5.d
    
    if (rbx_5.d != 0)
        void* var_128 = nullptr
        void* r15_1 = nullptr
        int64_t var_120_1 = 0
        void* r12_2 = nullptr
        void* var_108 = nullptr
        int64_t var_100_1 = 0
        int32_t temp1_1 = rbx_5.d
        bool cond:2_1
        
        if (temp1_1 s<= 0)
            if (temp1_1 s>= 0)
                goto label_142709051
            
            int32_t temp3_1 = rbx_5.d
            cond:2_1 = temp3_1 s>= 0
            
            if (temp3_1 != 0)
                var_120_1.d = rbx_5.d
                sub_1405dac90(&var_128)
                r15_1 = var_128
                goto label_142709051
            
        label_142709067:
            
            if (not(cond:2_1) && rbx_5.d != 0)
                var_100_1.d = rbx_5.d
                sub_1405c5460(&var_108)
                r12_2 = var_108
        else
            var_120_1.d = rbx_5.d
            sub_1405a4cf0(&var_128)
            r15_1 = var_128
            memset(r15_1, 0, rbx_5 << 2)
        label_142709051:
            int32_t temp2_1 = rbx_5.d
            cond:2_1 = temp2_1 s>= 0
            
            if (temp2_1 s<= 0)
                goto label_142709067
            
            var_100_1.d = rbx_5.d
            sub_1405c50f0(&var_108)
            r12_2 = var_108
        int32_t r9_1 = 0
        
        if (rbx_5.d s> 0)
            int64_t r8_5 = 0
            void* rdx_8 = r12_2
            int64_t rcx_16 = 0
            
            do
                *(r15_1 + (r8_5 << 2)) = r9_1
                rdx_8 += 0x1c
                int64_t rax_2 = arg1[7]
                rcx_16 += 0x80
                r9_1 += 1
                r8_5 += 1
                *(rdx_8 - 0x1c) = *(rcx_16 + rax_2 - 0x78)
                *(rdx_8 - 0xc) = *(rcx_16 + rax_2 - 0x68)
                *(rdx_8 - 4) = *(rcx_16 + rax_2 - 0x60)
            while (r8_5 s< rbx_5)
        
        int32_t rsi_3 = 0
        int32_t r14_3 = rbx_5.d * rbx_5.d
        
        if (r14_3 s> 0)
            do
                int32_t r11_1 = 0
                int32_t rbx_6 = 0
                int64_t r10_1 = 0
                
                if (rbx_5 s<= 0)
                    break
                
                void* rdx_9 = r12_2 + 4
                
                do
                    if (*(r15_1 + (r10_1 << 2)) == rbx_6)
                        int32_t r9_2 = 0
                        void* rcx_17 = r12_2 + 8
                        int64_t r8_6 = 0
                        
                        do
                            if (*(r15_1 + (r8_6 << 2)) == r9_2 && r8_6 != r10_1
                                    && not((*(rcx_17 + 4)).d f< *(rdx_9 - 4))
                                    && not((*(rdx_9 + 8)).d f< *(rcx_17 - 8))
                                    && not((*(rcx_17 + 8)).d f< *rdx_9)
                                    && not((*(rdx_9 + 0xc)).d f< *(rcx_17 - 4))
                                    && not((*(rcx_17 + 0xc)).d f< *(rdx_9 + 4))
                                    && not((*(rdx_9 + 0x10)).d f< *rcx_17))
                                *(r15_1 + (r8_6 << 2)) = rbx_6
                                
                                if (*(rdx_9 + 0x14) == 0)
                                    if (*(rcx_17 + 0x10) != 0)
                                        *(rdx_9 - 4) = *(rcx_17 - 8)
                                        *(rdx_9 + 0xc) = *(rcx_17 + 8)
                                        *(rdx_9 + 0x14) = *(rcx_17 + 0x10)
                                else if (*(rcx_17 + 0x10) != 0)
                                    *(rdx_9 - 4) =
                                        __minss_xmmss_memss((*(rcx_17 - 8)).d, *(rdx_9 - 4)).d
                                    int64_t zmm1 = __minss_xmmss_memss((*(rcx_17 - 4)).d, *rdx_9).q
                                    int128_t zmm0 = *(rdx_9 + 4)
                                    *rdx_9 = zmm1.d
                                    *(rdx_9 + 4) = __minss_xmmss_memss(zmm0.d, *rcx_17).d
                                    *(rdx_9 + 8) =
                                        __maxss_xmmss_memss((*(rcx_17 + 4)).d, *(rdx_9 + 8)).q.d
                                    *(rdx_9 + 0xc) =
                                        __maxss_xmmss_memss((*(rcx_17 + 8)).d, *(rdx_9 + 0xc)).d
                                    *(rdx_9 + 0x10) = __maxss_xmmss_memss((*(rcx_17 + 0xc)).d, 
                                        *(rdx_9 + 0x10)).q.d
                                
                                r11_1 += 1
                            
                            r9_2 += 1
                            r8_6 += 1
                            rcx_17 += 0x1c
                        while (r8_6 s< rbx_5)
                    
                    rbx_6 += 1
                    r10_1 += 1
                    rdx_9 += 0x1c
                while (r10_1 s< rbx_5)
                
                if (r11_1 == 0)
                    break
                
                rsi_3 += 1
            while (rsi_3 s< r14_3)
        
        int32_t rsi_4 = 0
        int32_t rbx_7 = 0
        void* r14_4 = nullptr
        int32_t var_12c_1 = 0
        int32_t r12_3 = 0
        int32_t i_9 = 0
        int64_t buffer2
        __builtin_memset(&buffer2, 0, 0x18)
        int64_t var_118 = 0
        int64_t var_110_1 = 0
        int32_t arg_18 = 0
        
        if (arg_10 s> 0)
            void* var_138
            int64_t* r13_3
            
            do
                int64_t var_140_1
                
                if (rsi_4 s< 0)
                    if (i_9 != 0)
                        void* rbx_9 = r14_4 + 0x48
                        int32_t i_3
                        
                        do
                            int64_t rcx_20 = *(rbx_9 + 0x10)
                            
                            if (rcx_20 != 0)
                                sub_140a74f90(rcx_20)
                            
                            int64_t rcx_21 = *rbx_9
                            
                            if (rcx_21 != 0)
                                sub_140a74f90(rcx_21)
                            
                            rbx_9 -= -0x80
                            i_3 = i_9
                            i_9 -= 1
                        while (i_3 != 1)
                        rbx_7 = var_140_1:4.d
                    
                    i_9 = 0
                    int32_t i_12 = 0
                    
                    if (rsi_4 != 0)
                        sub_140888ba0(&var_138, 0)
                        i_9 = i_12
                else
                    if (i_9 != 0)
                        void* rbx_8 = r14_4 + 0x48
                        int32_t i_4
                        
                        do
                            int64_t rcx_18 = *(rbx_8 + 0x10)
                            
                            if (rcx_18 != 0)
                                sub_140a74f90(rcx_18)
                            
                            int64_t rcx_19 = *rbx_8
                            
                            if (rcx_19 != 0)
                                sub_140a74f90(rcx_19)
                            
                            rbx_8 -= -0x80
                            i_4 = i_9
                            i_9 -= 1
                        while (i_4 != 1)
                        rbx_7 = var_140_1:4.d
                    
                    i_9 = 0
                    int32_t var_130_1 = 0
                
                int32_t r14_5 = 0
                
                if (rbx_7 s< 0)
                    var_140_1.d = 0
                    
                    if (rbx_7 != 0)
                        sub_1405dadb0(&buffer2, 0)
                        r14_5 = var_140_1.d
                
                int32_t r13_1 = 0
                int64_t i_5 = 0
                
                if (arg_10 s> 0)
                    int64_t r12_4 = 0
                    
                    do
                        int64_t j_1 = sx.q(*(r15_1 + (i_5 << 2)))
                        
                        for (int32_t j = *(r15_1 + (j_1 << 2)); j_1.d != j; 
                                j = *(r15_1 + (j_1 << 2)))
                            j_1 = sx.q(j)
                        
                        if (j_1.d == arg_18)
                            int64_t i_15 = sx.q(i_9)
                            int64_t r15_2 = arg1[7]
                            i_9 = (i_15 + 1).d
                            
                            if (i_9 s> var_12c_1)
                                sub_1408888d0(&var_138)
                            
                            sub_1426f21f0((i_15 << 7) + var_138, (sx.q(r13_1) << 7) + r15_2)
                            int64_t rbx_10 = sx.q(r14_5)
                            r14_5 = (rbx_10 + 1).d
                            var_140_1.d = r14_5
                            int32_t r15_3 = *(r12_4 + arg1[7] + 0x6c)
                            
                            if (r14_5 s> var_140_1:4.d)
                                sub_1405a4cf0(&buffer2)
                                r14_5 = var_140_1.d
                            
                            *(buffer2 + (rbx_10 << 2)) = r15_3
                            r15_1 = var_128
                        
                        r13_1 += 1
                        i_5 += 1
                        r12_4 -= -0x80
                    while (i_5 s< sx.q(arg_10))
                    
                    r12_3 = arg_18
                
                if (i_9 != 0)
                    r15_1.b = 0
                    int32_t rsi_5 = 0
                    
                    if (i_14 s> 0)
                        void* rbx_12 = result_1 + 0x80
                        
                        do
                            int64_t rax_7 = sx.q(*(rbx_12 + 8))
                            
                            if (rax_7.d == r14_5 && memcmp(*rbx_12, buffer2, rax_7 << 2) == 0)
                                int64_t rbx_13 = sx.q(arg1[6].d)
                                int32_t rax_9 = (rbx_13 + 1).d
                                arg1[6].d = rax_9
                                
                                if (rax_9 s> *(arg1 + 0x34))
                                    sub_140dbc660(&arg1[5])
                                
                                sub_1426f1fc0(rbx_13 * 0x90 + arg1[5], 
                                    &result_1[sx.q(rsi_5) * 0x12])
                                r15_1.b = 1
                                break
                            
                            rsi_5 += 1
                            rbx_12 += 0x90
                        while (rsi_5 s< i_14)
                
                if (i_9 == 0 || r15_1.b != 0)
                    r13_3 = arg1
                else
                    void var_d8
                    sub_1426f2670(&var_d8, &var_138)
                    r13_3 = arg1
                    uint64_t var_58 = 0
                    int32_t var_4c_1 = 0
                    int32_t rax_11 = *(r13_3 + 0x4c)
                    int32_t var_6c_1 = rax_11
                    
                    if (r14_5 != 0)
                        sub_140638750(&var_58, r14_5, 0)
                        memcpy(var_58, buffer2, r14_5 << 2)
                        rax_11 = *(r13_3 + 0x4c)
                    
                    int64_t rbx_14 = sx.q(var_110_1.d)
                    int32_t rsi_6 = r13_3[6].d
                    *(r13_3 + 0x4c) = rax_11 + 1
                    int32_t rax_13 = (rbx_14 + 1).d
                    var_110_1.d = rax_13
                    
                    if (rax_13 s> var_110_1:4.d)
                        sub_1405a4cf0(&var_118)
                    
                    *(var_118 + (rbx_14 << 2)) = rsi_6
                    int64_t rbx_15 = sx.q(r13_3[6].d)
                    int32_t rax_15 = (rbx_15 + 1).d
                    r13_3[6].d = rax_15
                    
                    if (rax_15 s> *(r13_3 + 0x34))
                        sub_140dbc660(&r13_3[5])
                    
                    int32_t* rbx_18 = rbx_15 * 0x90 + r13_3[5]
                    sub_1426f21f0(rbx_18, &var_d8)
                    int64_t r14_6 = sx.q(r14_5)
                    uint64_t rsi_7 = var_58
                    *(rbx_18 + 0x80) = 0
                    rbx_18[0x22] = r14_6.d
                    
                    if (r14_6.d != 0)
                        sub_140638750(&rbx_18[0x20], r14_6.d, 0)
                        memcpy(*(rbx_18 + 0x80), rsi_7, (r14_6 << 2).d)
                    else
                        rbx_18[0x23] = 0
                    
                    if (rsi_7 != 0)
                        sub_140a74f90(rsi_7)
                    
                    int64_t var_80
                    
                    if (var_80 != 0)
                        sub_140a74f90(var_80)
                    
                    int64_t var_90
                    
                    if (var_90 != 0)
                        sub_140a74f90(var_90)
                
                r15_1 = var_128
                r12_3 += 1
                rsi_4 = var_12c_1
                r14_4 = var_138
                rbx_7 = var_140_1:4.d
                arg_18 = r12_3
            while (r12_3 s< arg_10)
            
            if (var_110_1.d != 0)
                (*(*r13_3 + 0x260))(r13_3, &var_118)
                r13_3[9].d += 1
            
            int64_t rcx_50 = var_118
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            int64_t buffer2_1 = buffer2
            
            if (buffer2_1 != 0)
                sub_140a74f90(buffer2_1)
            
            r14_4 = var_138
        
        if (i_9 != 0)
            void* rbx_19 = r14_4 + 0x48
            int32_t i_6
            
            do
                int64_t rcx_52 = *(rbx_19 + 0x10)
                
                if (rcx_52 != 0)
                    sub_140a74f90(rcx_52)
                
                int64_t rcx_53 = *rbx_19
                
                if (rcx_53 != 0)
                    sub_140a74f90(rcx_53)
                
                rbx_19 -= -0x80
                i_6 = i_9
                i_9 -= 1
            while (i_6 != 1)
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
        
        void* rcx_55 = var_108
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
        
        void* rcx_56 = var_128
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
    else
        arg1[9].d += 1
    
    int32_t i_10 = i_14
    
    if (i_10 != 0)
        void* rbx_21 = &result_1[0xb]
        int32_t i_7
        
        do
            int64_t rcx_57 = *(rbx_21 + 0x28)
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
            
            int64_t rcx_58 = *rbx_21
            
            if (rcx_58 != 0)
                sub_140a74f90(rcx_58)
            
            int64_t rcx_59 = *(rbx_21 - 0x10)
            
            if (rcx_59 != 0)
                sub_140a74f90(rcx_59)
            
            rbx_21 += 0x90
            i_7 = i_10
            i_10 -= 1
        while (i_7 != 1)
    
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
