// 函数: sub_140f079d0
// 地址: 0x140f079d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t result

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            void* rdi = nullptr
            
            if (rbx_1 == 0)
                goto label_140f07a21
            
            if (result == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = result + 1
            label_140f07a21:
                
                if (rbx_1 != 0)
                    rdi = *(arg1 - 0x50)
            
            if (*(rdi + 0x1a0) != 0)
                int64_t* rcx_1 = *(rdi + 0x198)
                
                if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                    int64_t* rcx_2
                    
                    if (*(rdi + 0x1a0) == 0)
                        rcx_2 = nullptr
                    else
                        rcx_2 = *(rdi + 0x198)
                    
                    *(rdi + 0x190) = (*(*rcx_2 + 0x48))(rcx_2)
            
            char rbp = 1
            int64_t* rdi_1
            
            if (*(rdi + 0x190) == 0)
                rdi_1 = 0.q
                rsi.b = 1
            else
                rdi_1 = *(arg1 - 0x48)
                int64_t* rax_5 = rdi_1
                
                if (rdi_1 != 0)
                    int32_t rax_6 = rdi_1[1].d
                    
                    if (rax_6 == 0)
                        rdi_1 = nullptr
                        rax_5 = nullptr
                    else
                        rdi_1[1].d = rax_6 + 1
                        rax_5 = rdi_1
                
                if (rax_5 != 0)
                    rsi = *(arg1 - 0x50)
                
                rbp = 3
                
                if ((*(*rsi + 0x1b0))(rsi) == 0)
                    rsi.b = 1
                else
                    rsi.b = 0
            
            if ((rbp & 2) != 0 && rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t r8_1 = *rbx_1
                    (*r8_1)(rbx_1, arg2, r8_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        int64_t r8_2 = *rbx_1
                        (*(r8_2 + 8))(rbx_1, 1, r8_2)
            
            return zx.q(rsi.b)

result.b = 1
return result
