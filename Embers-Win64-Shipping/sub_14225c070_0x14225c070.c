// 函数: sub_14225c070
// 地址: 0x14225c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t* rax_1 = (*(*rcx + 0xc8))(rcx)
int64_t r9 = *rax_1
int32_t var_38
int32_t var_28
(*(r9 + 0x60))(rax_1, &var_38, &var_28, r9)
int64_t* rcx_2 = *arg1
int32_t var_34
*rcx_2 = (_mm_unpacklo_ps(var_38, var_34)).q
int32_t var_30
rcx_2[1].d = var_30
int64_t* rcx_3 = arg1[1]
int32_t var_24
*rcx_3 = (_mm_unpacklo_ps(var_28, var_24)).q
int32_t result
rcx_3[1].d = result
return result
