// 函数: sub_140f2d7d0
// 地址: 0x140f2d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* result
int64_t r8
result, r8 = sub_140f47ce0(arg1, &var_18)
int64_t rdi = *result
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result, r8 = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result, r8 = (*(*var_10 + 8))(var_10, 1)

if (rdi != 0)
    int64_t* rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 != 0)
            rbx_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rbx_1 = nullptr
    
    int64_t* rcx_2 = nullptr
    
    if (rbx_1 != 0)
        rcx_2 = *(arg1 + 0x390)
    
    r8.b = 1
    (*(*rcx_2 + 0x248))(rcx_2, 0, r8, 0)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = &var_18
    
    if (arg1 + 0x390 != &var_18)
        *(arg1 + 0x390) = 0
        int64_t* rcx_5 = *(arg1 + 0x398)
        *(arg1 + 0x398) = 0
        
        if (rcx_5 != 0)
            int32_t temp4_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                return (*(*rcx_5 + 8))(rcx_5, 1)

return result
