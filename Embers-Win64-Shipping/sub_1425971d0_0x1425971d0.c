// 函数: sub_1425971d0
// 地址: 0x1425971d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[6] = &data_142da8048
sub_140a1d5c0(&arg2[9])
int64_t result = sub_140a1d5c0(&arg2[7])
int64_t rcx_2 = arg2[4]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg2[2]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg2

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
