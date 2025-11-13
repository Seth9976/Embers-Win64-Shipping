// 函数: sub_1406aff30
// 地址: 0x1406aff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 0x7ffffffffffffff)
    int64_t rdx = arg2 << 5
    
    if (rdx u< 0x1000)
        if (rdx == 0)
            return 0
        
        return j_sub_140a82f30(rdx) __tailcall
    
    if (rdx + 0x27 u> rdx)
        int64_t rax = j_sub_140a82f30(rdx + 0x27)
        
        if (rax == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* result = (rax + 0x27) & 0xffffffffffffffe0
        *(result - 8) = rax
        return result

stdext::threads::_Throw_lock_error()
noreturn
