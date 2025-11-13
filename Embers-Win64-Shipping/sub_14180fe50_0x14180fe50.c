// 函数: sub_14180fe50
// 地址: 0x14180fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t i_2 = 0
int64_t result = (*(*arg1 + 0xa0))(arg1, arg2, &var_18)
int32_t i_1 = i_2
void* rbx = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            result = sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        rbx += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_18

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
