// 函数: sub_140683970
// 地址: 0x140683970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
int64_t* var_18
int64_t* result = sub_140682070(arg3, sub_14066e110(arg1, &var_18))
int32_t i_2
int32_t i_1 = i_2
int64_t* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
