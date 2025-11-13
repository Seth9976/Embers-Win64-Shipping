// 函数: sub_1427a6140
// 地址: 0x1427a6140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t result = (*(*arg1 + 0x2a0))(arg1, &var_18, arg2)
int32_t rbx = 0
int32_t var_10

if (var_10 s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = (*(*arg1 + 0x288))(arg1, *(rdi_1 + var_18))
        rbx += 1
        rdi_1 = &rdi_1[1]
    while (rbx s< var_10)

int64_t rcx_1 = var_18

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
