// 函数: sub_141412c30
// 地址: 0x141412c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x40]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_1414129a0(&arg1[0xd])
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[8]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

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
