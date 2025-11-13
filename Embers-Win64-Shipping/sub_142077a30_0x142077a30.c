// 函数: sub_142077a30
// 地址: 0x142077a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420777d0(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_1432b6a80
arg1[5] = &data_143294088
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0xe], 0, 0x18)
arg1[9] = sub_1424d1e50()

if (arg1[0xb] != u"Bool Property")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0xe)
        sub_1405947f0(&arg1[0xb], 0xe)
        rdi = arg1[0xc].d
    
    arg1[0xc].d = rdi + 0xe
    
    if (rdi + 0xe s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    __builtin_memcpy(arg1[0xb], u"Bool Property", 0x1c)

return arg1
