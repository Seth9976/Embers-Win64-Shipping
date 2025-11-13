// 函数: sub_140e152d0
// 地址: 0x140e152d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0

if (*(arg1 + 0x30) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rbx_1 = *(arg1 + 0x38)
    
    if (rbx_1 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            *arg2 = 0
            arg2[1] = 0
        else
            void* r8_1 = nullptr
            int64_t* rdi_1 = rbx_1
            
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
                    rdi_1 = nullptr
            
            if (rdi_1 != 0)
                r8_1 = *(arg1 + 0x30)
            
            int64_t rdx = sx.q(*(arg1 + 0x60))
            
            if (rdx.d s>= 0 && rdx.d s< *(r8_1 + 0x48) - 1)
                int64_t* rdx_3 = ((rdx + 1) << 4) + *(r8_1 + 0x40)
                int64_t* rcx = rdx_3[1]
                int64_t* rdi_2 = rcx
                
                if (rcx != 0)
                    int32_t rax_4 = rcx[1].d
                    
                    if (rax_4 != 0)
                        rcx[1].d = rax_4 + 1
                        rax_4.b = 1
                    
                    if (rax_4.b == 0)
                        rcx = nullptr
                        rdi_2 = nullptr
                
                if (rdi_2 != 0)
                    rsi = *rdx_3
                
                *arg2 = rsi
                arg2[1] = rcx
                
                if (rcx != 0)
                    rcx[1].d += 1
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp4_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            else if (rdi_1 == 0)
                *arg2 = 0
                arg2[1] = 0
            else
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                *arg2 = 0
                arg2[1] = 0

return arg2
