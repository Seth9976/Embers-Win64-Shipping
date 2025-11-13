// 函数: sub_140897920
// 地址: 0x140897920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 0x555555555555555)
    int64_t rcx_1 = arg2 * 0x30
    
    if (rcx_1 u< 0x1000)
        if (rcx_1 == 0)
            return 0
        
        return j_sub_140a82f30(rcx_1) __tailcall
    
    if (rcx_1 + 0x27 u> rcx_1)
        int64_t rax_2 = j_sub_140a82f30(rcx_1 + 0x27)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* result = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(result - 8) = rax_2
        return result

stdext::threads::_Throw_lock_error()
noreturn
