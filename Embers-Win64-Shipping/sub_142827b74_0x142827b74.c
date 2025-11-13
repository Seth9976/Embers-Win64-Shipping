// 函数: sub_142827b74
// 地址: 0x142827b74
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* r9 = *(arg1 + 0xd0)
void* var_88 = arg1 + 0xb0
void* r8_2 = *(arg1 + 0xc8) - 1 + r9
void* rcx_1 =
    *(*(*(arg1 + 0xb8) + (((*(arg1 + 0xc0) - 1) & r8_2 u>> 1) << 3)) + ((zx.q(r8_2.d) & 1) << 3))
int32_t* result = r9 - 1
*(arg1 + 0xd0) = result

if (result == 0)
    *(arg1 + 0xc8) = 0

if (*(rcx_1 + 8) != 0)
    result = sub_14282b358(arg1)
else
    int32_t var_78
    char var_60_1
    int64_t var_48_1
    int64_t* var_40
    
    if (*(rcx_1 + 4) == 1)
        var_78 = 0
        int32_t var_74_1 = 5
        int64_t var_70_1 = *(arg1 + 8)
        int32_t var_68_1 = *(arg1 + 0x10)
        int64_t var_50_1 = 0
        var_48_1 = 0xf
        var_60_1 = 0
        __builtin_memset(&var_40, 0, 0x1c)
        result = sub_142826d60(arg1 + 0x58, &var_78)
    label_142827ca2:
        int64_t* rcx_5 = var_40
        
        if (rcx_5 != 0)
            int128_t var_38
            sub_140688f70(rcx_5, var_38.q)
            int64_t* rcx_6 = var_40
            result = sub_14058ba50(rcx_6, (var_38:8.q - rcx_6) & 0xffffffffffffffe0)
            int64_t var_40_1
            __builtin_memset(&var_40_1, 0, 0x18)
        
        if (var_48_1 u>= 0x10)
            result = sub_14058ba50(var_60_1.q, var_48_1 + 1)
    else if (*(rcx_1 + 4) == 0)
        var_78 = 0
        int32_t var_74_2 = 6
        int64_t var_70_2 = *(arg1 + 8)
        int32_t var_68_2 = *(arg1 + 0x10)
        int64_t var_50_2 = 0
        var_48_1 = 0xf
        var_60_1 = 0
        __builtin_memset(&var_40, 0, 0x1c)
        result = sub_142826d60(arg1 + 0x58, &var_78)
        goto label_142827ca2

__security_check_cookie(rax_1 ^ &var_a8)
return result
