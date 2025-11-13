// 函数: sub_141c545e0
// 地址: 0x141c545e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg1
int64_t rax = arg1[1].q
char rdx
char var_50 = rdx
void*** rax_1 = sub_140a82f30(0x28, 8)
*rax_1 = &data_142fe5e78
*(rax_1 + 8) = zmm0
*(rax_1 + 0x18) = rax.o
void*** var_38 = rax_1
int64_t (* var_48)(int32_t* arg1)
int64_t (* rax_2)(int32_t* arg1) = var_48

if (rax_1 != -8)
    rax_2 = sub_141c572b0

var_48 = rax_2
return sub_140a20e40(2, &var_48)
