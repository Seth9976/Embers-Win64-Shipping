// 函数: sub_1411c92d0
// 地址: 0x1411c92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
arg1[0xf] = arg2[0xf]
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
sub_1405d1600(arg1 + 0x80, arg2 + 0x80)

if (&arg1[0x22] != &arg2[0x22])
    int64_t* rcx_1 = *(arg1 + 0x88)
    *(arg1 + 0x88) = *(arg2 + 0x88)
    *(arg2 + 0x88) = 0
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1, &arg2[0x22], &arg1[0x22])

if (&arg1[0x24] != &arg2[0x24])
    int64_t* rcx_2 = *(arg1 + 0x90)
    *(arg1 + 0x90) = *(arg2 + 0x90)
    *(arg2 + 0x90) = 0
    
    if (rcx_2 != 0)
        sub_1411e8d60(rcx_2)

sub_1405d1600(&arg1[0x26], &arg2[0x26])

if (&arg1[0x28] != &arg2[0x28])
    int64_t* rcx_4 = *(arg1 + 0xa0)
    *(arg1 + 0xa0) = *(arg2 + 0xa0)
    *(arg2 + 0xa0) = 0
    
    if (rcx_4 != 0)
        sub_1411e8d60(rcx_4)

sub_1405d1600(&arg1[0x2a], &arg2[0x2a])

if (&arg1[0x2c] != &arg2[0x2c])
    int64_t* rcx_6 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = *(arg2 + 0xb0)
    *(arg2 + 0xb0) = 0
    
    if (rcx_6 != 0)
        sub_1411e8d60(rcx_6)

sub_1405d1600(&arg1[0x2e], &arg2[0x2e])

if (&arg1[0x30] != &arg2[0x30])
    int64_t* rcx_8 = *(arg1 + 0xc0)
    *(arg1 + 0xc0) = *(arg2 + 0xc0)
    *(arg2 + 0xc0) = 0
    
    if (rcx_8 != 0)
        sub_1411e8d60(rcx_8)

if (&arg1[0x32] != &arg2[0x32])
    int64_t* rcx_9 = *(arg1 + 0xc8)
    *(arg1 + 0xc8) = *(arg2 + 0xc8)
    *(arg2 + 0xc8) = 0
    
    if (rcx_9 != 0)
        sub_1411e8d60(rcx_9)

if (&arg1[0x34] != &arg2[0x34])
    int64_t* rcx_10 = *(arg1 + 0xd0)
    *(arg1 + 0xd0) = *(arg2 + 0xd0)
    *(arg2 + 0xd0) = 0
    
    if (rcx_10 != 0)
        sub_1411e8d60(rcx_10)

return arg1
