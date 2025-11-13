// 函数: sub_1413640d0
// 地址: 0x1413640d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0xb8)
int64_t* rbx = *(arg1 + 0x70)
*(arg1 + 0x70) = rdx

if (rdx != 0)
    (*(*rdx + 0x30))(rdx)

if (rbx == 0)
    return 

jump(*(*rbx + 0x38))
