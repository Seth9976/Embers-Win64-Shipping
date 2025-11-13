// 函数: sub_141e6c6e0
// 地址: 0x141e6c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
uint64_t result = zx.q(arg1[0x7c].d)
int64_t arg_8 = rbx

if (result.d != *(arg1 + 0x40c))
    int32_t rax_1 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = &arg1[0x82]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = zx.q(*(r8 + (((sx.q(arg1[0x84].d) - 1) & sx.q(rax_1)) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t r8_1 = arg1[0x7b]
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(result.d)
            int64_t rcx_3 = rdx_3 << 5
            
            if (*(rcx_3 + r8_1) == rbx)
                break
            
            result = zx.q(*(rcx_3 + r8_1 + 0x18))
            
            if (result.d == 0xffffffff)
                return result
        
        if (result.d != 0xffffffff)
            int64_t rdx_4 = rdx_3 << 5
            void* rdx_5 = rdx_4 + r8_1
            
            if (rdx_4 != neg.q(r8_1) && rdx_5 != -8)
                void* rsi_1 = &arg2[1]
                void* r15_1 = *(rdx_5 + 8)
                sub_141e5d130(r15_1 + 0x88, &arg_8, arg2[1])
                int64_t rax_3 = sx.q(arg_8.d)
                int64_t rax_5
                
                if (rax_3.d != 0xffffffff)
                    rax_5 = rax_3 * 0x90
                
                void* r14_1
                
                if (rax_3.d == 0xffffffff || rax_5 == neg.q(*(r15_1 + 0x88)))
                    r14_1 = nullptr
                else
                    r14_1 = rax_5 + *(r15_1 + 0x88) + 8
                
                int64_t var_78
                (*(*arg1 + 0x3d0))(arg1, &var_78, arg3)
                
                if (r14_1 != 0)
                    sub_140d16af0(r14_1 + 0x18, &var_78)
                
                int64_t rax_8 = *rsi_1
                arg_8 = rax_8
                void* rax_11 =
                    sub_141e4d120(r15_1 + 0x88, sub_140b5ead0(rax_8.d) + arg_8:4.d, rsi_1)
                int32_t var_60_1 = 0xffffffff
                *rax_11 = *arg3
                int64_t rcx_10 = var_78
                int64_t var_5c_1 = 0
                int64_t var_70
                int64_t var_48
                sub_140596d10(&var_48, &var_70)
                *(rax_11 + 0x10) = var_5c_1:4.d
                *(rax_11 + 8) = var_60_1.q
                *(rax_11 + 0x18) = rcx_10
                sub_140597df0(rax_11 + 0x20, &var_48)
                int64_t rcx_14 = var_48
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                int16_t** var_a0
                sub_141ca3350(arg3, &var_a0)
                int64_t* var_98
                int64_t rax_14
                
                if (var_a0 != *arg2 || var_98 != *rsi_1)
                    rax_14.b = 1
                else
                    rax_14.b = 0
                
                int128_t var_88
                
                if (rax_14.b != 0)
                    int64_t* rax_15 = sub_141e5ea90(arg1)
                    int64_t rdx_14 = *rax_11
                    int64_t r9_1 = *rax_15
                    var_88 = *arg2
                    (*(r9_1 + 0x250))(rax_15, rdx_14, &var_88, r9_1)
                
                int32_t var_b8
                int64_t var_b0
                
                if (*(arg1 + 0x2d6) != 0)
                    int64_t rbx_2 = var_78
                    sub_140a696e0(&arg1[5], &var_a0)
                    *var_98 = rbx_2
                    *(var_98 + 8) = *arg2
                    var_98[3].d = 0xffffffff
                    int32_t r8_6 = (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d)
                    var_b0 = 0
                    var_b8 = var_a0.d
                    sub_140e0e970(&arg1[5], &arg_8, r8_6, var_98, var_b8, nullptr)
                    rsi_1 = &arg2[1]
                
                if (r14_1 == 0)
                label_141e6ca07:
                    r14_1.b = *(r15_1 + 0x39) == 0
                    int32_t* arg_10 = nullptr
                    arg_8.b = 0
                    var_88:8.q = &arg_8
                    r14_1.b += 1
                    var_88.q = sub_140cf2ef0
                    void* rax_18 = sub_140a756e0(&var_88, &data_1439aa2e4)
                    int64_t rdi_2 = sx.q(*(rax_18 + 0x18))
                    int32_t rcx_25 = (rdi_2 + 1).d
                    *(rax_18 + 0x18) = rcx_25
                    
                    if (rcx_25 s> *(rax_18 + 0x1c))
                        sub_1405c4d20(rax_18 + 0x10)
                    
                    int64_t rdx_22 = *(rax_18 + 0x10)
                    int64_t rcx_27 = rdi_2 * 5
                    *(rdx_22 + (rcx_27 << 2)) = arg_10
                    *(rdx_22 + (rcx_27 << 2) + 8) = 0
                    *(rdx_22 + (rcx_27 << 2) + 0x10) = r14_1.b
                    *(rdx_22 + (rcx_27 << 2) + 0x11) = 2
                    var_a0 = nullptr
                    int32_t i_2 = 0
                    
                    if (sub_141cb4260(&var_a0, arg3) != 0)
                        int16_t** r15_2 = var_a0
                        int32_t* rax_22 = &r15_2[sx.q(i_2) * 5]
                        arg_10 = rax_22
                        
                        if (r15_2 != rax_22)
                            arg_8 = 0
                            
                            do
                                if (*r15_2 != 0)
                                    int32_t rcx_30
                                    rcx_30.b = sub_140b5b8a0(r15_2[1].d, 0).b == 0
                                    rax_22.b = *(r15_2 + 0xc) != 0
                                    rax_22.b |= rcx_30.b
                                
                                if (*r15_2 == 0 || rax_22.b == 0)
                                    rax_22.b = 0
                                else
                                    rax_22.b = 1
                                
                                if (rax_22.b != 0)
                                    if (*r15_2 != *arg2 || r15_2[1] != *rsi_1)
                                        rax_22.b = 0
                                    else
                                        rax_22.b = 1
                                    
                                    if (rax_22.b != 0)
                                        void* rax_24 =
                                            sub_141e4d070(&arg1[0x23], sub_140cde1f0(arg2), arg2)
                                        sub_140783a30(rax_24, &var_88)
                                        int64_t* rsi_2 = var_88:8.q
                                        *rsi_2 = r15_2[2]
                                        sub_141e4f110(&rsi_2[1], r15_2)
                                        rsi_2[6].d = 0xffffffff
                                        int64_t rbx_5 = *rsi_2
                                        var_b0 = 0
                                        int32_t r8_10 = (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d)
                                        var_b8 = var_88.d
                                        sub_141e5aff0(rax_24, &arg_8, r8_10, rsi_2, var_b8, nullptr)
                                
                                r15_2 = &r15_2[5]
                                rsi_1 = &arg2[1]
                            while (r15_2 != arg_10)
                        
                        int64_t* rax_27 = sub_141e5ea90(arg1)
                        void* rax_28 = sub_141cb9750()
                        int64_t r9_5 = *rax_27
                        (*(r9_5 + 0xa8))(rax_27, *arg3, *(rax_28 + 0x18), r9_5, var_b8, var_b0, 0)
                    
                    int32_t i_1 = i_2
                    
                    if (i_1 != 0)
                        void* rbx_9 = &var_a0[3]
                        int32_t i
                        
                        do
                            sub_1408464b0(rbx_9)
                            rbx_9 += 0x28
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    int16_t** rcx_41 = var_a0
                    
                    if (rcx_41 != 0)
                        sub_140a74f90(rcx_41)
                    
                    arg_8.b = 0
                    var_88:8.q = &arg_8
                    var_88.q = sub_140cf2ef0
                    void* rax_30 = sub_140a756e0(&var_88, &data_1439aa2e4)
                    int32_t rcx_43 = *(rax_30 + 0x18)
                    
                    if (0 != 0)
                        int64_t r10_1 = *(rax_30 + 0x10)
                        memmove(r10_1 + sx.q(rcx_43 - 1) * 0x14, r10_1 + sx.q(rcx_43) * 0x14, 0)
                        rcx_43 = *(rax_30 + 0x18)
                    
                    *(rax_30 + 0x18) = rcx_43 - 1
                    result = sub_1413a8970(rax_30 + 0x10)
                else
                    result = zx.q(arg1[0x24].d)
                    int32_t r9_3
                    
                    if (result.d == *(arg1 + 0x14c))
                    label_141e6c9df:
                        r9_3 = -1
                    else
                        int32_t result_1 = sub_140cde1f0(arg2)
                        void* r8_7 = &arg1[0x2a]
                        void* rcx_22 = *(r8_7 + 8)
                        result = sx.q(result_1)
                        
                        if (rcx_22 != 0)
                            r8_7 = rcx_22
                        
                        r9_3 = *(r8_7 + (((sx.q(arg1[0x2c].d) - 1) & result) << 2))
                        
                        if (r9_3 == 0xffffffff)
                        label_141e6c9df_1:
                            r9_3 = -1
                        else
                            int64_t rdx_20 = arg1[0x23]
                            
                            while (true)
                                int64_t* rcx_23 = sx.q(r9_3) * 0x68
                                
                                if (*(rcx_23 + rdx_20) != *arg2 || *(rcx_23 + rdx_20 + 8) != *rsi_1)
                                    result.b = 0
                                else
                                    result.b = 1
                                
                                if (result.b != 0)
                                    break
                                
                                r9_3 = *(rcx_23 + rdx_20 + 0x60)
                                
                                if (r9_3 == 0xffffffff)
                                    goto label_141e6c9df_1
                    
                    if (r9_3 == 0xffffffff)
                        goto label_141e6ca07
                
                int64_t rcx_46 = var_70
                
                if (rcx_46 != 0)
                    return sub_140a74f90(rcx_46)

return result
