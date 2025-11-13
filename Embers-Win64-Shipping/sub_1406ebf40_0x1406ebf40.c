// 函数: sub_1406ebf40
// 地址: 0x1406ebf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg3
void var_5b8
memcpy(&var_5b8, arg4, 0x5b0)
void var_758
void* rax = &var_758
int64_t i_1 = 3
int64_t i

do
    rax += 0x80
    int128_t zmm0_1 = *rbx
    int128_t zmm1 = rbx[1]
    rbx = &rbx[8]
    *(rax - 0x80) = zmm0_1
    zmm0_1 = rbx[-6]
    *(rax - 0x70) = zmm1
    zmm1 = rbx[-5]
    *(rax - 0x60) = zmm0_1
    zmm0_1 = rbx[-4]
    *(rax - 0x50) = zmm1
    zmm1 = rbx[-3]
    *(rax - 0x40) = zmm0_1
    zmm0_1 = rbx[-2]
    *(rax - 0x30) = zmm1
    zmm1 = rbx[-1]
    *(rax - 0x20) = zmm0_1
    *(rax - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rcx_1 = rbx[1].q
char rbx_1 = *arg2
*rax = *rbx
*(rax + 0x10) = rcx_1
int64_t var_800[0x15]
int64_t* rax_1 = sub_1406e9110(&var_800, &var_5b8)
void var_838
return sub_1406eaa90(&data_143cdf608, rbx_1, sub_1406e9820(&var_838, &var_758), rax_1)
