// 函数: sub_141f16b60
// 地址: 0x141f16b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rdx = *(arg1 + 0x2a0)
uint64_t result

if (rdx s> 0xc)
    uint64_t var_88 = 0
    int32_t var_80_1 = 0
    int32_t var_5c_1 = 0x80
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x1c)
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    sub_141f16e80(arg1, &var_88)
    int32_t rdx_4 = var_80_1 - var_54_1
    arg2[1].d = 0
    
    if (rdx_4 s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx_4)
    
    int64_t* var_f0_1 = &var_78
    int32_t rcx_7 = 0
    int32_t var_f8_1 = 0
    int32_t var_e8_1 = 0xffffffff
    int32_t r8_2 = 0
    int32_t var_f4_1 = 1
    int64_t var_e4_1 = 0
    int64_t* var_68
    int32_t var_60
    
    if (var_60 != 0)
        int64_t* r11_1 = &var_78
        
        if (var_68 != 0)
            r11_1 = var_68
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_60 - 1)
        int32_t rdx_7 = *r11_1
        
        if (rdx_7 != 0)
        label_141f16d18:
            int32_t rax_10 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_f4_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            int32_t rax_12 = r8_2 - rax_11 + 0x1f
            
            if (rax_12 s> var_60)
                rax_12 = var_60
            
            var_e4_1.d = rax_12
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_7)
                r8_2 += 0x20
                rcx_7 += 1
                var_e4_1:4.d = r8_2
                var_f8_1 = rcx_7
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_e4_1.d = var_60
                    break
                
                rdx_7 = *(r11_1 + (rdx_8 << 2) + 4)
                int32_t var_e8_2 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_141f16d18
    
    int128_t var_98_1 = 0xffffffff
    int128_t var_a8_1 = var_f8_1.o
    var_e4_1.d = var_60
    int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_d8 = (&var_88).o
    int128_t var_c8_1 = var_a8_1
    int64_t var_b8_1 = temp0_3
    
    while (true)
        int64_t rcx_11 = sx.q(var_c8_1:0xc.d)
        int64_t* rax_13 = var_d8.q
        
        if (rcx_11.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_c8_1.q == &var_78
                && rax_13 == &var_88)
            break
        
        int64_t rsi_1 = sx.q(arg2[1].d)
        int64_t r14_2 = *(*rax_13 + rcx_11 * 0x10)
        int32_t rax_15 = (rsi_1 + 1).d
        arg2[1].d = rax_15
        
        if (rax_15 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rsi_1 << 3)) = r14_2
        var_c8_1:8.d &= not.d(var_d8:0xc.d)
        sub_14059bdd0(&var_d8:8)
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    var_80_1 = 0
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    result = sub_14059a8e0(&var_78, 0)
    
    if (var_68 != 0)
        result = sub_140a74f90(var_68)
    
    uint64_t rcx_19 = var_88
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
else
    arg2[1].d = 0
    
    if (rdx s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx)
    
    void* i = *(arg1 + 0x298)
    result = sx.q(*(arg1 + 0x2a0))
    
    for (void* r15_1 = result * 0x8c + i; i != r15_1; i += 0x8c)
        result = sub_140d3c6e0(i + 0x74)
        uint64_t j = result
        
        if (result != 0)
            int64_t* r8_1 = *arg2
            int64_t r9_1 = sx.q(arg2[1].d)
            int64_t* rcx_2 = r8_1
            result = &r8_1[r9_1]
            
            if (r8_1 != result)
                while (*rcx_2 != j)
                    rcx_2 = &rcx_2[1]
                    
                    if (rcx_2 == result)
                        goto label_141f16c1c
            
            if (r8_1 == result || ((rcx_2 - r8_1) s>> 3).d == 0xffffffff)
            label_141f16c1c:
                int32_t rax_2 = (r9_1 + 1).d
                arg2[1].d = rax_2
                
                if (rax_2 s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                result = *arg2
                *((r9_1 << 3) + result) = j

__security_check_cookie(rax_1 ^ &var_118)
return result
