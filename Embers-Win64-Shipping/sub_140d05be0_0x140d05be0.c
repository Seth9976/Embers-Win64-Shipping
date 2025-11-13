// 函数: sub_140d05be0
// 地址: 0x140d05be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t r10 = *(arg1 + 0xa0)
int128_t zmm0 = *(arg1 + 0x88)
int64_t r11 = *(arg1 + 0x78)
int64_t rbx = *(arg1 + 0x80)
int64_t zmm1 = *(arg1 + 0x98)
int32_t rcx = *(arg2 + 8)
int64_t var_50 = r11
int64_t var_48 = rbx
int64_t var_28 = zmm1
int32_t var_20 = r10
void* var_40 = arg2
int128_t var_38 = zmm0
char r9 = not.b(r10.b) & 1
int32_t rcx_1

if (r9 != 0)
    rcx_1 = rcx - *(arg2 + 0x34)
else
    rcx_1 = rcx - *(arg2 + 0x24)

int32_t result

if (arg3 != 0)
    int32_t rax_2 = *(arg3 + 8)
    int64_t var_88 = r11
    int64_t var_80_1 = rbx
    int64_t var_60_1 = zmm1
    int32_t var_58_1 = r10
    void* var_78_1 = arg3
    int128_t var_70_1 = zmm0
    
    if (r9 != 0)
        result = rax_2 - *(arg3 + 0x34)
    else
        result = rax_2 - *(arg3 + 0x24)
    
    if (rcx_1 == result)
        result = sub_140d09710(&var_50, &var_88, arg4)
    else
        result.b = 0
else
    result.b = rcx_1 == 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
