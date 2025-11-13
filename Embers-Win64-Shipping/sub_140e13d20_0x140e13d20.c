// 函数: sub_140e13d20
// 地址: 0x140e13d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            int32_t rsi = 0
            void* rbp = nullptr
            int64_t* rdi = rbx_1
            
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
                    rdi = nullptr
            
            if (rdi != 0)
                rbp = *(arg1 - 0x50)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t temp1_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi + 8))(rdi, 1)
            
            int64_t* rcx_2 = *(rbp + 0x910)
            char rax_5
            
            if (rcx_2 != 0)
                rax_5 = (*(*rcx_2 + 0x70))(rcx_2)
            
            if (rcx_2 == 0 || rax_5 == 0)
                int64_t* rcx_3 = *(rbp + 0x910)
                
                if (rcx_3 != 0 && (*(*rcx_3 + 0x78))(rcx_3) != 0)
                    rsi = 1
            else
                rsi = 2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t r8_1 = *rbx_1
                    (*r8_1)(rbx_1, arg2, r8_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        int64_t r8_2 = *rbx_1
                        (*(r8_2 + 8))(rbx_1, 1, r8_2)
            
            return zx.q(rsi)

return 0
