// 函数: sub_14259bfc0
// 地址: 0x14259bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[9].d = 0
int64_t rcx = arg2[8]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_141e3d380(arg2, 0)
int64_t rcx_2 = arg2[4]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg2

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
