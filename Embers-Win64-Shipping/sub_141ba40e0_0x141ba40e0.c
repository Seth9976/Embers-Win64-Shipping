// 函数: sub_141ba40e0
// 地址: 0x141ba40e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*(arg1 + 0x2c) += 1
int32_t var_80 = 1
uint64_t* var_88 = nullptr
sub_1405a4d70(&var_88)
*var_88 = arg2
int64_t rbx = sx.q(var_80)
int32_t rax_3 = (rbx + 1).d
var_80 = rax_3

if (rax_3 s> 0)
    sub_1405a4d70(&var_88)

var_88[rbx] = arg3
int128_t* rax_5 = *arg1
void* rcx_2 = arg1[2]
char rdx_2 = *(rax_5 + 0x34) & 1
int128_t zmm1 = rax_5[1].d
int32_t zmm2 = *(rax_5 + 8)
int32_t var_78 = (*(rax_5 + 0xc)).d
int32_t var_74 = zmm1.d
int32_t var_70 = zmm2
int64_t var_6c = 0
int32_t var_64 = (*rax_5).d
int32_t var_60 = (*(rax_5 + 4)).d
int128_t var_5c = *(rax_5 + 0x1c)
int64_t var_4c = *(rax_5 + 0x2c)
char var_44
char var_44_1 = (rdx_2 * 2) | (var_44 & 0xfc)
int64_t result = sub_140db3b20(rcx_2, *(arg1 + 0x2c), &var_78, &var_88, 0, arg4, arg5, arg6.d)
uint64_t* rcx_3 = var_88

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

__security_check_cookie(rax_1 ^ &var_c8)
return result
