// 函数: sub_1413f5c20
// 地址: 0x1413f5c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rcx_1 = *sub_14139d440(&data_143ec4c60)
int128_t* rax_4 = (*(*rcx_1 + 0x10))(rcx_1)
char var_a0 = 0
char var_a8 = 1
char var_b0 = 1
int128_t var_98 = *rax_4
int128_t var_88 = rax_4[1]
int128_t var_78 = rax_4[2]
int128_t zmm1 = rax_4[3]
int128_t var_68 = zmm1
var_78:0xc.d = 0xa
int128_t var_58 = rax_4[4]
var_68.d = zmm1.d & 0x7fefffff
sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg4, u"RayTracingRectLight", var_b0, var_a8, var_a0)
var_78:0xc.d = 0x15
sub_1419a0ce0(&data_1439c9260, arg2, &var_98, arg5, u"RayTracingRectLightDistance", 1, 1, 0)
int64_t* rcx_2 = *(arg3 + 0x20)
char var_b0_1
var_b0_1.q = arg5
int64_t result

if ((*(*rcx_2 + 0x40))(rcx_2) == 0)
    result = sub_1413ba470(arg1, arg2, arg1 + 0xa0, arg3, arg4, var_b0_1)
else
    result = sub_1413b9c30(arg1, arg2, arg1 + 0xa0, arg3, arg4, var_b0_1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
