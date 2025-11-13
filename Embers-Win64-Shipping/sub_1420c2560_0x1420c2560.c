// 函数: sub_1420c2560
// 地址: 0x1420c2560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141e5f980()

if (rax == 0)
    *arg1 = 0
else
    void var_98
    sub_141e4faa0(&var_98)
    int64_t r9_1 = *rax
    char var_60
    
    if ((*(r9_1 + 0x2f0))(rax, *arg2, &var_98, r9_1) == 0 || var_60 == 0)
        sub_141e50e60(&var_98)
        *arg1 = 0
    else
        int64_t rax_2 = *rax
        *arg1 = 0
        void* rax_3 = (*(rax_2 + 0x2a0))(rax, arg2)
        void* const rdi_1 = rax_3
        void* rax_4
        void* rcx_3
        int64_t rdx_2
        
        if (rax_3 != 0)
            rax_4 = sub_140bdf2e0()
            rcx_3 = *(rdi_1 + 0x10)
            rdx_2 = sx.q(*(rax_4 + 0x38))
        
        if (rax_3 == 0 || rdx_2.d s> *(rcx_3 + 0x38)
                || *(*(rcx_3 + 0x30) + (rdx_2 << 3)) != rax_4 + 0x30)
            rdi_1 = nullptr
        
        *arg1 = rdi_1
        sub_141e50e60(&var_98)

return arg1
