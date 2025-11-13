// 函数: sub_140f80750
// 地址: 0x140f80750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140dc1680(arg1, arg2, arg3)

if (*(arg1 + 0x390) != 0)
    int64_t* rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            int64_t* rcx = nullptr
            
            if (rbx_1 != 0)
                if (result != 0)
                    rbx_1[1].d = result + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx = *(arg1 + 0x390)
            
            result = (*(*rcx + 0x70))(rcx, arg2, arg3)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, 1)

return result
