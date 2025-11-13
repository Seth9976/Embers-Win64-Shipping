// 函数: sub_142371d80
// 地址: 0x142371d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int32_t rbx_1
int64_t* rdi_1

if (rcx == 0)
    rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        rbx_1 = (rcx - 1).d
    label_142371f58:
        rdi_1[1].d += rbx_1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_2 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) += rbx_1
            
            if (rbx_2 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))
    
    return 

rbx_1 = -1

if (sub_140d3c6e0(rcx + 0x4c) != arg1)
    int64_t* rdi_2 = arg2[1]
    void* rbp_1 = *arg2
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    if (rbp_1 != 0)
        void* rax_2 = sub_140d3c6e0(rbp_1 + 0x4c)
        
        if (rax_2 != 0)
            void* var_28 = rbp_1
            int64_t* var_20_1 = rdi_2
            
            if (rdi_2 != 0)
                *(rdi_2 + 0xc) += 1
            
            sub_141c8c380(rax_2 + 0x28, &var_28)
            
            if (rdi_2 != 0)
                int32_t rax_3 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        *(rbp_1 + 0x4c) = 0xffffffff
        *(rbp_1 + 0x50) = 0
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rax_7 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    sub_140d3a3a0(*arg2 + 0x4c, arg1)
    
    if (sub_140d3e110(*arg2 + 0x4c) != 0)
        if (arg1[7].b == 0)
            arg1[7].b = 1
            (*(*arg1 + 0x290))(arg1)
            (*(*arg1 + 0x298))(arg1)
        
        int64_t* rdi_3 = arg2[1]
        int64_t r15_1 = *arg2
        int64_t var_38 = r15_1
        int64_t* var_30_1 = rdi_3
        
        if (rdi_3 != 0)
            *(rdi_3 + 0xc) += 1
            r15_1 = var_38
        
        if (sub_140901d20(&arg1[5], &var_38) == 0xffffffff)
            int64_t rbp_2 = sx.q(arg1[6].d)
            int32_t rax_13 = (rbp_2 + 1).d
            arg1[6].d = rax_13
            
            if (rax_13 s> *(arg1 + 0x34))
                sub_1405a4f90(&arg1[5])
            
            int64_t* rax_16 = (rbp_2 << 4) + arg1[5]
            *rax_16 = r15_1
            rax_16[1] = rdi_3
        else if (rdi_3 != 0)
            int32_t rax_17 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)

void* rcx_16 = *arg2
*(rcx_16 + 0x48)
*(rcx_16 + 0x48) = 1
rdi_1 = arg2[1]

if (rdi_1 != 0)
    goto label_142371f58
