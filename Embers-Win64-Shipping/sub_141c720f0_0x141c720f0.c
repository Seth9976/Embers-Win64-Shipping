// 函数: sub_141c720f0
// 地址: 0x141c720f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** result = j_sub_140a82f30(0x50)
int64_t* result_1 = result

if (result != 0)
    *result_1 = 0
    result_1[2] = *arg2
    result_1[4] = arg2[2]
    arg2[2] = 0
    *(result_1 + 0x30) = *(arg2 + 0x20)
    arg3 = *(arg2 + 0x30)
    *(result_1 + 0x40) = arg3
    
    if (result_1[2] != 0)
        *arg2 = 0
    
    result = *(arg1 + 0x2d0)
    *(arg1 + 0x2d0) = result_1
    *result = result_1

if (*arg2 == 0)
    return result

void* rax = arg2[2]
void* rcx_2 = &arg2[4]

if (rax != 0)
    rcx_2 = rax

return (*(*rcx_2 + 0x10))(rcx_2, arg3)
