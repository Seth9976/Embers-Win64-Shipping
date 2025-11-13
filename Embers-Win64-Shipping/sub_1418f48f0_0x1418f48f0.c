// 函数: sub_1418f48f0
// 地址: 0x1418f48f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1e]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_14100dea0(&arg1[7])
int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
