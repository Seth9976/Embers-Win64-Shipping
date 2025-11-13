// 函数: sub_141760f00
// 地址: 0x141760f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg3
arg3.b = 6
sub_1417048d0(arg1, 2, arg3.b)
*arg1 = &data_142fc54b0
*(arg1 + 0x10) = *rbx
*(arg1 + 0x20) = rbx[1]
int32_t i_1 = 0
*(arg1 + 0x30) = rbx[2]
arg1[0xa] = 0
arg1[0xb] = 0
arg1[8] = 0
arg1[9].d = 0
int32_t rcx = arg1[5].d
arg1[8].d = rcx
int32_t rax = *(arg1 + 0x2c)
*(arg1 + 0x44) = rax
int32_t rdx = arg1[6].d
arg1[9].d = rdx
int64_t rsi = sx.q(arg1[0xb].d)
int32_t rdx_2 = rdx * rax * rcx

if (rdx_2 s> rsi.d)
    arg1[0xb].d = rdx_2
    
    if (rdx_2 s> 0)
        sub_1406105e0(&arg1[0xa])
    
    memset(arg1[0xa] + (rsi << 2), 0, sx.q(rdx_2 - rsi.d) << 2)
else if (rdx_2 s< rsi.d && rdx_2 != rsi.d)
    arg1[0xb].d = rdx_2
    sub_1405dac90(&arg1[0xa])

arg1[0xe] = 0
arg1[0xf] = 0
arg1[0xc] = 0
arg1[0xd].d = 0
int32_t rcx_4 = arg1[5].d
arg1[0xc].d = rcx_4
int32_t rax_2 = *(arg1 + 0x2c)
*(arg1 + 0x64) = rax_2
int32_t r8_2 = arg1[6].d
arg1[0xd].d = r8_2
int32_t rax_3 = arg1[0xf].d
int32_t r8_4 = r8_2 * rax_2 * rcx_4

if (r8_4 s> rax_3)
    arg1[0xf].d = r8_4
    
    if (r8_4 s> *(arg1 + 0x7c))
        sub_14083a7e0(&arg1[0xe])
else if (r8_4 s< rax_3 && r8_4 != rax_3)
    arg1[0xf].d = r8_4
    sub_140775970(&arg1[0xe])

arg1[0x10] = arg1[2]
arg1[0x11].d = arg1[3].d
*(arg1 + 0x8c) = *(arg1 + 0x1c)
*(arg1 + 0x94) = *(arg1 + 0x24)
__builtin_memcpy(&arg1[0x13], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
arg1[0x16].d = arg6
int64_t var_c8 = *(arg4 + 0x28)
int32_t var_c0 = *(arg4 + 0x30)
int64_t var_b8
sub_1417b0620(arg5, &var_b8, &var_c8, 0)
int32_t var_b0

if (var_b0 != 0)
    int32_t rsi_1 = arg1[6].d
    int32_t rax_9 = *(arg1 + 0x2c)
    int32_t rcx_9 = arg1[5].d
    int32_t var_60_1 = rsi_1
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    int32_t var_68 = rcx_9
    int32_t var_64_1 = rax_9
    int32_t rsi_3 = rsi_1 * rax_9 * rcx_9
    
    if (rsi_3 s> 0)
        var_50_1.d = rsi_3
        sub_140679a80(&var_58)
        memset(var_58, 0, sx.q(rsi_3))
    else if (rsi_3 s< 0)
        int32_t r14_2 = neg.d(rsi_3)
        
        if (r14_2 != 0)
            int32_t r14_3 = neg.d(r14_2)
            
            if (r14_3 != rsi_3)
                memmove(sx.q(rsi_3), nullptr, r14_3 - rsi_3)
            
            var_50_1.d = r14_3
            sub_1405dac10(&var_58)
    
    int32_t rsi_4 = arg1[6].d
    int32_t rax_12 = *(arg1 + 0x2c)
    int32_t rcx_14 = arg1[5].d
    int32_t var_80_1 = rsi_4
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    int32_t var_88 = rcx_14
    int32_t var_84_1 = rax_12
    int32_t rsi_6 = rsi_4 * rax_12 * rcx_14
    
    if (rsi_6 s> 0)
        var_70_1.d = rsi_6
        sub_140679a80(&var_78)
        memset(var_78, 0, sx.q(rsi_6))
    else if (rsi_6 s< 0)
        int32_t r14_5 = neg.d(rsi_6)
        
        if (r14_5 != 0)
            int32_t r14_6 = neg.d(r14_5)
            
            if (r14_6 != rsi_6)
                memmove(sx.q(rsi_6), nullptr, r14_6 - rsi_6)
            
            var_70_1.d = r14_6
            sub_1405dac10(&var_78)
    
    int32_t rsi_7 = arg1[6].d
    int32_t rax_15 = *(arg1 + 0x2c)
    int32_t rcx_19 = arg1[5].d
    int32_t var_a0_1 = rsi_7
    int64_t var_98 = 0
    int64_t var_90_1 = 0
    int32_t var_a8 = rcx_19
    int32_t var_a4_1 = rax_15
    int32_t rsi_9 = rsi_7 * rax_15 * rcx_19
    
    if (rsi_9 s> 0)
        var_90_1.d = rsi_9
        sub_140679a80(&var_98)
        memset(var_98, 0, sx.q(rsi_9))
    else if (rsi_9 s< 0)
        int32_t r14_8 = neg.d(rsi_9)
        
        if (r14_8 != 0)
            int32_t r14_9 = neg.d(r14_8)
            
            if (r14_9 != rsi_9)
                memmove(sx.q(rsi_9), nullptr, r14_9 - rsi_9)
            
            var_90_1.d = r14_9
            sub_1405dac10(&var_98)
    
    var_c8 = 0
    var_c0.q = 0
    char rax_18
    uint128_t zmm6_1
    int128_t zmm7_1
    rax_18, zmm6_1, zmm7_1 =
        sub_141771780(arg1, arg2, arg4, &var_b8, arg5, &var_68, &var_88, &var_a8, &var_c8)
    
    if (rax_18 != 0)
        float zmm0_1 = *(arg1 + 0x34)
        float zmm1_1 = arg1[7].d
        uint128_t var_38_1 = zmm6_1
        
        if (zmm0_1 <= zmm1_1 || not(zmm0_1 f> *(arg1 + 0x3c)))
            zmm0_1 = _mm_max_ss(*(arg1 + 0x3c), zmm1_1)
        
        zmm6_1.d = _mm_cvtepi32_ps(zx.o(arg1[0x16].d)).d f* zmm0_1
        
        if (not(zmm6_1.d f== 0f))
            int32_t i = 0
            
            if (arg1[6].d * *(arg1 + 0x2c) * arg1[5].d s> 0)
                int64_t rcx_26 = 0
                
                do
                    int64_t rax_22 = arg1[0xa]
                    rcx_26 += 4
                    i += 1
                    *(rcx_26 + rax_22 - 4) = _mm_min_ss(*(rcx_26 + rax_22 - 4), zmm6_1.d)
                while (i s< arg1[6].d * *(arg1 + 0x2c) * arg1[5].d)
        
        uint32_t zmm6_3[0x4]
        float zmm7_2
        zmm6_3, zmm7_2 =
            sub_1417774d0(arg1, sub_141775fc0(arg1, &var_68, &var_88, &var_a8, &var_c8), &var_c8)
        
        if (not(zmm6_3[0] f== zmm7_2) && arg1[6].d * *(arg1 + 0x2c) * arg1[5].d s> 0)
            int128_t* rcx_29 = nullptr
            
            do
                int64_t rax_29 = arg1[0xa]
                uint32_t zmm1_3[0x4] = *(rcx_29 + rax_29)
                
                if (not(_mm_and_ps(zmm1_3, 0x7fffffff)[0] f<= zmm6_3[0]))
                    uint32_t zmm0_2[0x4] = zmm6_3
                    
                    if (not(zmm1_3[0] f> zmm7_2))
                        zmm0_2 ^= 0x80000000
                    
                    *(rcx_29 + rax_29) = zmm0_2[0]
                
                i_1 += 1
                rcx_29 += 4
            while (i_1 s< arg1[6].d * *(arg1 + 0x2c) * arg1[5].d)
        
        sub_141774ea0(arg1)
        sub_141770e20(arg1, &var_c8)
        int512_t zmm6_4
        int512_t zmm7_3
        zmm6_4, zmm7_3 = sub_141770010(arg1, arg2, arg4, arg5, &var_b8)
        zmm7_3.o = zmm7_1
        zmm6_4.o = var_38_1
    else
        int16_t* rcx_25
        
        if (*(arg2 + 0x10) == 0)
            rcx_25 = &data_142d40450
        else
            rcx_25 = *(arg2 + 8)
        
        sub_140a54570(rcx_25, &data_1437020ab)
        *arg2 = 0x101
    
    int64_t rcx_33 = var_c8
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int64_t rcx_34 = var_98
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)
    
    int64_t rcx_35 = var_78
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    int64_t rcx_36 = var_58
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
else
    int16_t* rcx_8
    
    if (*(arg2 + 0x10) == 0)
        rcx_8 = &data_142d40450
    else
        rcx_8 = *(arg2 + 8)
    
    sub_140a54570(rcx_8, &data_1437020ab)
    *arg2 = 0x101

int64_t rcx_37 = var_b8

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

return arg1
