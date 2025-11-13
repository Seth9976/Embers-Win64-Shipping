// 函数: sub_1427c6330
// 地址: 0x1427c6330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rdx = zx.q(arg2) * 5
int32_t rax = *(arg1 + (rdx << 3) + 4)
int32_t* rbx_1 = arg1 + (rdx << 3)

if (rax == 0xb)
    rax = sub_1427c6b10(*(rbx_1 + 8), *(rbx_1 + 0x10), *(rbx_1 + 0x18), &rbx_1[8])
    
    if (rax == 0)
        *rbx_1 = 0
        return 
    
    if (rax != 1)
        *rbx_1 = 4
        return 
else if (rax == 0xa)
    memcpy(*(rbx_1 + 0x18), *(rbx_1 + 8), (*(rbx_1 + 0x10)).d)
    *rbx_1 = 0
    return 

*rbx_1 = 3
