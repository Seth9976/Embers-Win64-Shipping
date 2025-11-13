// 函数: sub_1427a1fd0
// 地址: 0x1427a1fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
int64_t var_28 = data_143dbb1f8.q
int64_t zmm0
zmm0.d = (*(arg1 + 0x438)).d f+ *(arg1 + 0x434)
int32_t var_20 = rax
int32_t var_1c = zmm0.d
int64_t var_18[0x2]
int64_t* rax_1 = sub_140ae2f70(&var_28, &var_18, arg3)
uint128_t zmm2 = *(rax_1 + 0xc)
int32_t rcx_1 = rax_1[1].d
*arg2 = *rax_1
int32_t var_20_1 = zmm2.d
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm2, zmm2.q)).q
*(arg2 + 0x14) = var_20_1
arg2[3].d = zmm2.d
arg2[1].d = rcx_1
return arg2
