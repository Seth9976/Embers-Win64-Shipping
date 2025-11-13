// 函数: sub_14058d720
// 地址: 0x14058d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi_2 = (arg1[1] - *arg1) s>> 3

if (arg2 u<= 0x1fffffffffffffff)
    int64_t rcx = arg2 << 3
    void* const rbx_1
    
    if (rcx u< 0x1000)
        if (rcx == 0)
            rbx_1 = nullptr
        else
            rbx_1 = j_sub_140a82f30(rcx)
        
    label_14058d7a5:
        int64_t rdx = *arg1
        memmove(rbx_1, rdx, (arg1[1]).d - rdx.d)
        return std::vector<uint64_t,struct std::_Parallelism_allocator<uint64_t> >::_Change_array(
            arg1, rbx_1, rsi_2, arg2) __tailcall
    
    if (rcx + 0x27 u> rcx)
        int64_t rax_2 = j_sub_140a82f30(rcx + 0x27)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx_1 = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(rbx_1 - 8) = rax_2
        goto label_14058d7a5

stdext::threads::_Throw_lock_error()
noreturn
