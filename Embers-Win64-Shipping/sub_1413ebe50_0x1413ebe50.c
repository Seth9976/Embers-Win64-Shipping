// 函数: sub_1413ebe50
// 地址: 0x1413ebe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char result_1 = *(arg1 + 0xc)
uint32_t result

if (result_1 != 4)
    result = zx.d(result_1)
else
    result = data_1439c7a08

if (result s>= 3)
    int32_t rax_2 = *(arg1 + 0x14)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_2)
    int32_t rdi_1
    
    if (result == 3)
        rdi_1 = 0x20
    else
        rdi_1 = 0x1f - temp0_1
    
    uint64_t rflags_2
    int16_t temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_2 - 1)
    int16_t rsi_1
    
    if (rax_2 == 1)
        rsi_1 = 0x20
    else
        rsi_1 = 0x1f - temp0_3
    
    sub_1419a2440(&data_1439c9260, arg1 + 0x18)
    int32_t rcx_2 = *(arg1 + 0x14)
    int32_t var_68_1 = data_143f02318
    char var_80_1 = 0
    int32_t var_58_1 = *(arg1 + 0x10)
    int32_t var_64_1 = rcx_2
    int16_t var_50_1 = 1
    int32_t var_60_1 = rcx_2
    wchar16 const* const var_38_1 = u"UnknownTextureCubeArray"
    int32_t var_5c_1 = 0
    int32_t var_44_1 = 0
    char var_30_1 = 0
    char var_88_1 = 1
    char var_90_1 = 1
    wchar16 const* const var_98_1 = u"ReflectionEnvs"
    int16_t var_40_1 = 0
    int16_t var_2f_1 = 0
    int128_t var_78 = data_143f02308
    int16_t var_54_1 = 0x101
    int16_t var_52_1 = ((0x20 - rsi_1) & not.w((rdi_1 << 0x1a s>> 0x1f).w)) + 1
    int64_t var_4c_1 = 0xa
    result = sub_1419a0ce0(&data_1439c9260, &data_143f02b98, &var_78, arg1 + 0x18, var_98_1, 
        var_90_1, var_88_1, var_80_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
