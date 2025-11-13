// 函数: sub_141fbede0
// 地址: 0x141fbede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14216fb80(arg1, arg2, arg3)

if (arg2 != 0 && (*(arg2 + 0x1f6) & 2) == 0 && arg1[0x28] == arg3 && arg1[0x1c5].b != 0)
    if (*(arg1 + 0xb0c) != 0)
    label_141fbee64:
        int64_t arg_8 = *(sub_140d21d80(arg2) + 0x18)
        int64_t var_18
        sub_140b63b70(&arg_8, &var_18)
        int64_t var_28
        sub_142441630(&var_28, &var_18)
        int64_t rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        if (*sub_14062d5f0(&arg1[0x1ae], &arg_8, &var_28) != 0xffffffff)
            sub_14062d5f0(&arg1[0x1ae], &arg_8, &var_28)
            int64_t rax_4 = sx.q(arg_8.d)
            void* const rcx_9
            
            if (rax_4.d == 0xffffffff)
                rcx_9 = nullptr
            else
                rcx_9 = (rax_4 << 5) + arg1[0x1ae]
            
            *(arg1[0x1ac] + sx.q(*(rcx_9 + 0x10)) * 0x18 + 0x14) = 0
            sub_1409740e0(&arg1[0x1c6], arg2)
            sub_140d3a3a0(&arg_8, arg2)
            sub_141fc3a80(&arg1[0x157], arg_8)
        
        int64_t rcx_14 = var_28
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    else
        void* rax_1 = arg1[0x11]
        
        if (rax_1 != 0 && *(rax_1 + 0x134) != 1)
            goto label_141fbee64

return sub_140868c90(&arg1[0x1b8], arg2) __tailcall
