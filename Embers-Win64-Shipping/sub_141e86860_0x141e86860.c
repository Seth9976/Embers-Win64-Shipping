// 函数: sub_141e86860
// 地址: 0x141e86860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x100) = *arg2
*(arg1 + 0x110) = arg2[1]
int128_t zmm1 = arg2[1]
int128_t zmm0 = *arg2
int128_t var_60 = zmm1
void*** rax = sub_140a82f30(0x30, 8)
*rax = &data_142ff85d8
*(rax + 8) = arg1.o
*(rax + 0x18) = zmm0
rax[5] = zmm1:8.q
void*** var_38 = rax
void* (* var_48)(int64_t* arg1)
void* (* rax_1)(int64_t* arg1) = var_48

if (rax != -8)
    rax_1 = sub_141e76430

var_48 = rax_1
return sub_141e85cb0(&var_48, arg3)
