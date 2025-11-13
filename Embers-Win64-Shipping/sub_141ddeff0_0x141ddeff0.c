// 函数: sub_141ddeff0
// 地址: 0x141ddeff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dde9f0(arg1, arg2)
arg1[7].d |= 1
*arg1 = &data_143240318

if (arg1[5] != u"Remove Linear Keys")
    int32_t rdx = 0
    arg1[6].d = 0
    
    if (*(arg1 + 0x34) != 0x13)
        sub_1405947f0(&arg1[5], 0x13)
        rdx = arg1[6].d
    
    arg1[6].d = rdx + 0x13
    
    if (rdx + 0x13 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    __builtin_wcscpy(arg1[5], u"Remove Linear Keys")

*(arg1 + 0x5c) |= 3
__builtin_memcpy(&arg1[8], 
    "\x6f\x12\x83\x3a\xa6\x9b\x44\x3a\xbd\x37\x86\x35\x6f\x12\x83\x3a\x6f\x12\x83\x3a\x6f\x12\x83\x3a\x"
"00\x00\x00\x40", 
    0x1c)
return arg1
