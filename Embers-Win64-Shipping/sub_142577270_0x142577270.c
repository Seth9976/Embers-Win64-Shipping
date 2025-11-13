// 函数: sub_142577270
// 地址: 0x142577270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg2[0x10]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141e388c0(&arg2[0xe])
void* result = sub_1405ae200(&arg2[4])
int64_t rcx_3 = arg2[2]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg2

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
