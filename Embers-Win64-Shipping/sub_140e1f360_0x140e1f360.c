// 函数: sub_140e1f360
// 地址: 0x140e1f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) != 0 && sub_140e1a1f0(*arg2, arg5) != 0)
    void var_58
    int64_t* rax_1 = sub_140e11740(&var_58, arg2)
    int64_t var_68 = *rax_1
    void* rcx_3 = rax_1[1]
    void* var_60_1 = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    void var_48
    int32_t* rax_2 = sub_140d70490(&var_48, arg6)
    void var_30
    sub_140e20b70(arg1, &var_68, arg3, sub_140d70490(&var_30, arg4), rax_2)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp3_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rcx_11 = *(arg4 + 8)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg6 + 8)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)
