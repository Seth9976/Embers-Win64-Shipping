// 函数: sub_1407ad2f0
// 地址: 0x1407ad2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142dc0098
    rax[3] = sub_140a387b0()
    *rax = &data_142dc00f0

void var_18
void* result = &var_18

if (&var_18 != arg4)
    if (rax != 0)
        result = (*rax)[8](rax, arg4)
    else if (arg4[1].d != 0)
        void* rcx_1 = *arg4
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x38))(rcx_1, 0)
            void* rcx_2 = *arg4
            
            if (rcx_2 != 0)
                result = sub_140a84c80(rcx_2, 0, 0)
                *arg4 = result
            
            arg4[1].d = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    result = sub_140a84c80(rax, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
