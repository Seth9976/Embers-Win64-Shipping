// 函数: sub_141b847a0
// 地址: 0x141b847a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_14100e1e0(arg1 + 0x58)
int64_t rcx_1 = *(arg1 + 0x48)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x38)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x28)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x18)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
