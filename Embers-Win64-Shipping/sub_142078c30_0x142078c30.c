// 函数: sub_142078c30
// 地址: 0x142078c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077fa0(arg1, arg2)
arg1[0xd].d |= 3
*arg1 = &data_1432b4b60
arg1[5] = &data_1432b23a0
arg1[6] = &data_1432b07a8
arg1[9] = sub_1424d0800()

if (arg1[0xb] != u"Slomo")
    int32_t rdx = 0
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 6)
        sub_1405947f0(&arg1[0xb], 6)
        rdx = arg1[0xc].d
    
    arg1[0xc].d = rdx + 6
    
    if (rdx + 6 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    int64_t* rcx_2 = arg1[0xb]
    *rcx_2 = 0x6d006f006c0053
    rcx_2[1].d = 0x6f

return arg1
