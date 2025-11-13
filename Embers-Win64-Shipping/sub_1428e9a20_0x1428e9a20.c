// 函数: sub_1428e9a20
// 地址: 0x1428e9a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int64_t buffer1 = *(arg1 + 8)

if (buffer1 != 0)
    int64_t rax_1 = sx.q(*arg1)
    
    if (rax_1.d != 0)
        if (arg2 s<= 0)
            char* arg_8
            int32_t rax_6 = sub_1428f6be0(&arg_8, arg1)
            
            if (rax_6 s< 0)
                return 0xffffffff
            
            int64_t rsi_2 = sx.q(rax_6)
            int32_t rax_7 = arg3(arg_8, rsi_2, arg5, arg6, arg4)
            
            if (rax_7 s> 0 && arg7 != 0)
                *arg7 = sub_1428a6c10(arg_8, rsi_2, "crypto\x509v3\v3_utl.c", 0x32c)
            
            sub_1428a6780(arg_8)
            return zx.q(rax_7)
        
        if (arg2 == arg1[1])
            if (arg2 == 0x16)
                int32_t rax_2 = arg3(buffer1, rax_1, arg5, arg6, arg4)
                rbx = rax_2
                
                if (rax_2 s> 0)
                    goto label_1428e9ac0
            else if (rax_1.d == arg6.d)
                int32_t rax_3 = memcmp(buffer1, arg5, arg6)
                
                if (rax_3 == 0)
                    rbx = rax_3 + 1
                label_1428e9ac0:
                    
                    if (arg7 != 0)
                        *arg7 =
                            sub_1428a6c10(*(arg1 + 8), sx.q(*arg1), "crypto\x509v3\v3_utl.c", 0x31e)
            
            return zx.q(rbx)

return 0
