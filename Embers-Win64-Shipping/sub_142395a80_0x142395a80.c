// 函数: sub_142395a80
// 地址: 0x142395a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    int64_t* rbx = arg3[1]
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                jump(*(*rbx + 8))
    
    return 

uint64_t rax = sub_14238cd90(arg1, arg2)
uint64_t rbx_1 = rax

if (rax != 0)
    int64_t rcx_2 = *arg3
    int64_t* rdi_1 = arg3[1]
    int64_t arg_20 = rcx_2
    
    if (rdi_1 != 0)
        *(rdi_1 + 0xc) += 1
    
    int64_t* rax_3 = *(rax + 0x20)
    int64_t* rsi_1 = rax_3
    void* r12_3 = &rax_3[sx.q(*(rbx_1 + 0x28)) * 2]
    
    if (rax_3 != r12_3)
        while (true)
            int64_t* rbx_2 = rsi_1[1]
            int64_t r15_1 = 0
            
            if (rbx_2 != 0)
                int32_t rax_4 = rbx_2[1].d
                
                if (rax_4 == 0)
                    rbx_2 = nullptr
                else
                    rbx_2[1].d = rax_4 + 1
                    r15_1 = *rsi_1
            
            int64_t rbp_1 = 0
            
            if (rdi_1 != 0)
                int32_t rax_6 = rdi_1[1].d
                
                if (rax_6 != 0)
                    rbp_1 = rcx_2
                    rdi_1[1].d = rax_6
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp6_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (r15_1 == rbp_1)
                int32_t rsi_3 = ((rsi_1 - rax_3) s>> 4).d
                
                if (rsi_3 != 0xffffffff)
                    int64_t rbx_5 = sx.q(rsi_3) * 2
                    int64_t* rcx_10 = *(*(rax + 0x20) + (rbx_5 << 3) + 8)
                    
                    if (rcx_10 != 0)
                        int32_t temp7_1 = *(rcx_10 + 0xc)
                        *(rcx_10 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rcx_10 + 8))(rcx_10, 1)
                    
                    int32_t r9_2 = *(rax + 0x28)
                    int32_t rdx_4 = r9_2 - rsi_3 - 1
                    
                    if (rdx_4 s>= 1)
                        rdx_4 = 1
                    
                    if (rdx_4 != 0)
                        int64_t rax_14 = *(rax + 0x20)
                        memcpy(rax_14 + (rbx_5 << 3), (sx.q(r9_2 - rdx_4) << 4) + rax_14, 
                            rdx_4 << 4)
                        r9_2 = *(rax + 0x28)
                    
                    *(rax + 0x28) = r9_2 - 1
                    sub_1405a5010(rax + 0x20)
                    rbx_1 = rax
                    break
            else
                rcx_2 = arg_20
                rsi_1 = &rsi_1[2]
                
                if (rsi_1 != r12_3)
                    continue
            
            rbx_1 = rax
            break
    
    if (rdi_1 != 0)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)
    
    rax = sub_140dba5f0(rbx_1 + 0x10, arg3)
    
    if (rax.d s> 0)
        void* rcx_7 = *arg3
        *(rcx_7 + 0x5c) -= rax.d
        
        if (*(rbx_1 + 0x18) == 0)
            *(rbx_1 + 8) = 0

int64_t* rbx_3 = arg3[1]

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp3_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
