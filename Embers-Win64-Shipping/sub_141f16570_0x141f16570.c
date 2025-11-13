// 函数: sub_141f16570
// 地址: 0x141f16570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rdx = *(arg1 + 0x2a0)
uint64_t result

if (rdx s> 0xc)
    uint64_t var_98 = 0
    int32_t var_90_1 = 0
    int32_t var_6c_1 = 0x80
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    sub_141f16960(arg1, &var_98, arg3)
    int32_t rdx_8 = var_90_1 - var_64_1
    arg2[1].d = 0
    
    if (rdx_8 s> *(arg2 + 0xc))
        sub_140638c50(arg2, rdx_8)
    
    int64_t* var_100_1 = &var_88
    int32_t rcx_9 = 0
    int32_t var_108_1 = 0
    int32_t var_f8_1 = 0xffffffff
    int32_t r8_2 = 0
    int32_t var_104_1 = 1
    int64_t var_f4_1 = 0
    int64_t* var_78
    int32_t var_70
    
    if (var_70 != 0)
        int64_t* r11_1 = &var_88
        
        if (var_78 != 0)
            r11_1 = var_78
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_70 - 1)
        int32_t rdx_11 = *r11_1
        
        if (rdx_11 != 0)
        label_141f167f8:
            int32_t rax_19 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
            int32_t var_104_2 = rax_19
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_2
            
            int32_t rax_21 = r8_2 - rax_20 + 0x1f
            
            if (rax_21 s> var_70)
                rax_21 = var_70
            
            var_f4_1.d = rax_21
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_9)
                r8_2 += 0x20
                rcx_9 += 1
                var_f4_1:4.d = r8_2
                var_108_1 = rcx_9
                
                if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_f4_1.d = var_70
                    break
                
                rdx_11 = *(r11_1 + (rdx_12 << 2) + 4)
                int32_t var_f8_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141f167f8
    
    var_f4_1.d = var_70
    int128_t var_b8_1 = var_108_1.o
    int128_t var_a8_1 = 0xffffffff
    int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_e8 = (&var_98).o
    int128_t var_d8_1 = var_b8_1
    int64_t var_c8_1 = temp0_3
    
    while (true)
        int64_t rcx_12 = sx.q(var_d8_1:0xc.d)
        char rax_23
        
        if (rcx_12.d != ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d || var_d8_1.q != &var_88)
            rax_23 = 0
        else
            rax_23 = 1
        
        int64_t* rdx_13 = var_e8.q
        
        if (rax_23 == 0 || rdx_13 != &var_98)
            rax_23 = 1
        else
            rax_23 = 0
        
        if (rax_23 == 0)
            break
        
        int64_t rbx_1 = sx.q(arg2[1].d)
        int64_t rsi_1 = *(*rdx_13 + rcx_12 * 0x10)
        int32_t rax_25 = (rbx_1 + 1).d
        arg2[1].d = rax_25
        
        if (rax_25 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rbx_1 << 3)) = rsi_1
        var_d8_1:8.d &= not.d(var_e8:0xc.d)
        sub_14059bdd0(&var_e8:8)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    var_90_1 = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    result = sub_14059a8e0(&var_88, 0)
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    uint64_t rcx_20 = var_98
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)
else
    arg2[1].d = 0
    
    if (rdx s> *(arg2 + 0xc))
        sub_140638c50(arg2, rdx)
    
    void* i = *(arg1 + 0x298)
    result = sx.q(*(arg1 + 0x2a0))
    
    for (void* r13_2 = result * 0x8c + i; i != r13_2; i += 0x8c)
        result = sub_140d3c6e0(i + 0x74)
        
        if (result != 0)
            void* j = *(result + 0xa0)
            
            if (j != 0)
                if (arg3 == 0)
                label_141f16683:
                    uint64_t rdx_4 = *arg2
                    int64_t r8_1 = sx.q(arg2[1].d)
                    int64_t* rax_9 = rdx_4
                    int64_t rcx_4 = rdx_4 + (r8_1 << 3)
                    
                    if (rdx_4 != rcx_4)
                        while (*rax_9 != j)
                            rax_9 = &rax_9[1]
                            
                            if (rax_9 == rcx_4)
                                goto label_141f166bc
                        
                        result = (rax_9 - rdx_4) s>> 3
                    
                    if (rdx_4 == rcx_4 || result.d == 0xffffffff)
                    label_141f166bc:
                        int32_t rax_11 = (r8_1 + 1).d
                        arg2[1].d = rax_11
                        
                        if (rax_11 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        result = *arg2
                        *(result + (r8_1 << 3)) = j
                else
                    void* rax_2 = sub_142452380()
                    
                    if (rax_2 == 0)
                        goto label_141f16683
                    
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s> *(arg3 + 0x38)
                            || *(*(arg3 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                        goto label_141f16683
                    
                    void* rax_5 = sub_142452380()
                    void* const rax_8
                    
                    if (rax_5 == 0)
                        rax_8 = nullptr
                    else
                        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                        
                        if (rax_6.d s> *(arg3 + 0x38))
                            rax_8 = nullptr
                        else
                            rax_8 = arg3
                            
                            if (*(*(arg3 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                                rax_8 = nullptr
                    
                    void* rdx_3 = *(j + 0x10)
                    result = sx.q(*(rax_8 + 0x38))
                    
                    if (result.d s<= *(rdx_3 + 0x38))
                        uint64_t result_1 = result
                        result = *(rdx_3 + 0x30)
                        
                        if (*(result + (result_1 << 3)) == rax_8 + 0x30)
                            goto label_141f16683

__security_check_cookie(rax_1 ^ &var_128)
return result
