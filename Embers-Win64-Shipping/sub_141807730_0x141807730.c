// 函数: sub_141807730
// 地址: 0x141807730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6].d -= 1

if (arg1[6].d s<= 0)
    int64_t* rcx = *arg2
    int64_t* rax_2 = (*(*rcx + 0x90))(rcx)
    
    if (rax_2[1].d != 0)
        int64_t* rcx_1 = *rax_2
        
        if (rcx_1 != 0)
            int64_t r8 = *rcx_1
            (*(r8 + 0x38))(rcx_1, 0, r8)
            int64_t rcx_2 = *rax_2
            
            if (rcx_2 != 0)
                *rax_2 = sub_140a84c80(rcx_2, 0, 0)
            
            rax_2[1].d = 0
    
    int64_t rcx_3 = arg1[4]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = arg1[2]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *arg1
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    j_sub_140a74f90(arg1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg3 + 8)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t rdi_2 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (rdi_2 == 1)
    (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_2))
