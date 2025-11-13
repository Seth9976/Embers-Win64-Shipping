// 函数: sub_140ec8a90
// 地址: 0x140ec8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140ec00f0()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143e29fe0)

int64_t* rbx_2

if (r14 == 0 || rax_1 == 0)
    rbx_2 = nullptr
label_140ec8c2b:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    rbx_2 = *(arg4 + 0x78)
    void* r12_1 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (r12_1 == 0)
        goto label_140ec8c2b
    
    int64_t* r14_1 = *(arg1 + 0x2b0)
    int64_t var_58 = 0
    int64_t* var_50_1 = r14_1
    
    if (r14_1 != 0)
        int32_t rax_2 = r14_1[1].d
        
        if (rax_2 != 0)
            r14_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            int64_t var_50_2 = 0
            r14_1 = nullptr
        
        if (r14_1 != 0)
            var_58 = *(arg1 + 0x2a8)
    
    void var_48
    sub_140ebe6a0(&var_48, &var_58, arg3, arg4)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp4_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    sub_140ed9f90(r12_1, &var_48, arg4)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    int64_t* var_40
    
    if (var_40 != 0)
        int32_t temp3_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
