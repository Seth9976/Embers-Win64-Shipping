// 函数: sub_140692530
// 地址: 0x140692530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x62]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

arg1[0x5d] = &data_142d82a88
int32_t i_1 = arg1[0x5b].d
int64_t* rdi = arg1[0x5a]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *rdi
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x5b].d = 0

if (*(arg1 + 0x2dc) != 0)
    sub_140638c50(&arg1[0x5a], 0)

int64_t rcx_3 = arg1[0x5a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x58] = &data_142d82a88

if (arg1[0x57].d != 0)
    int64_t* rcx_4 = arg1[0x56]
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        int64_t rcx_5 = arg1[0x56]
        
        if (rcx_5 != 0)
            arg1[0x56] = sub_140a84c80(rcx_5, 0, 0)
        
        arg1[0x57].d = 0

int64_t rcx_6 = arg1[0x56]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return sub_140de0ac0(arg1) __tailcall
