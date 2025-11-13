// 函数: sub_140bb6ec0
// 地址: 0x140bb6ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection_1 = arg1
CRITICAL_SECTION* lpCriticalSection = arg1
int64_t r12
int64_t var_28 = r12
EnterCriticalSection(arg1)
char rax = sub_140bacd80(arg2)
int32_t rdx = *(arg2 + 8)
void* rbx

if (rax == 0)
    int16_t* rdx_17
    
    if (rdx == 0)
        rdx_17 = &data_142d40450
    else
        rdx_17 = *arg2
    
    rbx.b =
        sub_1408d83c0(&lpCriticalSection[4], *sub_140b58260(&lpCriticalSection_1, rdx_17, 1)) s> 0
else
    int16_t* rdx_1
    
    if (rdx == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    int64_t arg_20
    sub_140b58260(&arg_20, rdx_1, 1)
    int32_t rcx_2 = 0
    int32_t var_b4_1 = 1
    void* __offset(_RTL_CRITICAL_SECTION, 0xa0) r15_1 = &lpCriticalSection[4]
    int32_t var_b8_1 = 0
    int32_t r11_1 = (r15_1 - 0xa0)->__offset(0xc8).d
    void* __offset(_RTL_CRITICAL_SECTION, 0xb0) r14_1 = r15_1 + 0x10
    int32_t r8_1 = 0
    void* __offset(_RTL_CRITICAL_SECTION, 0xa0) var_98_1 = r15_1
    void* __offset(_RTL_CRITICAL_SECTION, 0xb0) var_b0_1 = r14_1
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = (r14_1 - 0xb0)->__offset(0xc0).q
        void* __offset(_RTL_CRITICAL_SECTION, 0xb0) r9_1 = r14_1
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = (r9_1 - 0xb0)->__offset(0xb0).d
        
        if (rdx_4 != 0)
        label_140bb6fb8:
            int32_t rax_8 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_a4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_a4_1:4.d = r8_1
                var_b8_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_140bb6fb8
            
            var_a4_1.d = r11_1
    
    int32_t rdx_6 = (r15_1 - 0xa0)->__offset(0xc8).d
    int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int128_t var_78_1 = 0xffffffff
    int64_t var_40_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_88_1
    var_88_1:8.d = rsi_1
    var_88_1:0xc.d = rdx_6
    int64_t var_60_1 = r15_1.o.q
    int128_t var_50_1 = var_b8_1.o
    
    if (rdx_6 != r11_1)
        void* rax_11 = (r14_1 - 0xb0)->__offset(0xc0).q
        void* __offset(_RTL_CRITICAL_SECTION, 0xb0) r10_1 = r14_1
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi_1
        
        if (rdx_10 != 0)
        label_140bb7082:
            int32_t rax_18 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            
            if (rax_18 == 0)
                rbx = 0x20
            else
                rbx = zx.q(0x1f - temp0_4)
            
            var_88_1:0xc.d = r9_3 - rbx.d + 0x1f
            
            if (r9_3 - rbx.d + 0x1f s> r11_1)
                var_88_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
                var_88_1:8.d = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140bb7082
            
            var_88_1:0xc.d = r11_1
    
    uint64_t rdx_12 = var_88_1:8.q u>> 0x20
    uint64_t var_68_1 = rdx_12
    
    while (true)
        int64_t rcx_9 = sx.q(var_50_1:0xc.d)
        
        if (rcx_9.d == rdx_12.d && var_50_1.q == r14_1 && var_60_1 == r15_1)
            lpCriticalSection = lpCriticalSection_1
            rbx.b = 0
            break
        
        int64_t* r13_2 = (rcx_9 << 5) + *var_60_1
        int64_t rdx_13 = sx.q(r13_2[2].d)
        
        if (rdx_13.d != 0)
            int32_t r15_2 = 0
            int64_t rax_21 = arg_20
            int32_t rdi_1 = 0
            rbx = nullptr
            r12.b = *r13_2[1] != rax_21
            
            do
                int64_t r9_5 = sx.q(rdi_1)
                rbx += 1
                rdi_1 += 1
                
                if (rbx s< rdx_13)
                    int64_t* rdx_14 = r13_2[1] + (rbx << 3)
                    
                    do
                        int32_t rcx_12
                        rcx_12.b = *rdx_14 != rax_21
                        
                        if (zx.d(r12.b) != rcx_12)
                            break
                        
                        rdi_1 += 1
                        rbx += 1
                        rdx_14 = &rdx_14[1]
                    while (rbx s< rdx_13)
                
                int32_t r14_3 = rdi_1 - r9_5.d
                
                if (r12.b != 0)
                    if (r15_2 != r9_5.d)
                        int64_t rcx_13 = r13_2[1]
                        memmove(rcx_13 + (sx.q(r15_2) << 3), rcx_13 + (r9_5 << 3), r14_3 << 3)
                        rax_21 = arg_20
                    
                    r15_2 += r14_3
                
                r12.b ^= 1
            while (rbx s< rdx_13)
            
            r13_2[2].d = r15_2
            
            if (rdx_13.d - r15_2 s> 0)
                if (r15_2 == 0)
                    sub_1408d83c0(var_98_1, *r13_2)
                
                lpCriticalSection = lpCriticalSection_1
                rbx.b = 1
                break
            
            r14_1 = var_b0_1
            r15_1 = var_98_1
        
        int32_t var_54
        var_50_1:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
        rdx_12 = var_68_1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rbx.b)
