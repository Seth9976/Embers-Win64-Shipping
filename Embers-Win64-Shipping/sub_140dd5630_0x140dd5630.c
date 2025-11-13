// 函数: sub_140dd5630
// 地址: 0x140dd5630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (arg2[0xe] == 0)
    rbx.b = 0
else
    int64_t* rcx = *(arg2 + 0x30)
    
    if (rcx == 0)
        rbx.b = 0
    else if ((*(*rcx + 0x28))(rcx).b == 0)
        rbx.b = 0
    else
        rbx.b = 1

uint64_t result

if (*(arg3 + 0x38) == 0)
    result.b = 0
else
    int64_t* rcx_1 = arg3[3].q
    
    if (rcx_1 == 0)
        result.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
        result.b = 0
    else
        result.b = 1

int64_t rdi
int64_t arg_8 = rdi

if (rbx.b != result.b)
label_140dd56df:
    
    if (arg2[0xe] == 0)
        rdi.b = 0
    else
        int64_t* rcx_4 = *(arg2 + 0x30)
        
        if (rcx_4 == 0)
            rdi.b = 0
        else if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
            rdi.b = 0
        else
            rdi.b = 1
    
    if (*(arg3 + 0x38) == 0)
        rbx.b = 0
    else
        int64_t* rcx_6 = arg3[3].q
        
        if (rcx_6 == 0)
            rbx.b = 0
        else if ((*(*rcx_6 + 0x28))(rcx_6) == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    sub_140693390(arg2, arg3)
    arg2[0xa].b = *(arg3 + 0x28)
    sub_140692f90(&arg2[0xc], &arg3[3])
    char rdx_5 = arg4 | 4
    
    if (rdi.b == rbx.b)
        rdx_5 = arg4
    
    sub_140e19ef0(arg1, rdx_5)
    result.b = 1
else if (rbx.b == 0)
    if (arg2[0xa].b != *(arg3 + 0x28))
        goto label_140dd56df
    
    if (sub_140de1a50(arg2, arg3).b == 0)
        goto label_140dd56df
    
    result.b = 0
else
    rbx = 0
    rdi = 0
    
    if (*(arg3 + 0x38) != 0)
        int64_t* rcx_2 = arg3[3].q
        void arg_10
        
        if (rcx_2 != 0)
            rdi = *(*(*rcx_2 + 0x30))(rcx_2, &arg_10)
    
    if (arg2[0xe] != 0)
        int64_t* rcx_3 = *(arg2 + 0x30)
        void arg_18
        
        if (rcx_3 != 0)
            rbx = *(*(*rcx_3 + 0x30))(rcx_3, &arg_18)
    
    if (rbx != rdi)
        goto label_140dd56df
    
    result.b = 0

return result
