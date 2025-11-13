// 函数: sub_1408c40d0
// 地址: 0x1408c40d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x120) &= 0xfe
void* rbx = *(arg1 + 0x128)
*(arg1 + 0x121) = 0

if (rbx == 0)
    return 

void* rcx = *(rbx + 0x2b0)

if (rcx != 0)
    sub_1408c29c0(rcx)

*(rbx + 0x2e) &= 0xfb

if (sub_140db3510(rbx + 0x18) != 0)
    sub_140dc03a0(rbx + 0x18, *(rbx + 0x2e))

*(rbx + 0x2a8) = 0
