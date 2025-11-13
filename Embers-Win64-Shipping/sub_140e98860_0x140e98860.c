// 函数: sub_140e98860
// 地址: 0x140e98860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142eda098
int64_t* rcx = arg1[0x11]

if (rcx != 0)
    int32_t temp1_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx + 8))(rcx, 1)

int32_t result = sub_140596d80(&arg1[0xe])
int64_t* rbx = arg1[0xb]

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        (**rbx)(rbx)
        result = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[8]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

int64_t* rcx_6 = arg1[2]

if (rcx_6 != 0)
    int32_t temp2_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp2_1 == 1)
        return (*(*rcx_6 + 8))(rcx_6, 1)

return result
