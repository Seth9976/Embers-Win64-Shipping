// 函数: sub_140868040
// 地址: 0x140868040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_14396ff2c != 0)
    int64_t i_1 = 7
    void* r14_1 = arg1 + 0x1d8
    int64_t i
    
    do
        int32_t r11_1 = *(r14_1 + 8)
        void* r10_1 = r14_1 - 0x10
        void* var_90_1 = r10_1
        int32_t r8_1 = 0
        int32_t var_98_1 = 0
        int32_t r9_1 = 0
        int32_t var_94_1 = 1
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax = *r14_1
            
            if (rax != 0)
                r10_1 = rax
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rcx = *r10_1
            
            if (rcx != 0)
            label_14086810a:
                int32_t rax_7 = neg.d(rcx) & rcx
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                int32_t var_94_2 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0)
                    rax_8 = 0x20
                else
                    rax_8 = 0x1f - temp0_2
                
                var_84_1.d = r9_1 - rax_8 + 0x1f
                
                if (r9_1 - rax_8 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rcx_1 = sx.q(r8_1)
                    r9_1 += 0x20
                    r8_1 += 1
                    var_84_1:4.d = r9_1
                    var_98_1 = r8_1
                    
                    if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rcx = *(r10_1 + (rcx_1 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rcx != 0)
                        goto label_14086810a
                
                var_84_1.d = r11_1
        
        int32_t rbx_1 = *(r14_1 + 8)
        int128_t var_38_1 = 0xffffffff
        int32_t r15_1 = 0xffffffff << (r11_1.b & 0x1f)
        int32_t r8_3 = r11_1 s>> 5
        int32_t r9_4 = r11_1 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_3 = r15_1
        var_84_1.d = r11_1
        int128_t var_78 = (r14_1 - 0x20).o
        int96_t var_68_1 = var_98_1.o:8.12
        
        if (r11_1 != rbx_1)
            void* rax_10 = *r14_1
            void* r10_2 = r14_1 - 0x10
            
            if (rax_10 != 0)
                r10_2 = rax_10
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx_1 - 1)
            int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & r15_1
            
            if (rdx_6 != 0)
            label_1408681e2:
                int32_t rax_17 = neg.d(rdx_6) & rdx_6
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
                int32_t rax_18
                
                if (rax_17 == 0)
                    rax_18 = 0x20
                else
                    rax_18 = 0x1f - temp0_4
                
                var_84_1.d = r9_4 - rax_18 + 0x1f
                
                if (r9_4 - rax_18 + 0x1f s> rbx_1)
                    var_84_1.d = rbx_1
            else
                while (true)
                    int64_t rcx_6 = sx.q(r8_3)
                    r9_4 += 0x20
                    r8_3 += 1
                    
                    if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
                    var_88_3 = 0xffffffff
                    
                    if (rdx_6 != 0)
                        goto label_1408681e2
                
                var_84_1.d = rbx_1
        
        while (true)
            int32_t result_1
            result = sx.q(result_1)
            int64_t* rcx_8 = var_78.q
            
            if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == r14_1 - 0x10
                    && rcx_8 == r14_1 - 0x20)
                break
            
            sub_1408623c0(*((result << 5) + *rcx_8 + 8))
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
        
        r14_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
