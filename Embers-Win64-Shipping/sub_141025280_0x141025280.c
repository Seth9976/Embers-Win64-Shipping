// 函数: sub_141025280
// 地址: 0x141025280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_28[0x2]
uint128_t* rax_1 = sub_141013c60(*(*arg1 + 0xaf0), &var_28, arg3, arg2)
*(arg1 + 0x30) = *rax_1
arg1[8] = rax_1[1].q
int64_t* rcx_1 = arg1[6]
arg1[2].d = arg1[8].d
arg1[1] = rcx_1
void arg_8
arg1[4] = *(*(*rcx_1 + 0x48))(rcx_1, &arg_8)
int64_t* rcx_3 = arg1[1]
int64_t rcx_4 = *(*(*rcx_3 + 0x50))(rcx_3, &arg_8)
void* rax_7 = *arg1
arg1[5] = rcx_4
int64_t* rcx_6 = *(*(rax_7 + 0x20) + 0x18)
int32_t result = (*(*rcx_6 + 0x78))(rcx_6, zx.q(arg3))
arg1[3].d = result
return result
