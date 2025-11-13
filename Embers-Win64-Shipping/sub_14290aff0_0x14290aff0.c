// 函数: sub_14290aff0
// 地址: 0x14290aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* var_18
int64_t* var_10
int32_t arg_10

if (arg2 == 1)
    if (arg3 != 0)
        return 1
    
    sub_14292e640(arg4, nullptr, &var_10, &var_18)
    int64_t* rcx_8 = var_10
    
    if (rcx_8 != 0)
        void* rcx_9 = *rcx_8
        
        if (rcx_9 != 0 && sub_1428a96d0(rcx_9) != 0)
            sub_1406938b0(arg1)
            
            if (sub_1428e39a0(&arg_10) != 0)
                void* rax_12 = sub_1428a9570(arg_10)
                sub_1428dafb0(var_18, rax_12, 0xffffffff, 0)
                return 1
else
    if (arg2 == 3)
        *arg4 = 0x2a0
        return 2
    
    if (arg2 != 5)
        if (arg2 != 8)
            return 0xfffffffe
        
        *arg4 = 0xffffffff
        return 1
    
    if (arg3 != 0)
        return 1
    
    sub_14293c8e0(arg4, nullptr, nullptr, &var_18, &var_10)
    int64_t* rcx_1 = var_18
    
    if (rcx_1 != 0)
        void* rcx_2 = *rcx_1
        
        if (rcx_2 != 0 && sub_1428a96d0(rcx_2) != 0)
            sub_1406938b0(arg1)
            
            if (sub_1428e39a0(&arg_10) != 0)
                void* rax_6 = sub_1428a9570(arg_10)
                sub_1428dafb0(var_10, rax_6, 0xffffffff, 0)
                return 1
return 0xffffffff
