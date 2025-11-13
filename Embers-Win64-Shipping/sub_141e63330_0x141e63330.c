// 函数: sub_141e63330
// 地址: 0x141e63330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (&arg1[0xc] != &var_18)
    arg1[0xc] = 0
    int64_t* rbx_1 = arg1[0xd]
    
    if (rbx_1 != 0)
        arg1[0xd] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

jump(*(*arg1 + 0x278))
