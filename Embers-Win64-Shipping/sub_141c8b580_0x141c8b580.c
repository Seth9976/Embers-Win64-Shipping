// 函数: sub_141c8b580
// 地址: 0x141c8b580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
void* rbx = *(arg1 + 0x28)
void (* var_48)(void* arg1, int128_t* arg2, int64_t* arg3) = sub_141c88fd0
int32_t var_40 = 0
int128_t zmm1 = var_48.o
var_48 = *arg3
void* rax_1 = arg3[1]
int128_t var_38 = zmm0
int128_t var_28 = zmm1
var_40.q = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

void var_18
int64_t* rax_2 = sub_141c7fa00(&var_18, rbx, &var_28, &var_38, &var_48)

if (sub_141c87730(rbx + 0x110, rax_2) != 0)
    int64_t* rcx_2 = *(rbx + 0x158)
    int64_t rdx_2 = *rcx_2
    (*(rdx_2 + 0x10))(rcx_2, rdx_2)

return sub_140745b20(rax_2)
