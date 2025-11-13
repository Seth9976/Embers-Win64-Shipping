// 函数: sub_140591310
// 地址: 0x140591310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (SetThreadDescription(GetCurrentThread(), u"video recorder worker thread") s< 0)
    std::wostream::operator<<(
        sub_140593a10(
            std::wostream::operator<<(sub_140593a10(std::wcerr, 
                "Fail to set name for video recorder worker thread (hr=")), 
            ")."), 
        sub_140593eb0)

struct _Mtx_internal_imp_t* var_18 = arg1 + 0xa0
char var_10 = 0
int32_t code = _Mtx_lock(arg1 + 0xa0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_10_1 = 1

while (*(arg1 + 0x98) == 0)
    char rax_9
    
    if (*(arg1 + 0x90) != 0)
        int64_t rdx_2 = *(arg1 + 0x88)
        int64_t* rcx_11 = *(*(*(arg1 + 0x78) + (((*(arg1 + 0x80) - 1) & rdx_2 u>> 1) << 3))
            + ((zx.q(rdx_2.d) & 1) << 3))
        rax_9 = (*(*rcx_11 + 8))(rcx_11)
    
    if (*(arg1 + 0x90) == 0 || rax_9 == 0)
        _Cnd_signal(arg1 + 0xf0)
        _Cnd_wait(arg1 + 0xf0, arg1 + 0xa0)
    else
        int64_t rdx_4 = *(arg1 + 0x88)
        uint64_t rdx_5 = zx.q(rdx_4.d) & 1
        int64_t rcx_15 = *(*(arg1 + 0x78) + (((*(arg1 + 0x80) - 1) & rdx_4 u>> 1) << 3))
        int64_t* rdi_1 = *(rcx_15 + (rdx_5 << 3))
        *(rcx_15 + (rdx_5 << 3)) = 0
        int64_t* arg_8 = rdi_1
        int64_t rdx_6 = *(arg1 + 0x88)
        int64_t* rcx_19 = *(*(*(arg1 + 0x78) + (((*(arg1 + 0x80) - 1) & rdx_6 u>> 1) << 3))
            + ((zx.q(rdx_6.d) & 1) << 3))
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x10))(rcx_19, 1)
        
        int64_t temp0_1 = *(arg1 + 0x90)
        *(arg1 + 0x90) -= 1
        
        if (temp0_1 != 1)
            *(arg1 + 0x88) += 1
        else
            *(arg1 + 0x88) = 0
        
        if (arg1 == -0xa0)
            sub_14058ed50(1)
            noreturn
        
        _Mtx_unlock(arg1 + 0xa0)
        char var_10_2 = 0
        (**rdi_1)(rdi_1, arg1)
        int32_t code_1 = _Mtx_lock(arg1 + 0xa0)
        
        if (code_1 != 0)
            std::_Throw_C_error(code_1)
            noreturn
        
        char var_10_3 = 1
        (*(*rdi_1 + 0x10))(rdi_1, 1)

return _Mtx_unlock(arg1 + 0xa0) __tailcall
