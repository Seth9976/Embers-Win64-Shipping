// 函数: sub_1427e6fe0
// 地址: 0x1427e6fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

*arg3 = 0

if (arg1 == 0 || *arg1 == 0)
    return 

char* rax_1 = sub_1427d9810(arg2, arg1)
char* rcx_1 = rax_1
char* rbx_1 = rax_1

if (rax_1 != 0)
    while (*rbx_1 != 0)
        rbx_1 = &rbx_1[1]
        
        if (*rbx_1 == 0x7c)
            *rbx_1 = 0
            rbx_1 = &rbx_1[1]
            int32_t rax_2 = sub_1427e4c80(rcx_1, arg4)
            *arg3 |= rax_2
            rcx_1 = rbx_1
        
        if (rbx_1 == 0)
            break
    
    if (rcx_1 != 0 && *rcx_1 != 0)
        int32_t rax_3 = sub_1427e4c80(rcx_1, arg4)
        *arg3 |= rax_3

(*(*arg2 + 0x10))(arg2, rax_1)
