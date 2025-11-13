// 函数: sub_1422dc2c0
// 地址: 0x1422dc2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
arg1[0x12].d = arg2[0x12].d
*(arg1 + 0x94) = *(arg2 + 0x94)
arg1[0x13].d = arg2[0x13].d
*(arg1 + 0x9c) = *(arg2 + 0x9c)
arg1[0x14].d = arg2[0x14].d
*(arg1 + 0xa4) = *(arg2 + 0xa4)
arg1[0x15].d = arg2[0x15].d
*(arg1 + 0xac) = *(arg2 + 0xac)
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x18] = arg2[0x18]
arg1[0x19].d = arg2[0x19].d
arg1[0x1a] = arg2[0x1a]
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
arg1[0x21].d = arg2[0x21].d
*(arg1 + 0x10c) = *(arg2 + 0x10c)
arg1[0x22].d = arg2[0x22].d

if (&arg1[0x23] != &arg2[0x23])
    sub_140780e10(&arg1[0x23], &arg2[0x23])
    
    if (arg2[0x2b] == 0)
        memmove(&arg1[0x2a], &arg2[0x2a], 4)
    
    int64_t rcx_2 = arg1[0x2b]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[0x2b] = arg2[0x2b]
    arg2[0x2b] = 0
    arg1[0x2c].d = arg2[0x2c].d
    arg2[0x2c].d = 0

if (&arg2[0x2d] != &arg1[0x2d])
    sub_1413c3330(&arg1[0x2d])
    
    if (arg2[0x37].b != 0)
        arg1[0x2d] = 0
        void* rcx_4 = &arg1[0x2f]
        arg1[0x2e] = 0
        *(rcx_4 + 0x10) = 0
        *(rcx_4 + 0x18) = 0
        *(rcx_4 + 0x1c) = 0x80
        void* rax_19 = *(rcx_4 + 0x10)
        
        if (rax_19 != 0)
            rcx_4 = rax_19
        
        *rcx_4 = 0
        *(rcx_4 + 8) = 0
        arg1[0x33].d = 0xffffffff
        *(arg1 + 0x19c) = 0
        arg1[0x35] = 0
        arg1[0x36].d = 0
        sub_140780e10(&arg1[0x2d], &arg2[0x2d])
        
        if (arg2[0x35] == 0)
            memmove(&arg1[0x34], &arg2[0x34], 4)
        
        int64_t rcx_7 = arg1[0x35]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        arg1[0x35] = arg2[0x35]
        arg2[0x35] = 0
        arg1[0x36].d = arg2[0x36].d
        arg2[0x36].d = 0
        arg1[0x37].b = 1

arg1[0x38].d = arg2[0x38].d
*(arg1 + 0x1c4) = *(arg2 + 0x1c4)
arg1[0x39].d = arg2[0x39].d
*(arg1 + 0x1cc) = *(arg2 + 0x1cc)
arg1[0x3a] = arg2[0x3a]
arg1[0x3b].d = arg2[0x3b].d
*(arg1 + 0x1dc) = *(arg2 + 0x1dc)
*(arg1 + 0x1dd) = *(arg2 + 0x1dd)
arg1[0x3c].d = arg2[0x3c].d
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
return arg1
