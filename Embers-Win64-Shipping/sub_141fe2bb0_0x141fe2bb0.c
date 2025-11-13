// 函数: sub_141fe2bb0
// 地址: 0x141fe2bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
void* result = arg1[2]

if ((result != 0 && *(result + 0xa0) s> 0) || arg7 != 0)
    void*** rbx
    void*** arg_18 = rbx
    int32_t rdi_1 = 0
    char var_318
    
    if (result != 0 || arg1[1] != 0)
        var_318 = 0
        float var_300_1 = &var_318
        void*** (* var_308)() = j_sub_140597fc0
        void*** rax_3
        int32_t zmm6_1
        rax_3, zmm6_1 = sub_14081d830(0x28, sub_140a756e0(&var_308, &data_143958018) + 0x10, 1, 0)
        rbx = rax_3
        
        if (rax_3 == 0)
            rbx = nullptr
        else
            rbx[1] = 0
            *rbx = &data_143292a08
            __builtin_memset(&rbx[2], 0, 0x18)
        
        int64_t r13_1 = sx.q(arg9[0x18].d)
        int32_t rax_4 = (r13_1 + 1).d
        arg9[0x18].d = rax_4
        
        if (rax_4 s> *(arg9 + 0xc4))
            zmm6_1 = sub_14083a310(&arg9[0x17], r13_1.d)
        
        *(arg9[0x17] + (r13_1 << 3)) = rbx
        int64_t rax_6 = arg1[2]
        *arg1 = rbx
        rbx[1] = rax_6
        *(*arg1 + 0x10) = arg1[1]
        void* rax_8 = *arg1
        void* rcx_3 = *(rax_8 + 8)
        
        if (rcx_3 != 0)
            (*(*(rcx_3 + 8) + 0x28))(rcx_3 + 8)
            rax_8 = *arg1
        
        void* rcx_5 = *(rax_8 + 0x10)
        
        if (rcx_5 != 0 && *(arg1[1] + 0x28) != 0)
            (*(*(rcx_5 + 8) + 0x28))(rcx_5 + 8)
        
        void*** rax_12 = j_sub_140a82f30(0x220)
        void*** rcx_8
        
        if (rax_12 == 0)
            rcx_8 = nullptr
        else
            rcx_8 = sub_141fd7020(rax_12, (arg1[3].d).b, arg1[2])
        
        *(*arg1 + 0x18) = rcx_8
        void* rcx_9 = *(*arg1 + 0x18)
        (*(*(rcx_9 + 8) + 0x28))(rcx_9 + 8)
        void*** rax_17 = j_sub_140a82f30(0x30)
        void*** rcx_11 = rax_17
        
        if (rax_17 == 0)
            rcx_11 = nullptr
        else
            rax_17[2] = 0
            rax_17[3] = 0
            rax_17[2].d = 0xffffffff
            *(rax_17 + 0x14) = 4
            rax_17[3].d = 2
            rax_17[4] = 0
            rax_17[5] = 0
            *rcx_11 = &data_143296700
            rcx_11[1] = &data_143296808
        
        int64_t* var_328_1 = nullptr
        char var_330_1 = 0
        int32_t var_338_1 = 0xffffffff
        int32_t var_340_1 = 0xffffffff
        *(*arg1 + 0x20) = rcx_11
        int32_t var_350_1 = 1
        char var_358_1 = 1
        char var_360_1 = 0
        char var_368_1 = 0
        float var_2d0_1 = (*(arg2 + 0x38))[0]
        char rax_20 = arg6[3]
        char var_370_1 = 0
        char var_378_1 = 0
        float var_2c8[0x4]
        float (* var_388_1)[0x4] = &var_2c8
        int128_t* var_390_1 = &var_2c8
        float zmm0_1[0x4] = _mm_unpacklo_ps(arg2[3].d, *(arg2 + 0x34))
        int128_t var_2ac
        int128_t* var_398_1 = &var_2ac
        __builtin_memset(&var_2c8, 0, 0x38)
        int64_t var_2d8 = zmm0_1.q
        void var_288
        sub_14075e140(&var_288, arg2, arg3, &var_2d8, var_398_1, var_390_1, var_388_1, rax_20, 
            var_378_1, var_370_1, var_368_1, var_360_1, var_358_1, var_350_1, zmm6_1, var_340_1, 
            var_338_1, var_330_1, var_328_1)
        bool rdx_4
        
        if (data_143de5480 == 0)
            rdx_4 = true
        else
            rdx_4 = GetCurrentThreadId() == data_143de5470
        
        int64_t* rcx_14 = *(*arg1 + 0x20) + 8
        void* rdx_5 = &var_288
        
        if (rdx_4 == 0)
            sub_141fecb50(rcx_14, rdx_5)
        else
            sub_141fd2580(rcx_14, rdx_5)
        
        void* rcx_15 = *(*arg1 + 0x20)
        (*(*(rcx_15 + 8) + 0x28))(rcx_15 + 8)
        arg1[2] = 0
        arg1[1] = 0
    
    void* rcx_17 = *arg1
    void* rax_25 = *(rcx_17 + 0x10)
    
    if (rax_25 == 0 || *(rax_25 + 0x28) == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    void* rax_26 = *(rcx_17 + 8)
    var_318 = rbx.b
    int128_t* r12
    
    if (rax_26 == 0 || *(rax_26 + 0xa0) == 0)
        r12.b = 0
    else
        r12.b = 1
    
    int32_t rax_27 = sub_14081f8e0(arg9, 1)
    int64_t* r13_4 = zx.q(rax_27 s% 0x66) * 0xa0 + *(*arg9 + (sx.q(rax_27 s/ 0x66) << 3))
    int64_t* r15_1 = r13_4
    int64_t* rax_29 = r13_4[0xd]
    
    if (rax_29 != 0)
        r15_1 = rax_29
    
    int64_t rcx_23
    
    if (rbx.b == 0)
        rcx_23 = 0
    else
        rcx_23 = *(*arg1 + 0x10)
    
    int64_t rax_31 = rcx_23 + 8
    
    if (rcx_23 == 0)
        rax_31 = 0
    
    r15_1[2] = rax_31
    int64_t rcx_24 = *(*arg1 + 0x18)
    int64_t rax_33 = rcx_24 + 8
    
    if (rcx_24 == 0)
        rax_33 = 0
    
    r13_4[0xf] = rax_33
    r13_4[0x10] = arg4
    int64_t rcx_25 = *(*arg1 + 0x20)
    int64_t rax_36 = rcx_25 + 8
    
    if (rcx_25 == 0)
        rax_36 = 0
    
    r15_1[1] = rax_36
    *(r13_4 + 0x9c) ^= (zx.d(*arg6) << 2 ^ *(r13_4 + 0x9c)) & 4
    int32_t rax_41 = *(r13_4 + 0x9c)
    int32_t rdx_14 = ((zx.d(arg6[2]) << 6 ^ rax_41) & 0x40) ^ rax_41
    *(r13_4 + 0x9c) = rdx_14
    int32_t rax_46 = ((zx.d(arg6[5]) << 0x10 ^ rdx_14) & 0x10000) ^ rdx_14
    *(r13_4 + 0x9c) = rax_46
    int32_t rbx_5 = ((zx.d(arg6[6]) << 0x11 ^ rax_46) & 0x20000) ^ rax_46
    *(r13_4 + 0x9c) = rbx_5
    float zmm0_2
    float zmm6_2
    zmm0_2, zmm6_2 = sub_14062b8d0(arg2)
    zmm0_2 - zmm6_2
    int32_t rcx_28
    rcx_28.b = zmm0_2 < zmm6_2
    int32_t rcx_29 = rcx_28 | (rbx_5 & 0xfffffffe)
    *(r13_4 + 0x9c) = rcx_29
    int32_t rdx_20 = (((zx.d(arg5) & 7) << 0xc | (zx.d(arg6[1]) & 1)) * 2) | (rcx_29 & 0xffff007d)
    *(r13_4 + 0x9c) = rdx_20
    *(r13_4 + 0x9c) = ((zx.d(arg6[4]) << 0x12 ^ rdx_20) & 0x40000) ^ rdx_20
    r13_4[0x12].d = arg10
    int32_t rax_55
    
    if (arg7 == 0)
        rax_55 = 0
    else
        rax_55 = *arg7
    
    r15_1[8].d = rax_55
    int32_t rdx_21
    
    if (arg7 != 0)
        rdx_21 = arg7[3]
    else if (var_318 != 0)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x55555556, *(*(*arg1 + 0x10) + 0x28))
        rdx_21 = temp2_1 + (temp2_1 u>> 0x1f)
    else if (r12.b == 0)
        rdx_21 = 0
    else
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = muls.dp.d(0x55555556, *(*(*arg1 + 8) + 0xa0))
        rdx_21 = temp4_1 + (temp4_1 u>> 0x1f)
    
    *(r15_1 + 0x44) = rdx_21
    int32_t rax_62
    
    if (arg7 == 0)
        rax_62 = 0
    else
        rax_62 = arg7[1]
    
    r15_1[0xa].d = rax_62
    
    if (arg7 != 0)
        rdi_1 = arg7[2]
    else if (r12.b != 0)
        rdi_1 = *(*(*arg1 + 8) + 0xa0) - 1
    
    *(r15_1 + 0x54) = rdi_1
    result = sub_1422dd2a0(arg9, arg8, r13_4)

__security_check_cookie(rax_1 ^ &var_3b8)
return result
