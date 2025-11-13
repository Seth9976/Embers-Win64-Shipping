// 函数: sub_140f05900
// 地址: 0x140f05900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* arg_18 = arg3
int64_t* arg_10 = arg2
int64_t* r15 = arg4
void* r10 = arg1
int32_t i = 0
int32_t i_1 = 0

if (arg3[1].d s> 0)
    result = nullptr
    void* const* result_1 = nullptr
    
    do
        int32_t j_1 = 0
        int32_t* r8 = *arg3 + result * 0x18
        int32_t rax_1 = r15[1].d
        int32_t* var_b0_1 = r8
        int32_t rcx_1 = rax_1 - 1
        int64_t rax_2 = 0
        
        if (rax_1 == 0)
            rcx_1 = 0
        
        int64_t var_c8_1 = 0
        bool cond:2_1 = r8[4] s<= 0
        *r8 = rcx_1
        
        if (not(cond:2_1))
            int64_t* rcx_2 = r10 + 8
            int64_t* var_a8_1 = rcx_2
            int32_t j
            
            do
                void* r15_2 = rax_2 * 0x70 + *(r8 + 8)
                void var_f8
                sub_140a61110(&var_f8, rcx_2, arg2, arg5)
                int64_t* var_138 = nullptr
                int64_t var_130_1 = 1
                sub_1405a4d70(&var_138)
                void* rsi_1 = r15_2 + 0x20
                int32_t* r13_1 = rsi_1 + 0x10
                void* var_b8_1 = rsi_1
                int32_t rcx_5 = 0
                int32_t var_e4_1 = 1
                int32_t var_e8_1 = 0
                int32_t r8_2 = 0
                *var_138 = r15_2 + 0x10
                int32_t r11_1 = r13_1[6]
                int32_t* var_e0_1 = r13_1
                int32_t var_d8_1 = 0xffffffff
                int64_t var_d4_1 = 0
                
                if (r11_1 != 0)
                    int32_t* rax_4 = *(r13_1 + 0x10)
                    int32_t* r9 = r13_1
                    
                    if (rax_4 != 0)
                        r9 = rax_4
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r11_1 - 1)
                    int32_t rdx_4 = *r9
                    
                    if (rdx_4 != 0)
                    label_140f05a69:
                        int32_t rax_11 = neg.d(rdx_4) & rdx_4
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                        int32_t var_e4_2 = rax_11
                        int32_t rax_12
                        
                        if (rax_11 == 0)
                            rax_12 = 0x20
                        else
                            rax_12 = 0x1f - temp0_2
                        
                        var_d4_1.d = r8_2 - rax_12 + 0x1f
                        
                        if (r8_2 - rax_12 + 0x1f s> r11_1)
                            var_d4_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_5 = sx.q(rcx_5)
                            r8_2 += 0x20
                            rcx_5 += 1
                            var_d4_1:4.d = r8_2
                            var_e8_1 = rcx_5
                            
                            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_4 = r9[rdx_5 + 1]
                            int32_t var_d8_2 = 0xffffffff
                            
                            if (rdx_4 != 0)
                                goto label_140f05a69
                        
                        var_d4_1.d = r11_1
                
                int32_t rdx_6 = *(rsi_1 + 0x28)
                int128_t var_60_1 = 0xffffffff
                int32_t rbx_2 = 0xffffffff << (rdx_6.b & 0x1f)
                int128_t var_70_1 = var_e8_1.o
                int32_t r8_5 = rdx_6 s>> 5
                int32_t r9_2 = rdx_6 & 0xffffffe0
                int64_t var_80_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_d8_3 = rbx_2
                var_d4_1.d = rdx_6
                arg5.o = var_70_1
                int128_t var_a0 = rsi_1.o
                int128_t var_90_1 = arg5.o
                
                if (rdx_6 != r11_1)
                    int32_t* rax_14 = *(r13_1 + 0x10)
                    int32_t* r10_1 = r13_1
                    
                    if (rax_14 != 0)
                        r10_1 = rax_14
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r11_1 - 1)
                    int32_t rdx_10 = r10_1[sx.q(r8_5)] & rbx_2
                    
                    if (rdx_10 != 0)
                    label_140f05b33:
                        int32_t rax_21 = neg.d(rdx_10) & rdx_10
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                        int32_t rax_22
                        
                        if (rax_21 == 0)
                            rax_22 = 0x20
                        else
                            rax_22 = 0x1f - temp0_4
                        
                        var_d4_1.d = r9_2 - rax_22 + 0x1f
                        
                        if (r9_2 - rax_22 + 0x1f s> r11_1)
                            var_d4_1.d = r11_1
                    else
                        while (true)
                            int64_t rcx_10 = sx.q(r8_5)
                            r9_2 += 0x20
                            r8_5 += 1
                            
                            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_10 = r10_1[rcx_10 + 1]
                            var_d8_3 = 0xffffffff
                            
                            if (rdx_10 != 0)
                                goto label_140f05b33
                        
                        var_d4_1.d = r11_1
                
                int32_t r14_1 = var_130_1:4.d
                int32_t rbx_3 = var_130_1.d
                
                while (true)
                    int64_t rcx_12 = sx.q(var_90_1:0xc.d)
                    int64_t rax_24 = var_a0.q
                    
                    if (rcx_12.d == (var_d8_3.q u>> 0x20).d && var_90_1.q == r13_1
                            && rax_24 == rsi_1)
                        break
                    
                    int32_t rdi_1 = rbx_3 + 1
                    int64_t rsi_4 = (rcx_12 << 5) + *rax_24
                    var_130_1.d = rdi_1
                    
                    if (rdi_1 s> r14_1)
                        sub_1405a4d70(&var_138)
                        r14_1 = var_130_1:4.d
                        rdi_1 = var_130_1.d
                    
                    int64_t* rcx_15 = var_138
                    int64_t rax_25 = sx.q(rbx_3)
                    rbx_3 = rdi_1 + 1
                    var_130_1.d = rbx_3
                    rcx_15[rax_25] = rsi_4 + 0x10
                    
                    if (rbx_3 s> r14_1)
                        sub_1405a4d70(&var_138)
                        rcx_15 = var_138
                        r14_1 = var_130_1:4.d
                        rbx_3 = var_130_1.d
                    
                    rcx_15[sx.q(rdi_1)] = rsi_4 + 0x14
                    var_90_1:8.d &= not.d(var_a0:0xc.d)
                    sub_14059bdd0(&var_a0:8)
                    rsi_1 = var_b8_1
                
                void* r15_4 = r15_2
                
                if (*(r15_4 + 0x18) != 0xffffffff)
                    if (*(r15_4 + 0x1c) != 0xffffffff)
                        int32_t rdi_2 = rbx_3 + 1
                        var_130_1.d = rdi_2
                        
                        if (rdi_2 s> r14_1)
                            sub_1405a4d70(&var_138)
                            r14_1 = var_130_1:4.d
                            rdi_2 = var_130_1.d
                        
                        int64_t* rcx_19 = var_138
                        int64_t rax_29 = sx.q(rbx_3)
                        rbx_3 = rdi_2 + 1
                        var_130_1.d = rbx_3
                        rcx_19[rax_29] = r15_4 + 0x18
                        
                        if (rbx_3 s> r14_1)
                            sub_1405a4d70(&var_138)
                            rcx_19 = var_138
                            r14_1 = var_130_1:4.d
                            rbx_3 = var_130_1.d
                        
                        rcx_19[sx.q(rdi_2)] = r15_4 + 0x1c
                    
                    r15_4 = r15_2
                
                var_130_1.d = rbx_3 + 1
                
                if (rbx_3 + 1 s> r14_1)
                    sub_1405a4d70(&var_138)
                
                int64_t* r13_2 = var_138
                r15 = arg4
                int64_t rbx_4 = 0
                int64_t var_128_2 = 0
                r13_2[sx.q(rbx_3)] = r15_4 + 0x14
                
                if (var_130_1.d s> 1)
                    int32_t k = 1
                    
                    do
                        int512_t zmm0_2 =
                            sub_140a8c510(&var_f8, zx.q(*r13_2[rbx_4]), zx.q(*r13_2[rbx_4 + 1]))
                        int32_t rax_34 = r15[1].d
                        int32_t rcx_23 = rax_34 - 1
                        
                        if (rax_34 == 0)
                            rcx_23 = 0
                        
                        *r13_2[rbx_4] = rcx_23
                        int32_t rdi_4 = sub_140a75eb0(&var_f8)
                        char rax_37
                        rax_37, arg5 = sub_140a73e30(&var_f8, zmm0_2)
                        
                        if (rax_37 != 0)
                            char rax_50
                            
                            do
                                int32_t rax_38 = sub_140a7a110(&var_f8)
                                int64_t rsi_7 = 0
                                int32_t rdi_5
                                int32_t r8_10
                                
                                if (rax_38 - rdi_4 s>= 0)
                                    int32_t r8_7 = arg_10[1].d
                                    int32_t rbx_5 = r8_7 - 1
                                    
                                    if (r8_7 == 0)
                                        rbx_5 = 0
                                    
                                    int32_t rcx_27
                                    
                                    if (rdi_4 s>= 0)
                                        rcx_27 = rbx_5
                                        
                                        if (rdi_4 s< rbx_5)
                                            rcx_27 = rdi_4
                                    else
                                        rcx_27 = 0
                                    
                                    int64_t rdx_18 = sx.q(rax_38 - rdi_4) + sx.q(rdi_4)
                                    int64_t r9_4 = sx.q(rcx_27)
                                    
                                    if (rdx_18 s< r9_4)
                                        rbx_5 = rcx_27
                                    else if (rdx_18 s< sx.q(rbx_5))
                                        rbx_5 = rdx_18.d
                                    
                                    int16_t* const rax_42
                                    
                                    if (r8_7 == 0)
                                        rax_42 = &data_142d40450
                                    else
                                        rax_42 = *arg_10
                                    
                                    int16_t* r14_2 = &rax_42[r9_4]
                                    int64_t var_120 = 0
                                    int32_t rbx_6 = rbx_5 - rcx_27
                                    int32_t var_118_1 = 0
                                    int32_t rax_43 = 0
                                    rdi_5 = 0
                                    int32_t var_114_1 = 0
                                    
                                    if (r14_2 != 0 && *r14_2 != 0 && rbx_6 s> 0)
                                        if (rbx_6 + 1 s> 0)
                                            sub_1405947f0(&var_120, rbx_6 + 1)
                                            rax_43 = var_114_1
                                            rdi_5 = var_118_1
                                            rsi_7 = var_120
                                        
                                        rdi_5 += rbx_6 + 1
                                        
                                        if (rdi_5 s> rax_43)
                                            sub_140594770(&var_120)
                                            rsi_7 = var_120
                                        
                                        UnDecorator::getReferenceType(rsi_7, r14_2, rbx_6 * 2)
                                        *(rsi_7 + (sx.q(rdi_5) << 1) - 2) = 0
                                    
                                    var_120 = 0
                                    r8_10 = rdi_5 - 1
                                    var_118_1.q = 0
                                
                                if (rax_38 - rdi_4 s< 0 || rdi_5 == 0)
                                    r8_10 = 0
                                
                                int512_t zmm0_3 = sub_140a20ba0(r15, rsi_7, r8_10)
                                
                                if (rsi_7 != 0)
                                    zmm0_3 = sub_140a74f90(rsi_7)
                                
                                sub_140a7a110(&var_f8)
                                int64_t rsi_8 = 0
                                
                                if (data_143e2a150 s> 0)
                                    int32_t rbx_7 = 1
                                    
                                    do
                                        if (sub_140a77dc0(&var_f8, rbx_7) != 0xffffffff
                                                && sub_140a77e50(&var_f8, rbx_7) != 0xffffffff)
                                            int64_t* rsi_10 = (rsi_8 << 4) + data_143e2a158
                                            int32_t rax_48 = rsi_10[1].d
                                            int32_t r8_11 = rax_48 - 1
                                            
                                            if (rax_48 == 0)
                                                r8_11 = 0
                                            
                                            zmm0_3 = sub_140a20ba0(r15, *rsi_10, r8_11)
                                            break
                                        
                                        rbx_7 += 1
                                        rsi_8 += 1
                                    while (rbx_7 - 1 s< data_143e2a150)
                                
                                rdi_4 = sub_140a7a1a0(&var_f8)
                                rax_50, arg5 = sub_140a73e30(&var_f8, zmm0_3)
                            while (rax_50 != 0)
                            r13_2 = var_138
                        
                        int32_t rax_51 = sub_140a79b40(&var_f8)
                        int64_t rsi_11 = 0
                        int32_t rdi_8
                        int32_t r8_15
                        
                        if (rax_51 - rdi_4 s>= 0)
                            int32_t r8_12 = arg_10[1].d
                            int32_t rbx_8 = r8_12 - 1
                            
                            if (r8_12 == 0)
                                rbx_8 = 0
                            
                            int32_t rcx_40
                            
                            if (rdi_4 s>= 0)
                                rcx_40 = rbx_8
                                
                                if (rdi_4 s< rbx_8)
                                    rcx_40 = rdi_4
                            else
                                rcx_40 = 0
                            
                            int64_t rdx_27 = sx.q(rax_51 - rdi_4) + sx.q(rdi_4)
                            int64_t r9_5 = sx.q(rcx_40)
                            
                            if (rdx_27 s< r9_5)
                                rbx_8 = rcx_40
                            else if (rdx_27 s< sx.q(rbx_8))
                                rbx_8 = rdx_27.d
                            
                            int16_t* const rax_55
                            
                            if (r8_12 == 0)
                                rax_55 = &data_142d40450
                            else
                                rax_55 = *arg_10
                            
                            int16_t* r14_3 = &rax_55[r9_5]
                            int64_t var_110 = 0
                            int32_t rbx_9 = rbx_8 - rcx_40
                            int32_t var_108_1 = 0
                            int32_t rax_56 = 0
                            rdi_8 = 0
                            int32_t var_104_1 = 0
                            
                            if (r14_3 != 0 && *r14_3 != 0 && rbx_9 s> 0)
                                if (rbx_9 + 1 s> 0)
                                    sub_1405947f0(&var_110, rbx_9 + 1)
                                    rax_56 = var_104_1
                                    rdi_8 = var_108_1
                                    rsi_11 = var_110
                                
                                rdi_8 = rdi_8 + 1 + rbx_9
                                
                                if (rdi_8 s> rax_56)
                                    sub_140594770(&var_110)
                                    rsi_11 = var_110
                                
                                UnDecorator::getReferenceType(rsi_11, r14_3, rbx_9 * 2)
                                *(rsi_11 + (sx.q(rdi_8) << 1) - 2) = 0
                            
                            var_110 = 0
                            r8_15 = rdi_8 - 1
                            var_108_1.q = 0
                        
                        if (rax_51 - rdi_4 s< 0 || rdi_8 == 0)
                            r8_15 = 0
                        
                        sub_140a20ba0(r15, rsi_11, r8_15)
                        
                        if (rsi_11 != 0)
                            arg5 = sub_140a74f90(rsi_11)
                        
                        k += 1
                        rbx_4 = var_128_2 + 1
                        var_128_2 = rbx_4
                    while (k s< var_130_1.d)
                
                int32_t rax_58 = r15[1].d
                int32_t rdx_32 = rax_58 - 1
                
                if (rax_58 == 0)
                    rdx_32 = 0
                
                *r13_2[rbx_4] = rdx_32
                
                if (r13_2 != 0)
                    arg5 = sub_140a74f90(r13_2)
                
                int64_t* var_f0
                
                if (var_f0 != 0)
                    var_f0[1].d -= 1
                    
                    if (var_f0[1].d == 1)
                        (**var_f0)(var_f0)
                        int32_t temp6_1 = *(var_f0 + 0xc)
                        *(var_f0 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*var_f0 + 8))(var_f0, 1)
                
                j = j_1 + 1
                r8 = var_b0_1
                rax_2 = var_c8_1 + 1
                arg2 = arg_10
                rcx_2 = var_a8_1
                j_1 = j
                var_c8_1 = rax_2
            while (j s< r8[4])
            i = i_1
            r10 = arg1
        
        int32_t rax_63 = r15[1].d
        int32_t rcx_49 = rax_63 - 1
        
        if (rax_63 == 0)
            rcx_49 = 0
        
        i += 1
        r8[1] = rcx_49
        result = result_1 + 1
        arg3 = arg_18
        i_1 = i
        result_1 = result
    while (i s< arg3[1].d)

return result
