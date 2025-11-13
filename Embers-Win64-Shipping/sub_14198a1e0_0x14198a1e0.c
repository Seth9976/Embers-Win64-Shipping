// 函数: sub_14198a1e0
// 地址: 0x14198a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rsi = arg1
EnterCriticalSection(arg1)
int32_t rdx_1 = rsi->__offset(0x30).d - rsi->__offset(0x5c).d

if (rdx_1 s>= arg2)
    int32_t rbx_1 = 0
    int32_t rdi_1 = 0
    int64_t r14_1 = 0
    int64_t var_198 = 0
    int64_t var_190_1 = 0
    
    if (rdx_1 s> 0)
        sub_141983610(&var_198, rdx_1)
        rdi_1 = var_190_1.d
        r14_1 = var_198
    
    int64_t rax_1 = data_143de5458
    void* r13_1 = &rsi[1]
    int32_t r10_1 = *(r13_1 + 0x28)
    int32_t rcx_1 = 0
    int32_t var_188_1 = 0
    int32_t var_184_1 = 1
    void* var_180_1 = r13_1 + 0x10
    int32_t var_178_1 = 0xffffffff
    int64_t var_174_1 = 0
    
    if (r10_1 != 0)
        void* rax_2 = *(r13_1 + 0x20)
        void* r8_1 = r13_1 + 0x10
        
        if (rax_2 != 0)
            r8_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r8_1
        
        if (rdx_4 != 0)
        label_14198a2f9:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_184_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_174_1.d = rcx_1 - rax_10 + 0x1f
            
            if (rcx_1 - rax_10 + 0x1f s> r10_1)
                var_174_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rbx_1)
                rcx_1 += 0x20
                rbx_1 += 1
                var_174_1:4.d = rcx_1
                var_188_1 = rbx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
                int32_t var_178_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_14198a2f9
            
            var_174_1.d = r10_1
    
    int32_t rdx_7 = *(r13_1 + 0x28)
    var_174_1.d = rdx_7
    int32_t r9_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int32_t var_178_3 = r9_1
    uint128_t var_e8_1 = var_188_1.o
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int32_t r8_3 = rdx_7 s>> 5
    int128_t var_d8_1 = 0xffffffff
    int64_t var_148_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    uint128_t var_168 = r13_1.o
    uint128_t var_158_1 = var_e8_1
    
    if (rdx_7 != r10_1)
        void* rax_12 = *(r13_1 + 0x20)
        void* r10_2 = r13_1 + 0x10
        
        if (rax_12 != 0)
            r10_2 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(r10_2 + (sx.q(r8_3) << 2)) & r9_1
        
        if (rdx_11 != 0)
        label_14198a3e3:
            int32_t rax_19 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r15_1
            
            if (rax_19 == 0)
                r15_1 = 0x20
            else
                r15_1 = 0x1f - temp0_4
            
            var_174_1.d = r9_3 - r15_1 + 0x1f
            
            if (r9_3 - r15_1 + 0x1f s> r10_1)
                var_174_1.d = r10_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_2 + (rcx_6 << 2) + 4)
                var_178_3 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_14198a3e3
            
            var_174_1.d = r10_1
    
    while (true)
        int64_t rax_21 = sx.q(var_158_1:0xc.d)
        int64_t rdx_12 = var_168.q
        
        if (rax_21.d == (var_178_3.q u>> 0x20).d && var_158_1.q == r13_1 + 0x10 && rdx_12 == r13_1)
            break
        
        int64_t* rcx_9 = rax_21 * 0x78 + *rdx_12
        void* rdx_13 = rcx_9[0xd]
        int64_t r8_4 = *(rdx_13 + 0x28)
        
        if (r8_4 + 0xa u<= rax_1)
            uint128_t zmm0
            zmm0.q = *rcx_9
            zmm0:8.d = rcx_9[1].d
            zmm0:0xc.d = *(rcx_9 + 0xc)
            int64_t rax_23 = *(rdx_13 + 0x20)
            int64_t rbx_3 = sx.q(rdi_1)
            rdi_1 = (rbx_3 + 1).d
            int64_t var_60_1 = r8_4
            void* var_50_1 = rdx_13
            uint128_t var_130_1 = *(rcx_9 + 0x10)
            var_190_1.d = rdi_1
            uint128_t var_120_1 = *(rcx_9 + 0x20)
            uint128_t var_110_1 = *(rcx_9 + 0x30)
            uint128_t var_100_1 = *(rcx_9 + 0x40)
            var_188_1.o = *(rcx_9 + 0x50)
            uint64_t var_68_1 = rcx_9[0xc]
            
            if (rdi_1 s> var_190_1:4.d)
                sub_141983440(&var_198, rbx_3.d)
                rdi_1 = var_190_1.d
                r14_1 = var_198
            
            int64_t rax_25 = rbx_3 << 7
            *(rax_25 + r14_1) = zmm0
            *(rax_25 + r14_1 + 0x10) = var_130_1
            *(rax_25 + r14_1 + 0x20) = var_120_1
            *(rax_25 + r14_1 + 0x30) = var_110_1
            *(rax_25 + r14_1 + 0x40) = var_100_1
            *(rax_25 + r14_1 + 0x50) = var_188_1.o
            *(rax_25 + r14_1 + 0x60) = var_68_1.o
            *(rax_25 + r14_1 + 0x70) = rax_23.o
        
        var_158_1:8.d &= not.d(var_168:0xc.d)
        sub_14059bdd0(&var_168:8)
    
    int32_t arg_18
    arg_18.b = 0
    sub_141960280(r14_1, rdi_1, arg2.b)
    rsi = arg1
    
    if (rsi->__offset(0x30).d - rsi->__offset(0x5c).d s> arg2)
        int32_t i = rdi_1 - 1
        
        while (i != 0xffffffff)
            int32_t* rdi_4 = (sx.q(i) << 7) + r14_1
            int64_t* rcx_13 = *(rdi_4 + 0x78)
            
            if (rcx_13 != 0)
                (**rcx_13)(rcx_13, 1)
            
            sub_141982c30(r13_1, rdi_4)
            i -= 1
            
            if (rsi->__offset(0x30).d - rsi->__offset(0x5c).d s<= arg2)
                break
    
    rsi->__offset(0x78).q = rax_1

return LeaveCriticalSection(rsi) __tailcall
