// 函数: sub_141fbe2c0
// 地址: 0x141fbe2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(arg2 + 0x1f6) & 2) == 0 && arg1[0x1c5].b != 0)
    if (*(arg1 + 0xb0c) != 0)
    label_141fbe335:
        int32_t r11_1 = arg1[0x10d].d
        void* r9_1 = &arg1[0x10a]
        int32_t rcx = 0
        int32_t var_74_1 = 1
        int32_t var_78_1 = 0
        int32_t r8_1 = 0
        void* var_70 = r9_1
        int32_t var_68_1 = 0xffffffff
        int64_t var_64_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(r9_1 + 0x10)
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_141fbe3a8:
                int32_t rax_9 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_74_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_64_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r11_1)
                    var_64_1.d = r11_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_64_1:4.d = r8_1
                    var_78_1 = rcx
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                    var_68_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_141fbe3a8
                
                var_64_1.d = r11_1
        
        void* var_10_1 = &arg1[0x108]
        int128_t var_20_1 = 0xffffffff
        int16_t var_40_1 = 0
        int128_t zmm3 = var_78_1.o
        var_78_1.o = (&arg1[0x108]).o
        int128_t zmm0
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_68_1.o = zmm3
        
        if (0 s< *(zmm3.q + 0x18))
            int32_t i_1
            int32_t i = i_1
            
            do
                if (*(sx.q(i) * 0xc8 + *var_78_1.q + 0x48) == arg2)
                    sub_141fc39c0(zmm0:8.q, i)
                    var_40_1.b = 1
                
                var_64_1:4.d &= not.d(var_70:4.d)
                sub_14059bdd0(&var_70)
                i = i_1
            while (i s< *(var_68_1.q + 0x18))
            
            if (var_40_1.b != 0 && var_40_1:1.b != 0)
                sub_141fab340(&arg1[0x108], arg1[0x109].d - *(arg1 + 0x874), 1)
    else
        void* rax_1 = arg1[0x11]
        
        if (rax_1 != 0 && *(rax_1 + 0x134) != 1)
            goto label_141fbe335

return sub_14216f6d0(arg1, arg2) __tailcall
