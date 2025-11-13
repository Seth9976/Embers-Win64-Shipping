// 函数: sub_141866b70
// 地址: 0x141866b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 0
int64_t rcx = *(arg1 + 0x58)

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x20) = 0

if (not(cond:0))
    sub_1405a5130(arg1 + 0x18, 0)

*(arg1 + 0x48) = 0xffffffff
*(arg1 + 0x4c) = 0
void* result = sub_14059a8e0(arg1 + 0x28, 0)
int64_t rcx_3 = *(arg1 + 0x38)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x18)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
