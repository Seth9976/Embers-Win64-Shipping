// 函数: sub_142c6e180
// 地址: 0x142c6e180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* rbp = arg3
bool cond:0 = *(arg1 + 0x4e24) == 0xa
*(arg1 + 0x4e28) = 0

if (not(cond:0))
    int32_t rax_1 = arg2[0x42].d
    
    if (rax_1 != 0xa)
        int32_t r9_1 = *(arg1 + 0x43c)
        
        if ((r9_1 != 1 || rax_1 s> 0xa) && r9_1 s>= 0 && r9_1 != 1 && rax_1 != 0x14)
            int64_t* rbx_1 = *(*arg2 + 0x3c0)
            
            if (rbx_1 == 0)
            label_142c6e21c:
                int32_t rax_4 = sub_142c6c410(rbp, "Expect: 100-continue\r\n", arg3, arg4)
                rsi = rax_4
                
                if (rax_4 == 0)
                    *(arg1 + 0x4e28) = 1
            else
                while (true)
                    int32_t rax_3
                    rax_3, arg3 = sub_142c704d0(*rbx_1, "Expect:", 7)
                    
                    if (rax_3 != 0)
                        break
                    
                    rbx_1 = rbx_1[1]
                    
                    if (rbx_1 == 0)
                        goto label_142c6e21c
                
                char* rcx_2 = *rbx_1
                
                if (rcx_2 == 0)
                    goto label_142c6e21c
                
                *(arg1 + 0x4e28) = sub_142c6c980(rcx_2, "Expect:", "100-continue")

return zx.q(rsi)
