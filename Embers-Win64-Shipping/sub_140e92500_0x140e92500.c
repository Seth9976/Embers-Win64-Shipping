// 函数: sub_140e92500
// 地址: 0x140e92500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (arg2[2].d == 0)
    rbx.b = 0
else
    int64_t* rcx = *(arg2 + 0x18)
    
    if (rcx == 0)
        rbx.b = 0
    else if ((*(*rcx + 0x28))(rcx).b == 0)
        rbx.b = 0
    else
        rbx.b = 1

uint64_t result

if (arg3[2].d == 0)
    result.b = 0
else
    int64_t* rcx_1 = *(arg3 + 0x18)
    
    if (rcx_1 == 0)
        result.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
        result.b = 0
    else
        result.b = 1

int64_t rdi
int64_t arg_8 = rdi

if (rbx.b != result.b)
label_140e925ad:
    
    if (arg2[2].d == 0)
        rdi.b = 0
    else
        int64_t* rcx_4 = *(arg2 + 0x18)
        
        if (rcx_4 == 0)
            rdi.b = 0
        else if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
            rdi.b = 0
        else
            rdi.b = 1
    
    if (arg3[2].d == 0)
        rbx.b = 0
    else
        int64_t* rcx_5 = *(arg3 + 0x18)
        
        if (rcx_5 == 0)
            rbx.b = 0
        else if ((*(*rcx_5 + 0x28))(rcx_5) == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    *arg2 = *arg3
    arg2[1].b = arg3[1].b
    sub_140692f90(arg2 + 0x18, arg3 + 0x18)
    char rdx_3 = arg4 | 4
    
    if (rdi.b == rbx.b)
        rdx_3 = arg4
    
    sub_140e19ef0(arg1, rdx_3)
    result.b = 1
else if (rbx.b == 0)
    if (arg2[1].b != arg3[1].b || (*arg3).d f!= *arg2 || (*(arg3 + 4)).d f!= *(arg2 + 4)
            || (*(arg3 + 8)).d f!= *(arg2 + 8) || (*(arg3 + 0xc)).d f!= *(arg2 + 0xc))
        goto label_140e925ad
    
    result.b = 0
else
    rbx = 0
    rdi = 0
    
    if (arg3[2].d != 0)
        int64_t* rcx_2 = *(arg3 + 0x18)
        void arg_10
        
        if (rcx_2 != 0)
            rdi = *(*(*rcx_2 + 0x30))(rcx_2, &arg_10)
    
    if (arg2[2].d != 0)
        int64_t* rcx_3 = *(arg2 + 0x18)
        void arg_18
        
        if (rcx_3 != 0)
            rbx = *(*(*rcx_3 + 0x30))(rcx_3, &arg_18)
    
    if (rbx != rdi)
        goto label_140e925ad
    
    result.b = 0

return result
