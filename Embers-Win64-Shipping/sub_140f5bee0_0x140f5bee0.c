// 函数: sub_140f5bee0
// 地址: 0x140f5bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x68].b = 0
void var_20

if (&arg1[0x69] != &var_20)
    arg1[0x69] = 0
    int64_t* rbx_1 = arg1[0x6a]
    
    if (rbx_1 != 0)
        arg1[0x6a] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

arg1[0x6b].w = 0x100
void var_28

if (&arg1[0x58] != &var_28)
    arg1[0x58] = 0
    int64_t* rcx_2 = arg1[0x59]
    arg1[0x59] = 0
    
    if (rcx_2 != 0)
        int32_t temp1_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)

if (&arg1[0x5a] != &var_28)
    arg1[0x5a] = 0
    int64_t* rbx_2 = arg1[0x5b]
    
    if (rbx_2 != 0)
        arg1[0x5b] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (&arg1[0x56] != &var_28)
    arg1[0x56] = 0
    int64_t* rcx_5 = arg1[0x57]
    arg1[0x57] = 0
    
    if (rcx_5 != 0)
        int32_t temp4_1 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)

sub_140de1b90(*(arg1[0x71] + 8) + 0x10, &data_143e244b0)
return sub_140e19ef0(arg1, 0xc) __tailcall
