// 函数: sub_14102ffa0
// 地址: 0x14102ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0 && data_1439c7a34 u> 1)
    while (*(arg4 + 0x18) != *(arg1 + 0x138))
        arg4 = *(arg4 + 0x20)
        
        if (arg4 == 0)
            break

uint32_t rdx = zx.d(*(arg2 + 0x2c))
uint64_t rax

if (rdx == 0)
    rax = zx.q(arg3)
    
    if (*(arg1 + (rax << 3) + 0x2ef8) != arg4)
        *(arg1 + (rax << 3) + 0x2ef8) = arg4
        *(arg1 + 0x2ee8) = (zx.d(*(arg1 + 0x2ee8)) | 1 << (arg3 u% 0x20)).w
else if (rdx == 1)
    rax = zx.q(arg3)
    
    if (*(arg1 + (rax << 3) + 0x2f78) != arg4)
        *(arg1 + (rax << 3) + 0x2f78) = arg4
        *(arg1 + 0x2eea) |= (1 << (arg3 u% 0x20)).w
else if (rdx == 2)
    rax = zx.q(arg3)
    
    if (*(arg1 + (rax << 3) + 0x2ff8) != arg4)
        *(arg1 + (rax << 3) + 0x2ff8) = arg4
        *(arg1 + 0x2eec) |= (1 << (arg3 u% 0x20)).w
else if (rdx == 3)
    rax = zx.q(arg3)
    
    if (*(arg1 + (rax << 3) + 0x3078) != arg4)
        *(arg1 + (rax << 3) + 0x3078) = arg4
        *(arg1 + 0x2eee) |= (1 << (arg3 u% 0x20)).w
else if (rdx == 4)
    rax = zx.q(arg3)
    
    if (*(arg1 + (rax << 3) + 0x30f8) != arg4)
        *(arg1 + (rax << 3) + 0x30f8) = arg4
        *(arg1 + 0x2ef0) |= (1 << (arg3 u% 0x20)).w
