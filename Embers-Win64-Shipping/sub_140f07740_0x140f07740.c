// 函数: sub_140f07740
// 地址: 0x140f07740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 - 0x58) != 0)
    int64_t* rbx_1 = *(arg1 - 0x50)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            void* rdx = nullptr
            
            if (rbx_1 == 0)
                goto label_140f07788
            
            if (result == 0)
                rbx_1 = nullptr
            else
                result += 1
                rbx_1[1].d = result
            label_140f07788:
                
                if (rbx_1 != 0)
                    rdx = *(arg1 - 0x58)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = result + 1
            
            int64_t* rcx_1 = *(rdx + 0x4d0) + 0x2a8
            char rax_2 = (*(*rcx_1 + 8))(rcx_1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return zx.q(rax_2)

result.b = 1
return result
