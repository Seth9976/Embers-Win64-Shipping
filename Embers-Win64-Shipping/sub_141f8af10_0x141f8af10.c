// 函数: sub_141f8af10
// 地址: 0x141f8af10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    int64_t rcx_8 = *(arg1 + 0x18)
    *arg2 = *(rdx + 0x18)
    arg2[1] = rcx_8
    return arg2

void* rbx = *(rdx + 0x40)

if ((*(rdx + 0xcc) & 0x10000080) == 0 && rbx != sub_142496e40())
    if (rbx == 0)
    label_141f8af8b:
        *arg2 = 0
        arg2[1] = 0
    else
        while (true)
            bool cond:1_1 = *(rbx + 0x40) == sub_142496e40()
            int32_t rax_4 = *(rbx + 0xcc)
            int64_t arg_8
            void arg_18
            void* rax_6
            
            if (not(cond:1_1))
                if ((rax_4 & 0x10000080) == 0)
                    rbx = *(rbx + 0x40)
                    
                    if (rbx == 0)
                        goto label_141f8af8b
                    
                    continue
                
                rax_6 = rbx + 0x18
            else if ((rax_4 & 0x10000080) == 0)
                arg_8 = *(sub_140d21d80(rbx) + 0x18)
                rax_6 = PDBCommon::QueryLastError(&arg_18, &arg_8)
            else
                rax_6 = rbx + 0x18
            
            int64_t rbx_1 = *rax_6
            arg_8 = *(sub_140d21d80(arg1) + 0x18)
            int64_t var_28
            sub_140b63b70(&arg_8, &var_28)
            int64_t* rax_9 = sub_140baaa10(&arg_18, &var_28)
            int64_t rcx_7 = var_28
            arg2[1] = *rax_9
            *arg2 = rbx_1
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            break
    
    return arg2

*arg2 = 0
arg2[1] = 0
return arg2
