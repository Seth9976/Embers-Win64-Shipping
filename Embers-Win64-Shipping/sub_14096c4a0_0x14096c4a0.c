// 函数: sub_14096c4a0
// 地址: 0x14096c4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg3 - 2) & 0xfffffff9) == 0 && arg3 != 6)
    EnterCriticalSection(arg1 + 0x60)
    int32_t rcx_1 = 0
    int32_t var_94 = 1
    int32_t var_98 = 0
    int32_t rdi_1 = *(arg1 + 0x38)
    int32_t r8 = 0
    void* var_90 = arg1 + 0x20
    int32_t var_88 = 0xffffffff
    int64_t var_84 = 0
    
    if (rdi_1 != 0)
        void* rax_1 = *(arg1 + 0x30)
        void* r9_1 = arg1 + 0x20
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_14096c578:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_1 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_84.d = r8 - rax_9 + 0x1f
            
            if (r8 - rax_9 + 0x1f s> rdi_1)
                var_84.d = rdi_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_1)
                r8 += 0x20
                rcx_1 += 1
                var_84:4.d = r8
                var_98 = rcx_1
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_88 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_14096c578
            
            var_84.d = rdi_1
    
    int32_t rdx_4 = *(arg1 + 0x38)
    double zmm2[0x2] = var_88.o
    double var_38[0x2] = zmm2
    int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_48 = var_98.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_88_1 = r15
    var_84.d = rdx_4
    int128_t var_78 = (arg1 + 0x10).o
    int96_t var_68 = var_48:8.12
    
    if (rdx_4 != rdi_1)
        void* rax_11 = *(arg1 + 0x30)
        void* r10_1 = arg1 + 0x20
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
        
        if (rdx_8 != 0)
        label_14096c642:
            int32_t rax_18 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_84.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_1)
                var_84.d = rdi_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_14096c642
            
            var_84.d = rdi_1
    
    while (true)
        int32_t var_5c
        int64_t rcx_8 = sx.q(var_5c)
        int64_t* rax_20 = var_78.q
        
        if (rcx_8.d == (var_88_1.q u>> 0x20).d && var_68.q == arg1 + 0x20 && rax_20 == arg1 + 0x10)
            if (arg1 != -0x60)
                LeaveCriticalSection(arg1 + 0x60)
            
            return 0
        
        int32_t rdx_9 = 0
        var_98.q = 0
        int64_t var_90_1 = 0
        int64_t* r14_1 = *(*rax_20 + rcx_8 * 0x10)
        int32_t rcx_10 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (arg2[rdi_2] != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_98, rdi_2.d + 1)
                rcx_10 = var_90_1:4.d
                rdx_9 = var_90_1.d
            
            int32_t rax_22 = rdi_2.d + 1 + rdx_9
            var_90_1.d = rax_22
            
            if (rax_22 s> rcx_10)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98.q, arg2, (rdi_2.d + 1) * 2)
        
        (**r14_1)(r14_1, &var_98)
        var_68:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

return 0
