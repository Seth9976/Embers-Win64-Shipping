// 函数: sub_142b18680
// 地址: 0x142b18680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t result = sub_142a7dd00(rbp)
int64_t result_1 = result

if (result != 0)
    if (arg3 s> 0)
        void* rdx = arg1 + 0x10
        
        if (*(arg1 + 8) s< 0)
            rdx = *(arg1 + 0x10)
        
        memcpy(result_1, rdx, arg3)
    
    if (*(arg1 + 8) s< 0)
        sub_142a7dcd0(*(arg1 + 0x10))
    
    *(arg1 + 8) |= 0x80000000
    result = result_1
    *(arg1 + 0x10) = result_1
    *(arg1 + 0x18) = rbp.d

return result
