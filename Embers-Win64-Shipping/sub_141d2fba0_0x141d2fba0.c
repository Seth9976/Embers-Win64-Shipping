// 函数: sub_141d2fba0
// 地址: 0x141d2fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[2] = &data_142fc4250
arg1[6] = &data_142fc4220
int64_t rcx_1 = arg1[7]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

void** const result = &data_142fc4068
arg1[2] = &data_142fc4068
int64_t rcx_2 = arg1[3]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
