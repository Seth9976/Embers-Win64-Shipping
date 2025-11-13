// 函数: sub_1425faa50
// 地址: 0x1425faa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c49130()

if (sub_141c49120() == 0 && ((arg3 - 2) & 0xfffffff9) == 0 && arg3 != 6)
    int32_t rcx = 0
    int32_t r8 = 0
    int32_t r11_1 = *(arg1 + 0x38)
    int32_t var_b8 = 0
    int32_t var_b4_1 = 1
    void* var_b0_1 = arg1 + 0x20
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(arg1 + 0x30)
        void* r9_1 = arg1 + 0x20
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_1425fab38:
            int32_t rax_9 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_b4_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_a4_1.d = r8 - rax_10 + 0x1f
            
            if (r8 - rax_10 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_a4_1:4.d = r8
                var_b8 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1425fab38
            
            var_a4_1.d = r11_1
    
    int32_t rdx_4 = *(arg1 + 0x38)
    double zmm2[0x2] = var_a8_1.o
    double var_38_1[0x2] = zmm2
    int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_48_1 = var_b8.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_a8_2 = r14_1
    var_a4_1.d = rdx_4
    int128_t var_78 = (arg1 + 0x10).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_4 != r11_1)
        void* rax_12 = *(arg1 + 0x30)
        void* r10_1 = arg1 + 0x20
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14_1
        
        if (rdx_8 != 0)
        label_1425fac02:
            int32_t rax_19 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rbx_1
            
            if (rax_19 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            var_a4_1.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
                var_a8_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_1425fac02
            
            var_a4_1.d = r11_1
    
    while (true)
        int32_t var_5c
        int64_t rcx_7 = sx.q(var_5c)
        int64_t* rax_21 = var_78.q
        
        if (rcx_7.d == (var_a8_2.q u>> 0x20).d && var_68_1.q == arg1 + 0x20
                && rax_21 == arg1 + 0x10)
            break
        
        int64_t* rsi_1 = *(*rax_21 + rcx_7 * 0x10)
        int64_t rcx_14
        
        if (arg3 == 2)
            int32_t rdx_17 = 0
            var_b8.q = 0
            int32_t rcx_20 = 0
            int64_t var_b0_2 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                int64_t rbx_6 = -1
                
                do
                    rbx_6 += 1
                while (arg2[rbx_6] != 0)
                
                if (rbx_6.d + 1 s> 0)
                    sub_1405947f0(&var_b8, rbx_6.d + 1)
                    rcx_20 = var_b0_2:4.d
                    rdx_17 = var_b0_2.d
                
                int32_t rax_27 = rbx_6.d + 1 + rdx_17
                var_b0_2.d = rax_27
                
                if (rax_27 s> rcx_20)
                    sub_140594770(&var_b8)
                
                UnDecorator::getReferenceType(var_b8.q, arg2, (rbx_6.d + 1) * 2)
            
            (*(*rsi_1 + 0x30))(rsi_1, &var_b8, 1)
            rcx_14 = var_b8.q
        label_1425fadf2:
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        else
            if (arg3 == 4)
                int32_t rdx_13 = 0
                int64_t var_88 = 0
                int32_t rcx_15 = 0
                int64_t var_80_1 = 0
                
                if (arg2 != 0 && *arg2 != 0)
                    int64_t rbx_4 = -1
                    
                    do
                        rbx_4 += 1
                    while (arg2[rbx_4] != 0)
                    
                    if (rbx_4.d + 1 s> 0)
                        sub_1405947f0(&var_88, rbx_4.d + 1)
                        rcx_15 = var_80_1:4.d
                        rdx_13 = var_80_1.d
                    
                    int32_t rax_25 = rbx_4.d + 1 + rdx_13
                    var_80_1.d = rax_25
                    
                    if (rax_25 s> rcx_15)
                        sub_140594770(&var_88)
                    
                    UnDecorator::getReferenceType(var_88, arg2, (rbx_4.d + 1) * 2)
                
                (*(*rsi_1 + 0x30))(rsi_1, &var_88, 2)
                rcx_14 = var_88
                goto label_1425fadf2
            
            if (arg3 == 8)
                int32_t rdx_9 = 0
                int64_t var_98 = 0
                int32_t rcx_9 = 0
                int64_t var_90_1 = 0
                
                if (arg2 != 0 && *arg2 != 0)
                    int64_t rbx_2 = -1
                    
                    do
                        rbx_2 += 1
                    while (arg2[rbx_2] != 0)
                    
                    if (rbx_2.d + 1 s> 0)
                        sub_1405947f0(&var_98, rbx_2.d + 1)
                        rcx_9 = var_90_1:4.d
                        rdx_9 = var_90_1.d
                    
                    int32_t rax_23 = rbx_2.d + 1 + rdx_9
                    var_90_1.d = rax_23
                    
                    if (rax_23 s> rcx_9)
                        sub_140594770(&var_98)
                    
                    UnDecorator::getReferenceType(var_98, arg2, (rbx_2.d + 1) * 2)
                
                (*(*rsi_1 + 0x30))(rsi_1, &var_98, 3)
                rcx_14 = var_98
                goto label_1425fadf2
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

return 0
