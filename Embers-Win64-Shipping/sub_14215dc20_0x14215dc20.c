// 函数: sub_14215dc20
// 地址: 0x14215dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

if (&arg1[2] != &arg2[2])
    int64_t rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[2] = arg2[2]
    arg2[2] = 0
    arg1[3].d = arg2[3].d
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    arg2[3] = 0

arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)

if (&arg1[5] != &arg2[5])
    int64_t rcx_2 = arg1[5]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[5] = arg2[5]
    arg2[5] = 0
    arg1[6].d = arg2[6].d
    *(arg1 + 0x34) = *(arg2 + 0x34)
    arg2[6] = 0

if (&arg1[7] != &arg2[7])
    int64_t rcx_3 = arg1[7]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[7] = arg2[7]
    arg2[7] = 0
    arg1[8].d = arg2[8].d
    *(arg1 + 0x44) = *(arg2 + 0x44)
    arg2[8] = 0

if (&arg1[9] != &arg2[9])
    int64_t* rsi_3 = arg1[9]
    int32_t i_1 = arg1[0xa].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rsi_3
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rsi_3 = &rsi_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi_3 = arg1[9]
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    arg1[9] = arg2[9]
    arg2[9] = 0
    arg1[0xa].d = arg2[0xa].d
    *(arg1 + 0x54) = *(arg2 + 0x54)
    arg2[0xa] = 0

if (&arg1[0xb] != &arg2[0xb])
    int64_t rcx_6 = arg1[0xb]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[0xb] = arg2[0xb]
    arg2[0xb] = 0
    arg1[0xc].d = arg2[0xc].d
    *(arg1 + 0x64) = *(arg2 + 0x64)
    arg2[0xc] = 0

return arg1
