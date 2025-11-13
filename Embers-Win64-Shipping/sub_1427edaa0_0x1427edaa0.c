// 函数: sub_1427edaa0
// 地址: 0x1427edaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)
int64_t var_18
int64_t var_10
int64_t result = (*(*rcx + 0x30))(rcx, &var_18, &var_10)
float zmm1
float zmm0

if (var_18 != 0)
    if (var_10 != 0)
        return result
    
    *(arg1 + 0x3c) = *(arg1 + 0x3c) - *arg2
    *(arg1 + 0x40) = *(arg1 + 0x40) - arg2[1]
    *(arg1 + 0x44) = *(arg1 + 0x44) - arg2[2]
    void* rax_2 = *(arg1 + 0x50)
    zmm1 = *(rax_2 + 0x40)
    *(rax_2 + 0x3c) = *(rax_2 + 0x3c) - *arg2
    zmm1 = zmm1 - arg2[1]
    zmm0 = *(rax_2 + 0x44)
    *(rax_2 + 0x40) = zmm1
    *(rax_2 + 0x44) = zmm0 - arg2[2]
else
    *(arg1 + 0x20) = *(arg1 + 0x20) - *arg2
    *(arg1 + 0x24) = *(arg1 + 0x24) - arg2[1]
    *(arg1 + 0x28) = *(arg1 + 0x28) - arg2[2]
    void* rax_1 = *(arg1 + 0x50)
    zmm1 = *(rax_1 + 0x24)
    *(rax_1 + 0x20) = *(rax_1 + 0x20) - *arg2
    zmm1 = zmm1 - arg2[1]
    zmm0 = *(rax_1 + 0x28)
    *(rax_1 + 0x24) = zmm1
    *(rax_1 + 0x28) = zmm0 - arg2[2]
int64_t* rcx_1 = *(arg1 + 0x48)
return (*(*rcx_1 + 0x40))(rcx_1, zmm1)
