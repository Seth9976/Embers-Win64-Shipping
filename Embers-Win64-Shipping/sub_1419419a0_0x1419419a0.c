// 函数: sub_1419419a0
// 地址: 0x1419419a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140fcc530(arg1, arg2)

if (*(arg2 + 0x114) != 0 && data_143f01c92 != 0)
    void* rax_1 = j_sub_140a82f30(0x18)
    
    if (rax_1 != 0)
        __builtin_memset(rax_1, 0, 0x15)
        int32_t rax_2 = data_1439c7528
        data_1439c7510 = rax_1
        *(rax_1 + 0x10) = rax_2
        return rax_2
    
    data_1439c7510 = rax_1
    rax = data_1439c7528
    *(rax_1 + 0x10) = rax

return rax
