// 函数: sub_142355590
// 地址: 0x142355590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rcx_1 = arg1[1] + 0x88

if (rcx_1[1].d != 0xffffffff)
    sub_1419ba620(rcx_1)
else
    (*(*rcx_1 + 0x28))(rcx_1)

int64_t* rcx_2 = arg1[1]

if (rcx_2[1].d != 0xffffffff)
    sub_1419ba620(rcx_2)
else
    (*(*rcx_2 + 0x28))(rcx_2)

int64_t* rcx_4 = arg1[1] + 0xc8

if (rcx_4[1].d != 0xffffffff)
    sub_1419ba620(rcx_4)
else
    (*(*rcx_4 + 0x28))(rcx_4)

void* rcx_5 = arg1[1]
int64_t rdx = *arg1
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int512_t zmm1
zmm1.o = zx.o(0)
int32_t var_78 = 0
int32_t var_74 = 4
int64_t var_70
__builtin_memset(&var_70, 0, 0x40)
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
int32_t var_24 = 0
int64_t var_20 = 0
sub_142290930(rcx_5 + 0x88, rdx, &var_e8)
sub_1422b9c80(arg1[1], *arg1, &var_e8)
sub_1422b9b10(arg1[1], *arg1, &var_e8)
sub_1422b9a60(arg1[1], *arg1, &var_e8, arg1[2].d)
sub_142290850(arg1[1] + 0xc8, *arg1, &var_e8)
sub_1421026a0(*arg1, &var_e8)
int64_t* rcx_13 = *arg1
int64_t result

if (rcx_13[1].d != 0xffffffff)
    result = sub_1419ba620(rcx_13, zmm1)
else
    result = (*(*rcx_13 + 0x28))(rcx_13, zmm1)

__security_check_cookie(rax_1 ^ &var_108)
return result
