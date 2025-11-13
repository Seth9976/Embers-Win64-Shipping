// 函数: sub_1423a7750
// 地址: 0x1423a7750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t* result = sub_1423adeb0(rbx, arg2)
int64_t r8 = *(rbx + 0x100)

if (r8 != 0)
    int64_t* rcx_1 = data_143f0f180
    result = (*(*rcx_1 + 0x6a0))(rcx_1, &data_143f02b98, r8, zx.q(*(rbx + 8)))
    
    if (*(rbx + 0x100) != 0)
        void* rcx_2 = *(arg2 + 8)
        
        if (rcx_2 != 0)
            if (*(rbx + 0x54) == 0)
                sub_1423cc420(rcx_2, rbx + 0x100, *(rbx + 8), arg4, arg3)
            
            return sub_1405d16e0(rbx + 0x100, nullptr)

return result
