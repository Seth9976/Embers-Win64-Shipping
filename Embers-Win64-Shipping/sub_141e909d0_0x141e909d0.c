// 函数: sub_141e909d0
// 地址: 0x141e909d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_143255848
__builtin_memset(&arg1[5], 0, 0x20)
__builtin_memset(&arg1[0xa], 0, 0x28)

if (arg1[5] != u"BBGeneric")
    arg1[6].d = 0
    sub_1405947f0(&arg1[5], 0xa)
    int32_t rax_1 = arg1[6].d + 0xa
    arg1[6].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    __builtin_memcpy(arg1[5], u"BBGeneric", 0x14)

if (arg1[7] != u"BrushBuilderName_Generic")
    arg1[8].d = 0
    
    if (*(arg1 + 0x44) != 0x19)
        sub_1405947f0(&arg1[7], 0x19)
        rdi = arg1[8].d
    
    arg1[8].d = rdi + 0x19
    
    if (rdi + 0x19 s> *(arg1 + 0x44))
        sub_140594770(&arg1[7])
    
    __builtin_wcscpy(arg1[7], u"BrushBuilderName_Generic")

arg1[9].d |= 1
return arg1
