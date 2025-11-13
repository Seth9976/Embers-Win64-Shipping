// 函数: sub_141eb66a0
// 地址: 0x141eb66a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x80c) == 0
*(arg1 + 0x808) = 0

if (not(cond:0))
    sub_141eca3a0(arg1, 0)

*(arg1 + 0x828) = 0xffffffff
*(arg1 + 0x82c) = 0
void* result

if (*(arg1 + 0x824) u> 0x40)
    *(arg1 + 0x824) = 0x40
    result = sub_140b51c80(arg1 + 0x810, 0)
else
    result = *(arg1 + 0x818)
    void* result_1 = arg1 + 0x810
    uint32_t rdx_3 = (*(arg1 + 0x820) + 0x1f) u>> 5
    
    if (result != 0)
        result_1 = result
    
    if (rdx_3 u> 8)
        result = memset(result_1, 0, zx.q(rdx_3) << 2)
    else if (rdx_3 != 0)
        result = nullptr
        __builtin_memset(result_1, 0, zx.q(rdx_3) << 2)

*(arg1 + 0x820) = 0
int64_t rcx_3 = *(arg1 + 0x818)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x800)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
