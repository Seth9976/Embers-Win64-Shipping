// 函数: sub_141300660
// 地址: 0x141300660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* var_108
sub_141314180(&var_108, *arg1, &arg1[1], arg1[7])
void* rax_2 = sub_1413190b0(arg2, *arg1, &var_108)
char var_83
int64_t result
void var_120
void* var_c0

if (var_83 == 0)
    void* var_128 = var_c0
    
    if (var_c0 != 0)
        *(var_c0 + 8) += 1
    
    char var_170
    var_170.q = &var_128
    result = sub_141310f30(arg2, *arg1, &var_108, rax_2 + 8, &var_120)
else
    int128_t zmm0_1 = data_143f02308
    int32_t var_68_1 = data_143f02318
    int32_t var_b8
    int32_t var_64_1 = var_b8
    char var_160_1 = 0
    int32_t var_b4
    int32_t var_60_1 = var_b4
    int32_t var_58_1 = 1
    int16_t var_50_1 = 1
    int64_t var_4c_1 = 1
    wchar16 const* const var_38_1 = u"UnknownTexture2D"
    int64_t* var_148 = nullptr
    int16_t var_40_1 = 0
    int32_t var_5c_1 = 0
    char var_2e_1 = 0
    char var_168_1 = 1
    char var_170_1 = 1
    wchar16 const* const var_178 = u"HalfRes FFT Result"
    int128_t var_78 = zmm0_1
    int32_t var_54_1 = 0x10000
    int32_t var_44_1 = 0x10001
    int16_t var_30_1 = 1
    sub_1419a0ce0(&data_1439c9260, arg2, &var_78, &var_148, var_178, var_170_1, var_168_1, 
        var_160_1)
    int64_t* r14_1 = var_148
    void* rax_6 = r14_1[3]
    void* var_140 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    var_170_1.q = &var_140
    sub_141310f30(arg2, *arg1, &var_108, rax_2 + 8, &var_120)
    void* rdx_4 = *arg1
    int64_t* r8_5 = var_108 + 8
    int64_t rcx_4 = *(*(rdx_4 + 8) + 0xbe0) + 0x10
    int64_t var_130 = var_b8.q
    void* var_138 = var_c0
    
    if (var_c0 != 0)
        *(var_c0 + 8) += 1
        rdx_4 = *arg1
    
    var_160_1.q = rcx_4
    var_168_1.q = &var_130
    void var_b0
    var_170_1.q = &var_b0
    void var_100
    result = sub_14130e910(arg2, rdx_4, r8_5, &var_100, &r14_1[2], var_170_1, var_168_1, var_160_1, 
        &var_138)
    int64_t* rcx_6 = var_148
    
    if (rcx_6 != 0)
        result = (*(*rcx_6 + 0x38))(rcx_6)
__security_check_cookie(rax_1 ^ &var_198)
return result
