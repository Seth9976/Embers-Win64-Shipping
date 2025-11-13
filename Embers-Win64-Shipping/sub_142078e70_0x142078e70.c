// 函数: sub_142078e70
// 地址: 0x142078e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
*arg1 = &data_1432b5138
arg1[5] = &data_1432b5490
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0xe], 0, 0x11)
*(arg1 + 0x84) = 0

if (arg1[0xb] != u"Generic Vector Track")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x15)
        sub_1405947f0(&arg1[0xb], 0x15)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 0x15
    
    if (rdx + 0x15 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    void* rcx_2 = arg1[0xb]
    __builtin_memcpy(rcx_2, u"Generic Vector T", 0x20)
    *(rcx_2 + 0x20) = 0x6b006300610072
    *(rcx_2 + 0x28) = 0

arg1[0x11].d = 0
return arg1
