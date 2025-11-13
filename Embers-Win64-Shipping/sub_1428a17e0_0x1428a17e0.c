// 函数: sub_1428a17e0
// 地址: 0x1428a17e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = *arg3
void* rbp = nullptr
int32_t arg_18 = 0
char r9 = (*(arg4 + 0x90)).b

if ((r9 & 2) == 0)
    if ((*(*(arg1 + 0x20) + 0x14) & 0x1000) != 0)
        if ((r9 & 0x40) == 0)
            if (*(arg4 + 0xa0) == 0)
                goto label_1428a186d
        else if ((*(arg4 + 0x94) & not.d(rsi)) != 0)
            goto label_1428a186d
    else if ((r9 & 0x60) == 0)
    label_1428a186d:
        void* rax_5 = sub_142891590(arg4)
        int32_t rbx_2
        
        if (sub_1428a32a0(sub_1428a38f0(arg5), rax_5) == 0)
            rbx_2 = 0x20
            arg_18 = 0x20
        label_1428a18ab:
            
            if ((*(arg4 + 0x7c) & 0x200) == 0)
                rbx_2 |= 0x100
                arg_18 = rbx_2
            
            void* rax_8 = *(arg1 + 0x20)
            int32_t rcx_3 = *(rax_8 + 0x14)
            
            if ((rcx_3.b & 2) == 0)
                if (not(test_bit(rcx_3, 0x15)))
                    goto label_1428a18db
                
                arg_18 = rbx_2 | 0x40
            else
                rbp = rax_8 + 8
            label_1428a18db:
                
                if (sub_14289e600(sub_1427ec4a0(arg4), rbp) s<= 0xffffffff)
                    if (sub_142896660(arg4) == 0)
                        arg_18 = rbx_2 | 0x40
                    else
                        int32_t rax_13 = sub_14289e600(sub_142896660(arg4), rbp)
                        
                        if (rax_13 != 0 && (rax_13 s>= 0 || (*(arg1 + 0xd0) & 2) != 0))
                            arg_18 = rbx_2 | 0x40
            
            sub_1428a0ea0(arg1, arg4, arg2, &arg_18)
            int32_t rbx_4 = arg_18
            
            if ((rbx_4.b & 4) != 0)
                if (sub_1428a1040(arg5, arg4, rbx_4.b, &arg_18) == 0)
                    *arg3 = rsi
                    return zx.q(rbx_4)
                
                int32_t rax_15 = arg_18
                
                if ((rax_15 & not.d(rsi)) != 0)
                    *arg3 = rsi | rax_15
                    return zx.q(rbx_4) | 0x80
        else if ((*(arg4 + 0x90) & 0x20) != 0)
            rbx_2 = 0
            goto label_1428a18ab

return 0
