// 函数: sub_142077fa0
// 地址: 0x142077fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
*arg1 = &data_1432b2048
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0xe], 0, 0x11)
*(arg1 + 0x84) = 0

if (arg1[0xb] != u"Generic Float Track")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x14)
        sub_1405947f0(&arg1[0xb], 0x14)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 0x14
    
    if (rdx + 0x14 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    void* rax_2 = arg1[0xb]
    __builtin_memcpy(rax_2, u"Generic Float Tr", 0x20)
    *(rax_2 + 0x20) = 0x6b00630061

arg1[0x11].d = 0
return arg1
