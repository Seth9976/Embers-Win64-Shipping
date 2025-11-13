// 函数: sub_14283e0c0
// 地址: 0x14283e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
int32_t r8 = 0
*(arg1 + 4) = 0
int32_t rdx = 0
void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    int64_t rax_1 = *(rcx + 0x10)
    
    if (rax_1 != 0)
        rax_1(rcx)
        r8 = *(arg1 + 0xc)
        rdx = *(arg1 + 8)

void* result = sub_142831cd0(*(arg1 + 0x18), rdx, r8)
*(arg1 + 0x10) = result
*(arg1 + 0x1a8) = 4
*(arg1 + 0x1b0) = 0
*(arg1 + 0x1b8) = 0
return result
