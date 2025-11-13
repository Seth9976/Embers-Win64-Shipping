// 函数: sub_141d56bf0
// 地址: 0x141d56bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_78 = 1
char rcx = (data_1439c7a34).b
int128_t var_88
int128_t* var_90 = &var_88
var_88 = zx.o(0)
char var_60 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_64 = (1 << rcx) - 1
int64_t var_58 = 0
int32_t var_50 = 0
int128_t var_74 = data_143dbb1e0
(*(*rcx_1 + 0x498))(rcx_1, arg1, &data_143f02b98, 0x80, 4, var_90, var_88, var_78)
int64_t* rcx_2 = data_143f0f180
var_90.d = 1
int32_t* rax_6 = (*(*rcx_2 + 0x130))(rcx_2, &data_143f02b98, *arg1, 0, 0x80, var_90)
int128_t zmm0 = arg5
*rax_6 = 0xbf800000
rax_6[1] = 0x3f800000
rax_6[2] = 0x3f800000
rax_6[3] = 0x3f800000
rax_6[8] = 0x3f800000
rax_6[9] = 0x3f800000
rax_6[0xa] = 0x3f800000
rax_6[0xb] = 0x3f800000
rax_6[0x10] = 0xbf800000
rax_6[0x11] = 0xbf800000
rax_6[0x12] = 0x3f800000
rax_6[0x13] = 0x3f800000
rax_6[0x18] = 0x3f800000
rax_6[0x19] = 0xbf800000
rax_6[0x1a] = 0x3f800000
rax_6[0x1b] = 0x3f800000
rax_6[4] = arg2.d
rax_6[5] = arg4.d
rax_6[0xc] = arg3.d
rax_6[0xd] = arg4.d
rax_6[0x14] = arg2.d
rax_6[0x15] = zmm0.d
rax_6[0x1c] = arg3.d
rax_6[0x1d] = zmm0.d
int64_t* rcx_3 = data_143f0f180
int64_t r9 = *rcx_3
(*(r9 + 0x138))(rcx_3, &data_143f02b98, *arg1, r9)
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
