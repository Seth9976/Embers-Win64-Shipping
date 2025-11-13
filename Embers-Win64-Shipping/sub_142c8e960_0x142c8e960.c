// 函数: sub_142c8e960
// 地址: 0x142c8e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
__time64_t rax_2 = _time64(nullptr)
int32_t rdi_1 = *(arg3 + 0x18) + 0x30
int128_t* rax_5 = data_143ccb898(zx.q(rdi_1))
int64_t result

if (rax_5 == 0)
    result = 0x1b
else
    memset(rax_5, 0, zx.q(rdi_1))
    uint64_t rdx_1 = zx.q(*(arg3 + 0x18) + 0x20)
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x20)
    int32_t var_88_1 = 0
    int32_t var_90_1 = 0
    int32_t var_98_1 = 1
    sub_142c564b0(&rax_5[1], rdx_1, "%c%c%c%c%c%c%c%c", 1, arg5)
    sub_142c8ebf0((rax_2 - -0x2b6109100) * 0x989680, rax_5 + 0x18)
    rax_5[2].q = *arg2
    memcpy(rax_5 + 0x2c, *(arg3 + 0x10), *(arg3 + 0x18))
    *(rax_5 + 8) = *(arg3 + 8)
    *(arg3 + 0x18)
    void** rax_8 = sub_142c91ea0(&data_1436bb7c8, arg1, 0x10)
    
    if (rax_8 == 0)
        data_143ccb8a0(rax_5)
        result = 0x1b
    else
        sub_142c8ff50(rax_8)
        int128_t var_50
        sub_142c91e30(rax_8, &var_50)
        result = 0
        *rax_5 = var_50
        *arg4 = rax_5
        *arg6 = rdi_1

__security_check_cookie(rax_1 ^ &var_b8)
return result
