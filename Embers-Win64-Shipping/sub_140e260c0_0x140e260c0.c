// 函数: sub_140e260c0
// 地址: 0x140e260c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x18) != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            int64_t* rdx = nullptr
            
            if (rbx_1 != 0)
                if (result != 0)
                    rbx_1[1].d = result + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rdx = *(arg1 + 0x18)
            
            char rax_1 = (*(*rdx + 0x198))(rdx)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return zx.q(rax_1)

result.b = 0
return result
