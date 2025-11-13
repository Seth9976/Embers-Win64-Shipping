// 函数: sub_141882860
// 地址: 0x141882860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* rsi = arg3
arg3.b = 1
char arg_10 = 1
char arg_20 = 0

if (arg2[1].d != 0)
    int16_t* r13_1 = *arg2
    int16_t i = *r13_1
    
    if (i != 0)
        while (true)
            if (i != 0x22)
                while (i != 0)
                    i = r13_1[1]
                    r13_1 = &r13_1[1]
                    
                    if (i == 0x22)
                        goto label_1418828ce
                
                goto label_141882fed
            
        label_1418828ce:
            uint16_t i_1
            
            if (i == 0)
            label_141882fed:
                
                if (arg_20 != 0)
                    arg3 = zx.q(arg_10)
                    break
            else
                uint16_t i_6 = r13_1[1]
                void* r13_2 = &r13_1[1]
                void* rdi_1 = r13_2
                i_1 = i_6
                
                if (i_6 != 0x22)
                    uint16_t i_3 = i_6
                    
                    do
                        if (i_3 == 0)
                            goto label_141882ff1
                        
                        i_1 = i_3
                        
                        if (i_3 == 0xa)
                            break
                        
                        i_1 = *(r13_2 + 2)
                        r13_2 += 2
                        i_3 = i_1
                    while (i_1 != 0x22)
                
                if (i_1 != 0 && i_1 != 0xa)
                    i_1 = *(r13_2 + 2)
                    r13_1 = r13_2 + 2
                    int16_t* var_78_1 = r13_1
                    int16_t* r12_1 = r13_1
                    
                    if (i_1 != 0x22)
                        uint16_t i_4 = i_1
                        
                        do
                            i_1 = i_4
                            
                            if (i_4 == 0)
                                break
                            
                            if (i_4 == 0xa)
                                break
                            
                            i_1 = r13_1[1]
                            r13_1 = &r13_1[1]
                            i_4 = i_1
                        while (i_1 != 0x22)
                        
                        if (i_1 != 0x22)
                            arg_20 = 1
                            int32_t rbx_3 = ((r13_2 - rdi_1) s>> 1).d
                            int32_t rdx = 0
                            int64_t var_e8 = 0
                            int32_t rcx = 0
                            int32_t var_e0_1 = 0
                            int32_t var_dc_1 = 0
                            
                            if (i_6 != 0 && rbx_3 s> 0)
                                if (rbx_3 + 1 s> 0)
                                    sub_1405947f0(&var_e8, rbx_3 + 1)
                                    rcx = var_dc_1
                                    rdx = var_e0_1
                                
                                int32_t rax_3 = rdx + 1 + rbx_3
                                
                                if (rax_3 s> rcx)
                                    sub_140594770(&var_e8)
                                
                                UnDecorator::getReferenceType(var_e8, rdi_1, rbx_3 * 2)
                                *(var_e8 + (sx.q(rax_3) << 1) - 2) = 0
                            
                            int16_t* var_90
                            sub_140a300d0(&var_e8, &var_90, &(*U"{}[\nt")[3], &data_142d5a024, 1)
                            int64_t rcx_6 = var_e8
                            
                            if (rcx_6 != 0)
                                sub_140a74f90(rcx_6)
                            
                            int32_t var_88
                            int32_t rdi_2 = var_88
                            int16_t* r14_1 = var_90
                            int32_t rcx_7
                            int16_t* rdx_4
                            
                            if (rdi_2 == 0)
                                rdx_4 = &data_142d40450
                                rcx_7 = 0
                            else
                                rdx_4 = r14_1
                                rcx_7 = rdi_2 - 1
                            
                            int64_t r15_1 = sx.q(sub_1405969c0(rcx_7, rdx_4))
                            int64_t rax_11
                            
                            if (rsi[1].d == *(rsi + 0x34))
                                rax_11 = sub_14185b110(rsi, r15_1.d, &var_90)
                            else
                                void* rcx_8 = rsi[8]
                                void* r8_2 = &rsi[7]
                                
                                if (rcx_8 != 0)
                                    r8_2 = rcx_8
                                
                                int32_t rbx_4 = *(r8_2 + (((sx.q(rsi[9].d) - 1) & r15_1) << 2))
                                
                                if (rbx_4 == 0xffffffff)
                                    rax_11 = sub_14185b110(rsi, r15_1.d, &var_90)
                                else
                                    int64_t* rcx_9 = *rsi
                                    int64_t rsi_1
                                    
                                    while (true)
                                        int16_t* const rdx_8 = &data_142d40450
                                        rsi_1 = sx.q(rbx_4) * 0x70
                                        
                                        if (rdi_2 != 0)
                                            rdx_8 = r14_1
                                        
                                        int16_t* const rcx_10
                                        
                                        if (rcx_9[sx.q(rbx_4) * 0xe + 1].d == 0)
                                            rcx_10 = &data_142d40450
                                        else
                                            rcx_10 = rcx_9[sx.q(rbx_4) * 0xe]
                                        
                                        if (sub_140a54510(rcx_10, rdx_8) == 0)
                                            break
                                        
                                        rcx_9 = *arg_18
                                        rbx_4 = rcx_9[sx.q(rbx_4) * 0xe + 0xd].d
                                        
                                        if (rbx_4 == 0xffffffff)
                                            goto label_141882af1
                                        
                                        rdi_2 = var_88
                                        r14_1 = var_90
                                    
                                    int64_t rcx_11
                                    
                                    if (rbx_4 != 0xffffffff)
                                        rcx_11 = *arg_18
                                    
                                    if (rbx_4 == 0xffffffff || rcx_11 == neg.q(rsi_1))
                                    label_141882af1:
                                        rax_11 = sub_14185b110(arg_18, r15_1.d, &var_90)
                                    else
                                        rax_11 = rcx_11 + rsi_1 + 0x10
                            
                            int64_t* var_a8 = nullptr
                            int32_t i_7 = 0
                            int32_t rbx_7 = ((r13_1 - r12_1) s>> 1).d
                            int32_t rdx_10 = 0
                            int32_t rcx_14 = 0
                            int64_t var_c8 = 0
                            int32_t var_c0_1 = 0
                            int32_t var_bc_1 = 0
                            
                            if (*r12_1 != 0 && rbx_7 s> 0)
                                if (rbx_7 + 1 s> 0)
                                    sub_1405947f0(&var_c8, rbx_7 + 1)
                                    rcx_14 = var_bc_1
                                    rdx_10 = var_c0_1
                                
                                int32_t rax_14 = rdx_10 + 1 + rbx_7
                                
                                if (rax_14 s> rcx_14)
                                    sub_140594770(&var_c8)
                                
                                UnDecorator::getReferenceType(var_c8, r12_1, rbx_7 * 2)
                                *(var_c8 + (sx.q(rax_14) << 1) - 2) = 0
                            
                            sub_140a2cee0(&var_c8, &var_a8, nullptr, 1)
                            int64_t* rbx_8 = var_a8
                            void* rax_18 = &rbx_8[sx.q(i_7) * 2]
                            
                            if (rbx_8 != rax_18)
                                do
                                    int32_t var_d0_1 = 0
                                    int64_t var_f0_1 = 0
                                    int64_t var_d8 = 0
                                    int32_t var_118_1 = 0
                                    uint64_t rsi_2 = 0
                                    int32_t var_cc_1 = 0
                                    int32_t r14_2 = 0
                                    int32_t r12_2 = 0
                                    int16_t* var_b8 = nullptr
                                    int32_t var_b0_1 = 0
                                    sub_1405947f0(&var_b8, 2)
                                    int32_t r15_2 = var_b0_1 + 2
                                    
                                    if (r15_2 s> 0)
                                        sub_140594770(&var_b8)
                                    
                                    int16_t* rdi_3 = var_b8
                                    UnDecorator::getReferenceType(rdi_3, &data_142d84ee0, 4)
                                    int16_t* const rdx_15 = &data_142d40450
                                    
                                    if (r15_2 != 0)
                                        rdx_15 = rdi_3
                                    
                                    int32_t rax_19 = sub_140a23cf0(rbx_8, rdx_15, 1, 0, 0xffffffff)
                                    int32_t rcx_24 = rax_19
                                    
                                    if (rax_19 s>= 0)
                                        int32_t rax_20 = rbx_8[1].d
                                        int16_t* r14_3
                                        
                                        if (rax_20 == 0)
                                            r14_3 = &data_142d40450
                                        else
                                            r14_3 = *rbx_8
                                        
                                        int32_t rsi_3 = rax_20 - 1
                                        var_f0_1 = 0
                                        int32_t rax_21 = 0
                                        int64_t var_110 = 0
                                        
                                        if (rax_20 == 0)
                                            rsi_3 = 0
                                        
                                        int32_t var_108_1 = 0
                                        var_118_1 = 0
                                        int64_t r12_3 = 0
                                        int32_t var_104_1 = 0
                                        
                                        if (rcx_24 s< rsi_3)
                                            rsi_3 = rcx_24
                                        
                                        int32_t rdi_4 = 0
                                        
                                        if (r14_3 != 0 && *r14_3 != 0 && rsi_3 s> 0)
                                            if (rsi_3 + 1 s> 0)
                                                sub_1405947f0(&var_110, rsi_3 + 1)
                                                r12_3 = var_110
                                                rax_21 = var_104_1
                                                rdi_4 = var_108_1
                                                var_118_1 = rax_21
                                                var_f0_1 = r12_3
                                            
                                            rdi_4 = rdi_4 + 1 + rsi_3
                                            
                                            if (rdi_4 s> rax_21)
                                                sub_140594770(&var_110)
                                                r12_3 = var_110
                                                var_118_1 = var_104_1
                                                var_f0_1 = r12_3
                                            
                                            UnDecorator::getReferenceType(r12_3, r14_3, rsi_3 * 2)
                                            rcx_24 = rax_19
                                            *(r12_3 + (sx.q(rdi_4) << 1) - 2) = 0
                                            rax_21 = var_118_1
                                        
                                        var_d8 = r12_3
                                        var_110 = 0
                                        int32_t var_d0_2 = rdi_4
                                        int32_t var_cc_2 = rax_21
                                        var_108_1.q = 0
                                        int32_t r15_3
                                        
                                        if (r15_2 == 0)
                                            r15_3 = 0
                                        else
                                            r15_3 = r15_2 - 1
                                        
                                        int32_t r8_9 = rbx_8[1].d
                                        int32_t rax_23 = r15_3 + rcx_24
                                        int32_t rdi_6 = r8_9 - 1
                                        
                                        if (r8_9 == 0)
                                            rdi_6 = 0
                                        
                                        int32_t rcx_28
                                        
                                        if (rax_23 s>= 0)
                                            rcx_28 = rdi_6
                                            
                                            if (rax_23 s< rdi_6)
                                                rcx_28 = rax_23
                                        else
                                            rcx_28 = 0
                                        
                                        int64_t r9_2 = sx.q(rcx_28)
                                        
                                        if (sx.q(rax_23) + 0x7fffffff s< r9_2)
                                            rdi_6 = rcx_28
                                        else if (sx.q(rax_23) + 0x7fffffff s< sx.q(rdi_6))
                                            rdi_6 = rax_23 + 0x7fffffff
                                        
                                        int16_t* const rax_25
                                        
                                        if (r8_9 == 0)
                                            rax_25 = &data_142d40450
                                        else
                                            rax_25 = *rbx_8
                                        
                                        int16_t* r15_4 = &rax_25[r9_2]
                                        uint64_t var_100 = 0
                                        rdi_3 = zx.q(rdi_6 - rcx_28)
                                        int64_t var_f8_1 = 0
                                        rsi_2 = 0
                                        r14_2 = 0
                                        r12_2 = 0
                                        
                                        if (r15_4 != 0 && *r15_4 != 0 && rdi_3.d s> 0)
                                            int32_t rdx_21 = (rdi_3 + 1).d
                                            
                                            if (rdx_21 s> 0)
                                                sub_1405947f0(&var_100, rdx_21)
                                                r12_2 = var_f8_1:4.d
                                                r14_2 = var_f8_1.d
                                                rsi_2 = var_100
                                            
                                            r14_2 = r14_2 + 1 + rdi_3.d
                                            var_f8_1.d = r14_2
                                            
                                            if (r14_2 s> r12_2)
                                                sub_140594770(&var_100)
                                                r12_2 = var_f8_1:4.d
                                                r14_2 = var_f8_1.d
                                                rsi_2 = var_100
                                            
                                            UnDecorator::getReferenceType(rsi_2, r15_4, rdi_3.d * 2)
                                            *(rsi_2 + (sx.q(r14_2) << 1) - 2) = 0
                                        
                                        var_100 = 0
                                        rdi_3.b = 0
                                        int64_t var_f8_2 = 0
                                    else
                                        rdi_3.b = 1
                                    
                                    int16_t* rcx_32 = var_b8
                                    
                                    if (rcx_32 != 0)
                                        sub_140a74f90(rcx_32)
                                    
                                    int64_t rdi_8
                                    
                                    if (rdi_3.b == 0 || &var_d8 == rbx_8)
                                        rdi_8 = var_f0_1
                                    else
                                        int32_t rdi_7 = rbx_8[1].d
                                        int64_t r15_5 = *rbx_8
                                        int32_t var_d0_3 = rdi_7
                                        
                                        if (rdi_7 != 0 || var_118_1 != 0)
                                            sub_1405a4c70(&var_d8, rdi_7, var_118_1)
                                            rdi_8 = var_d8
                                            memcpy(rdi_8, r15_5, rdi_7 * 2)
                                        else
                                            int32_t var_cc_3 = 0
                                            rdi_8 = var_f0_1
                                    
                                    void var_70
                                    
                                    if (*sub_1408f1b50(arg1 + 0x10, &var_70, &var_d8) == 0xffffffff)
                                        arg_10 = 0
                                        
                                        if (rsi_2 != 0)
                                            sub_140a74f90(rsi_2)
                                    else
                                        uint64_t var_60 = rsi_2
                                        int32_t var_58_1 = r14_2
                                        int32_t var_54_1 = r12_2
                                        int32_t var_94
                                        sub_1408f1b50(arg1 + 0x10, &var_94, &var_d8)
                                        int64_t rax_28 = sx.q(var_94)
                                        
                                        if (rax_28.d == 0xffffffff)
                                            (*0x10)(rax_11, &var_60, 0)
                                        else
                                            int64_t r8_19 = (rax_28 << 5) + *(arg1 + 0x10)
                                            (*(r8_19 + 0x10))(rax_11, &var_60, r8_19)
                                    
                                    if (rdi_8 != 0)
                                        sub_140a74f90(rdi_8)
                                    
                                    rbx_8 = &rbx_8[2]
                                while (rbx_8 != rax_18)
                                
                                rbx_8 = var_a8
                            
                            int64_t rcx_41 = var_c8
                            
                            if (rcx_41 != 0)
                                sub_140a74f90(rcx_41)
                                rbx_8 = var_a8
                            
                            int32_t i_5 = i_7
                            
                            if (i_5 != 0)
                                int32_t i_2
                                
                                do
                                    int64_t rcx_42 = *rbx_8
                                    
                                    if (rcx_42 != 0)
                                        sub_140a74f90(rcx_42)
                                    
                                    rbx_8 = &rbx_8[2]
                                    i_2 = i_5
                                    i_5 -= 1
                                while (i_2 != 1)
                                rbx_8 = var_a8
                            
                            if (rbx_8 != 0)
                                sub_140a74f90(rbx_8)
                            
                            int16_t* rcx_44 = var_90
                            
                            if (rcx_44 != 0)
                                sub_140a74f90(rcx_44)
                            
                            i = *r13_1
                            rsi = arg_18
                            
                            if (i != 0)
                                continue
                            
                            arg3 = zx.q(arg_10)
                            break
            
        label_141882ff1:
            i_1.b = 0
            return i_1

return zx.w(arg3.b)
