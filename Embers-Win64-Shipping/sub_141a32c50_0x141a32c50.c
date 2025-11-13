// 函数: sub_141a32c50
// 地址: 0x141a32c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ade70(&arg1[0x14])
arg1[0x13].d = 0
int64_t rcx_1 = arg1[0x12]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_141a327a0(&arg1[0xa])
arg1[9].d = 0
int64_t rcx_3 = arg1[8]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = sub_1407ece30(arg1, 0)
int64_t rcx_5 = arg1[4]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg1

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
