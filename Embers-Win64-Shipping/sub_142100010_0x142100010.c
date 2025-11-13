// 函数: sub_142100010
// 地址: 0x142100010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)

if (arg1[0x2f].d - *(arg1 + 0x1a4) s> 0)
    int32_t r11_1 = arg1[0x33].d
    void* r9_1 = &arg1[0x30]
    int64_t rsi
    rsi.b = data_1439c7a08 == 1
    int64_t r14
    r14.b = data_1439c7a08 s>= 3
    int32_t var_84_1 = 1
    void* var_80 = r9_1
    int32_t rcx = 0
    int32_t var_88_1 = 0
    int32_t r8_1 = 0
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(r9_1 + 0x10)
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1421000f8:
            int32_t rax_9 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_84_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> r11_1)
                var_74_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_74_1:4.d = r8_1
                var_88_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1421000f8
            
            var_74_1.d = r11_1
    
    void* var_20_1 = &arg1[0x2e]
    int128_t zmm0_1 = var_88_1.o
    int128_t var_30_1 = 0xffffffff
    int16_t var_50_1 = 0
    void* rax_12 = zmm0_1.q
    var_78_1.o = zmm0_1
    var_88_1.o = (&arg1[0x2e]).o
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_68_1 = zmm0_1
    
    if (0 s< *(rax_12 + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            void* rbx_3 = sx.q(i) * 0x58 + *var_88_1.q
            
            if (r14.b == 0)
                *(rbx_3 + 0x28) = 0
                
                if (*(rbx_3 + 0x2c) != 0)
                    sub_1405c5510(rbx_3 + 0x20, 0)
            
            if (rsi.b == 0)
                *(rbx_3 + 0x38) = 0
                
                if (*(rbx_3 + 0x3c) != 0)
                    sub_1405c5510(rbx_3 + 0x30, 0)
            
            var_74_1:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            i = i_1
        while (i s< *(var_78_1.q + 0x18))
        
        if (var_50_1.b != 0 && var_50_1:1.b != 0)
            sub_1420f7080(&arg1[0x2e], arg1[0x2f].d - *(arg1 + 0x1a4), 1)

return sub_142102a80(arg1) __tailcall
