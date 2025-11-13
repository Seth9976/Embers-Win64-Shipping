// 函数: sub_141ddea70
// 地址: 0x141ddea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dde9f0(arg1, arg2)
*arg1 = &data_14323f2d8

if (arg1[5] != u"Bitwise Compress Only")
    int32_t rdx = 0
    arg1[6].d = 0
    
    if (*(arg1 + 0x34) != 0x16)
        sub_1405947f0(&arg1[5], 0x16)
        rdx = arg1[6].d
    
    arg1[6].d = rdx + 0x16
    
    if (rdx + 0x16 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    void* rcx_2 = arg1[5]
    __builtin_memcpy(rcx_2, u"Bitwise Compress", 0x20)
    *(rcx_2 + 0x20) = 0x6c006e004f0020
    *(rcx_2 + 0x28) = 0x79

return arg1
