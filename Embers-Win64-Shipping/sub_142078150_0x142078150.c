// 函数: sub_142078150
// 地址: 0x142078150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_1432b8538
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
arg1[0x12] = 0
arg1[9] = sub_1424d0320()

if (arg1[0xb] != u"Float Particle Param")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x15)
        sub_1405947f0(&arg1[0xb], 0x15)
        rdi = arg1[0xc].d
    
    arg1[0xc].d = rdi + 0x15
    
    if (rdi + 0x15 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    void* rcx_2 = arg1[0xb]
    __builtin_memcpy(rcx_2, u"Float Particle P", 0x20)
    *(rcx_2 + 0x20) = 0x6d006100720061
    *(rcx_2 + 0x28) = 0

return arg1
