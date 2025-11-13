// 函数: sub_140e215b0
// 地址: 0x140e215b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t result

if ((*arg1[0x55])(&arg1[0x55]) s<= 0)
label_140e2161e:
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result.b = 0
else
    int64_t rdi_1 = 0
    
    while (*(*(arg1[0x57] + rdi_1) + 0x10) != *arg2)
        rbx += 1
        rdi_1 += 8
        
        if (rbx s>= (*arg1[0x55])(&arg1[0x55]))
            goto label_140e2161e
    
    sub_140e21010(&arg1[0x55], rbx)
    sub_140e19ef0(arg1, 1)
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 1

return result
