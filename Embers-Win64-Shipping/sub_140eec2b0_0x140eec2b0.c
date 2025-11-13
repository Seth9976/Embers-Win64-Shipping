// 函数: sub_140eec2b0
// 地址: 0x140eec2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = arg2[0xd].b

if ((r8 & 2) == 0)
    return 

uint32_t rdx = zx.d(*(arg1 + 0x8a))

if (rdx == 0)
    if (*(arg1 + 0x89) == 1)
        arg2[4].b = 0
        arg2[0xd].b = r8 & 0xfd
        return 
    
    char rax = sub_140a6c7c0(*arg2)
    r8 = arg2[0xd].b
    arg2[4].b = rax
else
    if (rdx == 1)
        arg2[4].b = 0
        arg2[0xd].b = r8 & 0xfd
        return 
    
    if (rdx == 2)
        arg2[4].b = (rdx - 1).b
        arg2[0xd].b = r8 & 0xfd
        return 

arg2[0xd].b = r8 & 0xfd
