// 函数: sub_14203b7e0
// 地址: 0x14203b7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x30)

if (rdx != 0)
    rdx = *(rdx + 0x278)

if (rdx == 0)
    return 

int64_t* r9 = *(arg1 + 0x48)

if (r9 == 0)
    return sub_1423dee50(*(arg1 + 0x20), rdx, *(rdx + 0x38)) __tailcall

jump(*(*r9 + 0x270))
