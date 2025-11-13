// 函数: sub_141ba7670
// 地址: 0x141ba7670
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
    int64_t r9_1 = *(arg1 + 0x10)
    int64_t var_28 = r14_1
    int64_t* var_20_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r9_1(rax, &var_28, zx.q(arg3))
    
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
