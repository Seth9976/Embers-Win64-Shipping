// 函数: sub_141c48cb0
// 地址: 0x141c48cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (*arg1 != u"Unknown")
    int32_t rdx_1 = 0
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 8)
        sub_1405947f0(arg1, 8)
        rdx_1 = rbx[1].d
    
    rbx[1].d = rdx_1 + 8
    
    if (rdx_1 + 8 s> *(rbx + 0xc))
        sub_140594770(rbx)
    
    **rbx = *u"Unknown"

if (rbx[2] != u"Unknown")
    int32_t rdx_2 = 0
    rbx[3].d = 0
    
    if (*(rbx + 0x1c) != 8)
        sub_1405947f0(&rbx[2], 8)
        rdx_2 = rbx[3].d
    
    rbx[3].d = rdx_2 + 8
    
    if (rdx_2 + 8 s> *(rbx + 0x1c))
        sub_140594770(&rbx[2])
    
    *rbx[2] = *u"Unknown"

rbx[4] = 0
rbx[5].d = 0
rbx[7].d = 0

if (*(rbx + 0x3c) s<= 0xffffffff)
    sub_1405dadb0(&rbx[6], 0)

rbx[8].b &= 0xfe
