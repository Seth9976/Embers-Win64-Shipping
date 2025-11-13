// 函数: sub_140d94140
// 地址: 0x140d94140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *arg3
*arg3 = 0
int32_t rdi = arg3[1].d
int32_t rbx = *(arg3 + 0xc)
arg3[1] = 0
arg1[2] = 0
arg1[3] = 1
sub_1405c4ec0(&arg1[2])
int64_t* rcx_1 = arg1[2]
*rcx_1 = *arg2
rcx_1[1] = rbp
rcx_1[2].d = rdi
*(rcx_1 + 0x14) = rbx
*(rcx_1 + 0x19) = arg5
*(rcx_1 + 0x1c) = 0
rcx_1[4] = 0
rcx_1[3].b = arg4
arg1[4] = 0
arg1[5] = 0
arg1[6].d = 0x3f800000
arg1[7] = 0
arg1[8] = 0
sub_1405ab8c0(arg1)
*arg1 = &data_142ec2758
int64_t rcx_3 = *arg3

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg1
