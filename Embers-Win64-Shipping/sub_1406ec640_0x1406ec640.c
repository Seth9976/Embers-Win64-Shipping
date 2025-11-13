// 函数: sub_1406ec640
// 地址: 0x1406ec640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 0x38e38e38e38e38e)
    int64_t rcx = arg2 * 0x48
    
    if (rcx u< 0x1000)
        if (rcx == 0)
            return 0
        
        return j_sub_140a82f30(rcx) __tailcall
    
    if (rcx + 0x27 u> rcx)
        int64_t rax_3 = j_sub_140a82f30(rcx + 0x27)
        
        if (rax_3 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* result = (rax_3 + 0x27) & 0xffffffffffffffe0
        *(result - 8) = rax_3
        return result

stdext::threads::_Throw_lock_error()
noreturn
