// 函数: sub_1406e3b70
// 地址: 0x1406e3b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd].d = 0
int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_14062ca00(&arg1[4], 0)
int64_t rcx_2 = arg1[8]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
