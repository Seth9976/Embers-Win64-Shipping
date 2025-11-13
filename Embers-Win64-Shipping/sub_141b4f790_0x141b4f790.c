// 函数: sub_141b4f790
// 地址: 0x141b4f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 != 0)
    void* rax = sub_1425b3bb0()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        result.b = 1
        return result
    
    if (sub_140d21950(arg2, sub_14259a3f0()) != 0)
        result.b = 1
        return result
    
    void* rax_3 = sub_142543940()
    void* rdx_2 = *(arg2 + 0x10)
    result = sx.q(*(rax_3 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == rax_3 + 0x30)
        result.b = 1
        return result

result.b = 0
return result
