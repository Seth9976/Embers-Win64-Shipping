// 函数: sub_140a89de0
// 地址: 0x140a89de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x18)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rdi_1 = performanceCount - *(arg1 + 0xf8)
int64_t rsi = *(arg1 + 0x100)
int128_t zmm0 = sub_140a48b40()

if (rdi_1 u<= rsi)
    rsi = rdi_1

int128_t zmm1
zmm1.q = float.d(rsi + *(arg1 + 0xf0))

if (rsi + *(arg1 + 0xf0) s< 0)
    zmm1.q = zmm1.q f+ 1.8446744073709552e+19

int128_t zmm6
zmm6.q = zmm0.q f* zmm1.q

if (arg2 == 0)
    int64_t r11_2 = sx.q(GetCurrentThreadId())
    int32_t* rcx_16
    
    if (*(arg1 + 0x48) == *(arg1 + 0x74))
    label_140a8a0c2:
        rcx_16 = nullptr
    else
        void* r9_4 = arg1 + 0x78
        void* rdx_11 = *(r9_4 + 8)
        
        if (rdx_11 != 0)
            r9_4 = rdx_11
        
        int32_t rax_26 = *(r9_4 + (((sx.q(*(arg1 + 0x88)) - 1) & r11_2) << 2))
        
        if (rax_26 == 0xffffffff)
        label_140a8a0c2_1:
            rcx_16 = nullptr
        else
            while (true)
                rcx_16 = sx.q(rax_26) * 0x30 + *(arg1 + 0x40)
                
                if (*rcx_16 == r11_2.d)
                    break
                
                rax_26 = rcx_16[0xa]
                
                if (rax_26 == 0xffffffff)
                    goto label_140a8a0c2_2
            
            if (rax_26 == 0xffffffff)
            label_140a8a0c2_2:
                rcx_16 = nullptr
    
    void* rax_27 = &rcx_16[2]
    
    if (rcx_16 == 0)
        rax_27 = nullptr
    
    if (rax_27 != 0)
        int32_t temp7_1 = *(rax_27 + 0x10)
        *(rax_27 + 0x10) -= 1
        
        if (temp7_1 == 1)
            *rax_27 = zmm6.q
else
    int32_t rax = *(arg1 + 0xec)
    *(arg1 + 0xec) -= 1
    
    if (rax == 1)
        int32_t r10_1 = 0
        int32_t r11_1 = *(arg1 + 0x68)
        int32_t var_d8_1 = 0
        int32_t rcx_2 = 0
        int32_t var_d4_1 = rax
        void* var_d0_1 = arg1 + 0x50
        int32_t var_c8_1 = 0xffffffff
        int32_t var_c4_1 = 0
        int32_t var_c0_1 = 0
        
        if (r11_1 != 0)
            void* rax_1 = *(arg1 + 0x60)
            void* r8_1 = arg1 + 0x50
            
            if (rax_1 != 0)
                r8_1 = rax_1
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r11_1 - 1)
            int32_t rdx_2 = *r8_1
            int32_t var_c4_3
            
            if (rdx_2 != 0)
            label_140a89f18:
                int32_t rax_8 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
                int32_t var_d4_2 = rax_8
                int32_t rax_10
                
                if (rax_8 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = rax + 0x1e - temp0_2
                
                int32_t var_c4_2 = rcx_2 - rax_10 + 0x1f
                
                if (rcx_2 - rax_10 + 0x1f s> r11_1)
                    var_c4_3 = r11_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(r10_1)
                    rcx_2 += 0x20
                    r10_1 += 1
                    int32_t var_c0_2 = rcx_2
                    var_d8_1 = r10_1
                    
                    if (rdx_3.d s>= (temp6_1 + (temp5_1 & (rax + 0x1e))) s>> 5)
                        break
                    
                    rdx_2 = *(r8_1 + (rdx_3 << 2) + 4)
                    int32_t var_c8_2 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_140a89f18
                
                var_c4_3 = r11_1
        
        int32_t rdx_5 = *(arg1 + 0x68)
        int128_t var_68_1 = var_d8_1.o
        int32_t r12_1 = 0xffffffff << (rdx_5.b & (rax + 0x1e).b)
        int32_t r8_3 = rdx_5 s>> 5
        int32_t r9_2 = rdx_5 & 0xffffffe0
        int32_t var_80_1 = r12_1
        int32_t var_7c_1 = rdx_5
        int128_t var_58_1 = 0xffffffff
        int64_t var_98_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_b8 = (arg1 + 0x40).o
        int128_t var_a8_1 = var_68_1
        
        if (rdx_5 != r11_1)
            void* rax_12 = *(arg1 + 0x60)
            void* r10_2 = arg1 + 0x50
            
            if (rax_12 != 0)
                r10_2 = rax_12
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r11_1 - 1)
            int32_t rdx_9 = *(r10_2 + (sx.q(r8_3) << 2)) & r12_1
            int32_t var_7c_3
            
            if (rdx_9 != 0)
            label_140a89fe2:
                int32_t rax_19 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t rdi_3
                
                if (rax_19 == 0)
                    rdi_3 = 0x20
                else
                    rdi_3 = rax + 0x1e - temp0_4
                
                int32_t var_7c_2 = r9_2 - rdi_3 + 0x1f
                
                if (r9_2 - rdi_3 + 0x1f s> r11_1)
                    var_7c_3 = r11_1
            else
                while (true)
                    int64_t rcx_7 = sx.q(r8_3)
                    r9_2 += 0x20
                    r8_3 += 1
                    
                    if (rcx_7.d s>= (temp9_1 + (temp8_1 & (rax + 0x1e))) s>> 5)
                        break
                    
                    rdx_9 = *(r10_2 + (rcx_7 << 2) + 4)
                    var_80_1 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_140a89fe2
                
                var_7c_3 = r11_1
        
        while (true)
            int64_t rax_21 = sx.q(var_a8_1:0xc.d)
            int64_t* rdx_10 = var_b8.q
            
            if (rax_21.d == (var_80_1.q u>> 0x20).d && var_a8_1.q == arg1 + 0x50
                    && rdx_10 == arg1 + 0x40)
                break
            
            *(*rdx_10 + rax_21 * 0x30 + 8) = zmm6.q
            var_a8_1:8.d &= not.d(var_b8:0xc.d)
            sub_14059bdd0(&var_b8:8)

*(arg1 + 0xa0) -= 1
int64_t performanceCount_1
int64_t result = QueryPerformanceCounter(&performanceCount_1)
int64_t rdi_7 = performanceCount_1 - *(arg1 + 0xf8)
int64_t rsi_3 = *(arg1 + 0x100)
double zmm0_1 = sub_140a48b40()

if (rdi_7 u<= rsi_3)
    rsi_3 = rdi_7

zmm1.q = float.d(rsi_3 + *(arg1 + 0xf0))

if (rsi_3 + *(arg1 + 0xf0) s< 0)
    zmm1.q = zmm1.q f+ 1.8446744073709552e+19

*(arg1 + 0x90) = zmm0_1 f* zmm1.q

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(arg1 + 0x18)
