// 函数: sub_141b84f20
// 地址: 0x141b84f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0x5b].d
int64_t* rbx = arg1[0x5a]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x5b].d = 0

if (*(arg1 + 0x2dc) != 0)
    sub_140638c50(&arg1[0x5a], 0)

int64_t rcx_2 = arg1[0x5a]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x58] = &data_142d82a88
sub_140745b20(&arg1[0x56])
return sub_140de0ac0(arg1) __tailcall
