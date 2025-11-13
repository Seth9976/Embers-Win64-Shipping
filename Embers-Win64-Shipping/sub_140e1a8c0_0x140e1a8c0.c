// 函数: sub_140e1a8c0
// 地址: 0x140e1a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x18) != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            int64_t* rsi = nullptr
            void* rdi = nullptr
            
            if (rbx_1 == 0)
                goto label_140e1a90c
            
            if (result == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = result + 1
            label_140e1a90c:
                
                if (rbx_1 != 0)
                    rdi = *(arg1 + 0x18)
            
            if (*(rdi + 0x1b8) != 0)
                int64_t* rcx = *(rdi + 0x1b0)
                
                if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                    if (*(rdi + 0x1b8) != 0)
                        rsi = *(rdi + 0x1b0)
                    
                    char arg_8
                    (*(*rsi + 0x48))(rsi, &arg_8)
                    *(rdi + 0x1a8) = arg_8
            
            rdi.b = (*(rdi + 0x1a8) & 0x19) == 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_2 = *rbx_1
                    (*rdx_2)(rbx_1, rdx_2)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_1 = *rbx_1
                        (*(r8_1 + 8))(rbx_1, 1, r8_1)
            
            return zx.q(rdi.b)

result.b = 1
return result
