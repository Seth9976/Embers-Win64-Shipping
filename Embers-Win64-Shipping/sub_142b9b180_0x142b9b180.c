// 函数: sub_142b9b180
// 地址: 0x142b9b180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg1
int32_t rbx

if (arg2 != 0)
    rbx = 0
    void** rdi_1 = nullptr
    void** rax_1 = (*(rsi + 8))(rsi, 0x48)
    
    if (rax_1 != 0)
        rdi_1 = rax_1
        __builtin_memset(&rax_1[1], 0, 0x18)
        rax_1[6] = 0
        rax_1[8] = 0
        rax_1[5] = sub_142b9ade0
        *rax_1 = arg2
        rax_1[1].d = arg3
        *(rax_1 + 0xc) = 0
        rax_1[7] = 0
        rax_1[4] = 0
    else
        rbx = 0x40
    
    if (rbx == 0)
        int32_t var_58 = 2
        void** var_38_1 = rdi_1
        
        if (arg6 != 0)
            var_58 = 0xa
            int64_t var_30_1 = sub_142b922e0(arg1, arg6)
        
        int32_t rax_3 = sub_142b99ca0(arg1, &var_58, arg4, arg7, arg5, 0)
        rbx = rax_3
        
        if (rax_3 == 0)
            void* rcx_3 = *arg7
            *(rcx_3 + 8) &= 0xfffffbff
        else if (rdi_1 != 0)
            int64_t rax_4 = rdi_1[5]
            
            if (rax_4 != 0)
                rax_4(rdi_1)
            
            (*(rsi + 0x10))(rsi, rdi_1)
    else
        (*(rsi + 0x10))(rsi, arg2)
else
    rbx = (arg2 + 6).d

return zx.q(rbx)
