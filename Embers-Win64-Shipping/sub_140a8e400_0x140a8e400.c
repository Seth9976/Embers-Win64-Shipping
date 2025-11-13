// 函数: sub_140a8e400
// 地址: 0x140a8e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140a54810()

if (result.b == 0)
    result = EnterCriticalSection(arg1)
    int32_t r8_1 = 0
    int32_t var_84_1 = 1
    int32_t var_88_1 = 0
    int32_t var_78_1 = 0xffffffff
    int32_t rbx_1 = arg1->__offset(0x1860).d
    int32_t rcx_1 = 0
    void* __offset(_RTL_CRITICAL_SECTION, 0x1838) var_80_1 = &arg1[0x9b]
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    
    if (rbx_1 != 0)
        void* rax = arg1->__offset(0x1858).q
        void* __offset(_RTL_CRITICAL_SECTION, 0x1838) r9_1 = &arg1[0x9b]
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = (r9_1 - 0x1838)->__offset(0x1838).d
        result = (temp1_1 + (temp0_1 & 0x1f)) s>> 5
        int32_t var_74_2
        
        if (rdx_3 != 0)
        label_140a8e4d8:
            int32_t rax_6 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_6)
            int32_t var_84_2 = rax_6
            int32_t rax_7
            
            if (rax_6 == 0)
                rax_7 = 0x20
            else
                rax_7 = 0x1f - temp0_2
            
            result = rcx_1 - rax_7 + 0x1f
            int32_t result_1 = result
            
            if (result s> rbx_1)
                var_74_2 = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8_1)
                rcx_1 += 0x20
                r8_1 += 1
                int32_t var_70_2 = rcx_1
                var_88_1 = r8_1
                
                if (rdx_4.d s>= result)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140a8e4d8
            
            var_74_2 = rbx_1
    
    int32_t rdx_6 = arg1->__offset(0x1860).d
    int128_t var_28_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_38_1 = var_88_1.o
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r12_1
    int32_t var_74_3 = rdx_6
    int128_t var_68 = (&arg1[1]).o
    int128_t var_58_1 = var_38_1
    
    if (rdx_6 != rbx_1)
        void* rax_8 = arg1->__offset(0x1858).q
        void* __offset(_RTL_CRITICAL_SECTION, 0x1838) r10_1 = &arg1[0x9b]
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        result = (temp3_1 + (temp2_1 & 0x1f)) s>> 5
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
        int32_t var_74_4
        
        if (rdx_10 != 0)
        label_140a8e5a2:
            int32_t rax_14 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_14)
            int32_t r11_1
            
            if (rax_14 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            result = r9_3 - r11_1 + 0x1f
            int32_t result_2 = result
            
            if (result s> rbx_1)
                var_74_4 = rbx_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= result)
                    break
                
                rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140a8e5a2
            
            var_74_4 = rbx_1
    
    while (true)
        int64_t rcx_8 = sx.q(var_58_1:0xc.d)
        void* rdx_11 = var_68.q
        
        if (rcx_8.d == (var_78_3.q u>> 0x20).d && var_58_1.q == &arg1[0x9b] && rdx_11 == &arg1[1])
            break
        
        void* rax_15 = *(rdx_11 + 0x1800)
        
        if (rax_15 != 0)
            rdx_11 = rax_15
        
        int64_t* rcx_10 = *(rdx_11 + rcx_8 * 0x18 + 8)
        (*(*rcx_10 + 0x30))(rcx_10)
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        result = sub_140a736e0(&var_68:8)
    
    if (arg1 != 0)
        return LeaveCriticalSection(arg1)

return result
