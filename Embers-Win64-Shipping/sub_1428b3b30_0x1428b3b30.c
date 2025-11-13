// 函数: sub_1428b3b30
// 地址: 0x1428b3b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_142890ec0(arg1)

if (*(rax + 0x118) != 0)
    if (*(rax + 0x2ec) s>= 0)
        void* rax_1 = sub_142890ec0(arg1)
        int32_t r12 = -1
        
        if (arg2 == arg3 && arg4 u>= 0x18)
            sub_142890eb0(arg1)
            
            if (sub_142892150(arg1) s> 0
                    && sub_1428d14f0(rax_1 + 0x120, sub_142890ea0(arg1), sx.q(*(rax_1 + 0x2ec)))
                    == 0)
                if (sub_142890eb0(arg1) == 0)
                    if (sub_1428d1630(rax_1 + 0x120, &arg3[8], arg2 + 8, arg4 - 0x18) == 0)
                        sub_1428d2a30(rax_1 + 0x120, sub_142890ea0(arg1), 0x10)
                        
                        if (sub_1428bc500(sub_142890ea0(arg1), &arg3[arg4 - 0x10], 0x10) == 0)
                            r12 = (arg4 - 0x18).d
                        else
                            sub_1428b8960(arg2 + 8, arg4 - 0x18)
                else if (sub_1428d1d70(rax_1 + 0x120, &arg3[8], arg2 + 8, arg4 - 0x18) == 0)
                    sub_1428d2a30(rax_1 + 0x120, arg2 + 8 + arg4 - 0x18, 0x10)
                    r12 = arg4.d
            
            *(rax_1 + 0x11c) = 0
            *(rax_1 + 0x2ec) = 0xffffffff
        
        return zx.q(r12)
    
    if (*(rax + 0x11c) != 0)
        if (arg3 == 0)
            if (sub_142890eb0(arg1) != 0)
                sub_1428d2a30(rax + 0x120, sub_142890ea0(arg1), 0x10)
                *(rax + 0x2e4) = 0x10
                *(rax + 0x11c) = 0
                return 0
            
            int64_t rax_19 = sx.q(*(rax + 0x2e4))
            
            if (rax_19.d s>= 0)
                int32_t result = sub_1428d24b0(rax + 0x120, sub_142890ea0(arg1), rax_19)
                
                if (result == 0)
                    *(rax + 0x11c) = result
                    return result
        else
            int32_t rax_13
            
            if (arg2 != 0)
                if (sub_142890eb0(arg1) != 0)
                    rax_13 = sub_1428d1d70(rax + 0x120, arg3, arg2, arg4)
                    goto label_1428b3cfc
                
                if (sub_1428d1630(rax + 0x120, arg3, arg2, arg4) == 0)
                    return zx.q(arg4.d)
            else
                rax_13 = sub_1428d14f0(rax + 0x120, arg3, arg4)
            label_1428b3cfc:
                
                if (rax_13 == 0)
                    return zx.q(arg4.d)

return 0xffffffff
