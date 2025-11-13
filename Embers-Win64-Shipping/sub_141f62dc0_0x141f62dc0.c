// 函数: sub_141f62dc0
// 地址: 0x141f62dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x860))()
int512_t result

if (rax_1 != 0)
    void* rax_2 = sub_140cdb8f0(*(rax_1 + 0x10), arg3)
    
    if (rax_2 != 0)
        int64_t rdx_1 = sx.q(*(rax_2 + 0x4c))
        int32_t rax_3 = *(rdx_1 + rax_1 + 8)
        
        if (rax_3 s> 0)
            int32_t rax_4 = rax_3 - 1
            
            if (arg2 s< 0)
                rax_4 = 0
            else if (arg2 s< rax_4)
                rax_4 = arg2
            
            result.o = *(*(rdx_1 + rax_1) + sx.q(rax_4) * 0x14 + 4)
            return result

result.o = zx.o(0)
return result
