// 函数: sub_140be1ac0
// 地址: 0x140be1ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void* var_38 = arg3
void* r10 = arg3

if (*(arg1 + 0x11) != 0)
    char r8 = 1
    
    if (((*(*(arg3 + 0x10) + 0xcc) u>> 0x15).b & 1) == 0)
        r8 = arg5
    
    if (r8 != 0 || arg6 != 0)
        if (arg2 == 0)
            if (arg4 != 0)
                int64_t rbx_1 = *(r10 + 0x20)
                
                if (rbx_1 != arg4)
                    for (void* i = sub_140d209c0(arg4); i != 0; i = sub_140d209c0(i))
                        if (rbx_1 == i)
                            return 0
                    
                    r10 = arg_18
            
            arg2 = r10
        
        void* rax_2 = sub_140bde720(arg1, arg2, r10, arg4, arg6, arg6)
        
        if (rax_2 != -1)
            var_38 = rax_2
            void** var_30 = &arg_18
            void** var_28_1 = &var_38
            void arg_8
            sub_140bd2cc0(&arg1[0xd], &arg_8, &var_30, nullptr)
        
        return var_38

return r10
