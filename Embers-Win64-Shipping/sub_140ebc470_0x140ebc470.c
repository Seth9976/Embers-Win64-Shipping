// 函数: sub_140ebc470
// 地址: 0x140ebc470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* r14 = *(arg1 + 0x10)
int64_t* rax = r14

if (r14 != 0)
    int32_t rax_1 = r14[1].d
    
    if (rax_1 == 0)
        r14 = nullptr
        rax = nullptr
    else
        r14[1].d = rax_1 + 1
        rax = r14

if (rax != 0)
    int64_t* r15_1 = *(arg1 + 8)
    
    if (r15_1 != 0)
        void* var_28
        (*(*r15_1 + 0xc8))(r15_1, &var_28)
        void* rdi_1 = var_28
        int32_t i_2
        int32_t i_1 = i_2
        void* r12_3 = (sx.q(i_1) << 4) + rdi_1
        
        if (rdi_1 != r12_3)
            do
                int64_t var_38
                (*(*r15_1 + 0xd0))(r15_1, &var_38, rdi_1)
                int64_t rdx_2 = var_38
                
                if (rdx_2 == 0)
                    goto label_140ebc574
                
                int64_t rbx_1 = sx.q(arg2[1].d)
                int32_t rax_5 = (rbx_1 + 1).d
                arg2[1].d = rax_5
                
                if (rax_5 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                    rdx_2 = var_38
                
                int64_t* rcx_5 = (rbx_1 << 4) + *arg2
                *rcx_5 = rdx_2
                int64_t* var_30
                rcx_5[1] = var_30
                
                if (var_30 != 0)
                    var_30[1].d += 1
                label_140ebc574:
                    
                    if (var_30 != 0)
                        var_30[1].d -= 1
                        
                        if (var_30[1].d == 1)
                            (**var_30)(var_30)
                            int32_t temp6_1 = *(var_30 + 0xc)
                            *(var_30 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*var_30 + 8))(var_30, 1)
                
                rdi_1 += 0x10
            while (rdi_1 != r12_3)
            
            i_1 = i_2
            rdi_1 = var_28
        
        if (i_1 != 0)
            int64_t* rdi_2 = rdi_1 + 8
            int32_t i
            
            do
                int64_t* rbx_3 = *rdi_2
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp5_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rdi_2 = &rdi_2[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdi_1 = var_28
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp1_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*r14 + 8))(r14, 1)

return arg2
