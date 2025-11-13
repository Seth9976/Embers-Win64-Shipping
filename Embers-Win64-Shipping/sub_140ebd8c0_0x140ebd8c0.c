// 函数: sub_140ebd8c0
// 地址: 0x140ebd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t i = 0

if (*(arg1 + 0x3c0) s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t* rcx = *(r15_1 + *(arg1 + 0x3b8))
        void* var_38
        int64_t* rax_3 = (*(*rcx + 0x260))(rcx, &var_38)
        int64_t rbx_1 = sx.q(rax_3[1].d)
        
        if (rbx_1.d != 0)
            int32_t rcx_1 = arg2[1].d
            int32_t rdx_1 = rcx_1 + rbx_1.d
            
            if (rdx_1 s> *(arg2 + 0xc))
                sub_1405a5410(arg2, rdx_1)
                rcx_1 = arg2[1].d
            
            memmove((sx.q(rcx_1) << 4) + *arg2, *rax_3, (rbx_1 << 4).d)
            rax_3[1].d = 0
            arg2[1].d += rbx_1.d
        
        int32_t j_2
        int32_t j_1 = j_2
        
        if (j_1 != 0)
            int64_t* rdi_3 = var_38 + 8
            int32_t j
            
            do
                int64_t* rbx_2 = *rdi_3
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_3 = &rdi_3[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        void* rcx_8 = var_38
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        i += 1
        r15_1 = &r15_1[2]
    while (i s< *(arg1 + 0x3c0))

return arg2
