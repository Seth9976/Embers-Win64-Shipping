// 函数: sub_140effe60
// 地址: 0x140effe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            int64_t* rsi = nullptr
            void* rdi = nullptr
            
            if (rbx_1 == 0)
                goto label_140effeaf
            
            if (result == 0)
                rbx_1 = nullptr
            else
                result += 1
                rbx_1[1].d = result
            label_140effeaf:
                
                if (rbx_1 != 0)
                    rdi = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = result + 1
            
            if (*(rdi + 0x3b0) != 0)
                int64_t* rcx = *(rdi + 0x3a8)
                
                if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                    if (*(rdi + 0x3b0) != 0)
                        rsi = *(rdi + 0x3a8)
                    
                    *(rdi + 0x3a0) = (*(*rsi + 0x48))(rsi)
            
            rdi.b = *(rdi + 0x3a0) == 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t r8_1 = *rbx_1
                    (*r8_1)(rbx_1, arg2, r8_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        int64_t r8_2 = *rbx_1
                        (*(r8_2 + 8))(rbx_1, 1, r8_2)
            
            return zx.q(rdi.b)

result.b = 0
return result
