// 函数: sub_141c95fc0
// 地址: 0x141c95fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg2 + 0x188))(arg2)

if (result.b != 0)
    result = sub_140d21d80(arg2)
    uint64_t result_2 = result
    uint64_t result_1 = result
    
    if (((*(result + 0x50) u>> 5).b & 1) == 0)
        int64_t rdi_1 = *(result + 0x18)
        int64_t* r14_1 = *arg1
        int64_t var_e8 = rdi_1
        int32_t var_d8
        sub_14090a150(r14_1, &var_d8)
        int64_t* var_d0
        int64_t* rsi_1 = var_d0
        *rsi_1 = rdi_1
        rsi_1[1].d = 0xffffffff
        int64_t arg_20
        sub_1407ec830(r14_1, &arg_20, (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d), rsi_1, var_d8, 
            nullptr)
        
        if (*arg1[1] == 0)
        label_141c96117:
            
            if (*arg1[3] == 0)
            label_141c961e1:
                arg_20 = *(result_2 + 0x18)
                sub_140b63b70(&arg_20, &var_d8)
                int64_t* rax_13 = sub_140baa480(&var_e8, &var_d8)
                int16_t* rdx_16
                
                if (rax_13[1].d == 0)
                    rdx_16 = &data_142d40450
                else
                    rdx_16 = *rax_13
                
                int64_t var_a0
                sub_140b58260(&var_a0, rdx_16, 1)
                int64_t rcx_19 = var_e8
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                int64_t rcx_20 = var_d8.q
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                if (*arg1[5] == 0)
                label_141c962bd:
                    (*(*arg2 + 0x180))(arg2, arg1[7])
                    void* r9_2 = arg1[8]
                    void* var_98
                    
                    if (*(r9_2 + 0x48) != *(r9_2 + 0x74))
                        int32_t rbx_6 = *(r9_2 + 0x68)
                        int64_t* r9_3 = r9_2 + 0x50
                        int32_t rcx_26 = 0
                        int32_t var_d4_1 = 1
                        int32_t r10_1 = 0
                        var_d8 = 0
                        int32_t r8_4 = 0
                        var_d0 = r9_3
                        int32_t var_c8_1 = 0xffffffff
                        int64_t var_c4_1 = 0
                        
                        if (rbx_6 != 0)
                            int64_t* rax_20 = r9_3[2]
                            r10_1 = rbx_6
                            
                            if (rax_20 != 0)
                                r9_3 = rax_20
                            
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rbx_6 - 1)
                            int32_t rdx_24 = *r9_3
                            
                            if (rdx_24 != 0)
                            label_141c9635b:
                                int32_t rax_27 = neg.d(rdx_24) & rdx_24
                                uint64_t rflags_1
                                int32_t temp0_2
                                temp0_2, rflags_1 = _bit_scan_reverse(rax_27)
                                int32_t var_d4_2 = rax_27
                                int32_t rax_28
                                
                                if (rax_27 == 0)
                                    rax_28 = 0x20
                                else
                                    rax_28 = 0x1f - temp0_2
                                
                                int32_t rax_29 = r8_4 - rax_28 + 0x1f
                                
                                if (rax_29 s> rbx_6)
                                    rax_29 = rbx_6
                                
                                r10_1 = rax_29
                                var_c4_1.d = rax_29
                            else
                                while (true)
                                    int64_t rdx_25 = sx.q(rcx_26)
                                    r8_4 += 0x20
                                    rcx_26 += 1
                                    var_c4_1:4.d = r8_4
                                    var_d8 = rcx_26
                                    
                                    if (rdx_25.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                        var_c4_1.d = rbx_6
                                        break
                                    
                                    rdx_24 = *(r9_3 + (rdx_25 << 2) + 4)
                                    var_c8_1 = 0xffffffff
                                    
                                    if (rdx_24 != 0)
                                        goto label_141c9635b
                        
                        var_98 = r9_2 + 0x40
                        double zmm2_1[0x2] = var_c8_1.o
                        int128_t var_90_1 = var_d8.o
                        int128_t zmm0_1 = var_98.o
                        double var_80_1[0x2] = zmm2_1
                        int64_t var_b8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                        var_d8.o = zmm0_1
                        var_c8_1.o = var_90_1
                        
                        if (r10_1 s>= rbx_6)
                            return sub_141cabc80(arg1[7], 0)
                        
                        int32_t var_bc
                        int32_t rcx_28 = var_bc
                        
                        while (true)
                            int64_t rdx_26 = sx.q(rcx_28) * 5
                            int64_t rcx_29 = *var_d8.q
                            void* r9_4 = rcx_29 + (rdx_26 << 3)
                            int64_t* rdx_27 = arg1[7]
                            int64_t* rcx_30 = *rdx_27
                            void* r8_8 = &rcx_30[sx.q(rdx_27[1].d) * 4]
                            
                            if (rcx_30 != r8_8)
                                while (*rcx_30 != *(rcx_29 + (rdx_26 << 3)))
                                    rcx_30 = &rcx_30[4]
                                    
                                    if (rcx_30 == r8_8)
                                        goto label_141c96452
                                
                                if (*(r9_4 + 0x18) == 0)
                                    break
                                
                                int16_t* rdx_28
                                
                                if (*(r9_4 + 0x10) == 0)
                                    rdx_28 = &data_142d40450
                                else
                                    rdx_28 = *(r9_4 + 8)
                                
                                int16_t* const rcx_31
                                
                                if (rcx_30[2].d == 0)
                                    rcx_31 = &data_142d40450
                                else
                                    rcx_31 = rcx_30[1]
                                
                                if (sub_140a54510(rcx_31, rdx_28) == 0)
                                    break
                            
                        label_141c96452:
                            var_c4_1:4.d &= not.d(var_d0:4.d)
                            sub_14059bdd0(&var_d0)
                            rcx_28 = var_bc
                            
                            if (rcx_28 s>= *(var_c8_1.q + 0x18))
                                return sub_141cabc80(arg1[7], 0)
                    
                    int64_t* rcx_36 = arg1[7]
                    int64_t r14_2 = 0
                    int32_t r15_1 = 0
                    var_e8 = 0
                    int32_t r12_1 = 0
                    int64_t var_e0_1 = 0
                    int32_t* rbx_7 = *rcx_36
                    void* rsi_7 = &rbx_7[sx.q(rcx_36[1].d) * 8]
                    
                    if (rbx_7 != rsi_7)
                        do
                            int32_t rcx_34
                            rcx_34.b = sub_140b5b8a0(*rbx_7, 0) == 0
                            
                            if ((rbx_7[1] != 0 | rcx_34.b) != 0 && rbx_7[4] s> 1)
                                sub_141c8f680(&var_e8, rbx_7, &rbx_7[2])
                            
                            rbx_7 = &rbx_7[8]
                        while (rbx_7 != rsi_7)
                        
                        rcx_36 = arg1[7]
                        r12_1 = var_e0_1:4.d
                        r15_1 = var_e0_1.d
                        r14_2 = var_e8
                    
                    sub_141cabc80(rcx_36, 0)
                    uint64_t result_3 = result_1
                    result_1 = 0
                    int64_t rbx_8 = sx.q(*(result_3 + 0x48))
                    int32_t r13_1 = *(result_3 + 0x50)
                    int64_t rsi_8 = *(result_3 + 0x40)
                    int32_t var_a8_1 = rbx_8.d
                    
                    if (rbx_8.d != 0)
                        sub_140638750(&result_1, rbx_8.d, 0)
                        memcpy(result_1, rsi_8, (rbx_8 << 2).d)
                    else
                        int32_t var_a4_1 = 0
                    
                    int64_t r8_12 = var_a0
                    var_e8 = 0
                    int32_t var_108_1
                    var_108_1.q = *(arg2[2] + 0x18)
                    var_d8.q = r14_2
                    var_d0.d = r15_1
                    var_d0:4.d = r12_1
                    int64_t var_e0_2 = 0
                    int64_t* rax_40 = sub_141c91700(&var_98, rdi_1, r8_12, arg2[3], var_108_1, 
                        &var_d8, &result_1, r13_1)
                    void* r8_14 = arg1[9]
                    *arg3 = (*r8_14)(*(r8_14 + 8), rax_40, r8_14)
                    int64_t var_60
                    
                    if (var_60 != 0)
                        sub_140a74f90(var_60)
                    
                    int64_t* var_68
                    
                    if (var_68 != 0)
                        var_68[1].d -= 1
                        
                        if (var_68[1].d == 1)
                            (**var_68)(var_68)
                            int32_t temp3_1 = *(var_68 + 0xc)
                            *(var_68 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*var_68 + 8))(var_68, 1)
                    
                    return sub_1408464b0(&var_e8)
                
                int64_t* rsi_3 = arg1[6]
                int64_t rbx_5 = var_a0
                result = zx.q(rsi_3[1].d)
                
                if (result.d != *(rsi_3 + 0x34))
                    arg_20 = rbx_5
                    int32_t rax_16 = sub_140b5ead0(rbx_5.d) + arg_20:4.d
                    void* r8_3 = &rsi_3[7]
                    void* rcx_22 = *(r8_3 + 8)
                    
                    if (rcx_22 != 0)
                        r8_3 = rcx_22
                    
                    result = zx.q(*(r8_3 + (((sx.q(rsi_3[9].d) - 1) & sx.q(rax_16)) << 2)))
                    
                    if (result.d != 0xffffffff)
                        int64_t rdx_20 = *rsi_3
                        
                        while (true)
                            int64_t rcx_24 = sx.q(result.d) * 2
                            
                            if (*(rdx_20 + (rcx_24 << 3)) == rbx_5)
                                break
                            
                            result = zx.q(*(rdx_20 + (rcx_24 << 3) + 8))
                            
                            if (result.d == 0xffffffff)
                                return result
                        
                        if (result.d != 0xffffffff)
                            goto label_141c962bd
            else
                int64_t* rax_8 = sub_140d21e10(arg2, &var_d8, 0)
                int16_t* rdx_9
                
                if (rax_8[1].d == 0)
                    rdx_9 = &data_142d40450
                else
                    rdx_9 = *rax_8
                
                sub_140b58260(&arg_20, rdx_9, 0)
                int64_t rcx_11 = var_d8.q
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t* rsi_2 = arg1[4]
                int64_t rbx_4 = arg_20
                result = zx.q(rsi_2[1].d)
                
                if (result.d != *(rsi_2 + 0x34))
                    var_e8 = rbx_4
                    int32_t rax_10 = sub_140b5ead0(rbx_4.d) + var_e8:4.d
                    void* r8_2 = &rsi_2[7]
                    void* rcx_13 = *(r8_2 + 8)
                    
                    if (rcx_13 != 0)
                        r8_2 = rcx_13
                    
                    result = zx.q(*(r8_2 + (((sx.q(rsi_2[9].d) - 1) & sx.q(rax_10)) << 2)))
                    
                    if (result.d != 0xffffffff)
                        int64_t rdx_13 = *rsi_2
                        
                        while (true)
                            int64_t rcx_15 = sx.q(result.d) * 2
                            
                            if (*(rdx_13 + (rcx_15 << 3)) == rbx_4)
                                break
                            
                            result = zx.q(*(rdx_13 + (rcx_15 << 3) + 8))
                            
                            if (result.d == 0xffffffff)
                                return result
                        
                        if (result.d != 0xffffffff)
                            goto label_141c961e1
        else
            int64_t* rbx_3 = arg1[2]
            result = zx.q(rbx_3[1].d)
            
            if (result.d != *(rbx_3 + 0x34))
                int32_t rax_5 = sub_140b5ead0(rdi_1.d) + var_e8:4.d
                void* r8_1 = &rbx_3[7]
                void* rcx_6 = *(r8_1 + 8)
                
                if (rcx_6 != 0)
                    r8_1 = rcx_6
                
                result = zx.q(*(r8_1 + (((sx.q(rbx_3[9].d) - 1) & sx.q(rax_5)) << 2)))
                
                if (result.d != 0xffffffff)
                    int64_t rdx_7 = *rbx_3
                    
                    while (true)
                        int64_t rcx_8 = sx.q(result.d) * 2
                        
                        if (*(rdx_7 + (rcx_8 << 3)) == rdi_1)
                            break
                        
                        result = zx.q(*(rdx_7 + (rcx_8 << 3) + 8))
                        
                        if (result.d == 0xffffffff)
                            return result
                    
                    if (result.d != 0xffffffff)
                        goto label_141c96117

return result
