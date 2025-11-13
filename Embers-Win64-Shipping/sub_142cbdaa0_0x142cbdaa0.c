// 函数: sub_142cbdaa0
// 地址: 0x142cbdaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&data_143db9da8)
int64_t rcx = data_143db9d98
data_143db9da0 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140a982f0(&data_143db9d58)
DeleteCriticalSection(&data_143db9d30)
int64_t rcx_1 = data_143db9d20
data_143db9d28 = 0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result = sub_1405b8bd0(&data_143db9ce0, 0)
int64_t rcx_2 = data_143db9d00

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = data_143db9ce0

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
