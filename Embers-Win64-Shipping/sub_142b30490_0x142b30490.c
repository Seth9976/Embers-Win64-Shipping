// 函数: sub_142b30490
// 地址: 0x142b30490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s<= 0)
    int64_t rdx
    
    if (*(arg1 + 0x220) == 0)
    label_142b3051b:
        *(arg1 + 0x128) = 0
        rdx = 0
        *(arg1 + 0x220) = 1
    else
        while (true)
            rdx = *(arg1 + (sx.q(*(arg1 + 0x220) - 1) << 3) + 0x128)
            int32_t rax_9
            
            if ((rdx.d u>> 0x18) - 6 u<= 0x3f)
                rax_9 = rdx.d s>> 8 & 3
            else if ((-0x100000000000000 & rdx) != 0)
                rax_9 = 0
            else if ((rdx.d & 0xff000000) == 0)
                rax_9 = 0xf
                
                if (rdx != 0)
                    rax_9 = 2
            else
                rax_9 = 1
            
            if (rax_9 s<= arg2)
                break
            
            int32_t temp0_1 = *(arg1 + 0x220)
            *(arg1 + 0x220) -= 1
            
            if (temp0_1 == 1)
                goto label_142b3051b
    
    if ((rdx.d u>> 0x18) - 6 u<= 0x3f)
        return (zx.q(((rdx - 0x4040000006002000) s>> 0x2b).d) & 0xfe000)
            | (zx.q(((rdx - 0x4040000006002000) s>> 0x2a).d) & 0x1fc0)
            | (zx.q(((rdx - 0x4040000006002000) s>> 0x18).d) & 0x3f)
    
    if ((rdx s>> 0x38).b != 0xfe)
        return sub_142b306b0(arg1, rdx, arg2, arg4) __tailcall
    
    *arg4 = 0x10
    *arg3 = "tailoring relative to an unassigned code point not supported"

return 0
