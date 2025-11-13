// 函数: sub_1429cc320
// 地址: 0x1429cc320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t var_18 = -2
int64_t* rdx = *arg1

if (arg3 != *rdx || arg4 != rdx)
    for (; arg3 != arg4; arg3 = arg_18)
        int64_t* rax_5 = arg3
        
        if (*(arg3 + 0x19) == 0)
            int64_t* rdx_2 = arg3[2]
            
            if (*(rdx_2 + 0x19) != 0)
                int64_t* rcx_2 = arg3[1]
                
                if (*(rcx_2 + 0x19) == 0)
                    while (arg3 == rcx_2[2])
                        arg3 = rcx_2
                        arg_18 = rcx_2
                        rcx_2 = rcx_2[1]
                        
                        if (*(rcx_2 + 0x19) != 0)
                            break
                
                arg_18 = rcx_2
            else
                void** rcx_1 = *rdx_2
                
                while (*(rcx_1 + 0x19) == 0)
                    rdx_2 = rcx_1
                    rcx_1 = *rcx_1
                
                arg_18 = rdx_2
        
        int64_t* arg_8
        sub_1429cc410(arg1, &arg_8, rax_5)
    
    *arg2 = arg3
else
    sub_1429ca830(arg1, rdx[1])
    void* rax_1 = *arg1
    *(rax_1 + 8) = rax_1
    int64_t* rax_2 = *arg1
    *rax_2 = rax_2
    void* rax_3 = *arg1
    *(rax_3 + 0x10) = rax_3
    arg1[1] = 0
    *arg2 = **arg1

return arg2
