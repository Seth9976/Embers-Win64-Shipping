// 函数: sub_1406ec280
// 地址: 0x1406ec280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
void* rax = &var_1a8
int64_t i_1 = 3
int64_t i

do
    rax += 0x80
    int128_t zmm0 = *arg2
    int128_t zmm1 = arg2[1]
    arg2 = &arg2[8]
    *(rax - 0x80) = zmm0
    zmm0 = arg2[-6]
    *(rax - 0x70) = zmm1
    zmm1 = arg2[-5]
    *(rax - 0x60) = zmm0
    zmm0 = arg2[-4]
    *(rax - 0x50) = zmm1
    zmm1 = arg2[-3]
    *(rax - 0x40) = zmm0
    zmm0 = arg2[-2]
    *(rax - 0x30) = zmm1
    zmm1 = arg2[-1]
    *(rax - 0x20) = zmm0
    *(rax - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rcx = arg2[1].q
*rax = *arg2
*(rax + 0x10) = rcx
void var_1e8
return sub_1406eaca0(&data_143cdf5f8, sub_1406e9820(&var_1e8, &var_1a8))
