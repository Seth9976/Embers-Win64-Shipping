// 函数: sub_140a4fcd0
// 地址: 0x140a4fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t arg_8 = 0
int64_t* rax = sub_140a46220()
int64_t* r13 = rax
arg_8.q = rax
int32_t rcx = rax[1].d
int32_t rdx = rcx - 1

if (rcx == 0)
    rdx = 0

if (rdx == 0)
    int16_t* var_48
    sub_140b13b30(&var_48)
    int32_t r12_1 = 1
    int32_t rax_1 = sub_140a23cf0(&var_48, u"/Engine", 1, 1, 0xffffffff)
    int16_t* var_38
    int32_t var_40
    
    if (rax_1 == 0xffffffff)
        sub_140b65060()
        int32_t r8_3
        
        if (var_48 == &data_143e189c0)
            r8_3 = var_40
        else
            int32_t rbx_4
            
            if (data_143e189c0 == 0)
                rbx_4 = 0
            else
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while ((&data_143e189c0)[rbx_3] != 0)
                
                rbx_4 = rbx_3.d + 1
            
            int32_t var_3c
            int32_t rax_6 = var_3c
            int32_t rdx_3 = 0
            int32_t var_40_2 = 0
            
            if (rax_6 != rbx_4)
                sub_1405947f0(&var_48, rbx_4)
                rax_6 = var_3c
                rdx_3 = var_40_2
            
            r8_3 = rdx_3 + rbx_4
            var_40 = r8_3
            
            if (r8_3 s> rax_6)
                sub_140594770(&var_48)
                r8_3 = var_40
            
            if (rbx_4 != 0)
                memcpy(var_48, &data_143e189c0, rbx_4 * 2)
                r8_3 = var_40
        
        int32_t rcx_13
        int16_t* rdx_5
        
        if (r8_3 == 0)
            rcx_13 = 0
            rdx_5 = &data_142d40450
        else
            rdx_5 = var_48
            rcx_13 = r8_3 - 1
        
        var_38 = nullptr
        int32_t rax_7 = rcx_13
        int16_t* r14_1 = nullptr
        
        if (rcx_13 s> 1)
            rax_7 = 1
        
        int32_t rax_9 = 0
        int32_t var_2c_1 = 0
        int16_t* rdi_1 = &rdx_5[sx.q(rcx_13) - sx.q(rax_7)]
        int32_t rdx_6 = 0
        int32_t var_30_1 = 0
        int32_t rsi_1
        int16_t* const r11_1
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (rdi_1[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_38, rbx_5.d + 1)
                rax_9 = var_2c_1
                rdx_6 = var_30_1
                r14_1 = var_38
            
            rsi_1 = rdx_6 + rbx_5.d + 1
            var_30_1 = rsi_1
            
            if (rsi_1 s> rax_9)
                sub_140594770(&var_38)
                rsi_1 = var_30_1
                r14_1 = var_38
            
            memcpy(r14_1, rdi_1, (rbx_5.d + 1) * 2)
            r8_3 = var_40
            r11_1 = r14_1
        
        if (rdi_1 == 0 || *rdi_1 == 0 || rsi_1 == 0)
            r11_1 = &data_142d40450
        
        int32_t* const r10_2 = &data_142d5a024
        uint32_t rbx_7
        int32_t rsi_2
        
        while (true)
            int16_t rdx_9 = *(r11_1 - &data_142d5a024 + r10_2)
            int16_t r9_2 = *r10_2
            r10_2 += 2
            
            if (rdx_9 != r9_2)
                if (((zx.d(rdx_9) | zx.d(r9_2)) & 0xffffff80) != 0)
                    rbx_7 = zx.d(rdx_9) - zx.d(r9_2)
                else
                    uint32_t rcx_21 = zx.d(*(zx.q(r9_2) + &data_142e5e8a0))
                    uint32_t rbx_8 = zx.d(*(zx.q(rdx_9) + &data_142e5e8a0))
                    rbx_7 = rbx_8 - rcx_21
                    
                    if (rbx_8 == rcx_21)
                        continue
                
                rsi_2 = 0
                break
            
            if (rdx_9 == 0)
                rsi_2 = 0
                rbx_7 = 0
                break
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
            r8_3 = var_40
        
        if (rbx_7 == 0)
            int32_t r10_3 = r8_3 - 1
            
            if (r8_3 == 0)
                r10_3 = 0
            
            if (r10_3 - 1 s< 0)
                r10_3 = 0
            else if (r10_3 - 1 s< r10_3)
                r10_3 -= 1
            
            int32_t rbx_10 = r8_3 - 1
            
            if (r8_3 == 0)
                rbx_10 = 0
            
            int32_t rbx_11 = rbx_10 - r10_3
            
            if (rbx_11 s> 1)
                rbx_11 = 1
            
            if (rbx_11 != 0)
                int32_t rax_16 = r8_3 - rbx_11
                
                if (rax_16 != r10_3)
                    int16_t* r9_3 = var_48
                    memmove(&r9_3[sx.q(r10_3)], &r9_3[sx.q(rbx_11 + r10_3)], (rax_16 - r10_3) * 2)
                    r8_3 = var_40
                
                var_40 = r8_3 - rbx_11
        
        sub_140a2e390(&var_38, u"/%s/Binaries", u"Embers")
        int16_t* const rdx_11 = &data_142d40450
        
        if (var_30_1 != 0)
            rdx_11 = var_38
        
        int32_t rax_20 = sub_140a23cf0(&var_48, rdx_11, 1, 0, 0xffffffff)
        int16_t* rcx_27 = var_38
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        if (rax_20 == 0xffffffff)
            int32_t rax_25 = sub_140a23cf0(&var_48, u"/../Binaries", 1, 1, 0xffffffff)
            
            if (rax_25 == 0xffffffff)
                int32_t r9_5 = var_40
                int16_t* r14_3 = var_38
                
                while (true)
                    int32_t rbx_12
                    
                    if (r9_5 == 0 || r9_5 == 1)
                    label_140a502eb:
                        rbx_12.b = 0
                    else
                        int32_t rax_28 = r9_5 - 1
                        var_38 = nullptr
                        r15 |= 1
                        int32_t rdx_19 = 0
                        int32_t var_30_5 = 0
                        r14_3 = nullptr
                        
                        if (r9_5 - 1 s> 1)
                            rax_28 = 1
                        
                        void* rdi_5 = &var_48[sx.q(r9_5 - 1) - sx.q(rax_28)]
                        int32_t rax_31 = 0
                        int32_t var_2c_4 = 0
                        int32_t rsi_4
                        int16_t* r11_3
                        
                        if (rdi_5 != 0 && *rdi_5 != 0)
                            int64_t rbx_18 = -1
                            
                            do
                                rbx_18 += 1
                            while (*(rdi_5 + (rbx_18 << 1)) != 0)
                            
                            if (rbx_18.d + 1 s> 0)
                                sub_1405947f0(&var_38, rbx_18.d + 1)
                                rax_31 = var_2c_4
                                rdx_19 = var_30_5
                                r14_3 = var_38
                            
                            rsi_4 = rdx_19 + rbx_18.d + 1
                            
                            if (rsi_4 s> rax_31)
                                sub_140594770(&var_38)
                                r14_3 = var_38
                            
                            memcpy(r14_3, rdi_5, (rbx_18.d + 1) * 2)
                            r9_5 = var_40
                            r11_3 = r14_3
                        
                        if (rdi_5 == 0 || *rdi_5 == 0 || rsi_4 == 0)
                            r11_3 = &data_142d40450
                        
                        int16_t* r10_5 = &data_142d5a024
                        uint32_t rdx_24
                        
                        while (true)
                            int16_t rdx_22 = *(r10_5 + r11_3 - &data_142d5a024)
                            int16_t r8_17 = *r10_5
                            r10_5 = &r10_5[1]
                            
                            if (rdx_22 != r8_17)
                                if (((zx.d(rdx_22) | zx.d(r8_17)) & 0xffffff80) != 0)
                                    rdx_24 = zx.d(rdx_22) - zx.d(r8_17)
                                    break
                                
                                uint32_t rcx_51 = zx.d(*(zx.q(r8_17) + &data_142e5e8a0))
                                uint32_t rdx_23 = zx.d(*(zx.q(rdx_22) + &data_142e5e8a0))
                                rdx_24 = rdx_23 - rcx_51
                                
                                if (rdx_23 != rcx_51)
                                    break
                            else
                                if (rdx_22 == 0)
                                    goto label_140a502eb_1
                        
                        if (rdx_24 == 0)
                        label_140a502eb_1:
                            rbx_12.b = 0
                        else
                            rbx_12 = 1
                    
                    if ((1 & r15.b) != 0)
                        r15 &= 0xfffffffe
                        
                        if (r14_3 != 0)
                            sub_140a74f90(r14_3)
                            r9_5 = var_40
                    
                    if (rbx_12.b == 0)
                        break
                    
                    int32_t r10_6 = r9_5 - 1
                    
                    if (r9_5 == 0)
                        r10_6 = 0
                    
                    if (r10_6 - 1 s< 0)
                        r10_6 = 0
                    else if (r10_6 - 1 s< r10_6)
                        r10_6 -= 1
                    
                    int32_t rbx_19 = r9_5 - 1
                    
                    if (r9_5 == 0)
                        rbx_19 = 0
                    
                    rbx_12 = rbx_19 - r10_6
                    
                    if (rbx_12 s> 1)
                        rbx_12 = 1
                    
                    if (rbx_12 != 0)
                        int32_t rax_38 = r9_5 - rbx_12
                        
                        if (rax_38 != r10_6)
                            int16_t* r9_6 = var_48
                            memmove(&r9_6[sx.q(r10_6)], &r9_6[sx.q(rbx_12 + r10_6)], 
                                (rax_38 - r10_6) * 2)
                            r9_5 = var_40
                        
                        r9_5 -= rbx_12
                        var_40 = r9_5
                
                r13 = arg_8.q
            else
                int32_t rdi_3
                int16_t* r15_1
                
                if (var_40 == 0)
                    r15_1 = &data_142d40450
                    rdi_3 = 0
                else
                    r15_1 = var_48
                    rdi_3 = var_40 - 1
                
                if (rax_25 + 1 s< 0)
                    rdi_3 = 0
                else if (rax_25 + 1 s< rdi_3)
                    rdi_3 = rax_25 + 1
                
                var_38 = nullptr
                int32_t rbx_15 = 0
                int32_t var_30_2 = 0
                int16_t* r14_2 = nullptr
                int32_t var_2c_2 = 0
                
                if (r15_1 != 0 && *r15_1 != 0 && rdi_3 s> 0)
                    if (rdi_3 + 1 s> 0)
                        sub_1405947f0(&var_38, rdi_3 + 1)
                        rsi_2 = var_2c_2
                        rbx_15 = var_30_2
                        r14_2 = var_38
                    
                    rbx_15 += rdi_3 + 1
                    
                    if (rbx_15 s> rsi_2)
                        sub_140594770(&var_38)
                        rsi_2 = var_2c_2
                        r14_2 = var_38
                    
                    memcpy(r14_2, r15_1, rdi_3 * 2)
                    r14_2[sx.q(rbx_15) - 1] = 0
                    
                    if (rbx_15 != 0)
                        r12_1 = 0
                
                var_38 = r14_2
                int32_t rdx_18 = rbx_15 + 6 + r12_1
                
                if (rdx_18 s> rsi_2)
                    sub_1405947f0(&var_38, rdx_18)
                
                sub_140a20ba0(&var_38, u"../../", 6)
                int16_t* rcx_41 = var_48
                int16_t* rbx_17 = var_38
                var_38 = nullptr
                int32_t var_30_4
                var_30_4.q = 0
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                var_48 = rbx_17
                int32_t var_40_4 = rbx_15
                int32_t var_3c_1 = rsi_2
        else
            int32_t rax_21 = var_40
            int32_t rcx_28 = rax_21 - 1
            
            if (rax_21 == 0)
                rcx_28 = 0
            
            int32_t r10_4
            
            if (rax_20 + 1 s>= 0)
                r10_4 = rcx_28
                
                if (rax_20 + 1 s< rcx_28)
                    r10_4 = rax_20 + 1
            else
                r10_4 = 0
            
            int32_t rcx_29 = rcx_28 - r10_4
            int32_t rbx_13 = rax_21 - 1
            
            if (rax_21 == 0)
                rbx_13 = 0
            
            int32_t rbx_14 = rbx_13 - r10_4
            
            if (rcx_29 s>= 0)
                if (rcx_29 s< rbx_14)
                    rbx_14 = rcx_29
                
                if (rbx_14 != 0)
                    int32_t rcx_31 = rax_21 - rbx_14
                    
                    if (rcx_31 != r10_4)
                        int16_t* r9_4 = var_48
                        memmove(&r9_4[sx.q(r10_4)], &r9_4[sx.q(rbx_14 + r10_4)], 
                            (rcx_31 - r10_4) * 2)
                        rax_21 = var_40
                    
                    int32_t var_40_3 = rax_21 - rbx_14
    else
        int32_t rax_2 = var_40
        int32_t rcx_3 = rax_2 - 1
        
        if (rax_2 == 0)
            rcx_3 = 0
        
        int32_t r10_1
        
        if (rax_1 + 1 s>= 0)
            r10_1 = rcx_3
            
            if (rax_1 + 1 s< rcx_3)
                r10_1 = rax_1 + 1
        else
            r10_1 = 0
        
        int32_t rcx_4 = rcx_3 - r10_1
        int32_t rbx_1 = rax_2 - 1
        
        if (rax_2 == 0)
            rbx_1 = 0
        
        int32_t rbx_2 = rbx_1 - r10_1
        
        if (rcx_4 s>= 0)
            if (rcx_4 s< rbx_2)
                rbx_2 = rcx_4
            
            if (rbx_2 != 0)
                int32_t rcx_6 = rax_2 - rbx_2
                
                if (rcx_6 != r10_1)
                    int16_t* r9_1 = var_48
                    memmove(&r9_1[sx.q(r10_1)], &r9_1[sx.q(rbx_2 + r10_1)], (rcx_6 - r10_1) * 2)
                    rax_2 = var_40
                
                int32_t var_40_1 = rax_2 - rbx_2
    int64_t* rax_42 = sub_140b11c80(&var_38, &var_48)
    
    if (r13 != rax_42)
        int64_t rcx_55 = *r13
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
        
        *r13 = *rax_42
        *rax_42 = 0
        r13[1].d = rax_42[1].d
        *(r13 + 0xc) = *(rax_42 + 0xc)
        rax_42[1] = 0
    
    int16_t* rcx_57 = var_38
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    sub_140b25f50(r13)
    int16_t* rcx_59 = var_48
    
    if (rcx_59 != 0)
        sub_140a74f90(rcx_59)

if (r13[1].d == 0)
    return &data_142d40450

return *r13
