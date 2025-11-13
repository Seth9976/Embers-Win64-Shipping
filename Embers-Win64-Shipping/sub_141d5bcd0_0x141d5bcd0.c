// 函数: sub_141d5bcd0
// 地址: 0x141d5bcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9488)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a9488)

if ((arg2[5].b & 1) == 0 || rax_1 s>= 1)
    return (*(*arg2 + 0x140))(arg2, arg1 + 0x80)

uint64_t var_18 = 0
int64_t var_10_1 = 0
int64_t* result = sub_140a1d9d0(arg2, &var_18, zmm1)
uint64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
