// 函数: sub_142c28fa0
// 地址: 0x142c28fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 2).b == 0)
    result.b = 0
else
    int32_t rcx_1 = *(arg3 + 0x14)
    uint32_t r8 = ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 2
    
    if (rcx_1 == 0 || r8 u< divu.dp.d(0:0xffffffff, rcx_1))
        if (sub_142bf7510(arg2, &arg1[2], r8 * rcx_1).b == 0)
            result.b = 0
        else
            uint32_t rbp_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
            
            if (sub_142c299a0(arg3[1], arg2, *arg3, &arg1[4], rbp_3, *(arg3 + 0x14)).b == 0)
                result.b = 0
            else
                char* r9_5 = &data_14369a5d0
                void* rcx_4 = &arg1[4 + (zx.q(arg3[2].d) << 1)]
                
                if (rcx_4 u>= &arg1[4])
                    r9_5 = rcx_4
                
                if (sub_142c299a0(arg3[1] + 2, arg2, *arg3, r9_5, rbp_3, *(arg3 + 0x14)).b == 0)
                    result.b = 0
                else
                    result.b = 1
    else
        result.b = 0

return result
