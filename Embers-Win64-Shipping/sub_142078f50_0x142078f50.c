// 函数: sub_142078f50
// 地址: 0x142078f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142078e70(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_1432b90e8
arg1[5] = &data_1432b5490
arg1[6] = &data_1432b07a8
__builtin_memset(&arg1[0x12], 0, 0x18)
arg1[9] = sub_1424d0d40()

if (arg1[0xb] != u"Vector UMaterial Param")
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0x17)
        sub_1405947f0(&arg1[0xb], 0x17)
        rdi = arg1[0xc].d
    
    arg1[0xc].d = rdi + 0x17
    
    if (rdi + 0x17 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    void* rcx_2 = arg1[0xb]
    __builtin_memcpy(rcx_2, u"Vector UMaterial", 0x20)
    *(rcx_2 + 0x20) = 0x72006100500020
    *(rcx_2 + 0x28) = 0x6d0061
    *(rcx_2 + 0x2c) = 0

return arg1
