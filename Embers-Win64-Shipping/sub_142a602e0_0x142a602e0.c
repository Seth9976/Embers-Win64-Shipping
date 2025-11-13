// 函数: sub_142a602e0
// 地址: 0x142a602e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
char** result = __security_cookie ^ &var_228
char** result_1 = result

if (*arg4 s<= 0)
    *(arg2 + 8) = &arg1[5]
    void* i_4 = *(arg1[1] + 0x10)
    int64_t rsi
    
    if (i_4 == 0 || *(i_4 + 0x70) s> 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    *(arg2 + 0x10) = *(arg1 + 0xac)
    result = (*(*arg3 + 0x10))(arg3, *arg1, arg2, rsi.b ^ 1, arg4)
    
    if (rsi.b != 0)
        char* var_1d8
        memset(&var_1d8, 0, 0xc8)
        int128_t zmm2 = *(i_4 + 0x48)
        int64_t var_124_1 = 0
        int128_t zmm1 = *(i_4 + 0x38)
        uint128_t var_1b0 = *(i_4 + 0x28)
        void* i_5 = i_4
        uint128_t zmm0_1 = *(i_4 + 0x58)
        char var_127_1 = 1
        int32_t rdx_1 = zmm2.d
        uint128_t var_180_1 = zmm0_1
        int128_t var_1a0_1 = zmm1
        int32_t var_12c_1 = rdx_1
        int128_t var_190_1 = zmm2
        bool var_128_1 = _mm_bsrli_si128(zmm0_1, 8).b == 0
        int32_t var_118_1 = sub_142ac3690(&var_1b0, rdx_1)
        int32_t var_11c_1 = 0xffffffff
        sub_142a615c0()
        sub_142a860a0(&data_144015690)
        *(i_4 + 0x6c) += 1
        
        for (void* i = *(i_4 + 0x10); i != 0; i = *(i + 0x10))
            *(i + 0x6c) += 1
        
        sub_142a615c0()
        sub_142a860d0(&data_144015690)
        char* var_108
        memset(&var_108, 0, 0xc8)
        char* rdx_2 = arg1[4]
        int64_t var_54_1 = 0
        int32_t var_1f8 = 0
        
        if (rdx_2 == 0 || *rdx_2 == 0)
            result = sub_142a602e0(&var_1d8, arg2, arg3, arg4)
        else
            result = sub_142a62230(&var_1d8, rdx_2, &var_108, &var_1f8)
            
            if (var_1f8 s<= 0)
                result = sub_142a602e0(result, arg2, arg3, arg4)
        
        void* i_3
        void* i_1 = i_3
        
        if (i_1 != 0)
            sub_142a615c0()
            sub_142a860a0(&data_144015690)
            
            for (; i_1 != 0; i_1 = *(i_1 + 0x10))
                *(i_1 + 0x6c) -= 1
            
            sub_142a615c0()
            result = sub_142a860d0(&data_144015690)
        
        int64_t var_f8
        
        if (var_f8 != 0)
            result = sub_142a7dcd0(var_f8)
        
        int64_t var_e8
        
        if (var_e8 != 0)
            void var_a0
            result = &var_a0
            
            if (var_e8 != &var_a0)
                result = sub_142a7dcd0(var_e8)
        
        int64_t var_e8_1 = 0
        int32_t var_60_1 = 0
        
        if (var_54_1.d == 0x12c9b17 && var_54_1:4.d == 0x12bb38b)
            result = sub_142a7dcd0(&var_108)
        
        void* i_2 = i_4
        
        if (i_2 != 0)
            sub_142a615c0()
            sub_142a860a0(&data_144015690)
            
            for (; i_2 != 0; i_2 = *(i_2 + 0x10))
                *(i_2 + 0x6c) -= 1
            
            sub_142a615c0()
            result = sub_142a860d0(&data_144015690)
        
        int64_t var_1c8
        
        if (var_1c8 != 0)
            result = sub_142a7dcd0(var_1c8)
        
        int64_t var_1b8
        
        if (var_1b8 != 0)
            void var_170
            result = &var_170
            
            if (var_1b8 != &var_170)
                result = sub_142a7dcd0(var_1b8)
        
        int64_t var_1b8_1 = 0
        int32_t var_130_1 = 0
        
        if (var_124_1.d == 0x12c9b17 && var_124_1:4.d == 0x12bb38b)
            result = sub_142a7dcd0(&var_1d8)

__security_check_cookie(result_1 ^ &var_228)
return result
