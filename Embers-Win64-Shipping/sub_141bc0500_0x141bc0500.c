// 函数: sub_141bc0500
// 地址: 0x141bc0500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rbp
rbp.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp.b == 0)
label_141bc06a7:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rbx_1 = *(arg1 + 0x3e0)
    int64_t* r14_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 != 0)
            rbx_1[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            r14_1 = *(arg1 + 0x3d8)
    
    void* rdx = arg1 + 0x3a8
    
    if (arg1 == 0)
        rdx = nullptr
    
    int64_t* rax_5 = (*(*r14_1 + 0x48))(r14_1, rdx)
    
    if (rax_5 == 0)
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_141bc06a7
    
    int64_t r8 = *r14_1
    (*(r8 + 0xb0))(r14_1, *rax_5, r8)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
