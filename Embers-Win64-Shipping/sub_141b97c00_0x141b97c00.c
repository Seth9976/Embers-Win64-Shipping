// 函数: sub_141b97c00
// 地址: 0x141b97c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg3 != 0)
    if (arg2 == arg3)
        result.b = 1
        return result
    
    void* rax
    int64_t rax_1
    void* rdx
    
    if (arg2 != 0)
        rax = sub_141c06160()
        rdx = *(arg2 + 0x10)
        rax_1 = sx.q(*(rax + 0x38))
    
    if (arg2 == 0 || rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30
            || *(arg2 + 0x30) != 0)
        void* rax_2 = sub_141c186d0()
        void* rdx_1 = *(arg2 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax_2 + 0x30
                && sub_140d23d40(arg2, arg3).b != 0)
            result.b = 1
            return result

result.b = 0
return result
