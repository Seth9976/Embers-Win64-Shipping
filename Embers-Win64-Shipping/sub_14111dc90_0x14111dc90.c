// 函数: sub_14111dc90
// 地址: 0x14111dc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
wchar16 const* const rcx = u"GlobalDistanceField0"

if (arg3 == 0)
    rcx = u"MostlyStaticGlobalDistanceField0"

wchar16 const* const rax_2

if (arg2 != 1)
    if (arg2 == 2)
        rax_2 = u"MostlyStaticGlobalDistanceField2"
        rcx = u"GlobalDistanceField2"
        goto label_14111dcfe
    
    if (arg2 == 3)
        rax_2 = u"MostlyStaticGlobalDistanceField3"
        rcx = u"GlobalDistanceField3"
        goto label_14111dcfe
else
    rax_2 = u"MostlyStaticGlobalDistanceField1"
    rcx = u"GlobalDistanceField1"
label_14111dcfe:
    
    if (arg3 == 0)
        rcx = rax_2
int32_t var_58 = data_143f02318
int32_t rax_4 = data_1439b5bfc
int32_t var_54 = rax_4
int32_t var_50 = rax_4
int32_t var_4c = rax_4
char var_70 = 0
char var_78 = 0
int32_t var_48 = 1
int16_t var_40 = 1
char var_80 = 1
wchar16 const* const var_28 = u"UnknownTextureVolume"
int16_t var_30 = 0
int16_t var_1f = 0
int128_t var_68 = data_143f02308
int32_t var_44 = 0x10000
int64_t var_3c = 0x15
int32_t var_34 = 0x40010009
char var_20 = 0
uint64_t result = sub_1419a0ce0(&data_1439c9260, arg1, &var_68, arg4, rcx, var_80, var_78, var_70)
__security_check_cookie(rax_1 ^ &var_a8)
return result
