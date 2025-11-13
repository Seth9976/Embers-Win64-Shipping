// 函数: sub_141c850f0
// 地址: 0x141c850f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)
int64_t (* var_38)(void* arg1, int64_t* arg2) = sub_141c88f80
int32_t var_30 = 0
int128_t zmm0 = var_38.o
var_38 = *arg2
void* rax_1 = arg2[1]
int128_t var_28 = zmm0
var_30.q = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

void var_18
int64_t* rax_2 = sub_141c7fd90(&var_18, rbx, &var_28, &var_38)

if (sub_141c87730(rbx + 0x110, rax_2) != 0)
    int64_t* rcx_2 = *(rbx + 0x158)
    int64_t rdx_2 = *rcx_2
    (*(rdx_2 + 0x10))(rcx_2, rdx_2)

return sub_140745b20(rax_2)
