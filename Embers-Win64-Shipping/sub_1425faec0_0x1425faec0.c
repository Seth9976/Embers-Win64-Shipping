// 函数: sub_1425faec0
// 地址: 0x1425faec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c49130()

if (sub_141c49120() == 0)
    int32_t rbx_1 = 0
    int32_t rdx = 0
    int64_t var_a8 = 0
    int32_t rcx = 0
    int64_t var_a0_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg2[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_a8, rdi_1.d + 1)
            rcx = var_a0_1:4.d
            rdx = var_a0_1.d
        
        int32_t rax_1 = rdx + rdi_1.d + 1
        var_a0_1.d = rax_1
        
        if (rax_1 s> rcx)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, arg2, (rdi_1.d + 1) * 2)
    
    if ((*arg3 == 0x4eddd4921da5d803 && arg3[1] == 0xe7feeffc0e0238c)
        || (*arg3 == 0x4e27082cf19f064d && arg3[1] == 0x4c8ebba1826873bc))
    label_1425fafbc:
        int32_t var_98_1 = 0
        int32_t r10_1 = *(arg1 + 0x38)
        int32_t var_94_1 = 1
        int32_t rcx_4 = 0
        void* var_90_1 = arg1 + 0x20
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_1 != 0)
            void* rax_8 = *(arg1 + 0x30)
            void* r8_2 = arg1 + 0x20
            
            if (rax_8 != 0)
                r8_2 = rax_8
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_5 = *r8_2
            
            if (rdx_5 != 0)
            label_1425fb036:
                int32_t rax_15 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                int32_t var_94_2 = rax_15
                int32_t rax_16
                
                if (rax_15 == 0)
                    rax_16 = 0x20
                else
                    rax_16 = 0x1f - temp0_2
                
                var_84_1.d = rcx_4 - rax_16 + 0x1f
                
                if (rcx_4 - rax_16 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rbx_1)
                    rcx_4 += 0x20
                    rbx_1 += 1
                    var_84_1:4.d = rcx_4
                    var_98_1 = rbx_1
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r8_2 + (rdx_6 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_1425fb036
                
                var_84_1.d = r10_1
        
        int32_t rdx_8 = *(arg1 + 0x38)
        int128_t var_38_1 = 0xffffffff
        int32_t r15_1 = 0xffffffff << (rdx_8.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_4 = rdx_8 s>> 5
        int32_t r9_2 = rdx_8 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_3 = r15_1
        var_84_1.d = rdx_8
        int128_t var_78 = (arg1 + 0x10).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_8 != r10_1)
            void* rax_18 = *(arg1 + 0x30)
            void* r10_2 = arg1 + 0x20
            
            if (rax_18 != 0)
                r10_2 = rax_18
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_12 = *(r10_2 + (sx.q(r8_4) << 2)) & r15_1
            
            if (rdx_12 != 0)
            label_1425fb102:
                int32_t rax_25 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
                int32_t r11_1
                
                if (rax_25 == 0)
                    r11_1 = 0x20
                else
                    r11_1 = 0x1f - temp0_4
                
                var_84_1.d = r9_2 - r11_1 + 0x1f
                
                if (r9_2 - r11_1 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_4)
                    r9_2 += 0x20
                    r8_4 += 1
                    
                    if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r10_2 + (rcx_9 << 2) + 4)
                    var_88_3 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_1425fb102
                
                var_84_1.d = r10_1
        
        while (true)
            int32_t var_5c
            int64_t rcx_11 = sx.q(var_5c)
            int64_t* rax_27 = var_78.q
            
            if (rcx_11.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x20
                    && rax_27 == arg1 + 0x10)
                break
            
            int64_t* rcx_13 = *(*rax_27 + rcx_11 * 0x10)
            (*(*rcx_13 + 0x28))(rcx_13, &var_a8)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    else if (*arg3 == 0x4cd23cc5e4870e26 && arg3[1] == 0x4ed709a0aca46ba)
        goto label_1425fafbc
    
    int64_t rcx_15 = var_a8
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

return 0
