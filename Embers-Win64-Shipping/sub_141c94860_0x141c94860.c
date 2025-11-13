// 函数: sub_141c94860
// 地址: 0x141c94860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432100a0
int64_t* rcx = arg1[0x12]

if (rcx != 0)
    int64_t arg_8 = (*(*rcx + 0x20))(rcx)
    int512_t zmm1 = sub_141cb3ac0(arg1, arg2)
    int64_t* rcx_2 = arg1[0x12]
    int64_t rdi_1
    
    if (rcx_2 == 0)
        rdi_1 = 0
    else
        int64_t rax_4 = (*(*rcx_2 + 0x20))(rcx_2)
        int64_t* rcx_3 = arg1[0x12]
        rdi_1 = rax_4
        
        if (rcx_3 != 0)
            int64_t r8_1 = *rcx_3
            (*(r8_1 + 0x178))(rcx_3, arg1[0x22], r8_1)
    
    int64_t* rcx_4 = arg1[1]
    int64_t* rdx_2 = *rcx_4
    
    if (&rdx_2[1] u> rcx_4[1])
        int64_t* rdx_3 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg1, rdx_3, zmm1)
        else
            (*arg1)[0x2a](arg1, rdx_3, 8)
    else
        arg_8 = *rdx_2
        *rcx_4 += 8
    
    int64_t* rcx_6 = arg1[0x12]
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x178))(rcx_6, rdi_1)

int64_t* rcx_7 = arg1[0x13]

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)
    arg1[0x13] = 0
    sub_140a464c0()
    int16_t* const rdx_5 = &data_142d40450
    int16_t* const r8_2
    
    if (arg1[0x17].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = arg1[0x16]
    
    if (arg1[0x15].d != 0)
        rdx_5 = arg1[0x14]
    
    int64_t r9_1
    r9_1.b = 1
    (*(data_14399ea08 + 0x40))(&data_14399ea08, rdx_5, r8_2, r9_1, 0, 0, 0)

sub_1405ae180(&arg1[0x18])
int64_t rcx_9 = arg1[0x16]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x14]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return sub_140b4cb40(arg1) __tailcall
