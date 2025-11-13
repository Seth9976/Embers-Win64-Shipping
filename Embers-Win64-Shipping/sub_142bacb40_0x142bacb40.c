// 函数: sub_142bacb40
// 地址: 0x142bacb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    int32_t result = 0xffffffe0 - ((arg3 - arg2) & 0xffffffc0)
    
    if (result s> 0)
        return -0x20
    
    return result

int32_t rcx = 0x20
int32_t rax_1 = (arg2 + arg3) & 0xffffffc0

if (rax_1 + 0x20 s>= 0)
    rcx = rax_1 + 0x20

return zx.q(rcx)
