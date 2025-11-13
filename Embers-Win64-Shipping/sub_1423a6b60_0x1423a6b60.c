// 函数: sub_1423a6b60
// 地址: 0x1423a6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t* rcx = data_143f0f180
int64_t r9
r9.b = 1
int64_t* result = (*(*rcx + 0x4c8))(rcx, &data_143f02b98, *(rdi + 0x100), r9)

if (*(rdi + 0x100) != 0)
    void* rcx_1 = *(arg2 + 8)
    
    if (rcx_1 != 0)
        if (*(rdi + 0x54) == 0)
            sub_1423cc420(rcx_1, rdi + 0x100, *(rdi + 8), arg4, arg3)
        
        return sub_1405d16e0(rdi + 0x100, nullptr)

return result
