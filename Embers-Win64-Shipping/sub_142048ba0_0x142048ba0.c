// 函数: sub_142048ba0
// 地址: 0x142048ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
__builtin_memset(arg1, 0, 0x1c)
void* r15 = arg1
int64_t i_1 = 2
__builtin_memset(arg1 + 0x20, 0, 0x1c)
__builtin_memset(arg1 + 0x40, 0, 0x1c)
__builtin_memset(arg1 + 0x60, 0, 0x1c)
*(arg1 + 0x80) = arg2
*(arg1 + 0x84) = arg3
int64_t i

do
    uint64_t rax_2 = zx.q(*(arg1 + 0x80))
    int64_t var_78
    int64_t* var_b0_1 = &var_78
    var_78 = 0
    int32_t var_68_1 = 1
    char var_50_1 = 0
    *(r15 + 0x18) = (rax_2 * 3).d << 2
    int64_t* rcx_1 = data_143f0f180
    int128_t var_64_1 = data_143dbb1e0
    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
    int32_t var_40_1 = 0
    int64_t var_70_1 = 0
    wchar16 const* const var_48_1 = u"SkinCacheVertices"
    int32_t var_b8_1 = 0x209
    void var_98
    (*(*rcx_1 + 0x498))(rcx_1, &var_98, &data_143f02b98)
    sub_1405d1600(r15, &var_98)
    sub_1405d1550(&var_98)
    int64_t* rcx_4 = data_143f0f180
    var_b8_1.b = 0xd
    void var_90
    (*(*rcx_4 + 0x590))(rcx_4, &var_90, &data_143f02b98, *r15, var_b8_1, var_b0_1)
    sub_1405d1600(r15 + 8, &var_90)
    sub_1405d1550(&var_90)
    int64_t* rcx_7 = data_143f0f180
    var_b0_1.b = 0xd
    void var_88
    (*(*rcx_7 + 0x4b8))(rcx_7, &var_88, &data_143f02b98, *r15, 4, var_b0_1)
    sub_1405d1600(r15 + 0x10, &var_88)
    sub_1405ec8a0(&var_88)
    r15 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)

if (*(arg1 + 0x84) != 0)
    sub_1407b4d10(arg1 + 0x40, (i_1 + 8).d, *(arg1 + 0x80) * 2, (i_1 + 0x3f).b, 1, 
        SkinCacheTangents", 0)
    int32_t rax_8 = data_143a2e214
    
    if (data_143f40a3c s> 0)
        rax_8 = 1
    
    if (rax_8 s> 0 && data_143f40a44 s> 0)
        sub_1407b4d10(arg1 + 0x60, (i_1 + 8).d, *(arg1 + 0x80) * 2, (i_1 + 0x3f).b, 1, 
            SkinCacheIntermediateTangents", 0)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
