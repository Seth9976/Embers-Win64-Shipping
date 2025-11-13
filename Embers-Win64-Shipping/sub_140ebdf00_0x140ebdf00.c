// 函数: sub_140ebdf00
// 地址: 0x140ebdf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t i = 0
arg2[1] = 0

if (*(arg1 + 0x3c0) s> 0)
    int64_t r12_1 = 0
    
    do
        int64_t rbx_1 = sx.q(arg2[1].d)
        int64_t* rsi_2 = *(arg1 + 0x3b8) + r12_1
        int32_t rax_1 = (rbx_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_3 = (rbx_1 << 4) + *arg2
        *rcx_3 = *rsi_2
        void* rax_3 = rsi_2[1]
        rcx_3[1] = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        int64_t* rcx_4 = *rsi_2
        int32_t rax_5 = (*(*rcx_4 + 0x240))(rcx_4)
        int32_t rax_7
        
        if (rax_5 != 1)
            int64_t* rcx_5 = *rsi_2
            rax_7 = (*(*rcx_5 + 0x240))(rcx_5)
        
        if (rax_5 == 1 || rax_7 == 2)
            int64_t* rsi_3 = rsi_2[1]
            
            if (rsi_3 != 0)
                rsi_3[1].d += 1
            
            void* var_38
            int64_t* rax_8 = sub_140ebdf00(*rsi_2, &var_38)
            int64_t rbx_2 = sx.q(rax_8[1].d)
            
            if (rbx_2.d != 0)
                int32_t rcx_7 = arg2[1].d
                int32_t rdx_2 = rcx_7 + rbx_2.d
                
                if (rdx_2 s> *(arg2 + 0xc))
                    sub_1405a5410(arg2, rdx_2)
                    rcx_7 = arg2[1].d
                
                memmove((sx.q(rcx_7) << 4) + *arg2, *rax_8, (rbx_2 << 4).d)
                rax_8[1].d = 0
                arg2[1].d += rbx_2.d
            
            int32_t j_2
            int32_t j_1 = j_2
            
            if (j_1 != 0)
                int64_t* rdi_3 = var_38 + 8
                int32_t j
                
                do
                    int64_t* rbx_3 = *rdi_3
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp4_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    rdi_3 = &rdi_3[2]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            void* rcx_14 = var_38
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp3_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_3 + 8))(rsi_3, 1)
        
        i += 1
        r12_1 += 0x10
    while (i s< *(arg1 + 0x3c0))

return arg2
