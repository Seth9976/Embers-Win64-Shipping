// 函数: sub_142078070
// 地址: 0x142078070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_1432b8b10
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0x12], 0, 0x18)
arg1[9] = sub_1424d00b0()

if (arg1[0xb] != u"Float UMaterial Param")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x16)
        sub_1405947f0(&arg1[0xb], 0x16)
        rdi = arg1[0xc].d
    
    arg1[0xc].d = rdi + 0x16
    
    if (rdi + 0x16 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    void* rcx_2 = arg1[0xb]
    __builtin_memcpy(rcx_2, u"Float UMaterial ", 0x20)
    *(rcx_2 + 0x20) = 0x61007200610050
    *(rcx_2 + 0x28) = 0x6d

return arg1
