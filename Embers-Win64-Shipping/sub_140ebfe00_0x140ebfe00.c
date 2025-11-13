// 函数: sub_140ebfe00
// 地址: 0x140ebfe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3c0) s<= 0)
    return 1

int64_t* rbx_1 = *(arg1 + 0x3b8)
void* rdi_3 = &rbx_1[sx.q(*(arg1 + 0x3c0)) * 2]

if (rbx_1 == rdi_3)
    return 0

while (true)
    int64_t* rcx = *rbx_1
    
    if ((*(*rcx + 0x270))(rcx) == 1)
        return 1
    
    rbx_1 = &rbx_1[2]
    
    if (rbx_1 == rdi_3)
        return 0
