// 函数: sub_1418bc760
// 地址: 0x1418bc760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8

if ((*(arg1 + 0x2d) & 0x40) != 0)
    int64_t rcx = *(arg1 + 0x40)
    int64_t var_b0_1 = 0
    int32_t var_b8_1 = 0
    int64_t var_9c_1 = 0
    int64_t var_c0_1 = 0
    int64_t var_a4_1 = 0
    int32_t var_c8_1 = 0
    int32_t var_a8
    int32_t* var_d0_1 = &var_a8
    var_9c_1 = 0x1000
    int32_t var_d8_1 = 1
    var_a8 = 0x2e
    int32_t var_94_1 = 8
    data_143efba60(rcx, 0x10000, 0x10000, 0, var_d8_1, var_d0_1, var_c8_1, var_c0_1, var_b8_1, 
        var_b0_1, var_a8)
    *(arg1 + 0x2d) &= 0xbf

int64_t rcx_1 = *(arg1 + 0x40)
int32_t var_88 = 0x2b
int64_t var_84
__builtin_memset(&var_84, 0, 0x38)
int64_t var_7c = *(arg3 + 0x388)
int64_t var_74 = *(arg4 + 0x48)
int64_t var_64
var_64:4.d = *(arg4 + 0x50)
int64_t var_5c
var_5c.d = *(arg4 + 0x54)
var_5c:4.d = zx.d(*(arg2 + 0x367))
int64_t var_54 = arg5
int64_t* result = data_143efba98(rcx_1, &var_88, 0)
*(arg1 + 0x2c) = 2

if (data_1439c7a08 s> 1 && *(arg1 + 0x30) == 0)
    result = sub_1418d9250(*(*(arg1 + 0x38) + 0x468))
    *(arg1 + 0x30) = result

__security_check_cookie(rax_1 ^ &var_f8)
return result
