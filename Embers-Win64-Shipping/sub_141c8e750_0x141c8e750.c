// 函数: sub_141c8e750
// 地址: 0x141c8e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r9 = sub_140b5b8a0(*arg3, 0) == 0
bool result = arg3[1] != 0 | r9

if (result == 0)
    return result

void* rdi_1 = *(arg1 + 0x28)
int64_t (* var_38)(void* arg1, int64_t* arg2, int64_t arg3) = sub_141c89450
int32_t var_30_1 = 0
int128_t zmm0 = var_38.o
var_38 = *arg2
void* rax_1 = arg2[1]
int128_t var_28 = zmm0
var_30_1.q = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void var_18
int64_t* rax_3 = sub_141c7fc70(&var_18, rdi_1, &var_28, &var_38, *arg3)

if (sub_141c87730(rdi_1 + 0x110, rax_3) != 0)
    int64_t* rcx_3 = *(rdi_1 + 0x158)
    (*(*rcx_3 + 0x10))(rcx_3)

return sub_140745b20(rax_3)
