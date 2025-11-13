// 函数: sub_1406b2df0
// 地址: 0x1406b2df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
*arg1 = &data_142d8d7c0
arg1[1].d = 1
__ExceptionPtrCreate(&arg1[2])
_Mtx_init_in_situ(&arg1[4], 2)
_Cnd_init_in_situ(&arg1[0xe])
arg1[0x17].b = 0
*(arg1 + 0xbc) = 0
arg1[0x18].w = 0
*(arg1 + 0xc2) = 0
arg1[0x19] = 0
*arg1 = &data_142d8e060
void* arg_10 = &arg1[0x1a]
int64_t var_48 = *arg2
int64_t rax_1 = arg2[1]
arg2[1] = 0
int32_t rax_2 = arg2[2].d
int32_t rax_3 = *(arg2 + 0x14)
arg2[2] = 0
int64_t* arg_18 = &var_48
arg1[0x21] = 0
void*** rax_4 = j_sub_140a82f30(0x20)
*rax_4 = &data_142d8e2f0
rax_4[1] = var_48
rax_4[2] = 0
rax_4[2] = rax_1
int64_t var_40_1 = 0
rax_4[3].d = rax_2
*(rax_4 + 0x1c) = rax_3
int32_t var_38
var_38.q = 0
arg1[0x21] = rax_4

if (var_40_1 != 0)
    sub_140a74f90(var_40_1)

return arg1
