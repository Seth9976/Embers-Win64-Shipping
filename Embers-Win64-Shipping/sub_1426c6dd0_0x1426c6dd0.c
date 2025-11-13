// 函数: sub_1426c6dd0
// 地址: 0x1426c6dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6c70(arg1, arg2)
*arg1 = &data_14346af10
arg1[5] = &data_1434658a8

if (arg1[6] != u"Force Success")
    int32_t rdx = 0
    arg1[7].d = 0
    
    if (*(arg1 + 0x3c) != 0xe)
        sub_1405947f0(&arg1[6], 0xe)
        rdx = arg1[7].d
    
    arg1[7].d = rdx + 0xe
    
    if (rdx + 0xe s> *(arg1 + 0x3c))
        sub_140594770(&arg1[6])
    
    __builtin_memcpy(arg1[6], u"Force Success", 0x1c)

arg1[0xc].d = (arg1[0xc].d & 0xfffffff8) | 0x20
return arg1
