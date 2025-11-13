// 函数: sub_141e38ab0
// 地址: 0x141e38ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1e]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x1c]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae200(&arg1[0x12])
void* result = sub_1405ae200(&arg1[8])
int64_t rcx_4 = arg1[6]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[4]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[2]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg1

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
