// 函数: sub_14120ec50
// 地址: 0x14120ec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint128_t zmm0 = data_142d3f660
uint128_t var_108 = zmm0
int32_t rcx = data_1439c7a08
int512_t zmm1
zmm1.o = zmm0
int128_t var_f8
__builtin_memcpy(&var_f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x70)
sub_1420faf20(rcx, &var_108, nullptr)
void* rcx_1 = *(arg1 + 0x20)

if (rcx_1 == 0)
    void* rax_2 = sub_140a82f30(0xf0, zx.q((rcx_1 + 0x10).d))
    *(arg1 + 0x20) = rax_2
    rcx_1 = rax_2

*rcx_1 = var_108
*(rcx_1 + 0x10) = var_f8
__builtin_memcpy(rcx_1 + 0x20, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x60)
int128_t var_88
*(rcx_1 + 0x80) = var_88
uint128_t var_78
*(rcx_1 + 0x90) = var_78
int128_t var_68
*(rcx_1 + 0xa0) = var_68
uint128_t var_58
*(rcx_1 + 0xb0) = var_58
int128_t var_48
*(rcx_1 + 0xc0) = var_48
uint128_t var_38
*(rcx_1 + 0xd0) = var_38
int128_t var_28
*(rcx_1 + 0xe0) = var_28
int64_t* result = sub_1405d16e0(arg1 + 0x18, nullptr)
int64_t r8 = *(arg1 + 0x20)

if (r8 != 0)
    int64_t* rcx_4 = data_143f0f180
    void* var_118
    (*(*rcx_4 + 0xf8))(rcx_4, &var_118, r8, &data_143f484c0, *(arg1 + 0x10), 1)
    void* rax_4 = var_118
    void* var_110 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    sub_1405d1550(&var_118)
    sub_1405d1600(arg1 + 0x18, &var_110)
    result = sub_1405d1550(&var_110)

__security_check_cookie(rax_1 ^ &var_148)
return result
