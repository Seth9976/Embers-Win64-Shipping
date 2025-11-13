// 函数: sub_141a5b300
// 地址: 0x141a5b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result

if ((*(arg1 + 0x45c) & 2) != 0)
    int64_t rdi_1 = sx.q(arg1[0x90].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg1[0x90].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x484))
        sub_14083a7e0(&arg1[0x8f])
    
    int64_t rcx_1 = arg1[0x8f]
    int64_t rdx_2 = rdi_1 * 3
    int32_t var_84_1 = zx.o(0).d
    result = 0.q
    *(rcx_1 + (rdx_2 << 2)) = 3
    *(rcx_1 + (rdx_2 << 2) + 4) = result
else if (arg1[0x8b].b != 1 && arg1[0x8c] != 0)
    result = (*(*arg1 + 0x278))()
    
    if (result.b != 0)
        uint128_t zmm1 = arg1[0x92].d
        
        if ((*(arg1 + 0x45c) & 1) != 0)
            zmm1 ^= data_142d3f780
        
        int32_t rdx_3 = *(arg1 + 0x46c)
        int32_t rcx_2 = arg1[0x8d].d
        int32_t var_88_2
        int32_t var_84_2
        
        if (rdx_3 s<= 0)
            var_88_2 = rcx_2
            var_84_2 = 0
        else
            var_88_2 = rcx_2 - 1 + rdx_3
            
            var_84_2 = 0.99999994f <= 0.99999994f ? 0x3f7fffff : 0x3f7fffff
        
        int64_t rax_5 = var_88_2.q
        int64_t r8_1 = *(arg1 + 0x7d4)
        int64_t var_80 = rax_5
        var_88_2.q = r8_1
        
        if (r8_1.d == rax_5.d)
            arg2 = var_84_2
        
        if (r8_1.d != rax_5.d || arg2.d f!= var_80:4.d)
            var_84_2 = 0
            var_88_2.q = rcx_2.q
            var_80 = r8_1
            
            if (r8_1.d == rcx_2)
                arg2 = var_80:4.d
                
                if (not(arg2.d f!= var_84_2) && not(zmm1.d f>= 0f))
                    if (rdx_3 s<= 0)
                        goto label_141a5b449
                    
                    var_88_2 = rdx_3 - 1 + rcx_2
                    
                    var_84_2 = 0.99999994f <= 0.99999994f ? 0x3f7fffff : 0x3f7fffff
                    
                    arg2 = sub_141a58410(arg1, var_88_2.q)
        else if (not(zmm1.d f<= 0f))
        label_141a5b449:
            var_88_2 = rcx_2
            var_84_2 = 0
            arg2 = sub_141a58410(arg1, var_88_2.q)
        
        if (sub_141a58060(&arg1[0x94]) == 0)
            arg2 = sub_141a54260(&arg1[0x94], arg1[0x8c], &arg1[5])
        
        if ((arg1[0x93].b & 2) != 0)
            bool cond:3_1 = *(arg1 + 0x304) != 0
            *(arg1 + 0x305) = 1
            
            if (not(cond:3_1))
                *(arg1 + 0x304) = 1
        
        int64_t rax_7 = *(arg1 + 0x7d4)
        int64_t* rcx_6 = arg1[0x109]
        *(arg1 + 0x45c) |= 4
        var_80 = rax_7
        int64_t var_78_1 = arg1[0xf8]
        arg1[0x8b].b = 1
        
        if (&var_80 != &rcx_6[1])
            if (rcx_6[3].b != 0)
                rcx_6[3].b = 0
            
            arg2 = var_80.o
            *(rcx_6 + 8) = arg2
            rcx_6[3].b = 1
        
        (*(*rcx_6 + 0x10))(rcx_6, &var_80)
        int64_t* rax_11 = sub_140d3c6e0(&arg1[0x94])
        
        if (rax_11 != 0)
            int64_t rdx_7 = *rax_11
            (*(rdx_7 + 0x280))(rax_11, rdx_7)
        
        if (arg1[0xfa].b == 0)
            if (arg1[0x10f].b == 0)
                int64_t* rcx_9 = data_143f5b298
                (*(*rcx_9 + 0x2b8))(rcx_9)
                zmm1.q = fconvert.d(arg2.d)
                
                if (&var_80 != &arg1[0x10e])
                    arg1[0x10e] = zmm1.q
                    arg1[0x10f].b = 1
            
            int64_t rdx_8 = arg1[0xf8]
            int64_t* rcx_10 = data_143f5b298
            arg2 = _mm_cvtepi32_pd(zx.q(rdx_8.d))
            int64_t r8_3 = *rcx_10
            zmm1.q = 0x3ff0000000000000 f/ (_mm_cvtepi32_pd(zx.q((rdx_8 u>> 0x20).d)) f/ arg2.q)
            (*(r8_3 + 0x2c0))(rcx_10, _mm_cvtpd_ps(zmm1), r8_3)
        
        int64_t rax_16
        int64_t rdx_9
        
        if (*(arg1 + 0x7e4) != 0)
            rdx_9 = *(arg1 + 0x7d4)
            rax_16 = *(arg1 + 0x7dc)
            var_88_2.q = rdx_9
            var_80 = rax_16
        
        if (*(arg1 + 0x7e4) == 0 || rax_16.d != rdx_9.d || not(var_80:4.d.d f== var_84_2))
            uint128_t var_38[0x2]
            uint128_t* rax_17 = sub_141a5b700(&arg1[0xf8], &var_38, *(arg1 + 0x7d4))
            int128_t zmm1_1 = rax_17[1]
            uint128_t var_68 = *rax_17
            int128_t var_58_1 = zmm1_1
            uint64_t var_48_1 = rax_17[2].q
            (*(*arg1 + 0x270))(arg1, &var_68, 1, 0, var_88_2)
        
        result = sub_141a6c720(arg1)
        
        if ((*(arg1 + 0x45c) & 1) == 0)
            if (arg1[0x82].d s> 0)
                result = sub_1405a9f90(&arg1[0x81], 0)
        else if (arg1[0x84].d s> 0)
            result = sub_1405a9f90(&arg1[0x83], 0)

__security_check_cookie(result_1 ^ &var_a8)
return result
