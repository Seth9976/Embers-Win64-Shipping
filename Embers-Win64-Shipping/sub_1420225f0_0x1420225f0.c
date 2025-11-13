// 函数: sub_1420225f0
// 地址: 0x1420225f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* result

if (arg2 == 0)
    result = nullptr
else
    int64_t* rcx = data_143f5b298
    
    if (rcx == 0)
        result = nullptr
    else if ((*(*rcx + 0x388))(rcx) == 0)
        result = nullptr
    else
        int32_t rsi_1 = 1
        void* rax_4 = sub_1423de540(data_143f5b298, arg1, 1)
        
        if (rax_4 == 0 || (*(rax_4 + 0x11e) & 2) == 0)
            result = nullptr
        else
            int32_t var_238
            void var_198
            void var_108
            int64_t* rax_6
            
            if (arg3 == 0)
                rax_6 = sub_141e714a0(&var_198, rax_4, 0)
                var_238 = 2
                rsi_1 = 0
            else
                rax_6 = sub_141e71420(&var_108, sub_142435f50(rax_4))
                var_238 = 0
            
            int64_t var_228 = *rax_6
            int64_t var_220_1 = rax_6[1]
            int64_t var_218
            __builtin_memset(&var_218, 0, 0x2c)
            int32_t var_1ec_1 = 0x80
            int32_t var_1e8_1 = 0xffffffff
            int32_t var_1e4_1 = 0
            int64_t var_1d8_1 = 0
            int32_t var_1d0_1 = 0
            sub_140780e10(&var_218, &rax_6[2])
            void var_1e0
            
            if (rax_6[0xa] == 0)
                memmove(&var_1e0, &rax_6[9], 4)
            
            if (var_1d8_1 != 0)
                sub_140a74f90(var_1d8_1)
            
            bool cond:0_1 = var_238 == 0
            int64_t var_1d8_2 = rax_6[0xa]
            rax_6[0xa] = 0
            int32_t var_1d0_2 = rax_6[0xb].d
            rax_6[0xb].d = 0
            char var_1c8_1 = rax_6[0xc].b
            char var_1c7_1 = *(rax_6 + 0x61)
            char var_1c6_1 = *(rax_6 + 0x62)
            int64_t var_1c0_1 = rax_6[0xd]
            int64_t var_1b8_1 = rax_6[0xe]
            int64_t var_1b0_1 = rax_6[0xf]
            char var_1a8_1 = rax_6[0x10].b
            uint128_t zmm0_1 = zx.o(*(rax_6 + 0x84))
            uint64_t var_1a4_1 = zmm0_1.q
            int32_t var_19c_1 = *(rax_6 + 0x8c)
            
            if (not(cond:0_1))
                zmm0_1 = sub_141afcf50(&var_198)
            
            if (rsi_1 != 0)
                zmm0_1 = sub_141afcf50(&var_108)
            
            int64_t arg_30
            
            if (arg_30 != 0)
                zmm0_1 = sub_141e6db90(&var_218, &var_238, &arg_30, nullptr)
            
            int64_t* result_1
            char r8_2
            int128_t zmm6_1
            result_1, r8_2, zmm6_1 = sub_141e78140(arg2, &var_228, zmm0_1)
            
            if (result_1 != 0)
                char r8_3
                int128_t zmm7_1
                r8_3, zmm7_1 = sub_141ef78b0(result_1, zmm6_1, r8_2)
                int32_t zmm0_2 = sub_141ef68b0(result_1, zmm7_1, r8_3)
                result_1[0x42].b &= 0xf6
                *(result_1 + 0x211) &= 0xf7
                result_1[0x42].b |= arg4 | 0x40
                *(result_1 + 0x211) |= arg3 << 3
                (*(*arg2 + 0x2a8))(arg2)
                result_1[0x48].d = zmm0_2
            
            sub_141afcf50(&var_228)
            result = result_1

__security_check_cookie(rax_1 ^ &var_258)
return result
