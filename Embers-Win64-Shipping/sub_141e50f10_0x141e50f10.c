// 函数: sub_141e50f10
// 地址: 0x141e50f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd].d = 0
int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141e5bde0(&arg1[4], 0)
int64_t rcx_2 = arg1[8]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = sub_1409aad70(&arg1[2])
int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
