// 函数: sub_14231d990
// 地址: 0x14231d990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg3 == 0)
    result = sub_141f64a80(arg1)

if (arg3 != 0 || arg2 != result)
    sub_142320020(arg1)
    sub_141f71840(arg1, arg2)
    sub_141ee8490(arg1)
    sub_142320ad0(arg1)
    void* rax_1 = arg1[0x86]
    
    if (rax_1 == 0)
        sub_141f71840(arg1, arg2)
        result = sub_142320ad0(arg1)
    else
        int32_t rdx_1 = *(rax_1 + 0x1b0)
        int32_t i = 0
        arg1[0xfd].d = 0
        
        if (rdx_1 s> *(arg1 + 0x7ec))
            sub_1405947f0(&arg1[0xfc], rdx_1)
        
        int32_t rax_4 = *(arg1[0x86] + 0x1b0) + arg1[0xfd].d
        arg1[0xfd].d = rax_4
        
        if (rax_4 s> *(arg1 + 0x7ec))
            sub_140594770(&arg1[0xfc])
        
        if (*(arg1[0x86] + 0x1b0) s> 0)
            do
                *(arg1[0xfc] + (sx.q(i) << 1)) = i.w
                i += 1
            while (i s< *(arg1[0x86] + 0x1b0))
        
        result = (*(*arg1 + 0x8d8))(arg1, 0)
        uint64_t result_1 = arg1[0x15]
        
        if (result_1 != 0)
        label_14231da88:
            
            if (*(result_1 + 0x1f8) != 0)
                int64_t rdx_3 = *arg1
                result = (*(rdx_3 + 0x300))(arg1, rdx_3)
                
                if (result.b != 0)
                    result = sub_142317820(arg1, *(result_1 + 0x1f8))
        else
            result = sub_141ee69e0(arg1)
            result_1 = result
            
            if (result != 0)
                goto label_14231da88
    
    *(arg1 + 0x71c) &= 0x7f

return result
