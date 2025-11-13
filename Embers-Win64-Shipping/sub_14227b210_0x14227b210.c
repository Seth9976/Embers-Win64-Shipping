// 函数: sub_14227b210
// 地址: 0x14227b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = *(arg1 + 0xa0)
void* result = arg1

if (result_1 != 0)
    result = result_1

void* rax = Concurrency::details::UMSSchedulerProxy::GetCompletionListEvent(arg1)

if (rax != 0)
    int32_t rcx = 0
    int32_t rbx_1 = *(rax + 0x28)
    int32_t r8_1 = 0
    int32_t var_88_1 = 0
    int32_t var_84_1 = 1
    void* var_80_1 = rax + 0x10
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = *(rax + 0x20)
        void* r9_1 = rax + 0x10
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_14227b2e9:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_84_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rax_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_74_1:4.d = r8_1
                var_88_1 = rcx
                
                if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rax_4 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_14227b2e9
            
            var_74_1.d = rbx_1
    
    int32_t rdx_3 = *(rax + 0x28)
    var_74_1.d = rdx_3
    int32_t r12_1 = 0xffffffff << (rdx_3.b & 0x1f)
    int128_t var_38_1 = var_88_1.o
    int32_t r8_4 = rdx_3 s>> 5
    int32_t rcx_5 = rdx_3 & 0xffffffe0
    int32_t var_78_3 = r12_1
    int128_t var_28_1 = 0xffffffff
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_68 = rax.o
    int128_t var_58_1 = var_38_1
    
    if (rdx_3 != rbx_1)
        void* rax_10 = *(rax + 0x20)
        void* r9_2 = rax + 0x10
        
        if (rax_10 != 0)
            r9_2 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_7 = *(r9_2 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_7 != 0)
        label_14227b3b2:
            int32_t rax_17 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r10_1
            
            if (rax_17 == 0)
                r10_1 = 0x20
            else
                r10_1 = 0x1f - temp0_4
            
            var_74_1.d = rcx_5 - r10_1 + 0x1f
            
            if (rcx_5 - r10_1 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rax_14 = sx.q(r8_4)
                rcx_5 += 0x20
                r8_4 += 1
                
                if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_7 = *(r9_2 + (rax_14 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_14227b3b2
            
            var_74_1.d = rbx_1
    
    while (true)
        int64_t rax_19 = sx.q(var_58_1:0xc.d)
        int64_t rcx_7 = var_68.q
        
        if (rax_19.d == (var_78_3.q u>> 0x20).d && var_58_1.q == rax + 0x10 && rcx_7 == rax)
            break
        
        int64_t* rax_22 = rax_19 * 0x60 + *rcx_7
        
        if (*rax_22 == arg2)
            result = rax_22[2]
        
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)

return result
