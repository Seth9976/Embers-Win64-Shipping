// 函数: sub_142c283d0
// 地址: 0x142c283d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 4) != 0 && sub_142bf7510(arg2, &arg1[2], 2) != 0
        && sub_142bf7510(arg2, &arg1[4], ((zx.d(arg1[2]) << 8) + zx.d(arg1[3])) * 2) != 0)
    int16_t rbx_2 = *arg1
    int32_t r14
    
    if (arg3 == 0)
        r14 = 0
    else
        r14 = *arg3
    
    uint64_t result
    
    if (sub_142c294c0(arg1, arg2, arg1).b == 0)
        result.b = 0
    else
        uint16_t rdx_4 = zx.w(*arg1)
        uint64_t r8_5 = zx.q(arg1[1])
        
        if (0 == rdx_4 * 0x100 + r8_5.w)
            goto label_142c284d5
        
        if (sub_142c285b0(&arg1[(zx.q(rdx_4.b) << 8) + r8_5], arg2, r14) != 0)
            goto label_142c284d5
        
        if (sub_142bf99e0(arg2, arg1, 2).b == 0)
            result.b = 0
        else
            *arg1 = 0
        label_142c284d5:
            char r8_7 = rbx_2:1.b
            
            if (0 == zx.w(rbx_2.b) * 0x100 + zx.w(r8_7)
                    || zx.w(*arg1) * 0x100 != neg.w(zx.w(arg1[1])) || arg3 == 0
                    || *arg3 != 0x73697a65)
                result.b = 1
            else
                result = *(arg3 + 8)
                
                if (result == 0 || result u>= arg1)
                    result.b = 1
                else
                    int32_t rdx_15 = (zx.d(rbx_2.b) << 8) + zx.d(r8_7) - arg1.d + arg3[2]
                    int16_t arg_20
                    arg_20:1.b = rdx_15.b
                    uint16_t rax_4 = rdx_15.w u>> 8
                    arg_20.b = rax_4.b
                    
                    if ((zx.d(rax_4.b) << 8) + zx.d(rdx_15.b) != rdx_15)
                        result.b = 1
                    else if (sub_142bf99e0(arg2, arg1, 2).b == 0)
                        result.b = 1
                    else
                        *arg1 = arg_20
                        
                        if (sub_142c18120(arg1, arg2, arg1, *arg3).b == 0)
                            result.b = 0
                        else
                            result.b = 1
    
    return result

return 0
