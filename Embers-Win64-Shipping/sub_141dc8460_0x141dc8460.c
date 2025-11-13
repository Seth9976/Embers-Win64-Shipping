// 函数: sub_141dc8460
// 地址: 0x141dc8460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x181) & 0x40) == 0)
    int32_t r8_1 = 0
    int32_t rdi_1 = *(arg1 + 0x158)
    int32_t var_88_1 = 0
    int32_t rcx = 0
    int32_t var_84_1 = 1
    void* var_80_1 = arg1 + 0x140
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    
    if (rdi_1 != 0)
        void* rax = *(arg1 + 0x150)
        void* r9_1 = arg1 + 0x140
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *r9_1
        int32_t var_74_3
        
        if (rdx_3 != 0)
        label_141dc8518:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_84_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            int32_t var_74_2 = rcx - rax_8 + 0x1f
            
            if (rcx - rax_8 + 0x1f s> rdi_1)
                var_74_3 = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8_1)
                rcx += 0x20
                r8_1 += 1
                int32_t var_70_2 = rcx
                var_88_1 = r8_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141dc8518
            
            var_74_3 = rdi_1
    
    int32_t rdx_6 = *(arg1 + 0x158)
    int128_t var_28_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    float var_38_1[0x4] = var_88_1.o
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r12_1
    int32_t var_74_4 = rdx_6
    float var_68[0x4] = (arg1 + 0x130).o
    
    if (rdx_6 != rdi_1)
        void* rax_10 = *(arg1 + 0x150)
        void* r10_1 = arg1 + 0x140
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
        int32_t var_74_6
        
        if (rdx_10 != 0)
        label_141dc85e2:
            int32_t rax_17 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_74_5 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_1)
                var_74_6 = rdi_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141dc85e2
            
            var_74_6 = rdi_1
    
    while (true)
        result = sx.q(var_38_1[3])
        int64_t* rdx_11 = var_68[0].q
        
        if (result.d == (var_78_3.q u>> 0x20).d && var_38_1[0].q == arg1 + 0x140
                && rdx_11 == arg1 + 0x130)
            float zmm0[0x4] = *(arg1 + 0x264)
            zmm0[0] = zmm0[0] f* *(arg1 + 0x200)
            zmm0[0] = zmm0[0] f* *(arg1 + 0x260)
            
            if (not(zmm0[0] < 0f))
                __minss_xmmss_memss(zmm0[0], 0x42c80000)
            
            break
        
        void* rdx_12 = *(*rdx_11 + result * 0x18 + 8)
        
        if (rdx_12 != 0)
            int64_t rdx_13 = *(rdx_12 + 8)
            
            if (rdx_13 != 0)
                result = sub_141e7ed00(*(arg1 + 0x50), rdx_13)
                
                if ((*(result + 0x24) & 2) != 0)
                    break
        
        int32_t var_5c
        var_38_1[2] &= not.d(var_5c)
        sub_14059bdd0(&var_68[2])

return result
