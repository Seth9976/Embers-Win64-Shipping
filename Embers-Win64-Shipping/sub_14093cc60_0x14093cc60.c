// 函数: sub_14093cc60
// 地址: 0x14093cc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xd]

if (rcx != 0)
    sub_140a74f90(rcx)

*arg1 = &data_142e226e0
arg1[0xa].d = 0
int64_t rcx_1 = arg1[9]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result = sub_1409259a0(&arg1[1], 0)
int64_t rcx_3 = arg1[5]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[1]

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
