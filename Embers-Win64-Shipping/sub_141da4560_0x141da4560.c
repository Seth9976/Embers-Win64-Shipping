// 函数: sub_141da4560
// 地址: 0x141da4560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    rax[1] = arg2
    *rax = &data_142fe23d8
    rax[2] = arg3
    rax[4] = sub_140a387b0()
    *rax = &data_142fe2430

void var_18
void* result = &var_18

if (&var_18 != arg1)
    if (rax != 0)
        result = (*rax)[8](rax, arg1)
    else if (arg1[1].d != 0)
        void* rcx_1 = *arg1
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x38))(rcx_1, 0)
            void* rcx_2 = *arg1
            
            if (rcx_2 != 0)
                result = sub_140a84c80(rcx_2, 0, 0)
                *arg1 = result
            
            arg1[1].d = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    result = sub_140a84c80(rax, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
