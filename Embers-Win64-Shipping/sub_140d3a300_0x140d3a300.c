// 函数: sub_140d3a300
// 地址: 0x140d3a300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x78) = 0
int64_t rcx = *(arg1 + 0x70)

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = *(arg1 + 0x3c) == 0
*(arg1 + 0x38) = 0

if (not(cond:0))
    sub_1405a5410(arg1 + 0x30, 0)

*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
void* result = sub_14059a8e0(arg1 + 0x40, 0)
int64_t rcx_3 = *(arg1 + 0x50)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x30)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x20)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x10)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
