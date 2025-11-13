// 函数: sub_140ffa240
// 地址: 0x140ffa240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t result = __security_cookie ^ &var_88
int64_t result_1 = result
uint128_t zmm0 = arg7
uint128_t zmm6 = arg2
uint128_t zmm7 = arg3
arg2.d = arg5.d f- zmm6.d
arg3.d = arg6.d f- zmm7.d
int32_t var_48 = zmm6.d
int32_t var_44 = zmm7.d
int32_t var_34 = zmm0.d
int32_t var_40 = arg2.d
int32_t var_3c = arg3.d

if (not(arg2.d f<= 0f) && not(arg3.d f<= 0f))
    bool cond:1_1 = *(arg1 + 0x19e0) != 1
    arg2 = var_48.o
    arg3 = zx.o(arg4.q)
    uint128_t var_68 = arg2
    uint64_t var_58_1 = arg3.q
    
    if (not(cond:1_1) && *(arg1 + 0x19e4) == arg2.q)
        zmm0 = _mm_bsrli_si128(arg2, 8)
    
    if (cond:1_1 || *(arg1 + 0x19e4) != arg2.q || *(arg1 + 0x19ec) != zmm0.q
            || *(arg1 + 0x19f4) != var_58_1)
        *(arg1 + 0x19e4) = arg2
        *(arg1 + 0x19f4) = arg3.q
        *(arg1 + 0x19e0) = 1
        (*(**(arg1 + 0x170) + 0x160))(zmm0, 1, &var_68)
    
    int64_t* rcx_1 = *(arg1 + 0x138)
    var_48 = (int.q(zmm6.d)).d
    int32_t var_44_1 = (int.q(zmm7.d)).d
    int32_t var_40_1 = (int.q(fconvert.t(arg5))).d
    int32_t var_3c_1 = (int.q(fconvert.t(arg6))).d
    result = (*(*rcx_1 + 0x168))(zmm0, 1, &var_48)

__security_check_cookie(result_1 ^ &var_88)
return result
