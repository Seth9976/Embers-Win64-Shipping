// 函数: sub_141d2f580
// 地址: 0x141d2f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0
int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5410(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
void* result = sub_14059a8e0(&arg1[4], 0)
int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
