// 函数: sub_140a1a9c0
// 地址: 0x140a1a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg2[0xb]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_1406cae40(&arg2[8])
int64_t rcx_2 = arg2[6]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg2[4]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg2[2]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg2

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
