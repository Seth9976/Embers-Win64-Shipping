// 函数: sub_142078830
// 地址: 0x142078830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
int32_t rsi = 0
*arg1 = &data_1432b5af0
arg1[5] = &data_1432b5e48
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0xe], 0, 0x11)
*(arg1 + 0x84) = 0

if (arg1[0xb] != u"Generic LinearColor Track")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x1a)
        sub_1405947f0(&arg1[0xb], 0x1a)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 0x1a
    
    if (rdx + 0x1a s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Generic LinearColor Track", 0x34)

arg1[0x11].d = 0
*arg1 = &data_1432b7630
arg1[5] = &data_1432b5e48
arg1[6] = &data_1432b07a8
arg1[0x12] = 0
arg1[9] = sub_1424d04c0()

if (arg1[0xb] != u"LinearColor Property")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x15)
        sub_1405947f0(&arg1[0xb], 0x15)
        rsi = arg1[0xc].d
    
    arg1[0xc].d = rsi + 0x15
    
    if (rsi + 0x15 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    void* rcx_5 = arg1[0xb]
    __builtin_memcpy(rcx_5, u"LinearColor Prop", 0x20)
    *(rcx_5 + 0x20) = 0x79007400720065
    *(rcx_5 + 0x28) = 0

return arg1
