// 函数: sub_1422377c0
// 地址: 0x1422377c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint32_t (* result)[0x4] = __security_cookie ^ &var_c8
uint32_t (* result_1)[0x4] = result
int32_t i = 0

if (arg2[1].d s> 0)
    do
        int64_t rax_1 = *arg2
        int128_t zmm0 = data_142e6da00
        int32_t var_68 = 5
        int128_t var_64_1 = zmm0
        int64_t var_54_1 = 0
        int64_t* rsi_1 = rax_1 + (sx.q(i) << 3)
        int64_t var_4c_1 = 0x3f800000
        int64_t var_40_1 = 0
        uint32_t var_88[0x8]
        result = sub_1422384c0(arg1, rsi_1, &var_68, &var_88)
        
        if (result.b != 0)
            int64_t rcx_2 = *(arg3 + 8)
            int32_t var_98
            int32_t* var_a0_1 = &var_98
            int32_t var_90 = arg1[0x10].d
            int32_t* var_a8_1 = &var_90
            var_98 = 0
            result = (*arg3)(rcx_2, rsi_1, &var_68, &var_88, var_a8_1, var_a0_1, var_98, var_90)
        
        i += 1
    while (i s< arg2[1].d)

__security_check_cookie(result_1 ^ &var_c8)
return result
