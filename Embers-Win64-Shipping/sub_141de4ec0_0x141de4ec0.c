// 函数: sub_141de4ec0
// 地址: 0x141de4ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x60)
int32_t r12 = 0
int128_t zmm7 = zx.o(0)
int128_t var_a8

if (arg2.d f!= 0f)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    uint128_t zmm8 = 0x4170000000000000
    int32_t rdi_3 = *(arg1 + 0x38)
    int32_t var_c4_2 = 1
    void* var_c0_1 = arg1 + 0x20
    int32_t rcx_13 = 0
    int32_t var_c8_1 = 0
    int32_t r8_4 = 0
    int32_t var_b8_3 = 0xffffffff
    int64_t var_b4_1 = 0
    zmm7.q = float.d(performanceCount)
    int128_t zmm0
    zmm0.q = fconvert.d(arg2.d)
    zmm7.q = zmm7.q f* data_143d796f8
    zmm7.q = zmm7.q f+ zmm8.q
    zmm7.q = zmm7.q f+ zmm0.q
    
    if (rdi_3 != 0)
        void* rax_22 = *(arg1 + 0x30)
        void* r10_3 = arg1 + 0x20
        
        if (rax_22 != 0)
            r10_3 = rax_22
        
        int32_t temp0_4
        int32_t temp1_1
        temp0_4:temp1_1 = sx.q(rdi_3 - 1)
        int32_t rdx_13 = *r10_3
        
        if (rdx_13 != 0)
        label_141de5199:
            int32_t rax_28 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_28)
            int32_t var_c4_3 = rax_28
            int32_t rax_29
            
            if (rax_28 == 0)
                rax_29 = 0x20
            else
                rax_29 = 0x1f - temp0_5
            
            var_b4_1.d = r8_4 - rax_29 + 0x1f
            
            if (r8_4 - rax_29 + 0x1f s> rdi_3)
                var_b4_1.d = rdi_3
        else
            while (true)
                int64_t rax_25 = sx.q(rcx_13)
                r8_4 += 0x20
                rcx_13 += 1
                var_b4_1:4.d = r8_4
                var_c8_1 = rcx_13
                
                if (rax_25.d s>= ((temp0_4 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rdx_13 = *(r10_3 + (rax_25 << 2) + 4)
                int32_t var_b8_4 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141de5199
            
            var_b4_1.d = rdi_3
    
    int32_t rdx_14 = *(arg1 + 0x38)
    var_b4_1.d = rdx_14
    int32_t rsi_1 = 0xffffffff << (rdx_14.b & 0x1f)
    int128_t var_78_1 = var_c8_1.o
    int32_t r8_7 = rdx_14 s>> 5
    int32_t rcx_18 = rdx_14 & 0xffffffe0
    int32_t var_b8_5 = rsi_1
    int128_t var_68_1 = 0xffffffff
    int64_t var_88_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_a8 = (arg1 + 0x10).o
    int128_t var_98_1 = var_78_1
    
    if (rdx_14 != rdi_3)
        void* rax_31 = *(arg1 + 0x30)
        void* r10_4 = arg1 + 0x20
        
        if (rax_31 != 0)
            r10_4 = rax_31
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rdi_3 - 1)
        int32_t rdx_18 = *(r10_4 + (sx.q(r8_7) << 2)) & rsi_1
        
        if (rdx_18 != 0)
        label_141de5262:
            int32_t rax_38 = neg.d(rdx_18) & rdx_18
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_38)
            int32_t r9_2
            
            if (rax_38 == 0)
                r9_2 = 0x20
            else
                r9_2 = 0x1f - temp0_7
            
            var_b4_1.d = rcx_18 - r9_2 + 0x1f
            
            if (rcx_18 - r9_2 + 0x1f s> rdi_3)
                var_b4_1.d = rdi_3
        else
            while (true)
                int64_t rax_35 = sx.q(r8_7)
                rcx_18 += 0x20
                r8_7 += 1
                
                if (rax_35.d s>= ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                    break
                
                rdx_18 = *(r10_4 + (rax_35 << 2) + 4)
                var_b8_5 = 0xffffffff
                
                if (rdx_18 != 0)
                    goto label_141de5262
            
            var_b4_1.d = rdi_3
    
    int128_t zmm6 = 0x3a83126f
    
    while (true)
        int64_t rdi_4 = sx.q(var_98_1:0xc.d)
        int64_t* rax_40 = var_a8.q
        
        if (rdi_4.d == (var_b8_5.q u>> 0x20).d && var_98_1.q == arg1 + 0x20
                && rax_40 == arg1 + 0x10)
            break
        
        int64_t rsi_2 = *rax_40
        QueryPerformanceCounter(&performanceCount)
        arg2.q = float.d(performanceCount)
        arg2.q = arg2.q f* data_143d796f8
        arg2.q = arg2.q f+ zmm8.q
        zmm0.q = zmm7.q f- arg2.q
        arg2.d = fconvert.s(zmm0.q)
        
        if (not(arg2.d f< zmm6.d))
            char rax_41
            rax_41, zmm6, zmm7, zmm8 = sub_141de5380(*(rsi_2 + rdi_4 * 0x18 + 8), arg2)
            
            if (rax_41 != 0)
                var_98_1:8.d &= not.d(var_a8:0xc.d)
                sub_14059bdd0(&var_a8:8)
                continue
        
        r12 = 1
        break
else
    int32_t rdi = *(arg1 + 0x38)
    int32_t var_c4 = 1
    int32_t rcx_1 = 0
    int32_t var_c8 = 0
    int32_t r8 = 0
    void* var_c0 = arg1 + 0x20
    int32_t var_b8 = 0xffffffff
    int64_t var_b4 = 0
    
    if (rdi != 0)
        void* rax_1 = *(arg1 + 0x30)
        void* r10_1 = arg1 + 0x20
        
        if (rax_1 != 0)
            r10_1 = rax_1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi - 1)
        int32_t rdx_3 = *r10_1
        
        if (rdx_3 != 0)
        label_141de4f99:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_c4_1 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            var_b4.d = r8 - rax_8 + 0x1f
            
            if (r8 - rax_8 + 0x1f s> rdi)
                var_b4.d = rdi
        else
            while (true)
                int64_t rax_4 = sx.q(rcx_1)
                r8 += 0x20
                rcx_1 += 1
                var_b4:4.d = r8
                var_c8 = rcx_1
                
                if (rax_4.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_3 = *(r10_1 + (rax_4 << 2) + 4)
                int32_t var_b8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141de4f99
            
            var_b4.d = rdi
    
    int32_t rdx_4 = *(arg1 + 0x38)
    var_b4.d = rdx_4
    int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_78 = var_c8.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t rcx_6 = rdx_4 & 0xffffffe0
    int32_t var_b8_2 = r14
    int128_t var_68 = 0xffffffff
    int64_t var_88 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_a8 = (arg1 + 0x10).o
    int128_t var_98 = var_78
    
    if (rdx_4 != rdi)
        void* rax_10 = *(arg1 + 0x30)
        void* r10_2 = arg1 + 0x20
        
        if (rax_10 != 0)
            r10_2 = rax_10
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rdi - 1)
        int32_t rdx_8 = *(r10_2 + (sx.q(r8_3) << 2)) & r14
        
        if (rdx_8 != 0)
        label_141de5062:
            int32_t rax_17 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r9_1
            
            if (rax_17 == 0)
                r9_1 = 0x20
            else
                r9_1 = 0x1f - temp0_3
            
            var_b4.d = rcx_6 - r9_1 + 0x1f
            
            if (rcx_6 - r9_1 + 0x1f s> rdi)
                var_b4.d = rdi
        else
            while (true)
                int64_t rax_14 = sx.q(r8_3)
                rcx_6 += 0x20
                r8_3 += 1
                
                if (rax_14.d s>= ((temp6_1 & 0x1f) + temp7_1) s>> 5)
                    break
                
                rdx_8 = *(r10_2 + (rax_14 << 2) + 4)
                var_b8_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141de5062
            
            var_b4.d = rdi
    
    while (true)
        int64_t rax_19 = sx.q(var_98:0xc.d)
        int64_t* rcx_8 = var_a8.q
        
        if (rax_19.d == (var_b8_2.q u>> 0x20).d && var_98.q == arg1 + 0x20 && rcx_8 == arg1 + 0x10)
            break
        
        zmm7 = sub_141de5380(*(*rcx_8 + rax_19 * 0x18 + 8), zmm7)
        var_98:8.d &= not.d(var_a8:0xc.d)
        sub_14059bdd0(&var_a8:8)

if (arg1 != -0x60)
    LeaveCriticalSection(arg1 + 0x60)

return zx.q(r12)
