// 函数: sub_140a97880
// 地址: 0x140a97880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e63698
arg1[1].w = *(arg2 + 8)
*arg1 = &data_142e638c8
arg1[2].d = *(arg2 + 0x10)
arg1[3] = *(arg2 + 0x18)
arg1[3] = *(arg2 + 0x18)
arg1[3].d = *(arg2 + 0x18)
arg1[3] = *(arg2 + 0x18)
arg1[7].b = 0

if (*(arg2 + 0x38) != 0)
    arg1[4] = *(arg2 + 0x20)
    void* rax_7 = *(arg2 + 0x28)
    arg1[5] = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    arg1[6].d = *(arg2 + 0x30)
    arg1[7].b = 1

arg1[0xb].b = 0

if (*(arg2 + 0x58) != 0)
    *(arg1 + 0x40) = *(arg2 + 0x40)
    arg1[0xa] = *(arg2 + 0x50)
    arg1[0xb].b = 1

arg1[0xc] = *(arg2 + 0x60)
arg1[0xd] = *(arg2 + 0x68)
*(arg2 + 0x68) = 0
*(arg2 + 0x60) = 0
return arg1
