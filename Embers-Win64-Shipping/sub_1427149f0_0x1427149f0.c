// 函数: sub_1427149f0
// 地址: 0x1427149f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(arg1 + 0xf0)

if (result != 0)
    result = sub_140d21950(result, sub_1426a0eb0())
    
    if (result != 0)
        int64_t r8 = *result
        result = (*(r8 + 0x50))(result, arg1, r8)
        *(arg1 + 0xf0) = 0xffffffff
        *(arg1 + 0xf4) = 0

if (arg2 != 0)
    void* rax_2 = (*(*arg2 + 8))(arg2)
    void* rax_3 = sub_140d41340()
    void* rcx_4 = *(rax_2 + 0x10)
    result = rax_3 + 0x30
    int64_t rdx_2 = sx.q(*(result + 8))
    
    if (rdx_2.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rdx_2 << 3)) == result)
        sub_140d3a3a0(arg1 + 0xf0, rax_2)
        result = (*(*arg2 + 0x48))(arg2, arg1, arg3)
        
        if (result.b == 0)
            return sub_140d3a3a0(arg1 + 0xf0, nullptr)

return result
