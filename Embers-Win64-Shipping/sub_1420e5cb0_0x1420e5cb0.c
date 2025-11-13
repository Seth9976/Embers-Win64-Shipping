// 函数: sub_1420e5cb0
// 地址: 0x1420e5cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int32_t rdx
int32_t r8
result, rdx, r8 = sub_14243af00(*(arg1 + 0xb8))
int32_t i = 0
char arg_8 = result.b

if (*(arg1 + 0xa0) s> 0)
    int64_t* rdi_1 = nullptr
    int64_t* arg_10 = nullptr
    
    do
        result = *(arg1 + 0x98)
        int64_t* rbx_1 = *(rdi_1 + result)
        
        if (rbx_1 != 0)
            if ((*(rbx_1 + 0x5b) & 0x20) == 0 && *(rbx_1 + 0x5a) s>= 0)
                if ((*(rbx_1 + 0x59) & 1) != 0)
                    rbx_1[0xb].b |= 2
                    int32_t r11_1 = rbx_1[0x39].d
                    int32_t rcx_1 = 0
                    int32_t var_a4_1 = 1
                    int32_t r8_1 = 0
                    int32_t var_a8_1 = 0
                    void* var_a0_1 = &rbx_1[0x36]
                    int32_t var_98_1 = 0xffffffff
                    int64_t var_94_1 = 0
                    
                    if (r11_1 != 0)
                        void* rax = rbx_1[0x38]
                        void* r9_1 = &rbx_1[0x36]
                        
                        if (rax != 0)
                            r9_1 = rax
                        
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(r11_1 - 1)
                        int32_t rdx_3 = *r9_1
                        
                        if (rdx_3 != 0)
                        label_1420e5dc8:
                            int32_t rax_7 = neg.d(rdx_3) & rdx_3
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                            int32_t var_a4_2 = rax_7
                            int32_t rax_8
                            
                            if (rax_7 == 0)
                                rax_8 = 0x20
                            else
                                rax_8 = 0x1f - temp0_2
                            
                            var_94_1.d = r8_1 - rax_8 + 0x1f
                            
                            if (r8_1 - rax_8 + 0x1f s> r11_1)
                                var_94_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_4 = sx.q(rcx_1)
                                r8_1 += 0x20
                                rcx_1 += 1
                                var_94_1:4.d = r8_1
                                var_a8_1 = rcx_1
                                
                                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                                int32_t var_98_2 = 0xffffffff
                                
                                if (rdx_3 != 0)
                                    goto label_1420e5dc8
                            
                            var_94_1.d = r11_1
                    
                    rdx = rbx_1[0x39].d
                    int128_t var_48_1 = 0xffffffff
                    int32_t r14_1 = 0xffffffff << (rdx.b & 0x1f)
                    int128_t var_58_1 = var_a8_1.o
                    r8 = rdx s>> 5
                    int32_t r9_3 = rdx & 0xffffffe0
                    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int32_t var_98_3 = r14_1
                    var_94_1.d = rdx
                    int128_t var_88 = (&rbx_1[0x34]).o
                    int128_t var_78_1 = var_58_1
                    
                    if (rdx != r11_1)
                        void* rax_10 = rbx_1[0x38]
                        void* r10_1 = &rbx_1[0x36]
                        
                        if (rax_10 != 0)
                            r10_1 = rax_10
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r11_1 - 1)
                        rdx = *(r10_1 + (sx.q(r8) << 2)) & r14_1
                        
                        if (rdx != 0)
                        label_1420e5ea2:
                            int32_t rax_17 = neg.d(rdx) & rdx
                            uint64_t rflags_2
                            int32_t temp0_4
                            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
                            int32_t rax_18
                            
                            if (rax_17 == 0)
                                rax_18 = 0x20
                            else
                                rax_18 = 0x1f - temp0_4
                            
                            var_94_1.d = r9_3 - rax_18 + 0x1f
                            
                            if (r9_3 - rax_18 + 0x1f s> r11_1)
                                var_94_1.d = r11_1
                        else
                            while (true)
                                int64_t rcx_6 = sx.q(r8)
                                r9_3 += 0x20
                                r8 += 1
                                
                                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx = *(r10_1 + (rcx_6 << 2) + 4)
                                var_98_3 = 0xffffffff
                                
                                if (rdx != 0)
                                    goto label_1420e5ea2
                            
                            var_94_1.d = r11_1
                    
                    while (true)
                        int64_t rcx_8 = sx.q(var_78_1:0xc.d)
                        result = var_88.q
                        
                        if (rcx_8.d == (var_98_3.q u>> 0x20).d && var_78_1.q == &rbx_1[0x36]
                                && result == &rbx_1[0x34])
                            break
                        
                        void* rax_21 = *(*result + rcx_8 * 0x10)
                        
                        if (rax_21 != 0)
                            *(rax_21 + 0x8b) |= 8
                        
                        var_78_1:8.d &= not.d(var_88:0xc.d)
                        rdx, r8 = sub_14059bdd0(&var_88:8)
                    
                    rdi_1 = arg_10
                
                if (arg_8 == 0)
                    if ((*(rbx_1 + 0x59) & 1) != 0)
                        rdx.b = 1
                        result, rdx, r8 = sub_141dc2130(rbx_1, rdx.b)
                    else
                        r8.b = 1
                        result, rdx, r8 = sub_141dbe590(rbx_1, 1, r8.b)
            
            *(rbx_1 + 0x5a) &= 0x7f
        
        rdi_1 = &rdi_1[1]
        i += 1
        arg_10 = rdi_1
    while (i s< *(arg1 + 0xa0))

*(arg1 + 0x1f5) |= 0xc
return result
