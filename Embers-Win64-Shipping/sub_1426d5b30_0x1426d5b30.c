// 函数: sub_1426d5b30
// 地址: 0x1426d5b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1 + 8)
int64_t* rbx = arg2[1]

if (result == 0)
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    result.b = 0
else
    int64_t r14_1 = *arg2
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t rax = sub_140d3c6e0(arg1 + 8)
    int64_t var_38 = r14_1
    int64_t* var_30_1 = rbx
    int96_t zmm0 = (*(arg1 + 0x10)).12
    
    if (rbx != 0)
        rbx[1].d += 1
    
    zmm0.q(sx.q(zmm0:8.d) + rax, &var_38)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result.b = 1

return result
