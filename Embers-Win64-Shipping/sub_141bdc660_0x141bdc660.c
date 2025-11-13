// 函数: sub_141bdc660
// 地址: 0x141bdc660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x3a0)
*(arg1 + 0x3ed) = 0

if (rbx == 0)
    return 

void* rax = sub_140d21950(rbx, sub_141c00390())

if (rax != 0)
    jump(*(*rax + 0x28))

void* rdi_1 = rbx[2]

if (rdi_1 != 0 && sub_140be1130(rdi_1, sub_141c00390()).b != 0)
    sub_141c00c60(rbx)
