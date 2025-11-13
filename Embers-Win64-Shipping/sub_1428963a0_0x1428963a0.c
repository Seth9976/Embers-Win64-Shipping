// 函数: sub_1428963a0
// 地址: 0x1428963a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*arg1 != *arg2)
    return 0xffffffff

void* rax_2 = *(arg1 + 0x10)

if (rax_2 != 0)
    int64_t r8_1 = *(rax_2 + 0x90)
    
    if (r8_1 != 0)
        int32_t result = r8_1()
        
        if (result s<= 0)
            return result
    
    int64_t r8_2 = *(*(arg1 + 0x10) + 0x30)
    
    if (r8_2 != 0)
        jump(r8_2)

return -2
