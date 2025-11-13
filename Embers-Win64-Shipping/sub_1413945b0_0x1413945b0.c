// 函数: sub_1413945b0
// 地址: 0x1413945b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* rax_2 = *(arg1 + 0x28)

if (rax_2 == 0 || data_143ed3440 != 0)
    int64_t rax_3 = *(arg1 + 0x37c)
    int32_t var_74_1 = rax_3.d
    int32_t var_70_1 = rax_3:4.d
    int32_t var_68_1 = 1
    int16_t var_60_1 = 1
    int32_t var_54_1 = 1
    int32_t var_78_1 = data_1439c7b18
    int32_t rcx_1 = *(arg1 + 0x3d0)
    wchar16 const* const var_48_1 = u"UnknownTexture2D"
    int16_t var_50_1 = 0
    int128_t var_88 = data_1439c7b08
    int32_t var_6c_1 = 0
    int32_t var_64_1 = 0x10000
    int64_t var_5c_1 = 2
    int16_t var_40_1 = 1
    char var_3e_1 = 0
    int16_t var_60_2 = sub_14139cf50(rcx_1)
    var_5c_1:4.d |= data_143ed33f0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_88, arg1 + 0x28, u"LightAttenuation", 1, 1, 0)
    rax_2 = *(arg1 + 0x28)

if (rax_2 == 0 && data_1439b6a9b != 0)
    data_1439b6a9b = 0

int64_t var_1a8
memset(&var_1a8, 0, 0x120)
int64_t rax_9

if (arg3 == 0)
    void* rax_10
    
    if (rax_2 != 0)
        rax_10 = rax_2
    else
        rax_10 = data_1439b70c0
        data_1439b6a9a = 0
    
    var_1a8 = *(rax_10 + 8)
    int16_t var_194_1 = 0x500
    int32_t var_198_1 = 0xffffffff
    rax_9 = *(rax_2 + 0x10)
    char var_d8_1 = 0x55
else
    void* rax_7
    
    if (rax_2 != 0)
        rax_7 = rax_2
    else
        rax_7 = data_1439b70c0
        data_1439b6a9a = 0
    
    var_1a8 = *(rax_7 + 8)
    int16_t var_194 = 0x900
    int32_t var_198 = 0xffffffff
    rax_9 = *(rax_2 + 0x10)
    char var_d8 = 0x44

int64_t var_1a0 = rax_9
int64_t var_e8 = *(*(arg1 + 0x40) + 8)
int64_t var_e0 = 0
int32_t var_d4 = 0x21
sub_1410e0180(arg2, &var_1a8)
int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_13 = rbx_3 + 0x3e

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x40)
    rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_13 = rbx_3 + 0x3e

wchar16 const* const rcx_6 = u"BeginRenderingLightAttenuation"
*(arg2 + 0x30) = rax_13
wchar16 const i

do
    i = *rcx_6
    *(rcx_6 + rbx_3 - u"BeginRenderingLightAttenuation") = i
    rcx_6 = &rcx_6[1]
while (i != 0)
void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_9[0x27]

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_9[0x27]

*(arg2 + 0x30) = rax_14
void**** rax_15 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_15 = rcx_9
*(arg2 + 8) = &rcx_9[1]
sub_1405d11b0(rcx_9, &var_1a8, rbx_3)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1a8)
char var_91
*(arg2 + 0x178) = var_91
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
void var_a0
int64_t result = sub_1405d1550(&var_a0)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
