// 函数: sub_1429095b0
// 地址: 0x1429095b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg2 == 7)
    if (arg3 == 1)
        int64_t* rax_1 = sub_14293bfc0(arg4)
        
        if (rax_1 == 0)
            return 0
        
        int32_t rbx = 0
        int64_t* var_18
        char* var_10
        
        if (sub_142891590(rax_1) != 0)
        label_1429096a7:
            int32_t rax_7 = sub_142909d60(rax_1, arg4)
            
            if (rax_7 == 0)
                sub_1428a5670(rax_7 + 5, rax_7 + 0x72, rax_7 + 0x71, "crypto\dh\dh_ameth.c", 0x300)
                return 0
            
            rbx = 1
        else if (sub_14293c470(arg4, &var_18, &var_10, nullptr, nullptr, nullptr) != 0)
            int64_t* rdx_2 = var_18
            
            if (rdx_2 != 0)
                char* r8_1 = var_10
                
                if (r8_1 != 0)
                    if (sub_142909b90(rax_1, rdx_2, r8_1) != 0)
                        goto label_1429096a7
                    
                    sub_1428a5670(5, 0x72, 0x6f, "crypto\dh\dh_ameth.c", 0x2fa)
                    return 0
        return zx.q(rbx)
    
    if (arg3 == 0)
        return sub_142909790(arg4) __tailcall
else if (arg2 == 8)
    *arg4 = arg2 - 7
    return zx.q(arg2 - 7)

return 0xfffffffe
