// 函数: sub_140ee45a0
// 地址: 0x140ee45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x83]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[0x81]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_4 = arg1[0x7d]

if (rcx_4 != 0)
    int32_t temp3_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rcx_5 = arg1[0x78]

if (rcx_5 != 0)
    int32_t temp5_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

sub_140745b20(&arg1[0x75])
return sub_140f24e90(arg1) __tailcall
