// 函数: sub_1427ab440
// 地址: 0x1427ab440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 0x18) == 0)
    result.b = 1
else if (sub_140d3e110(arg1 + 8).b == 0)
    result.b = 1
else if (sub_140d3e110(arg1 + 0x10).b == 0)
    result.b = 1
else
    int64_t* rcx_2 = *(arg1 + 0x18)
    
    if ((*(*rcx_2 + 0x20))(rcx_2, arg2).b != 0)
        result.b = 1
    else
        int64_t* rax_1 = sub_140d3c6e0(arg1 + 8)
        int64_t rax_2 = sub_140d3c6e0(arg1 + 0x10)
        int64_t r8_1 = *rax_1
        
        if ((*(r8_1 + 0x2a0))(rax_1, 1, r8_1) != rax_2)
            result.b = 1
        else
            result.b = 0

return result
