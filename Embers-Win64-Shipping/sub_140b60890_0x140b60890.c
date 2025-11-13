// 函数: sub_140b60890
// 地址: 0x140b60890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char const* const var_88
uint128_t var_78

if (*(arg2 + 8) u< 0x400)
    void* rsi_1
    
    if (data_143e05168 == 0)
        rsi_1 = sub_140b58510(&data_143e05180)
        data_143e05168 = 1
    else
        rsi_1 = &data_143e05180
    
    uint128_t zmm0 = *arg2
    int32_t rbx_1
    
    if (arg3 == 1)
        var_78 = zmm0
        rbx_1 = *sub_140b637e0(rsi_1, &var_88, &var_78)
    else if (arg3 != 0)
        var_78 = zmm0
        int32_t* rax_7 = sub_140b637e0(rsi_1, &var_88, &var_78)
        uint128_t zmm0_2 = *arg2
        rbx_1 = *rax_7
        uint64_t rdx_6 = zx.q(rbx_1 u>> 0x10)
        var_88.d = rdx_6.d
        var_88:4.d = zx.d(rbx_1.w)
        uint32_t rax_10 = (var_88 u>> 0x20).d
        var_78 = zmm0_2
        int64_t rdx_7 = _mm_bsrli_si128(zmm0_2, 8).q
        uint64_t r8_4 = zx.q(rdx_7.d)
        
        if ((rdx_7 u>> 0x20).b != 0)
            r8_4 *= 2
        
        memcpy(zx.q(rax_10 * 2) + 2 + *(rsi_1 + (rdx_6 << 3) + 0x10), var_78.q, r8_4.d)
    else
        var_88.o = zmm0
        char const* const rdx_2 = var_88
        uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 8)
        int32_t r8_1 = temp0_1.d
        uint128_t var_58 = zmm0
        int32_t* rax_6
        void var_68
        
        if ((temp0_1.q u>> 0x20).b != 0)
            rax_6 = sub_140b57580(&var_68, rdx_2, r8_1)
        else
            rax_6 = sub_140b57490(&var_78, rdx_2, r8_1)
        int128_t zmm0_1 = *rax_6
        char var_34_1 = 0
        int128_t var_48_1 = zmm0_1
        sub_140b5e2e0(((zx.q(zmm0_1.d) + 0x401) << 6) + rsi_1, &var_88, &var_58)
        rbx_1 = var_88.d
    
    *arg1 = rbx_1
    *(arg1 + 4) = arg4
else
    int32_t var_80_1 = 0x18
    var_88 = "ERROR_NAME_SIZE_EXCEEDED"
    var_78 = var_88.o
    sub_140b57990(arg1, &var_78, 1)
__security_check_cookie(rax_1 ^ &var_a8)
return arg1
