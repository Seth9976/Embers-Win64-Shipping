// 函数: sub_1419622d0
// 地址: 0x1419622d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[9].d = 0
int64_t rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_14196c9a0(arg1, 0)
int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
