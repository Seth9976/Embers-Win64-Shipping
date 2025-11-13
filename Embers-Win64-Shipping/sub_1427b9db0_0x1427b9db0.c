// 函数: sub_1427b9db0
// 地址: 0x1427b9db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x2c0))(arg1, arg3) == 0)
label_1427b9e73:
    arg2[1].d = 2
    *arg2 = nullptr
    arg2[2].d = 0x7f7fffff
else
    char rax_5
    
    if (arg1[0x10] != 0)
        void* rax_2 = arg1[0x12]
        void* rcx = &arg1[0x14]
        
        if (rax_2 != 0)
            rcx = rax_2
        
        rax_5 = arg1[0x10]((*(*rcx + 8))(rcx), arg3)
    
    if (arg1[0x10] != 0 && rax_5 == 0)
        goto label_1427b9e73
    
    int64_t rbx_1 = *arg1[0x25]
    void var_58
    int64_t rax_8 = (*(*arg1 + 0x2e8))(arg1, &var_58, arg3)
    char var_30
    (*(rbx_1 + 0x10))(arg1[0x25], &var_30, rax_8)
    
    if (var_30 == 0)
        goto label_1427b9e73
    
    int32_t var_2c
    arg2[2].d = var_2c
    arg2[1].d = 1
    *arg2 = arg1

arg2[3] = 0
*(arg2 + 0xc) = 0x63
return arg2
