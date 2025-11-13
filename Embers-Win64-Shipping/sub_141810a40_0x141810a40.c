// 函数: sub_141810a40
// 地址: 0x141810a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = 1
int64_t* var_28 = nullptr
sub_1405a4f90(&var_28)
sub_140596d10(var_28, arg3)
int64_t rax = *arg1
void* var_18 = nullptr
int64_t var_10 = 0
int64_t result = (*(rax + 0xb8))(arg1, arg2, &var_28, &var_18, var_28, var_20, var_18, var_10)
int32_t i_2 = var_10.d
void* rbx_1 = var_18

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *(rbx_1 + 0x10)
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx_1 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int32_t i_3 = var_20.d
int64_t* rbx_2 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_28

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
