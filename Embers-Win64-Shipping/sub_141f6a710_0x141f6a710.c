// 函数: sub_141f6a710
// 地址: 0x141f6a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x860))()

if (rax_1 != 0)
    void* rax_2 = sub_140cdb8f0(*(rax_1 + 0x10), arg4)
    
    if (rax_2 != 0)
        int64_t rdx_1 = sx.q(*(rax_2 + 0x4c))
        int32_t rax_3 = *(rdx_1 + rax_1 + 8)
        
        if (rax_3 s> 0)
            int32_t rax_4 = rax_3 - 1
            
            if (arg3 s< 0)
                rax_4 = 0
            else if (arg3 s< rax_4)
                rax_4 = arg3
            
            int64_t rcx_1 = sx.q(rax_4) * 0x2c
            int64_t rax_6 = *(rdx_1 + rax_1)
            int32_t rax_7 = *(rcx_1 + rax_6 + 0xc)
            *arg2 = *(rcx_1 + rax_6 + 4)
            arg2[1].d = rax_7

return arg2
