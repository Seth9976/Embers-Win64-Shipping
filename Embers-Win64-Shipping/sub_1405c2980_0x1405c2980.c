// 函数: sub_1405c2980
// 地址: 0x1405c2980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*arg1 != 0)
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            int64_t r8 = 0
            
            if (result != 0)
                rbx_1[1].d = result + 1
                result.b = 1
            
            if (result.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                r8 = *arg1
            
            char rax = sub_1405c2cf0(r8, arg2)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx = *rbx_1
                    (*rdx)(rbx_1, rdx)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return zx.q(rax)

result.b = 0
return result
