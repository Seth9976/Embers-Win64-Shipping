// 函数: sub_1405c2770
// 地址: 0x1405c2770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg2 != 0)
    void* rdi_1 = *(arg1 + 0x500)
    
    if (rdi_1 != 0)
        result = sub_1405ba3e0(rdi_1, arg2)
        
        if ((*(arg1 + 0x2e0) & result) == 0)
            char rax = sub_1405c2cf0(rdi_1, arg2)
            
            if (rax != 0 && (result.b & 0x20) != 0)
                int32_t rcx_2 = 0
                int32_t var_74_1 = 1
                int32_t var_78_1 = 0
                int32_t r11_1 = *(arg1 + 0x488)
                void* r9_1 = arg1 + 0x470
                void* var_70 = r9_1
                int32_t r8_1 = 0
                int32_t var_68_1 = 0xffffffff
                int64_t var_64_1 = 0
                
                if (r11_1 != 0)
                    void* rax_1 = *(r9_1 + 0x10)
                    
                    if (rax_1 != 0)
                        r9_1 = rax_1
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r11_1 - 1)
                    int32_t rdx_3 = *r9_1
                    
                    if (rdx_3 != 0)
                    label_1405c2868:
                        int32_t rax_8 = neg.d(rdx_3) & rdx_3
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
                        int32_t var_74_2 = rax_8
                        int32_t rax_9
                        
                        if (rax_8 == 0)
                            rax_9 = 0x20
                        else
                            rax_9 = 0x1f - temp0_2
                        
                        var_64_1.d = r8_1 - rax_9 + 0x1f
                        
                        if (r8_1 - rax_9 + 0x1f s> r11_1)
                            var_64_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_4 = sx.q(rcx_2)
                            r8_1 += 0x20
                            rcx_2 += 1
                            var_64_1:4.d = r8_1
                            var_78_1 = rcx_2
                            
                            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                            var_68_1 = 0xffffffff
                            
                            if (rdx_3 != 0)
                                goto label_1405c2868
                        
                        var_64_1.d = r11_1
                
                void* var_10_1 = arg1 + 0x460
                int128_t zmm0_1 = var_78_1.o
                int128_t var_20_1 = 0xffffffff
                int16_t var_40_1 = 0
                void* rax_11 = zmm0_1.q
                var_68_1.o = zmm0_1
                var_78_1.o = (arg1 + 0x460).o
                zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                
                if (0 s< *(rax_11 + 0x18))
                    int32_t i_1
                    int32_t i = i_1
                    
                    do
                        if (*((sx.q(i) << 5) + *var_78_1.q + 0x10) == arg2)
                            sub_1405c3390(zmm0_1:8.q, i)
                            var_40_1.b = 1
                        
                        var_64_1:4.d &= not.d(var_70:4.d)
                        sub_14059bdd0(&var_70)
                        i = i_1
                    while (i s< *(var_68_1.q + 0x18))
                    
                    if (var_40_1.b != 0 && var_40_1:1.b != 0)
                        sub_1405b67e0(arg1 + 0x460, *(arg1 + 0x468) - *(arg1 + 0x494), 1)
            
            return zx.d(rax)

result.b = 0
return result
