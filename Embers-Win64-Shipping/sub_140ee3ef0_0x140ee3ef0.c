// 函数: sub_140ee3ef0
// 地址: 0x140ee3ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0
int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_1405e1b50(&arg1[2], 0)
int64_t rcx_2 = arg1[6]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[2]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg1

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
