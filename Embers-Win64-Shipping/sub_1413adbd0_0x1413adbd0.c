// 函数: sub_1413adbd0
// 地址: 0x1413adbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint128_t zmm0 = data_142d3f660
int32_t rax_2 = arg4[1].d
int512_t zmm1
zmm1.o = zmm0
uint128_t var_e8 = zmm0
void* rcx = *(arg1 + 0xf0)
int128_t var_c8
__builtin_memcpy(&var_c8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x80\x3f", 
    0x80)
int32_t var_130 = rax_2
zmm0 = zx.o(*arg4)
int128_t var_48
__builtin_memset(&var_48, 0, 0x30)
int32_t rcx_1 = *(rcx + 8)
uint64_t var_138 = zmm0.q
uint64_t var_128[0x8]
void* result = sub_141226f00(rcx_1, &var_128, arg2, arg3, &var_138, arg5, arg6)
int64_t rdx_2 = *(arg1 + 0x70)

if (rdx_2 != 0)
    int64_t* rcx_2 = data_143f0f180
    result = (*(*rcx_2 + 0x100))(rcx_2, rdx_2, &var_128)

__security_check_cookie(rax_1 ^ &var_178)
return result
