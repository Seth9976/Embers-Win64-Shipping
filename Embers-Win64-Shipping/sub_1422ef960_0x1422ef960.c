// 函数: sub_1422ef960
// 地址: 0x1422ef960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
double result = __security_cookie ^ &var_1b8
double result_1 = result

if (arg1[0x101] != 0)
    void* rax_1 = *(arg1 + 0xe8)
    
    if (*(rax_1 + 0x28) != 0)
        data_143de542b = 0
        int16_t* const r9_1
        
        if (*(rax_1 + 0x20) == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *(rax_1 + 0x18)
        
        sub_140af98a0("Unknown", 0x478, u"Shader Compiling thread exception:\r\n%s", r9_1)
        sub_140afbb40()
    
    int64_t performanceCount[0x2]
    QueryPerformanceCounter(&performanceCount)
    int32_t r15_1 = 0
    int32_t* var_188
    int64_t var_180
    
    if (arg3 != 0)
        var_188 = nullptr
        var_180 = 1
        sub_1405a4cf0(&var_188)
        *var_188 = 0
        sub_1422decd0(data_143f56338, &var_188, &arg1[0x98])
        int32_t* rcx_3 = var_188
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
    
    void* lpCriticalSection = &arg1[0x70]
    EnterCriticalSection(lpCriticalSection)
    
    if (arg3 == 0)
        *arg1 = 1
    
    var_188 = nullptr
    int32_t r11_1 = *(arg1 + 0x40)
    void* r9_2 = &arg1[0x28]
    var_180:4.d = 0
    int32_t rcx_5 = 0
    int32_t var_178 = 0
    int32_t i_3 = 0
    int32_t var_174_1 = 1
    int32_t r8_1 = 0
    void* var_170_1 = r9_2
    int32_t var_168_1 = 0xffffffff
    int64_t var_164_1 = 0
    
    if (r11_1 != 0)
        void* rax_3 = *(r9_2 + 0x10)
        
        if (rax_3 != 0)
            r9_2 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_2
        
        if (rdx_4 != 0)
        label_1422efafc:
            int32_t rax_10 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_174_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_164_1.d = r8_1 - rax_11 + 0x1f
            
            if (r8_1 - rax_11 + 0x1f s> r11_1)
                var_164_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_164_1:4.d = r8_1
                var_178 = rcx_5
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
                var_168_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1422efafc
            
            var_164_1.d = r11_1
    
    uint128_t zmm4_1 = var_168_1.o
    void* var_c8_1 = &arg1[0x18]
    uint128_t zmm0 = var_178.o
    uint128_t var_d8_1 = zmm4_1
    int16_t var_110_1 = 0
    void* rax_13 = zmm0.q
    uint128_t var_138_1 = zmm0
    int128_t var_148 = (&arg1[0x18]).o
    zmm0.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
    uint128_t var_128_1 = zmm0
    
    if (_mm_bsrli_si128(zmm4_1, 4).d s< *(rax_13 + 0x18))
        int32_t i = var_138_1:0xc.d
        int32_t* rbx_1 = var_188
        
        do
            int64_t* r8_3 = var_148.q
            int32_t j = 0
            int64_t rax_17 = sx.q(i) * 0x30
            void* r14_2 = *r8_3 + rax_17
            performanceCount[0] = rax_17
            
            if (*(r14_2 + 0x18) s> 0)
                int64_t* rdi_2 = nullptr
                
                do
                    int64_t* rcx_8 = *(rdi_2 + *(r14_2 + 0x10))
                    void* rax_20 = (*(*rcx_8 + 0x20))(rcx_8)
                    int32_t rax_21
                    
                    if (rax_20 == 0)
                        rax_21 = 1
                    else
                        rax_21 = *(rax_20 + 0x18)
                    
                    r15_1 += rax_21
                    j += 1
                    rdi_2 = &rdi_2[2]
                while (j s< *(r14_2 + 0x18))
                
                r8_3 = var_148.q
            
            if (r15_1 != *(r14_2 + 8))
                r15_1 = 0
            else
                int64_t rsi_1 = *r8_3
                int64_t i_4 = sx.q(i_3)
                i_3 = (i_4 + 1).d
                var_180.d = i_3
                
                if (i_3 s> var_180:4.d)
                    sub_1405a4cf0(&var_188)
                    i_3 = var_180.d
                    rbx_1 = var_188
                
                int32_t* rdi_3 = performanceCount[0]
                rbx_1[i_4] = *(rdi_3 + rsi_1)
                void var_b8
                sub_1422d9ca0(&var_b8, r14_2 + 8)
                void** rax_23 = var_148.q
                r15_1 = 0
                int32_t var_64_1 = 0x80
                int32_t var_98_1 = 0
                uint64_t var_90 = 0
                int64_t var_88
                __builtin_memset(&var_88, 0, 0x24)
                int32_t var_60_1 = 0xffffffff
                int32_t var_5c_1 = 0
                int64_t var_50_1 = 0
                int32_t var_48_1 = 0
                void* var_100 = *rax_23 + rdi_3
                void* var_f8_1 = &var_b8
                sub_14186d230(&arg1[0x98], &var_178)
                sub_1422d4760(&var_100, var_170_1)
                int32_t rax_26 = var_178
                *(var_170_1 + 0x80) = 0xffffffff
                void var_108
                sub_1422e20e0(&arg1[0x98], &var_108, *var_170_1, var_170_1, rax_26, nullptr)
                int32_t var_48_2 = 0
                
                if (var_50_1 != 0)
                    sub_140a74f90(var_50_1)
                
                sub_1407547c0(&var_90, 0)
                int64_t var_70
                
                if (var_70 != 0)
                    sub_140a74f90(var_70)
                
                uint64_t rcx_18 = var_90
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                void var_b0
                sub_140596e10(&var_b0)
            
            var_138_1:8.d &= not.d(var_148:0xc.d)
            sub_14059bdd0(&var_148:8)
            i = var_138_1:0xc.d
        while (i s< *(var_138_1.q + 0x18))
        
        lpCriticalSection = &arg1[0x70]
        
        if (var_110_1.b != 0 && var_110_1:1.b != 0)
            sub_14144aa10(&arg1[0x18], *(arg1 + 0x20) - *(arg1 + 0x4c), 1)
        
        int32_t* r14_3 = var_188
        
        if (i_3 s> 0)
            int32_t* rdi_5 = r14_3
            uint64_t i_2 = zx.q(i_3)
            uint64_t i_1
            
            do
                sub_1422f1450(&arg1[0x18], *rdi_5)
                rdi_5 = &rdi_5[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (r14_3 != 0)
            sub_140a74f90(r14_3)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    result = zx.q(*(arg1 + 0xa0) - *(arg1 + 0xcc))
    
    if (result.d s> 0)
        do
            result = sub_1422e94b0(arg1, &arg1[0x98])
        while (result.b != 0)

__security_check_cookie(result_1 ^ &var_1b8)
return result
