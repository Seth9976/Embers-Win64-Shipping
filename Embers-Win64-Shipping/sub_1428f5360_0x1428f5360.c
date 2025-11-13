// 函数: sub_1428f5360
// 地址: 0x1428f5360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r8 = arg1[1].d

if (r8 != 0)
    if (arg2 == 0)
        sub_142890900(arg1, arg2)
        return 1
    
    int64_t* rcx = *arg1
    int64_t rax_2 = sub_14291f9e0(rcx, rcx, r8, arg2)
    
    if (rax_2 != 0)
        int64_t* result = sub_142890e60(arg1, arg1[1].d + 1)
        
        if (result == 0)
            return result
        
        *(*arg1 + (sx.q(arg1[1].d) << 3)) = rax_2
        arg1[1].d += 1

return 1
