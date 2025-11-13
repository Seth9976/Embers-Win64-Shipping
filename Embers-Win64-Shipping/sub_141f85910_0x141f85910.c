// 函数: sub_141f85910
// 地址: 0x141f85910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t result = __security_cookie ^ &var_118
int64_t result_1 = result

if (*(arg1 + 0x288) != 0xffffffff)
    (*(*arg2 + 0x10))(arg2, zx.q(*(arg1 + 0x498)))
    void* i = *(arg1 + 0x490)
    result = sx.q(*(arg1 + 0x498))
    
    for (void* rsi_1 = i + result * 0x18; i != rsi_1; i += 0x18)
        int128_t zmm0 = zx.o(0)
        int64_t* rcx_2 = *(i + 0x10)
        int32_t var_bc = var_bc & 0xf8000000
        int32_t var_94 = var_94 & 0xfffff800
        int64_t var_90_1 = 0
        int32_t var_84_1 = 1
        int128_t var_78_1 = zmm0
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int32_t var_60_1 = 0xffff0000
        int32_t var_88_1 = 1
        int128_t var_f8 = zmm0
        int128_t var_e0
        __builtin_memset(&var_e0, 0, 0x24)
        int64_t var_b0_1 = 1
        int32_t var_a0_1 = 0xffffffff
        int32_t var_9c_1 = 0
        int32_t var_98_1 = 0x3f800000
        void* var_e8_1 = arg1 + 0x258
        void* var_80_1 = arg1 + 0x280
        int64_t rax_6 = (*(*rcx_2 + 0x280))(rcx_2)
        int32_t rcx_3 = *(i + 8)
        int512_t zmm2
        zmm2.o = 0x3f800000
        var_78_1.q = rax_6
        int32_t var_b8_1 = *i
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x55555556, *(i + 4))
        int32_t var_a8_1 = rcx_3
        char var_5e_1 = 0
        int32_t var_b4_1 = temp0_1 + (temp0_1 u>> 0x1f)
        int32_t var_a4_1 = rcx_3 + *(i + 0xc) - 1
        int32_t var_5c =
            (zx.d(*(arg1 + 0x35)) & 1) | (((var_5c & 0xfc0c003c) | 0x40c003c) & 0xffff007c)
        result = (*(*arg2 + 0x18))(arg2, &var_f8, zmm2)
        
        if (var_90_1 != 0)
            result = sub_140a74f90(var_90_1)

__security_check_cookie(result_1 ^ &var_118)
return result
