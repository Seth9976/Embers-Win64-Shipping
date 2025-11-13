// 函数: sub_142bb27b0
// 地址: 0x142bb27b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* rcx = *(arg2 + 8)
int16_t var_38
int32_t result = (*(*(rcx + 0x2d0) + 0x90))(arg5, zx.q(*(arg1 + 0x8c)), arg3, zx.q(arg4), 
    *(rcx + 0xa0), arg2 + 0x68, &var_38)

if (result == 0)
    int16_t var_32
    int32_t r8 = sx.d(var_32)
    int16_t var_2e
    int32_t r9_1 = sx.d(var_2e)
    int16_t var_2c
    int32_t r10_1 = sx.d(var_2c)
    *(arg2 + 0x98) = result
    int16_t var_36
    *(arg2 + 0x30) = zx.d(var_36) << 6
    *(arg2 + 0x34) = zx.d(var_38) << 6
    int16_t var_34
    int32_t rcx_5 = sx.d(var_34)
    __builtin_strncpy(arg2 + 0x60, "stib", 4)
    *(arg2 + 0x38) = rcx_5 << 6
    *(arg2 + 0x3c) = r8 << 6
    int16_t var_30
    *(arg2 + 0x40) = zx.d(var_30) << 6
    *(arg2 + 0x44) = r9_1 << 6
    *(arg2 + 0x48) = r10_1 << 6
    int16_t var_2a
    *(arg2 + 0x4c) = zx.d(var_2a) << 6
    
    if ((arg4.b & 0x10) == 0)
        *(arg2 + 0x90) = rcx_5
        *(arg2 + 0x94) = r8
    else
        *(arg2 + 0x90) = r9_1
        *(arg2 + 0x94) = r10_1

__security_check_cookie(rax_1 ^ &var_78)
return result
