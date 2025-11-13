// 函数: sub_1405edf80
// 地址: 0x1405edf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
*arg1 = &data_142d5ecd0
arg1[1] = &data_142d5ed98
arg1[2] = &data_142d5edb0
int64_t* rcx_1 = &arg1[7][1]

if ((*(*rcx_1 + 0x18))(rcx_1) != 0)
    sub_1405ffa80(arg1[7])
    arg1[3] = 0
    void var_20
    
    if (&arg1[5] != &var_20)
        int64_t rcx_3 = arg1[5]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        arg1[5] = 0
        arg1[6] = 0
    
    sub_1405ffd50(arg1[8])
    int64_t* rcx_5 = arg1[4]
    (**rcx_5)(rcx_5, 9)
    int64_t* rcx_6 = arg1[4]
    (**rcx_6)(rcx_6, 1)

int64_t* rdi_2 = arg1[9]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))

int64_t* rcx_9 = arg1[7]

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

int64_t rcx_10 = arg1[5]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[2] = &data_142d57548
arg1[1] = &data_142d573a0
*arg1 = &data_142d57418

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
