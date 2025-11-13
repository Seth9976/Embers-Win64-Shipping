// 函数: sub_1426d71d0
// 地址: 0x1426d71d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x70)

if (rdx != 0 && sub_1426bb290(arg2, rdx) != 0)
    int64_t rax_2 = sx.q(*(arg2 + 0x118))
    
    if (rax_2.d s> 0)
        void* rdi = *(arg2 + 0x110)
        int64_t (* var_18)(int64_t* arg1) = sub_1426cb040
        int32_t var_10 = 0
        int64_t* rdi_2 = rdi - 0x10 + rax_2 * 0x58
        void*** rax_3 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_3 != 0)
            *rax_3 = &data_143084528
            sub_140d3a3a0(&rax_3[1], arg1)
            *(rax_3 + 0x10) = var_18.o
            rax_3[5] = sub_140a387b0()
            *rax_3 = &data_143084580
        
        if (&var_18 != rdi_2)
            if (rax_3 != 0)
                (*rax_3)[8](rax_3, rdi_2)
            else if (rdi_2[1].d != 0)
                int64_t* rcx_4 = *rdi_2
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x38))(rcx_4, 0)
                    int64_t rcx_5 = *rdi_2
                    
                    if (rcx_5 != 0)
                        *rdi_2 = sub_140a84c80(rcx_5, 0, 0)
                    
                    rdi_2[1].d = 0
        
        if (rax_3 != 0)
            (*rax_3)[7](rax_3, 0)
            int64_t rax_9 = sub_140a84c80(rax_3, 0, 0)
            
            if (rax_9 != 0)
                sub_140a74f90(rax_9)
        
        return 3

return 1
