// 函数: sub_140e1a7d0
// 地址: 0x140e1a7d0
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
                goto label_140e1a81c
            
            if (result == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = result + 1
            label_140e1a81c:
                
                if (rbx_1 != 0)
                    rdi = *(arg1 + 0x18)
            
            if (*(rdi + 0x1a0) != 0)
                int64_t* rcx = *(rdi + 0x198)
                
                if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                    if (*(rdi + 0x1a0) != 0)
                        rsi = *(rdi + 0x198)
                    
                    *(rdi + 0x190) = (*(*rsi + 0x48))(rsi)
            
            char rdi_1 = *(rdi + 0x190)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_1 = *rbx_1
                    (*rdx_1)(rbx_1, rdx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_1 = *rbx_1
                        (*(r8_1 + 8))(rbx_1, 1, r8_1)
            
            return zx.q(rdi_1)

result.b = 0
return result
