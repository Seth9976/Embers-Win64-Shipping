// 函数: sub_142a447d0
// 地址: 0x142a447d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sub_142a43410(arg4, "%10s:", arg2)
char const* const rdx_5
char var_88[0x20]

if (arg3 s> 0)
    sub_142a446c0(arg1[2], arg3, arg4, nullptr)
    sub_142a446c0(*arg1, arg3, arg4, nullptr)
    sub_142a446c0(arg1[1], arg3, arg4, nullptr)
    int64_t rax_2
    int64_t rdx_3
    rdx_3:rax_2 = sx.o(arg3)
    int64_t zmm1_1 = float.d((rax_2 ^ rdx_3) - rdx_3)
    
    if (1024.0 f<= zmm1_1)
        int64_t zmm3_1 = float.d(arg3)
        char* r8_5
        
        if (not(1048576.0 f<= zmm1_1))
            zmm3_1 = zmm3_1 f* 0.0009765625
            r8_5 = "%.1f k%s"
        else if (1073741824.0 f<= zmm1_1)
            zmm3_1 = zmm3_1 f* 9.3132257461547852e-10
            r8_5 = "%.1f g%s"
        else
            zmm3_1 = zmm3_1 f* 9.5367431640625e-07
            r8_5 = "%.1f m%s"
        
        void* const var_98_2 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, r8_5, zmm3_1)
    else
        void* const var_98_1 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, "%d %s ", zx.q(arg3.d))
    
    sub_142a43410(arg4, "%11s", &var_88)
    r8_1 = sub_142a445d0(*arg1, arg3, arg4)
    rdx_5 = "  not all freed!\n"
    
    if (*arg1 s<= arg1[1])
        rdx_5 = "  ok\n"
else if (arg3 s>= 0)
    rdx_5 = &data_14370209c
else
    int64_t rcx_8 = arg1[2]
    uint128_t zmm6 = 0x41d0000000000000
    int64_t rax_7
    int64_t rdx_6
    rdx_6:rax_7 = sx.o(rcx_8)
    uint128_t zmm7 = 0x4130000000000000
    uint128_t zmm8 = 0x3f50000000000000
    uint128_t zmm9 = 0x3e10000000000000
    uint128_t zmm10 = 0x3eb0000000000000
    int64_t zmm0 = float.d((rax_7 ^ rdx_6) - rdx_6)
    uint128_t zmm11 = 0x4090000000000000
    double zmm3
    
    if (zmm11.q f<= zmm0)
        zmm3 = float.d(rcx_8)
        char* r8_8
        
        if (not(zmm7.q f<= zmm0))
            zmm3 = zmm3 f* zmm8.q
            r8_8 = "%.1f k%s"
        else if (zmm6.q f<= zmm0)
            zmm3 = zmm3 f* zmm9.q
            r8_8 = "%.1f g%s"
        else
            zmm3 = zmm3 f* zmm10.q
            r8_8 = "%.1f m%s"
        
        void* const var_98_4 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, r8_8, zmm3)
    else
        void* const var_98_3 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, "%d %s ", zx.q(rcx_8.d))
    
    sub_142a43410(arg4, "%11s", &var_88)
    int64_t rcx_12 = *arg1
    int64_t rax_11
    int64_t rdx_7
    rdx_7:rax_11 = sx.o(rcx_12)
    zmm0 = float.d((rax_11 ^ rdx_7) - rdx_7)
    
    if (zmm11.q f<= zmm0)
        zmm3 = float.d(rcx_12)
        char* r8_10
        
        if (not(zmm7.q f<= zmm0))
            zmm3 = zmm3 f* zmm8.q
            r8_10 = "%.1f k%s"
        else if (zmm6.q f<= zmm0)
            zmm3 = zmm3 f* zmm9.q
            r8_10 = "%.1f g%s"
        else
            zmm3 = zmm3 f* zmm10.q
            r8_10 = "%.1f m%s"
        
        void* const var_98_6 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, r8_10, zmm3)
    else
        void* const var_98_5 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, "%d %s ", zx.q(rcx_12.d))
    
    sub_142a43410(arg4, "%11s", &var_88)
    int64_t rcx_16 = arg1[1]
    int64_t rax_15
    int64_t rdx_8
    rdx_8:rax_15 = sx.o(rcx_16)
    zmm0 = float.d((rax_15 ^ rdx_8) - rdx_8)
    
    if (zmm11.q f<= zmm0)
        zmm3 = float.d(rcx_16)
        char* r8_12
        
        if (not(zmm7.q f<= zmm0))
            zmm3 = zmm3 f* zmm8.q
            r8_12 = "%.1f k%s"
        else if (zmm6.q f<= zmm0)
            zmm3 = zmm3 f* zmm9.q
            r8_12 = "%.1f g%s"
        else
            zmm3 = zmm3 f* zmm10.q
            r8_12 = "%.1f m%s"
        
        void* const var_98_8 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, r8_12, zmm3)
    else
        void* const var_98_7 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, "%d %s ", zx.q(rcx_16.d))
    
    sub_142a43410(arg4, "%11s", &var_88)
    int64_t rcx_21 = neg.q(arg3)
    int64_t rax_19
    int64_t rdx_9
    rdx_9:rax_19 = sx.o(rcx_21)
    zmm0 = float.d((rax_19 ^ rdx_9) - rdx_9)
    
    if (zmm11.q f<= zmm0)
        zmm3 = float.d(rcx_21)
        char* r8_14
        
        if (not(zmm7.q f<= zmm0))
            zmm3 = zmm3 f* zmm8.q
            r8_14 = "%.1f k%s"
        else if (zmm6.q f<= zmm0)
            zmm3 = zmm3 f* zmm9.q
            r8_14 = "%.1f g%s"
        else
            zmm3 = zmm3 f* zmm10.q
            r8_14 = "%.1f m%s"
        
        void* const var_98_10 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, r8_14, zmm3)
    else
        void* const var_98_9 = &data_142d8d918
        _fwprintf_l(&var_88, 0x20, "%d %s ", zx.q(rcx_21.d))
    
    sub_142a43410(arg4, "%11s", &var_88)
    r8_1 = sub_142a445d0(neg.q(divs.dp.q(sx.o(*arg1), arg3)), 0, arg4)
    rdx_5 = "  not all freed!\n"
    
    if (*arg1 s<= arg1[1])
        rdx_5 = "  ok\n"
return sub_142a43410(arg4, rdx_5, r8_1) __tailcall
