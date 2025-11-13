// 函数: sub_141fa61e0
// 地址: 0x141fa61e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x34].b != 0)
    arg1[0x34].b = 0
    int64_t* rbx_1 = arg1[0x31]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1[0x27]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

arg1[0x15] = &data_143283728
*arg1 = &data_143283728
return &data_143283728
