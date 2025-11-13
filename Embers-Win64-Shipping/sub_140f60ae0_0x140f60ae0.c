// 函数: sub_140f60ae0
// 地址: 0x140f60ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t result

if (rax == 0)
    result = sub_140f2d5b0(*(arg1 + 0x450))
else
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_18 = rax
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_140f60e50(*(arg1 + 0x450), &var_18, 3)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
