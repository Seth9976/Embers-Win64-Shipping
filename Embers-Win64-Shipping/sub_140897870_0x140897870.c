// 函数: sub_140897870
// 地址: 0x140897870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0

if (arg3[2] u> 0)
    do
        int64_t* rax_1 = arg3
        
        if (arg3[3] u>= 0x10)
            rax_1 = *arg3
        
        char var_18 = *(rax_1 + i)
        sub_14058a400(arg2, &var_18)
        i += 1
    while (i u< arg3[2])

int64_t rdx_1 = arg3[3]

if (rdx_1 u>= 0x10)
    void* rcx_1 = *arg3
    
    if (rdx_1 + 1 u>= 0x1000)
        void* r8 = *(rcx_1 - 8)
        
        if (rcx_1 - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_1 = r8
    
    j_sub_140a74f90(rcx_1)

arg3[2] = 0
arg3[3] = 0xf
*arg3 = 0
