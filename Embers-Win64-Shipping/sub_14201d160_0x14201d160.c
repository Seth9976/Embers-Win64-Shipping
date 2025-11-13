// 函数: sub_14201d160
// 地址: 0x14201d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* rbx_1 = *(arg1 + 0xf0)
    int64_t* rax = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_1 + 1
        
        rax = rbx_1
    
    if (rax != 0)
        int64_t* rcx = *(arg1 + 0xe8)
        
        if (rcx != 0)
            int64_t var_18 = *arg3
            void* rax_4 = arg3[1]
            void* var_10_1 = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            (*(*rcx + 0x28))(rcx, arg2, &var_18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
