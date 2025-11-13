// 函数: sub_1411e8f30
// 地址: 0x1411e8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t rbx

if (arg4[1].d s<= 0 || *(**arg4 + 0x10) != 3)
    rbx.b = 0
else
    rbx.b = 1

if (sub_141191440((*U"1111")[sx.q(*(arg2 + 8))]) != 0 && rbx.b != 0)
    int64_t rax_4 = sx.q(*(arg2 + 8))
    arg_10.w = 0
    sub_141185140(arg1, std::_Get_future_error_what((*U"1111")[rax_4]), arg4, &arg_10, arg5)
    int64_t* var_68
    int64_t* arg_20
    int64_t* rax_9
    int64_t* rbx_1
    int32_t rdi_1
    
    if (sub_14139fc70(arg3) == 0)
        rax_9 = &var_68
        rdi_1 = 2
        rbx_1 = nullptr
    else
        rbx_1 = *sub_14139d440(arg3)
        arg_20 = rbx_1
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 0x30))(rbx_1)
        
        rax_9 = &arg_20
        rdi_1 = 1
    
    *rax_9 = 0
    
    if ((rdi_1.b & 2) != 0)
        int64_t* rcx_6 = var_68
        rdi_1 &= 0xfffffffd
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6)
    
    if ((rdi_1.b & 1) != 0)
        int64_t* rcx_7 = arg_20
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7)
    
    int64_t* rcx_8 = *(arg3 + 0x50)
    arg_20 = rcx_8
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x30))()
    
    int64_t* rcx_9 = *(arg3 + 0x40)
    var_68 = rcx_9
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x30))()
    
    int64_t* var_60 = rbx_1
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x30))(rbx_1)
    
    int64_t* rcx_11 = *(arg3 + 0x78)
    int64_t* var_58 = rcx_11
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x30))()
    
    void var_50
    sub_1411c9010(arg6, 
        sub_1411eab80(&var_50, arg1, arg2, arg4, &var_58, &var_60, &var_68, &arg_20, &arg6[2]))
    sub_1411c8c40(&var_50)
    sub_14119a200(arg1, std::_Get_future_error_what((*U"1111")[rax_4]), arg5)
    sub_1411054e0()
    
    if (*(arg3 + 0x1d8) != 0 && *(arg3 + 0xc0) != 0)
        sub_141193f80(arg1, arg4, arg6, arg3 + 0xc0)
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1)

return sub_1411c8f60(arg5) __tailcall
