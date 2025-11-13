// 函数: sub_142335530
// 地址: 0x142335530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423db610(arg1, arg2, arg3)
int64_t result = arg1[0x47]
void* rcx = *(result + 8)

if (rcx != 0)
    result = sub_142413070(rcx)
    
    if (result.b != 0 && arg1[0x4b] != 0)
        int64_t* rbx_1 = arg1[0x4c]
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            
            if (result.d s> 0)
                int64_t* rcx_1 = nullptr
                
                if (rbx_1 != 0)
                    if (result.d != 0)
                        rbx_1[1].d = result.d + 1
                        result.b = 1
                    
                    if (result.b == 0)
                        rbx_1 = nullptr
                    
                    if (rbx_1 != 0)
                        rcx_1 = arg1[0x4b]
                
                result = sub_140e19ef0(rcx_1, 2)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
