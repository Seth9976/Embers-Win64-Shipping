// 函数: sub_14239a830
// 地址: 0x14239a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = data_143f59c10

if (*result != 0)
    int64_t* r9_1 = arg1 + 0x288
    int32_t* r10_1 = &r9_1[2]
    int32_t r11_1 = r10_1[6]
    int32_t var_74_1 = 1
    int32_t rcx = 0
    int32_t var_78_1 = 0
    int32_t r8_1 = 0
    int32_t* var_70 = r10_1
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r11_1 != 0)
        int32_t* rax = *(r10_1 + 0x10)
        
        if (rax != 0)
            r10_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r10_1
        
        if (rdx_3 != 0)
        label_14239a8d8:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_74_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_64_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r11_1)
                var_64_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_64_1:4.d = r8_1
                var_78_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = r10_1[rdx_4 + 1]
                var_68_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_14239a8d8
            
            var_64_1.d = r11_1
    
    int64_t* var_50_1 = r9_1
    int128_t var_30_1 = 0xffffffff
    double var_40_1[0x2] = var_78_1.o
    var_78_1.o = r9_1.o
    result = nullptr
    double zmm0[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int64_t var_58_1 = zmm0.q
    var_68_1.o = var_40_1
    
    if (0 s< r11_1)
        int32_t var_5c
        int32_t r8_3 = var_5c
        
        while (true)
            int64_t* rbx_1 = *(*var_78_1.q + sx.q(r8_3) * 0x10)
            
            if (rbx_1 == 0)
                sub_1418ebff0(r9_1, r8_3)
            else
                char rax_11 = *(rbx_1 + 0x3d)
                
                if ((rax_11 & 0x40) == 0)
                    sub_1418ebff0(r9_1, r8_3)
                else
                    if ((rax_11 & 0x20) == 0)
                        zmm0 = zx.o(data_143dbb3b8)
                    
                    if ((rax_11 & 0x20) == 0 && zmm0[0] f> rbx_1[5])
                        sub_1418ebff0(r9_1, r8_3)
                    else
                        (*(*rbx_1 + 0x2e8))(rbx_1)
                        
                        if (not(zmm0[0].d f< *(arg1 + 0x388)))
                            int64_t rax_13 = sx.q(*(rbx_1 + 0x34))
                            int32_t arg_10 = rax_13.d
                            int64_t* rsi_2 = rax_13 * 0xd8 + *(arg1 + 0x10)
                            sub_1423b8300(rsi_2)
                            
                            if ((*(rsi_2 + 0xb4) & 0x20) == 0)
                                int32_t rdx_8 = *(rsi_2 + 0x6c)
                                
                                if (*(rsi_2 + 0x5c) s< rdx_8)
                                    int64_t r8_4
                                    r8_4.b = 1
                                    (*(*rbx_1 + 0x2d0))(rbx_1, rdx_8, r8_4)
                                    *(rbx_1 + 0x3d) |= 0x10
                                    *(rsi_2 + 0xb4) |= 0x40
                                    void arg_18
                                    zmm0 = sub_14077a5e0(arg1 + 0x2d8, &arg_18, &arg_10, nullptr)
                                    int32_t i = 0
                                    
                                    if (*(arg1 + 0x330) s> 0)
                                        int64_t* rax_15 = nullptr
                                        
                                        do
                                            int64_t rcx_7 = *(arg1 + 0x328)
                                            
                                            if (*(rax_15 + rcx_7) == rbx_1)
                                                *(rax_15 + rcx_7) = 0
                                            
                                            i += 1
                                            rax_15 = &rax_15[2]
                                        while (i s< *(arg1 + 0x330))
                                    
                                    sub_1423b8300(rsi_2)
                                    int64_t r8_6
                                    r8_6.b = 1
            
            var_64_1:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            result = var_68_1.q
            r8_3 = var_5c
            
            if (r8_3 s>= result[6])
                break
            
            r9_1 = var_50_1

return result
