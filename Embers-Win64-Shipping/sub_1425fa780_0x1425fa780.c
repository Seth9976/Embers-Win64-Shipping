// 函数: sub_1425fa780
// 地址: 0x1425fa780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c49130()

if (sub_141c49120() == 0)
    int32_t rcx = 0
    int32_t rbx_1 = *(arg1 + 0x38)
    int32_t r8_1 = 0
    int32_t var_98 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = arg1 + 0x20
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = *(arg1 + 0x30)
        void* r9_1 = arg1 + 0x20
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_1425fa858:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> rbx_1)
                var_84_1.d = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_84_1:4.d = r8_1
                var_98 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1425fa858
            
            var_84_1.d = rbx_1
    
    int32_t rdx_4 = *(arg1 + 0x38)
    double zmm2[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2
    int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_48_1 = var_98.o
    int32_t r8_4 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_88_2 = r14_1
    var_84_1.d = rdx_4
    int128_t var_78 = (arg1 + 0x10).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_4 != rbx_1)
        void* rax_11 = *(arg1 + 0x30)
        void* r10_1 = arg1 + 0x20
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
        
        if (rdx_8 != 0)
        label_1425fa922:
            int32_t rax_18 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_84_1.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
                var_88_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_1425fa922
            
            var_84_1.d = rbx_1
    
    while (true)
        int32_t var_5c
        int64_t rcx_7 = sx.q(var_5c)
        int64_t* rax_20 = var_78.q
        
        if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68_1.q == arg1 + 0x20
                && rax_20 == arg1 + 0x10)
            break
        
        var_98.q = 0
        int32_t rdx_9 = 0
        var_90_1.d = 0
        int64_t* rsi_1 = *(*rax_20 + rcx_7 * 0x10)
        int32_t rcx_9 = 0
        var_90_1:4.d = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (arg2[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_98, rbx_2.d + 1)
                rcx_9 = var_90_1:4.d
                rdx_9 = var_90_1.d
            
            int32_t rax_22 = rbx_2.d + 1 + rdx_9
            var_90_1.d = rax_22
            
            if (rax_22 s> rcx_9)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98.q, arg2, (rbx_2.d + 1) * 2)
        
        (*(*rsi_1 + 0x28))(rsi_1, &var_98)
        int64_t rcx_14 = var_98.q
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

return 0
