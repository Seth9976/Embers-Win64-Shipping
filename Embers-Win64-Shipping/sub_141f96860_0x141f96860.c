// 函数: sub_141f96860
// 地址: 0x141f96860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (result.d != *(arg1 + 0x34))
    int64_t r10_1 = sx.q(*arg2)
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rdx_3 = *(r9_1 + (((sx.q(arg1[9].d) - 1) & r10_1) << 2))
    
    if (rdx_3 != 0xffffffff)
        int64_t r8_2 = *arg1
        int64_t rcx
        
        while (true)
            rcx = sx.q(rdx_3)
            result = rcx * 2
            
            if (*(r8_2 + (result << 3)) == r10_1.d)
                break
            
            rdx_3 = *(r8_2 + (result << 3) + 8)
            
            if (rdx_3 == 0xffffffff)
                return result
        
        if (rdx_3 != 0xffffffff)
            int64_t rdi_1 = sx.q(*(r8_2 + rcx * 0x10 + 4))
            sub_1418ebff0(arg1, rdx_3)
            int32_t r11_1 = arg1[5].d
            void* r9_2 = &arg1[2]
            int32_t rcx_3 = 0
            int32_t var_74_1 = 1
            int32_t var_78_1 = 0
            int32_t r8_3 = 0
            void* var_70 = r9_2
            int32_t var_68_1 = 0xffffffff
            int64_t var_64_1 = 0
            
            if (r11_1 != 0)
                void* rax_1 = *(r9_2 + 0x10)
                
                if (rax_1 != 0)
                    r9_2 = rax_1
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(r11_1 - 1)
                int32_t rdx_6 = *r9_2
                
                if (rdx_6 != 0)
                label_141f96978:
                    int32_t rax_8 = neg.d(rdx_6) & rdx_6
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
                    int32_t var_74_2 = rax_8
                    int32_t rax_9
                    
                    if (rax_8 == 0)
                        rax_9 = 0x20
                    else
                        rax_9 = 0x1f - temp0_1
                    
                    var_64_1.d = r8_3 - rax_9 + 0x1f
                    
                    if (r8_3 - rax_9 + 0x1f s> r11_1)
                        var_64_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_7 = sx.q(rcx_3)
                        r8_3 += 0x20
                        rcx_3 += 1
                        var_64_1:4.d = r8_3
                        var_78_1 = rcx_3
                        
                        if (rdx_7.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
                        var_68_1 = 0xffffffff
                        
                        if (rdx_6 != 0)
                            goto label_141f96978
                    
                    var_64_1.d = r11_1
            
            int64_t* var_10_1 = arg1
            int128_t zmm0 = var_78_1.o
            int128_t var_20_1 = 0xffffffff
            int16_t var_40_1 = 0
            void* rax_11 = zmm0.q
            var_68_1.o = zmm0
            var_78_1.o = arg1.o
            zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_58_1 = zmm0
            
            if (0 s< *(rax_11 + 0x18))
                int32_t i_1
                int32_t i = i_1
                
                do
                    int64_t rdx_9 = sx.q(i) * 2
                    int64_t rcx_5 = *var_78_1.q
                    int32_t rax_13 = *(rcx_5 + (rdx_9 << 3) + 4)
                    
                    if (rax_13 s>= rdi_1.d)
                        *(rcx_5 + (rdx_9 << 3) + 4) = rax_13 - 1
                    
                    var_64_1:4.d &= not.d(var_70:4.d)
                    sub_14059bdd0(&var_70)
                    i = i_1
                while (i s< *(var_68_1.q + 0x18))
                
                if (var_40_1.b != 0 && var_40_1:1.b != 0)
                    sub_1409b3740(arg1, arg1[1].d - *(arg1 + 0x34), 1)
            
            int32_t rcx_9 = arg1[0xb].d
            int32_t rax_19 = rcx_9 - rdi_1.d
            
            if (rax_19 != 1)
                int64_t r9_3 = arg1[0xa]
                memmove(r9_3 + (rdi_1 << 2), r9_3 + (sx.q((rdi_1 + 1).d) << 2), (rax_19 - 1) << 2)
                rcx_9 = arg1[0xb].d
            
            arg1[0xb].d = rcx_9 - 1
            return sub_1405dac90(&arg1[0xa])

return result
