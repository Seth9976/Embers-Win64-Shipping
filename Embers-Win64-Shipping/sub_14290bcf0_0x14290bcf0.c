// 函数: sub_14290bcf0
// 地址: 0x14290bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
char* rdi = arg4
int64_t* var_18
int64_t* var_10
int32_t arg_10

if (arg2 - 1 u<= 9)
    switch (arg2)
        case 1
            if (arg3 != 0)
                return 1
            
            sub_14292e640(rdi, nullptr, &var_18, &var_10)
            int64_t* rcx_1 = var_18
            
            if (rcx_1 == 0)
                return 0xffffffff
            
            void* rcx_2 = *rcx_1
            
            if (rcx_2 == 0)
                return 0xffffffff
            
            if (sub_1428a96d0(rcx_2) == 0)
                return 0xffffffff
            
            sub_1406938b0(arg1)
            
            if (sub_1428e39a0(&arg_10) == 0)
                return 0xffffffff
            
            void* rax_5 = sub_1428a9570(arg_10)
            sub_1428dafb0(var_10, rax_5, 0xffffffff, 0)
            return 1
        case 3
            *arg4 = 0x2a0
            return 2
        case 5
            if (arg3 != 0)
                return 1
            
            sub_14293c8e0(rdi, nullptr, nullptr, &var_10, &var_18)
            int64_t* rcx_8 = var_10
            
            if (rcx_8 == 0)
                return 0xffffffff
            
            void* rcx_9 = *rcx_8
            
            if (rcx_9 == 0)
                return 0xffffffff
            
            if (sub_1428a96d0(rcx_9) == 0)
                return 0xffffffff
            
            sub_1406938b0(arg1)
            
            if (sub_1428e39a0(&arg_10) == 0)
                return 0xffffffff
            
            void* rax_10 = sub_1428a9570(arg_10)
            sub_1428dafb0(var_18, rax_10, 0xffffffff, 0)
            return 1
        case 7
            if (arg3 == 1)
                return sub_14290c280(rdi) __tailcall
            
            if (arg3 == 0)
                return sub_14290c4c0(rdi) __tailcall
        case 8
            *arg4 = 1
            return 1
        case 9
            return sub_1428c0db0(sub_142896700(arg1), rdi, sx.q(arg3), 0) __tailcall
        case 0xa
            return sub_1428c0cd0(sub_142896700(arg1), 4, rdi, nullptr) __tailcall
return 0xfffffffe
