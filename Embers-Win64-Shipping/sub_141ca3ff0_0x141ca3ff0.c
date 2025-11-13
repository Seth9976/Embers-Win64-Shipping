// 函数: sub_141ca3ff0
// 地址: 0x141ca3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rbx = arg_10:4.d
uint64_t result

if (arg6[1].d == *(arg6 + 0x34))
label_141ca4088:
    
    if (arg4[1].d == *(arg4 + 0x34))
    label_141ca40f7:
        int32_t var_a8
        sub_14090a150(arg3, &var_a8)
        int64_t* var_a0
        *var_a0 = arg2
        var_a0[1].d = 0xffffffff
        int32_t r14_1 = 0
        sub_1407ec830(arg3, &arg_10, (arg2 u>> 0x20).d + sub_140b5ead0(arg2.d), var_a0, var_a8, 
            nullptr)
        sub_14090a150(arg4, &var_a8)
        *var_a0 = arg2
        var_a0[1].d = 0xffffffff
        sub_1407ec830(arg4, &arg_10, (arg2 u>> 0x20).d + sub_140b5ead0(arg2.d), var_a0, var_a8, 
            nullptr)
        sub_140a73990(arg5, &arg_10, arg2)
        result = sx.q(arg_10.d)
        
        if (result.d != 0xffffffff)
            int64_t* r11_1 = arg5
            uint64_t rax_13 = result * 0x60
            result = rax_13 + *r11_1
            
            if (rax_13 != neg.q(*r11_1))
                void* rsi_3 = result + 8
                
                if (rsi_3 != 0)
                    int32_t r10_1 = *(rsi_3 + 0x28)
                    var_a8 = 0
                    int32_t rcx_15 = 0
                    int32_t var_a4_1 = 1
                    void* var_a0_1 = rsi_3 + 0x10
                    int32_t var_98_1 = 0xffffffff
                    int32_t var_94_1 = 0
                    int32_t var_90_1 = 0
                    
                    if (r10_1 != 0)
                        void* rax_14 = *(rsi_3 + 0x20)
                        void* r8_5 = rsi_3 + 0x10
                        
                        if (rax_14 != 0)
                            r8_5 = rax_14
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r10_1 - 1)
                        int32_t rdx_15 = *r8_5
                        int32_t var_94_3
                        
                        if (rdx_15 != 0)
                        label_141ca4248:
                            int32_t rax_21 = neg.d(rdx_15) & rdx_15
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
                            int32_t var_a4_2 = rax_21
                            int32_t rax_22
                            
                            if (rax_21 == 0)
                                rax_22 = 0x20
                            else
                                rax_22 = 0x1f - temp0_2
                            
                            int32_t var_94_2 = rcx_15 - rax_22 + 0x1f
                            
                            if (rcx_15 - rax_22 + 0x1f s> r10_1)
                                var_94_3 = r10_1
                        else
                            while (true)
                                int64_t rdx_16 = sx.q(r14_1)
                                rcx_15 += 0x20
                                r14_1 += 1
                                int32_t var_90_2 = rcx_15
                                var_a8 = r14_1
                                
                                if (rdx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_15 = *(r8_5 + (rdx_16 << 2) + 4)
                                var_98_1 = 0xffffffff
                                
                                if (rdx_15 != 0)
                                    goto label_141ca4248
                            
                            var_94_3 = r10_1
                    
                    int32_t rdx_18 = *(rsi_3 + 0x28)
                    double zmm2[0x2] = var_98_1.o
                    int32_t var_94_4 = rdx_18
                    double var_48_1[0x2] = zmm2
                    int128_t var_58_1 = var_a8.o
                    int32_t r13_1 = 0xffffffff << (rdx_18 & 0x1f).b
                    int32_t r8_7 = rdx_18 s>> 5
                    int32_t r9_3 = rdx_18 & 0xffffffe0
                    int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                    int32_t var_98_2 = r13_1
                    int128_t var_88 = rsi_3.o
                    int128_t var_78_1 = var_58_1
                    
                    if (rdx_18 != r10_1)
                        void* rax_25 = *(rsi_3 + 0x20)
                        void* r11_2 = rsi_3 + 0x10
                        
                        if (rax_25 != 0)
                            r11_2 = rax_25
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r10_1 - 1)
                        int32_t rdx_22 = *(r11_2 + (sx.q(r8_7) << 2)) & r13_1
                        int32_t var_94_6
                        
                        if (rdx_22 != 0)
                        label_141ca4317:
                            int32_t rax_31 = neg.d(rdx_22) & rdx_22
                            uint64_t rflags_2
                            int32_t temp0_4
                            temp0_4, rflags_2 = _bit_scan_reverse(rax_31)
                            int32_t rdi_1
                            
                            if (rax_31 == 0)
                                rdi_1 = 0x20
                            else
                                rdi_1 = 0x1f - temp0_4
                            
                            result = zx.q(r9_3 - rdi_1 + 0x1f)
                            int32_t var_94_5 = result.d
                            
                            if (result.d s> r10_1)
                                var_94_6 = r10_1
                        else
                            while (true)
                                int64_t rcx_19 = sx.q(r8_7)
                                r9_3 += 0x20
                                r8_7 += 1
                                
                                if (rcx_19.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_22 = *(r11_2 + (rcx_19 << 2) + 4)
                                var_98_2 = 0xffffffff
                                
                                if (rdx_22 != 0)
                                    goto label_141ca4317
                            
                            var_94_6 = r10_1
                        r11_1 = arg5
                    
                    while (true)
                        int64_t rcx_21 = sx.q(var_78_1:0xc.d)
                        
                        if (rcx_21.d != (var_98_2.q u>> 0x20).d || var_78_1.q != rsi_3 + 0x10)
                            result.b = 0
                        else
                            result.b = 1
                        
                        int64_t* rdx_23 = var_88.q
                        
                        if (result.b == 0 || rdx_23 != rsi_3)
                            result.b = 1
                        else
                            result.b = 0
                        
                        if (result.b == 0)
                            break
                        
                        int32_t var_b8_2
                        var_b8_2.q = r11_1
                        sub_141ca3ff0(arg1, *(*rdx_23 + rcx_21 * 0x10), arg3, arg4, var_b8_2, arg6)
                        var_78_1:8.d &= not.d(var_88:0xc.d)
                        sub_14059bdd0(&var_88:8)
                        r11_1 = arg5
    else
        int32_t rax_5 = sub_140b5ead0(arg2.d)
        void* rcx_5 = arg4[8]
        void* r8_1 = &arg4[7]
        
        if (rcx_5 != 0)
            r8_1 = rcx_5
        
        result = zx.q(*(r8_1 + (((sx.q(arg4[9].d) - 1) & sx.q(rax_5 + rbx)) << 2)))
        
        if (result.d == 0xffffffff)
            goto label_141ca40f7
        
        int64_t rdx_7 = *arg4
        
        while (true)
            int64_t rcx_7 = sx.q(result.d) * 2
            
            if (*(rdx_7 + (rcx_7 << 3)) == arg2)
                break
            
            result = zx.q(*(rdx_7 + (rcx_7 << 3) + 8))
            
            if (result.d == 0xffffffff)
                goto label_141ca40f7
        
        if (result.d == 0xffffffff)
            goto label_141ca40f7
else
    int32_t rax_1 = sub_140b5ead0(arg2.d)
    void* rcx_1 = arg6[8]
    void* r8 = &arg6[7]
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = zx.q(*(r8 + (((sx.q(arg6[9].d) - 1) & sx.q(rax_1 + rbx)) << 2)))
    
    if (result.d == 0xffffffff)
        goto label_141ca4088
    
    int64_t rdx_3 = *arg6
    
    while (true)
        int64_t rcx_3 = sx.q(result.d) * 2
        
        if (*(rdx_3 + (rcx_3 << 3)) == arg2)
            break
        
        result = zx.q(*(rdx_3 + (rcx_3 << 3) + 8))
        
        if (result.d == 0xffffffff)
            goto label_141ca4088
    
    if (result.d == 0xffffffff)
        goto label_141ca4088

return result
