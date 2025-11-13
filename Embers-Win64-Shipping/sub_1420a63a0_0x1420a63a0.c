// 函数: sub_1420a63a0
// 地址: 0x1420a63a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 != 0)
    void* rax = sub_140bdf670()
    void* rdx_1 = *(arg1 + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30)
        result.b = 1
        return result
    
    void* rax_2 = sub_14247bf70()
    void* rdx_2 = *(arg1 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == rax_2 + 0x30)
        result.b = 1
        return result

result.b = 0
return result
