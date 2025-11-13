// 函数: sub_1423e60e0
// 地址: 0x1423e60e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint64_t result = zx.q(arg2.d) & 0xffffff
void* rcx_2 = result * 0x90 + *(arg1 + 8)
uint32_t rdx = zx.d(*(rcx_2 + 1))

if (rdx == 0)
    sub_1423ebfb0(arg1 + 0xa0, &arg_10)
else
    if (rdx == 1)
        *(rcx_2 + 1) = 4
        return result
    
    if (rdx == 2)
        sub_1423ebfb0(arg1 + 0x50, &arg_10)
    else
        if (rdx != 3)
            return result
        
        *(arg1 + 0x148) = 0

return sub_1423ec100(arg1, arg2)
