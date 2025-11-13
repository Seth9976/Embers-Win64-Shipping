// 函数: sub_141f7e860
// 地址: 0x141f7e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[9]
*arg1 = &data_143282eb8
sub_141f97a70(arg1, rdx)
void*** rdi = arg1[9]

if (rdi != 0)
    sub_142429700(rdi)
    j_sub_140a74f90(rdi)

int64_t rdx_2 = arg1[8]
arg1[9] = 0
sub_141f97a70(arg1, rdx_2)
int64_t* rcx_3 = arg1[8]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

int64_t rdx_3 = arg1[7]
arg1[8] = 0
sub_141f97a70(arg1, rdx_3)
int64_t* rcx_5 = arg1[7]

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

int64_t rdx_4 = arg1[6]
arg1[7] = 0
sub_141f97a70(arg1, rdx_4)
void*** rdi_1 = arg1[6]

if (rdi_1 != 0)
    sub_142381600(rdi_1)
    j_sub_140a74f90(rdi_1)

arg1[6] = 0
int64_t rcx_9 = arg1[2]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*arg1 = &data_142e0f078

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
