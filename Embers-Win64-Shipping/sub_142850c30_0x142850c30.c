// 函数: sub_142850c30
// 地址: 0x142850c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int64_t rax = arg2[1]
int32_t var_48_1
int32_t r8

if (rax != 0)
    int32_t arg_28
    int32_t r13_1 = arg_28
    int64_t rsi_1
    rsi_1.b = r13_1 != 0
    
    if (modu.dp.q(0:rax, rsi_1 + 2) == 0)
        int32_t* rax_5 = sub_142898ba0()
        int32_t* rax_6 = sub_142898ba0()
        int32_t var_48_2
        int32_t r8_2
        
        if (rax_5 != 0 && rax_6 != 0)
            while (true)
                int64_t rdi_1 = arg2[1]
                
                if (rdi_1 u< rsi_1 + 2)
                    if (rdi_1 != 0)
                        if (arg5 == 0)
                            var_48_2 = 0x14d6
                            r8_2 = 0x10f
                            goto label_142850f1b
                        
                        sub_142856580(arg1, 0x32, 0x207, 0x10f, "ssl\ssl_lib.c", 0x14d4)
                        goto label_142850f23
                    
                    if (arg3 == 0)
                        sub_142898a10(rax_5)
                    else
                        *arg3 = rax_5
                    
                    if (arg4 == 0)
                        sub_142898a10(rax_6)
                        return 1
                    
                    *arg4 = rax_6
                    return 1
                
                int64_t rbx_1 = *arg2
                memcpy(&arg_28, rbx_1, (rsi_1 + 2).d)
                *arg2 = rbx_1 + rsi_1 + 2
                arg2[1] = rdi_1 - (rsi_1 + 2)
                
                if (r13_1 != 0 && arg_28.b != 0)
                    continue
                
                int32_t* rdx_4 = &arg_28
                
                if (r13_1 != 0)
                    rdx_4 = &arg_28:1
                
                int32_t* rax_8 = sub_14285b0f0(arg1, rdx_4, 1)
                
                if (rax_8 != 0)
                    if (*rax_8 != 0)
                        if (sub_142898d50(rax_5, rax_8) == 0)
                            break
                        
                        if (*rax_8 != 0)
                            continue
                    
                    if (sub_142898d50(rax_6, rax_8) == 0)
                        break
            
            if (arg5 == 0)
                var_48_2 = 0x14cc
                goto label_142850f0b
            
            sub_142856580(arg1, 0x50, 0x207, 0x41, "ssl\ssl_lib.c", 0x14ca)
        else if (arg5 == 0)
            var_48_2 = 0x14b6
        label_142850f0b:
            r8_2 = 0x41
        label_142850f1b:
            sub_1428a5670(0x14, 0x207, r8_2, "ssl\ssl_lib.c", var_48_2)
        else
            sub_142856580(arg1, 0x50, 0x207, 0x41, "ssl\ssl_lib.c", 0x14b4)
    label_142850f23:
        sub_142898a10(rax_5)
        sub_142898a10(rax_6)
        return 0
    
    if (arg5 != 0)
        sub_142856580(arg1, 0x32, 0x207, 0x97, "ssl\ssl_lib.c", 0x14a8)
        return 0
    
    var_48_1 = 0x14ab
    r8 = 0x97
else
    if (arg5 != rax.d)
        sub_142856580(arg1, (rax + 0x2f).d, 0x207, 0xb7, "ssl\ssl_lib.c", 0x149f)
        return 0
    
    var_48_1 = 0x14a1
    r8 = 0xb7

sub_1428a5670(0x14, 0x207, r8, "ssl\ssl_lib.c", var_48_1)
return 0
