// 函数: sub_141da28e0
// 地址: 0x141da28e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int32_t var_30 = 1
void** const var_38 = &data_1432388c8
int64_t var_28
__builtin_memset(&var_28, 0, 0x1c)
int64_t* var_18

if (arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        if ((*(*rcx + 0x28))(rcx) != 0)
            if (arg3[1].d != 0)
                rbx = *arg3
            
            (*(*rbx + 0x50))(rbx, &var_38)
        
        rbx = var_18

int32_t i_2
int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_18

if (rbx != 0)
    sub_140a74f90(rbx)

return sub_141d8e6b0(&var_28)
