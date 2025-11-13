// 函数: sub_1409fc290
// 地址: 0x1409fc290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409fbc90(arg1, arg2)
sub_1409ac1f0(&arg1[7], &arg2[7])
sub_1409ac1f0(&arg1[0xe], &arg2[0xe])

if (&arg1[0x15] != &arg2[0x15])
    int64_t rcx_2 = arg1[0x15]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[0x15] = arg2[0x15]
    arg2[0x15] = 0
    arg1[0x16].d = arg2[0x16].d
    *(arg1 + 0xb4) = *(arg2 + 0xb4)
    arg2[0x16] = 0
    
    if (&arg1[0x17] != &arg2[0x17])
        if (arg2[0x19] == 0)
            memmove(&arg1[0x17], &arg2[0x17], 0x10)
        
        int64_t rcx_4 = arg1[0x19]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        arg1[0x19] = arg2[0x19]
        arg2[0x19] = 0
        arg1[0x1a].d = arg2[0x1a].d
        *(arg1 + 0xd4) = *(arg2 + 0xd4)
        arg2[0x1a] = 0
    
    arg1[0x1b].d = arg2[0x1b].d
    *(arg1 + 0xdc) = *(arg2 + 0xdc)
    *(arg2 + 0xdc) = 0
    arg2[0x1b].d = 0xffffffff

sub_1409fb720(&arg1[0x1c], &arg2[0x1c])
sub_1409fb9e0(&arg1[0x23], &arg2[0x23])
sub_1409fc200(&arg1[0x2a], &arg2[0x2a])
sub_1409fc200(&arg1[0x35], &arg2[0x35])
sub_1409fc200(&arg1[0x40], &arg2[0x40])
sub_1409fc200(&arg1[0x4b], &arg2[0x4b])
sub_1409fc200(&arg1[0x56], &arg2[0x56])
sub_1409fc200(&arg1[0x61], &arg2[0x61])
return arg1
