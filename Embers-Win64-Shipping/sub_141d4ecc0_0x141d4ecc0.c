// 函数: sub_141d4ecc0
// 地址: 0x141d4ecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int32_t result

if (rcx != 0)
    int64_t* rax_1 = (*(*rcx + 0x10))(rcx)
    int64_t rdx_1 = *rax_1
    result = (*(rdx_1 + 0x18))(rax_1, rdx_1)
    
    if (result == 1)
        return result

result.b = 0
return result
