// 函数: sub_141fd8300
// 地址: 0x141fd8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x84) == 0
*(arg1 + 0x80) = 0

if (not(cond:0))
    sub_1405a51b0(arg1 + 0x78, 0)

*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0
void* result = sub_14059a8e0(arg1 + 0x88, 0)
int64_t rcx_2 = *(arg1 + 0x98)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x78)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x68)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x38)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
