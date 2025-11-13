// 函数: sub_141fdc150
// 地址: 0x141fdc150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143f0f1b7 == 0
uint128_t zmm6 = 0x408f400000000000
uint128_t zmm1
zmm1.q = data_143d796f8 f* zmm6.q
zmm1.q = zmm1.q f* float.d(zx.q(data_143f138e4))
float temp0[0x4] = _mm_cvtpd_ps(zmm1)
uint64_t rax

if (cond:0 || *(data_143f3e938 + 4) != 1)
    rax.b = 0
else
    rax.b = 1

*(arg1 + 0x4c) = rax.b
void** const result

if (rax.b == 0)
    int64_t* rcx_24 = data_143f0f180
    int32_t rax_33 = (*(*rcx_24 + 0x3a8))(rcx_24, 0)
    zmm1.q = data_143d796f8 f* zmm6.q
    zmm1.q = zmm1.q f* float.d(zx.q(rax_33))
    _mm_cvtpd_ps(zmm1)
    int64_t rax_35
    int32_t zmm6_1
    rax_35, zmm6_1 = sub_141fdd290(arg1, arg3, temp0)
    bool cond:1_1 = data_143f0f1b9 == 0
    
    if (rax_35 != -1)
        int64_t r8_1 = arg1[5]
        
        if (rax_35 u> r8_1 - sx.q(*(arg1 + 0x14)))
            int64_t r8_2 =
                sx.q(mods.dp.d(sx.q(arg1[2].d - r8_1.d + rax_35.d + arg1[1].d), arg1[1].d))
            *(*arg1 + r8_2 * 0x18 + 0xc) = zmm6_1
            *(*arg1 + r8_2 * 0x18 + 0x10) = zmm6_1
            *(*arg1 + r8_2 * 0x18 + 0x14) = cond:1_1
    
    result = sub_141fea830(arg1)
    arg1[9].d = 0
else
    if (arg1[6] == 0)
        void arg_20
        int64_t* rax_1 = sub_14197cf90(&arg_20, 2, 0xffffffff)
        
        if (&arg1[6] != rax_1)
            int64_t* rdi_1 = arg1[6]
            arg1[6] = *rax_1
            *rax_1 = 0
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    char rax_3
                    
                    if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_3 = sub_1405949a0()
                    
                    if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                        (**rdi_1)(rdi_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rdi_1 + 0xc))
                            *(rdi_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_5 = sub_140a20af0()
                            uint64_t rdx = zx.q(rax_5)
                            void* const rax_6
                            
                            if (rax_5 != 0)
                                rax_6 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3))
                                    + (zx.q(rdx.d) & 0x3fff) * 0x18
                            else
                                rax_6 = nullptr
                            
                            *(rax_6 + 8) = rdi_1
                            sub_1405a42f0(&data_143f02390, rdx.d)
        
        sub_1405d1550(&arg_20)
    
    int128_t zmm7_1
    int128_t zmm8_1
    zmm7_1, zmm8_1 = sub_141fe6530(arg1, 0)
    int32_t rdx_1 = arg1[8].d
    int32_t rax_11 = 0
    
    if (rdx_1 s> 0)
        int64_t* rcx_8 = arg1[7]
        
        do
            if (*rcx_8 == 0)
                arg1[9].d = rax_11
                break
            
            rax_11 += 1
            rcx_8 = &rcx_8[9]
        while (rax_11 s< rdx_1)
    
    int32_t rax_22 = arg1[9].d
    
    if (rax_22 == 0xffffffff)
        int64_t r13_1 = sx.q(arg1[8].d)
        int128_t var_a8
        __builtin_memset(&var_a8, 0, 0x40)
        int64_t var_68_1 = -1
        int32_t rax_12 = (r13_1 + 1).d
        arg1[8].d = rax_12
        
        if (rax_12 s> *(arg1 + 0x44))
            sub_140775520(&arg1[7])
        
        int64_t rcx_10 = arg1[7]
        int64_t rdx_4 = r13_1 * 9
        *(rcx_10 + (rdx_4 << 3)) = var_a8.q
        var_a8.q = 0
        *(rcx_10 + (rdx_4 << 3) + 8) = var_a8:8.q
        int128_t var_98
        *(rcx_10 + (rdx_4 << 3) + 0x10) = var_98.q
        int64_t rax_16 = var_98:8.q
        var_98.q = 0
        *(rcx_10 + (rdx_4 << 3) + 0x18) = rax_16
        int128_t var_88
        *(rcx_10 + (rdx_4 << 3) + 0x20) = var_88.q
        int64_t rax_18 = var_88:8.q
        var_88.q = 0
        *(rcx_10 + (rdx_4 << 3) + 0x28) = rax_18
        int128_t var_78
        *(rcx_10 + (rdx_4 << 3) + 0x30) = var_78.q
        int64_t rax_20 = var_78:8.q
        var_78.q = 0
        *(rcx_10 + (rdx_4 << 3) + 0x38) = rax_20
        *(rcx_10 + (rdx_4 << 3) + 0x40) = var_68_1
        arg1[9].d = r13_1.d
        sub_141fd83a0(&var_a8)
        rax_22 = arg1[9].d
    
    int64_t* rdi_2 = arg1[7] + sx.q(rax_22) * 0x48
    rdi_2[8] = sub_141fdd290(arg1, zmm7_1, zmm8_1)
    int64_t* rcx_14 = arg1[6]
    int64_t var_b8
    sub_1413c6650(rdi_2, (*(*rcx_14 + 8))(rcx_14, &var_b8))
    int64_t* var_b0
    
    if (var_b0 != 0 && var_b8 != 0)
        (*(*var_b0 + 0x10))(var_b0, &var_b8)
        int64_t var_b0_1 = 0
    
    sub_14081c9d0(&var_b8)
    int64_t rdi_3 = *rdi_2
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_29 = &rcx_20[3]
    
    if (rax_29 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_29 = &rcx_20[3]
    
    *(arg2 + 0x30) = rax_29
    int64_t* rax_30 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_30 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    result = &data_142f284f8
    rcx_20[2] = rdi_3
    *rcx_20 = &data_142f284f8

return result
