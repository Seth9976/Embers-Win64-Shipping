// 函数: sub_1420d04e0
// 地址: 0x1420d04e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_30 = 1
int32_t* var_28
__builtin_memset(&var_28, 0, 0x20)
int32_t var_38 = 1
int128_t* var_18
int32_t rax_1 = sub_1420d02a0(&var_28, &var_18, arg2, arg3, arg4, arg5)

if (rax_1 == 2)
    int32_t* rdi_2 = var_28
    int128_t* rcx_4 = var_18
    *arg1 = *rdi_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    sub_140a74f90(rdi_2)
else
    if (rax_1 == 0xa)
        int128_t* rdi_1 = var_18
        sub_140ae16d0(rdi_1, arg1, 1)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
    else
        int128_t* rcx_1 = var_18
        *arg1 = data_14399f638
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
    
    int32_t* rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg1
