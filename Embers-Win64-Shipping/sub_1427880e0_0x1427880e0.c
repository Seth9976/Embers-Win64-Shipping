// 函数: sub_1427880e0
// 地址: 0x1427880e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434ab858
arg1[0xa].d = 0
int64_t rcx = arg1[9]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[2].d = 0

if (*(arg1 + 0x14) != 0)
    sub_1405a5410(&arg1[1], 0)

arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
void* result = sub_14059a8e0(&arg1[3], 0)
int64_t rcx_3 = arg1[5]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[1]

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
