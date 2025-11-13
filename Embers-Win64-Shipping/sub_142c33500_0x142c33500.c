// 函数: sub_142c33500
// 地址: 0x142c33500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 0x24).b != 0)
    char rax_13
    
    if ((*(arg1 + 0xf) & 1) == 0)
        if (sub_142bfad50(arg1 + 0x14, arg2, arg1) == 0)
            result = 0
        else
            char rax_20 = sub_142c25530(
                zx.q(*(arg1 + 0x17)) + ((zx.q(*(arg1 + 0x16))
                    + (((zx.q(*(arg1 + 0x14)) << 8) + zx.q(*(arg1 + 0x15))) << 8)) << 8) + arg1, 
                arg2)
            
            if (rax_20 == 0)
                result = 0
            else if (sub_142bfad50(arg1 + 0x18, arg2, arg1) == 0)
                result = 0
            else
                rax_13 = sub_142c25530(
                    zx.q(*(arg1 + 0x1b)) + ((zx.q(*(arg1 + 0x1a))
                        + (((zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19))) << 8)) << 8) + arg1, 
                    arg2)
            label_142c3365b:
                
                if (rax_13 == 0)
                    result = 0
                else
                    char rax_32 = sub_142bf7510(arg2, arg1, 
                        (zx.d(*(arg1 + 0x1d)) << 0x10) + (zx.d(*(arg1 + 0x1e)) << 8)
                            + (zx.d(*(arg1 + 0x1c)) << 0x18) + zx.d(*(arg1 + 0x1f)))
                    
                    result = rax_32 == 0 ? 0 : 1
    else if (sub_142bfad50(arg1 + 0x14, arg2, arg1) == 0)
        result = 0
    else
        char rax_6 = sub_142c33930(
            zx.q(*(arg1 + 0x17)) + ((zx.q(*(arg1 + 0x16))
                + (((zx.q(*(arg1 + 0x14)) << 8) + zx.q(*(arg1 + 0x15))) << 8)) << 8) + arg1, 
            arg2)
        
        if (rax_6 == 0)
            result = 0
        else
            if (sub_142bfad50(arg1 + 0x18, arg2, arg1) != 0)
                rax_13 = sub_142c33930(
                    zx.q(*(arg1 + 0x1b)) + ((zx.q(*(arg1 + 0x1a))
                        + (((zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19))) << 8)) << 8) + arg1, 
                    arg2)
                goto label_142c3365b
            
            result = 0
    
    if (result != 0)
        if ((zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8) + (zx.d(*(arg1 + 8)) << 0x18)
                != neg.d(zx.d(*(arg1 + 0xb))))
            result = sub_142bf7510(arg2, arg1, 
                (zx.d(*(arg1 + 0x21)) << 0x10) + (zx.d(*(arg1 + 0x22)) << 8)
                    + (zx.d(*(arg1 + 0x20)) << 0x18) + zx.d(*(arg1 + 0x23)))
        
        if ((zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8) + (zx.d(*(arg1 + 8)) << 0x18)
                == neg.d(zx.d(*(arg1 + 0xb))) || result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
