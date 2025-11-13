// 函数: sub_141c49ff0
// 地址: 0x141c49ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (arg1[0x41].d).b

if ((rax & 1) != 0 && (rax & 2) == 0)
    *(arg1 + 0x80) = *arg2
    *(arg1 + 0x90) = arg2[1]
    arg1[0x14] = arg2[2].q
    arg1[3].d = 0
    
    if (arg1[4] != u"Unknown")
        int32_t rdx = 0
        arg1[5].d = 0
        
        if (*(arg1 + 0x2c) != 8)
            sub_1405947f0(&arg1[4], 8)
            rdx = arg1[5].d
        
        arg1[5].d = rdx + 8
        
        if (rdx + 8 s> *(arg1 + 0x2c))
            sub_140594770(&arg1[4])
        
        *arg1[4] = *u"Unknown"
    
    if (arg1[6] != u"Unknown")
        int32_t rdx_1 = 0
        arg1[7].d = 0
        
        if (*(arg1 + 0x3c) != 8)
            sub_1405947f0(&arg1[6], 8)
            rdx_1 = arg1[7].d
        
        arg1[7].d = rdx_1 + 8
        
        if (rdx_1 + 8 s> *(arg1 + 0x3c))
            sub_140594770(&arg1[6])
        
        *arg1[6] = *u"Unknown"
    
    arg1[8] = 0
    arg1[9].d = 0
    arg1[0xb].d = 0
    
    if (*(arg1 + 0x5c) s<= 0xffffffff)
        sub_1405dadb0(&arg1[0xa], 0)
    
    arg1[0xc].b &= 0xfe
    arg1[0xd].d = 0
    arg1[0xe] = 0
    arg1[0xf] = 2
    int32_t rdx_2 = arg1[0x10].d
    *(arg1 + 0x7c) = *(arg1 + 0x84)
    arg1[0xf].d = arg1[0x11].d
    arg1[0xe] = arg1[0x12]
    arg1[3].d = rdx_2
    
    if ((*(*arg1 + 0x68))(arg1, rdx_2, &arg1[4]) != 0)
        arg1[0x41].d |= 2
        arg1[0xd].d = 1
        return 1

return 0
