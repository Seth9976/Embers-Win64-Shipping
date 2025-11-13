// 函数: sub_141bdc5b0
// 地址: 0x141bdc5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141bd9110(arg1 + 0x148, arg2)
int64_t* rcx_1 = *(arg1 + 0x138)

if (rcx_1 != 0)
    result = *(arg1 + 0x108)
    int64_t* rbx_1
    
    if (result u<= 1)
        rbx_1 = *(arg1 + 0x140)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result = sub_140de8fc0(rcx_1)
    label_141bdc628:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    jump(*(*rbx_1 + 8))
    else
        if (result == 2)
            rbx_1 = *(arg1 + 0x140)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            result = sub_140f2d440(rcx_1)
            goto label_141bdc628
        
        if (result == 3)
            rbx_1 = *(arg1 + 0x140)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            result = sub_140de8fc0(rcx_1)
            goto label_141bdc628

return result
