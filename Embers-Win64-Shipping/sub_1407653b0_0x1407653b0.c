// 函数: sub_1407653b0
// 地址: 0x1407653b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x528)
void* rdi = arg1

if (result != 0)
    int64_t rsi_1 = 0
    int32_t i = 0
    
    if (*(result + 0xa8) s> 0)
        int64_t* r12_1 = nullptr
        
        do
            int64_t rax = *(result + 0xa0)
            int64_t* rbx_1 = *(r12_1 + rax + 8)
            void* r14_1 = *(r12_1 + rax)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void* rax_2 = sub_1407faf10(sub_1407ef9c0(r14_1))
            
            if (rax_2 != 0)
                int64_t* var_38
                sub_1407efa00(rax_2, &var_38)
                int64_t* rdi_1 = var_38
                int32_t var_30
                void* rcx_3 = &rdi_1[sx.q(var_30)]
                uint64_t rbp_4 = (rcx_3 - rdi_1 + 7) u>> 3
                
                if (rdi_1 u> rcx_3)
                    rbp_4 = 0
                
                if (rbp_4 != 0)
                    do
                        int64_t* rcx_4 = *rdi_1
                        (*(*rcx_4 + 0x270))(rcx_4, r14_1, arg2)
                        rsi_1 += 1
                        rdi_1 = &rdi_1[1]
                    while (rsi_1 != rbp_4)
                    
                    rdi_1 = var_38
                
                if (rdi_1 != 0)
                    sub_140a74f90(rdi_1)
                
                rdi = arg1
                rsi_1 = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_7 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result = *(rdi + 0x528)
            i += 1
            r12_1 = &r12_1[2]
        while (i s< *(result + 0xa8))

return result
