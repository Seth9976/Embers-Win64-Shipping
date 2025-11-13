// 函数: sub_141e59bc0
// 地址: 0x141e59bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[1].d s>= 1)
    int32_t rbx_1 = 0
    int64_t* rax = *arg1
    int16_t* var_78 = nullptr
    int32_t rdi_1 = rax[1].d
    int64_t rsi_1 = *rax
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_78, rdi_1, 0)
        memcpy(var_78, rsi_1, rdi_1 * 2)
    else
        int32_t var_6c_1 = 0
    
    result = sub_140a23cf0(&var_78, &data_142d84ee0, 1, 0, 0xffffffff)
    
    if (result.d != 0xffffffff)
        result = data_143f5b298
        
        if (result != 0 && result[0x55] != 0)
            void* rax_1 = sub_141e5df80()
            int16_t* rdx_3
            int32_t r8_3
            
            if (rdi_1 == 0)
                r8_3 = 0
                rdx_3 = &data_142d40450
            else
                rdx_3 = var_78
                r8_3 = rdi_1 - 1
            
            int64_t var_68
            sub_140ce2e40(&var_68, rdx_3, r8_3)
            result = zx.q(*(rax_1 + 0x120))
            int64_t* r8_7
            
            if (result.d == *(rax_1 + 0x14c))
            label_141e59d15:
                r8_7 = nullptr
            else
                int32_t rax_3 = sub_140cde1f0(&var_68)
                void* r8_4 = rax_1 + 0x150
                void* rcx_5 = *(r8_4 + 8)
                
                if (rcx_5 != 0)
                    r8_4 = rcx_5
                
                result = zx.q(*(r8_4 + (((sx.q(*(rax_1 + 0x160)) - 1) & sx.q(rax_3)) << 2)))
                
                if (result.d == 0xffffffff)
                label_141e59d15_1:
                    r8_7 = nullptr
                else
                    while (true)
                        r8_7 = sx.q(result.d) * 0x68 + *(rax_1 + 0x118)
                        int64_t var_60
                        
                        if (*r8_7 == var_68 && r8_7[1] == var_60)
                            break
                        
                        result = zx.q(r8_7[0xc].d)
                        
                        if (result.d == 0xffffffff)
                            goto label_141e59d15_2
                    
                    if (result.d == 0xffffffff)
                    label_141e59d15_2:
                        r8_7 = nullptr
            
            void* r9_1 = &r8_7[2]
            
            if (r8_7 == 0)
                r9_1 = nullptr
            
            if (r9_1 != 0)
                int32_t r10_2 = *(r9_1 + 0x28)
                void* r8_8 = r9_1 + 0x10
                int32_t var_58_1 = 0
                int32_t rcx_7 = 0
                int32_t var_54_1 = 1
                void* var_50 = r8_8
                int32_t var_48_1 = 0xffffffff
                int64_t var_44_1 = 0
                
                if (r10_2 != 0)
                    void* rax_5 = *(r8_8 + 0x10)
                    
                    if (rax_5 != 0)
                        r8_8 = rax_5
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r10_2 - 1)
                    int32_t rdx_10 = *r8_8
                    
                    if (rdx_10 != 0)
                    label_141e59da6:
                        int32_t rax_12 = neg.d(rdx_10) & rdx_10
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                        int32_t var_54_2 = rax_12
                        int32_t rax_13
                        
                        if (rax_12 == 0)
                            rax_13 = 0x20
                        else
                            rax_13 = 0x1f - temp0_2
                        
                        var_44_1.d = rcx_7 - rax_13 + 0x1f
                        
                        if (rcx_7 - rax_13 + 0x1f s> r10_2)
                            var_44_1.d = r10_2
                    else
                        while (true)
                            int64_t rdx_11 = sx.q(rbx_1)
                            rcx_7 += 0x20
                            rbx_1 += 1
                            var_44_1:4.d = rcx_7
                            var_58_1 = rbx_1
                            
                            if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_10 = *(r8_8 + (rdx_11 << 2) + 4)
                            var_48_1 = 0xffffffff
                            
                            if (rdx_10 != 0)
                                goto label_141e59da6
                        
                        var_44_1.d = r10_2
                
                int128_t var_18_1 = 0xffffffff
                double var_28_1[0x2] = var_58_1.o
                var_58_1.o = r9_1.o
                result = nullptr
                int64_t var_38_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                var_48_1.o = var_28_1
                int32_t i
                
                if (0 s< r10_2)
                    do
                        var_44_1:4.d &= not.d(var_50:4.d)
                        sub_14059bdd0(&var_50)
                        result = var_48_1.q
                    while (i s< result[3].d)
    
    int16_t* rcx_11 = var_78
    
    if (rcx_11 != 0)
        return sub_140a74f90(rcx_11)

return result
