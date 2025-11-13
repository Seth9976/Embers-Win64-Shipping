// 函数: sub_141b31cd0
// 地址: 0x141b31cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
TEB* gsbase

if (data_143f2c880 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c880)
    
    if (data_143f2c880 == 0xffffffff)
        sub_140b58170(&data_143f2c878, "StringCurve", 1)
        _Init_thread_footer(&data_143f2c880)

int32_t rcx
rcx.b = *(arg2 + 0xc) == 0
int64_t result

if ((rcx.b & sub_140b5b8a0(*(arg2 + 8), 0xa).b) == 0 || *(arg2 + 0x1c) != data_143f2c878)
    result.b = 0
else
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x2c)
    int32_t var_9c_1 = 0
    int64_t var_90_1 = 0
    int32_t var_88_1 = 0
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x1c)
    int128_t* var_60 = nullptr
    int32_t var_58_1 = 0
    int32_t var_a4_1 = 0x80
    int32_t var_a0_1 = 0xffffffff
    void** const var_d8 = &data_14305a8b0
    sub_140ca6840(sub_1425b1100(), arg3, &var_d8, 0)
    uint64_t r13_1 = 0
    uint64_t var_f8_1 = 0
    uint64_t var_128 = 0
    int64_t var_70
    int32_t var_68
    int32_t r14_1
    uint64_t r15_1
    
    if (var_68 != 0)
        sub_1405a4c70(&var_128, var_68, 0)
        r13_1 = var_128
        var_f8_1 = r13_1
        memcpy(r13_1, var_70, var_68 * 2)
        int32_t var_11c
        r14_1 = var_11c
        r15_1 = r13_1
    else
        r14_1 = 0
        r15_1 = 0
    
    if (var_68 != 0 && var_68 != 1)
        *(arg1 + 0x38) = 1
        
        if (arg1 + 0x28 != &var_128)
            int64_t rcx_4 = *(arg1 + 0x28)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            *(arg1 + 0x28) = r15_1
            r13_1 = 0
            *(arg1 + 0x30) = var_68
            *(arg1 + 0x34) = r14_1
            var_f8_1 = 0
    
    int64_t var_e0
    sub_141a514d0(&var_e0)
    int32_t rax_6 = var_58_1
    
    if (rax_6 s> *(arg1 + 0x14))
        sub_1405dadb0(arg1 + 8, rax_6)
        rax_6 = var_58_1
    
    if (rax_6 s> *(arg1 + 0x24))
        sub_14061cd70(arg1 + 0x18, rax_6)
        rax_6 = var_58_1
    
    int128_t* r15_2 = var_60
    int128_t* var_130_1 = r15_2
    uint64_t rax_8 = r15_2 + sx.q(rax_6) * 0x18
    var_128 = rax_8
    
    if (r15_2 != rax_8)
        int32_t* var_108_1 = -fffffffffffffffc
        int32_t var_110_1 = -2
        int64_t rsi_1 = -2
        int64_t var_100_1 = -2
        
        do
            int32_t var_118
            sub_141a6d2f0(&var_118, 0, var_e0, _mm_cvtps_pd((*r15_2).q))
            int32_t r14_2 = r15_2[1].d
            uint64_t r13_2 = 0
            int64_t rbx_2 = *(r15_2 + 8)
            uint64_t var_f0 = 0
            
            if (r14_2 != 0)
                sub_1405a4c70(&var_f0, r14_2, 0)
                r13_2 = var_f0
                memcpy(r13_2, rbx_2, r14_2 * 2)
            else
                int32_t var_e4_1 = 0
            
            int32_t rbx_3 = var_118
            int32_t var_138 = rbx_3
            int64_t* rbx_6
            
            if (rsi_1 + 2 s<= 0)
                int64_t rsi_7 = sx.q(*(arg1 + 0x10))
                int32_t rax_18 = (rsi_7 + 1).d
                *(arg1 + 0x10) = rax_18
                
                if (rax_18 s> *(arg1 + 0x14))
                    sub_1405a4cf0(arg1 + 8)
                
                *(*(arg1 + 8) + (rsi_7 << 2)) = rbx_3
                int64_t rbx_11 = sx.q(*(arg1 + 0x20))
                int32_t rax_20 = (rbx_11 + 1).d
                *(arg1 + 0x20) = rax_20
                
                if (rax_20 s> *(arg1 + 0x24))
                    sub_1405a4f90(arg1 + 0x18)
                
                rbx_6 = (rbx_11 << 4) + *(arg1 + 0x18)
                *rbx_6 = 0
                rbx_6[1].d = r14_2
                
                if (r14_2 != 0)
                    sub_1405a4c70(rbx_6, r14_2, 0)
                    memcpy(*rbx_6, r13_2, r14_2 * 2)
                else
                    *(rbx_6 + 0xc) = 0
            else
                int64_t rcx_12 = *(arg1 + 8)
                
                if (rbx_3 s< *(var_108_1 + rcx_12))
                    int32_t r15_3 = var_110_1
                    
                    if (var_100_1 s>= 0)
                        int32_t* rax_14 = &var_108_1[-1] + rcx_12
                        int64_t temp0_2
                        
                        do
                            if (rbx_3 s>= *rax_14)
                                sub_141a54e70(arg1 + 8, &var_138, r15_3 + 1)
                                int32_t rbx_7 = *(arg1 + 0x20)
                                *(arg1 + 0x20) = rbx_7 + 1
                                
                                if (rbx_7 + 1 s> *(arg1 + 0x24))
                                    sub_1405a4f90(arg1 + 0x18)
                                
                                int64_t rdx_15 = (sx.q(r15_3 + 1) << 4) + *(arg1 + 0x18)
                                memmove(rdx_15 + 0x10, rdx_15, (rbx_7 - (r15_3 + 1)) << 4)
                                int64_t* rsi_5 = ((rsi_1 + 1) << 4) + *(arg1 + 0x18)
                                *rsi_5 = 0
                                rsi_5[1].d = r14_2
                                
                                if (r14_2 != 0)
                                    sub_1405a4c70(rsi_5, r14_2, 0)
                                    memcpy(*rsi_5, r13_2, r14_2 * 2)
                                else
                                    *(rsi_5 + 0xc) = 0
                                
                                break
                            
                            r15_3 -= 1
                            rax_14 -= 4
                            temp0_2 = rsi_1
                            rsi_1 -= 1
                        while (temp0_2 - 1 s>= 0)
                    
                    if (r15_3 s< 0)
                        sub_141a54e70(arg1 + 8, &var_138, 0)
                        int64_t rbx_9 = sx.q(*(arg1 + 0x20))
                        int32_t rax_17 = (rbx_9 + 1).d
                        *(arg1 + 0x20) = rax_17
                        
                        if (rax_17 s> *(arg1 + 0x24))
                            sub_1405a4f90(arg1 + 0x18)
                        
                        int64_t rdx_20 = *(arg1 + 0x18)
                        memmove(rdx_20 + 0x10, rdx_20, (rbx_9 << 4).d)
                        int64_t* rbx_10 = *(arg1 + 0x18)
                        *rbx_10 = 0
                        rbx_10[1].d = r14_2
                        
                        if (r14_2 != 0)
                            sub_1405a4c70(rbx_10, r14_2, 0)
                            memcpy(*rbx_10, r13_2, r14_2 * 2)
                        else
                            *(rbx_10 + 0xc) = 0
                    
                    r15_2 = var_130_1
                else
                    int64_t rsi_2 = sx.q(*(arg1 + 0x10))
                    int32_t rax_11 = (rsi_2 + 1).d
                    *(arg1 + 0x10) = rax_11
                    
                    if (rax_11 s> *(arg1 + 0x14))
                        sub_1405a4cf0(arg1 + 8)
                        rcx_12 = *(arg1 + 8)
                    
                    *(rcx_12 + (rsi_2 << 2)) = rbx_3
                    int64_t rbx_4 = sx.q(*(arg1 + 0x20))
                    int32_t rax_12 = (rbx_4 + 1).d
                    *(arg1 + 0x20) = rax_12
                    
                    if (rax_12 s> *(arg1 + 0x24))
                        sub_1405a4f90(arg1 + 0x18)
                    
                    rbx_6 = (rbx_4 << 4) + *(arg1 + 0x18)
                    *rbx_6 = 0
                    rbx_6[1].d = r14_2
                    
                    if (r14_2 != 0)
                        sub_1405a4c70(rbx_6, r14_2, 0)
                        memcpy(*rbx_6, r13_2, r14_2 * 2)
                    else
                        *(rbx_6 + 0xc) = 0
            var_110_1 += 1
            rsi_1 = var_100_1 + 1
            var_108_1 = &var_108_1[1]
            var_100_1 = rsi_1
            
            if (r13_2 != 0)
                sub_140a74f90(r13_2)
            
            r15_2 += 0x18
            var_130_1 = r15_2
        while (r15_2 != var_128)
        
        r13_1 = var_f8_1
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    var_d8 = &data_14305a8b0
    sub_1408464b0(&var_60)
    
    if (var_70 != 0)
        sub_140a74f90(var_70)
    
    int64_t rcx_29 = var_80
    var_d8 = &data_142d6a040
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    sub_1405ae180(&var_d0)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_158)
return result
