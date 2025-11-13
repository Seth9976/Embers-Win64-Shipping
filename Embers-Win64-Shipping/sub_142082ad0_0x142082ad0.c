// 函数: sub_142082ad0
// 地址: 0x142082ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x94].d = 0

if (*(arg1 + 0x4a4) != 0)
    sub_1405a52a0(&arg1[0x93], 0)

arg1[0x97].d = 0

if (*(arg1 + 0x4bc) != 0)
    sub_1405dadb0(&arg1[0x96], 0)

arg1[0x9b].d = 0

if (*(arg1 + 0x4dc) != 0)
    sub_1405dadb0(&arg1[0x9a], 0)

int64_t* rdi = arg1[0xa2]

if (rdi != 0)
    arg1[0xa2] = 0
    sub_1419fd970(rdi)
    j_sub_140a74f90(rdi)

arg1[0x9c] = 0
sub_142082830(arg1)
int32_t i_1 = arg1[0xa0].d

if (i_1 != 0)
    int64_t* rdi_2 = arg1[0x9f] + 0x68
    int32_t i
    
    do
        int64_t rcx_6 = *rdi_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rdi_2 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0xa0].d = 0

if (*(arg1 + 0x504) != 0)
    sub_140888ba0(&arg1[0x9f], 0)

arg1[0xa1] = 0
*(arg1 + 0x50c) = 1
sub_141ee8490(arg1)
return sub_141df0440(arg1) __tailcall
