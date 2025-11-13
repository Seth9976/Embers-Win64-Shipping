// 函数: sub_1419627f0
// 地址: 0x1419627f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x90) = 0
int64_t rcx = *(arg1 + 0x88)

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = *(arg1 + 0x54) == 0
*(arg1 + 0x50) = 0

if (not(cond:0))
    sub_1406106e0(arg1 + 0x48, 0)

*(arg1 + 0x78) = 0xffffffff
*(arg1 + 0x7c) = 0
void* result = sub_14059a8e0(arg1 + 0x58, 0)
int64_t rcx_3 = *(arg1 + 0x68)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x48)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
