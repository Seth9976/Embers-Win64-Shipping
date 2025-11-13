// 函数: sub_141da68b0
// 地址: 0x141da68b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg2

if (r15 == 0)
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q((r15 + 1).d))
    
    int64_t* rdi_1 = arg3[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_2 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))
    
    return 

int64_t* rbx_3

if (*arg3 != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t* rdi_2 = arg3[1]
    int64_t zmm0 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int64_t var_48 = *arg3
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int64_t var_38_1 = zmm0
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rax_8 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t var_58
    int64_t var_68 = (**r15)(r15, &var_58)
    int64_t* var_60_1 = &var_48
    void arg_10
    sub_141da49c0(arg1 + 0x360, &arg_10, &var_68, nullptr)
    int64_t rcx_9 = var_58
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rbx_4 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx_4 == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_4))
    
    sub_141da6d60(arg1)
    rbx_3 = arg2[1]
else
    rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_140669db0(arg3)
