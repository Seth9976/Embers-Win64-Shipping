// 函数: sub_14222ccd0
// 地址: 0x14222ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1 + 0x8c
int64_t i_1 = 2
int64_t i

do
    rax = &rax[0x20]
    int128_t zmm0 = *arg2
    arg2 = &arg2[8]
    *(rax - 0x80) = zmm0
    *(rax - 0x70) = arg2[-7]
    *(rax - 0x60) = arg2[-6]
    *(rax - 0x50) = arg2[-5]
    *(rax - 0x40) = arg2[-4]
    *(rax - 0x30) = arg2[-3]
    *(rax - 0x20) = arg2[-2]
    *(rax - 0x10) = arg2[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*rax = *arg2
void* arg_8
void** var_10 = &arg_8
arg_8 = arg1
int64_t (* var_18)(int64_t* arg1) = sub_14222c0b0
return sub_142269c80(arg1 + 8, &var_18)
