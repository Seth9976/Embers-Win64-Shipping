// 函数: sub_142997700
// 地址: 0x142997700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg3)
    return 

void* rbx_1 = arg2

do
    int64_t rcx = *(rbx_1 + 8)
    
    if (rcx != 0)
        _aligned_free(rcx)
    
    *(rbx_1 + 8) = 0
    *rbx_1 = 0
    rbx_1 += 0x10
while (rbx_1 != arg3)
