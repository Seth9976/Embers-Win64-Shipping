// 函数: sub_1429ca830
// 地址: 0x1429ca830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg2
void** rdi = arg2

if (*(arg2 + 0x19) != 0)
    return 

do
    sub_1429ca830(arg1, rdi[2])
    void* rcx_1 = rbx[5]
    rdi = *rdi
    
    if (rcx_1 != 0)
        int64_t rax_3 = (rbx[7] - rcx_1) s>> 2
        
        if (rax_3 u> 0x3fffffffffffffff)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rax_3 << 2 u>= 0x1000)
            if ((rcx_1.b & 0x1f) != 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            void* rax_5 = *(rcx_1 - 8)
            
            if (rax_5 u>= rcx_1)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            void* rcx_2 = rcx_1 - rax_5
            
            if (rcx_2 u< 8)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            if (rcx_2 u> 0x27)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_1 = rax_5
        
        j_sub_140a74f90(rcx_1)
        __builtin_memset(&rbx[5], 0, 0x18)
    
    j_sub_140a74f90(rbx)
    rbx = rdi
while (*(rdi + 0x19) == 0)
