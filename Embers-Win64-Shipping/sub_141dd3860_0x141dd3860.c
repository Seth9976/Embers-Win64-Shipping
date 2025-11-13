// 函数: sub_141dd3860
// 地址: 0x141dd3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    int32_t rdi_1 = 0
    result.b = *(arg1 + 0x5b) u>> 7
    void*** (* var_98)()
    
    if (result.b != arg2)
        char arg_20 = 0
        char* var_90_1 = &arg_20
        var_98 = sub_141dbb950
        void* rax = sub_140a756e0(&var_98, &data_143a2d218)
        int64_t r8 = *arg1
        result = (*(r8 + 0x528))(arg1, zx.q(arg2), r8)
        *(arg1 + 0x5b) = (*(arg1 + 0x5b) & 0x7f) | arg2 << 7
        *(rax + 0x10) = 0
    
    if (arg3 != 0)
        int32_t r10_1 = arg1[0x39].d
        var_98.d = 0
        int32_t rcx_3 = 0
        var_98:4.d = 1
        void* var_90_2 = &arg1[0x36]
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0
        
        if (r10_1 != 0)
            void* rax_1 = arg1[0x38]
            void* r8_1 = &arg1[0x36]
            
            if (rax_1 != 0)
                r8_1 = rax_1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_4 = *r8_1
            int32_t var_84_3
            
            if (rdx_4 != 0)
            label_141dd3996:
                int32_t rax_8 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
                var_98:4.d = rax_8
                int32_t rax_9
                
                if (rax_8 == 0)
                    rax_9 = 0x20
                else
                    rax_9 = 0x1f - temp0_2
                
                int32_t var_84_2 = rcx_3 - rax_9 + 0x1f
                
                if (rcx_3 - rax_9 + 0x1f s> r10_1)
                    var_84_3 = r10_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rdi_1)
                    rcx_3 += 0x20
                    rdi_1 += 1
                    int32_t var_80_2 = rcx_3
                    var_98.d = rdi_1
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
                    var_88_1 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_141dd3996
                
                var_84_3 = r10_1
        
        int32_t rdx_7 = arg1[0x39].d
        double zmm2[0x2] = var_88_1.o
        double var_38_1[0x2] = zmm2
        int32_t r12_1 = 0xffffffff << (rdx_7.b & 0x1f)
        int128_t var_48_1 = var_98.o
        int32_t r8_3 = rdx_7 s>> 5
        int32_t r9_2 = rdx_7 & 0xffffffe0
        int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_88_2 = r12_1
        int32_t var_84_4 = rdx_7
        int128_t var_78 = (&arg1[0x34]).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_7 != r10_1)
            void* rax_11 = arg1[0x38]
            void* r10_2 = &arg1[0x36]
            
            if (rax_11 != 0)
                r10_2 = rax_11
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_11 = *(r10_2 + (sx.q(r8_3) << 2)) & r12_1
            int32_t var_84_6
            
            if (rdx_11 != 0)
            label_141dd3a62:
                int32_t rax_18 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
                int32_t r11_1
                
                if (rax_18 == 0)
                    r11_1 = 0x20
                else
                    r11_1 = 0x1f - temp0_4
                
                int32_t var_84_5 = r9_2 - r11_1 + 0x1f
                
                if (r9_2 - r11_1 + 0x1f s> r10_1)
                    var_84_6 = r10_1
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_3)
                    r9_2 += 0x20
                    r8_3 += 1
                    
                    if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r10_2 + (rcx_8 << 2) + 4)
                    var_88_2 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_141dd3a62
                
                var_84_6 = r10_1
        
        while (true)
            int32_t var_5c
            int64_t rcx_10 = sx.q(var_5c)
            result = var_78.q
            
            if (rcx_10.d == (var_88_2.q u>> 0x20).d && var_68_1.q == &arg1[0x36]
                    && result == &arg1[0x34])
                break
            
            int64_t* rcx_12 = *(*result + rcx_10 * 0x10)
            
            if (rcx_12 != 0)
                sub_141ef1330(rcx_12, arg2)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)

return result
