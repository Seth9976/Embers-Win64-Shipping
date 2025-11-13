// 函数: sub_140dd3250
// 地址: 0x140dd3250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]

if (rbx != 0)
    rbx[1].d += 1

void var_18

if (arg2 == &var_18)
label_140dd32ac:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *arg2 = *arg1
    int64_t* rsi_1 = arg2[1]
    
    if (rbx == rsi_1)
        goto label_140dd32ac
    
    arg2[1] = rbx
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

return arg1
