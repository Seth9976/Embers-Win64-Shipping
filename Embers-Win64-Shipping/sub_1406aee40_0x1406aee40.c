// 函数: sub_1406aee40
// 地址: 0x1406aee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[2].d = 0
arg2[1].d += 1
arg2[0x17] = arg1

if (*(arg1 + 0x10) == 0)
    int32_t code = _Mtx_lock(arg1 + 0x18)
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    int32_t rax_1 = *(arg1 + 0x10)
    
    if (rax_1 == 0)
        int64_t* rax_2 = j_sub_140a82f30(zx.q(rax_1 + 0x10))
        int64_t* rcx_2 = rax_2
        
        if (rax_2 == 0)
            rcx_2 = nullptr
        else
            *rax_2 = arg2
            rax_2[1] = 0
        
        if (*(arg1 + 0x68) != 0)
            *(*(arg1 + 0x70) + 8) = rcx_2
            *(arg1 + 0x70) = rcx_2
            return _Mtx_unlock(arg1 + 0x18) __tailcall
        
        *(arg1 + 0x68) = rcx_2
        *(arg1 + 0x70) = rcx_2
        return _Mtx_unlock(arg1 + 0x18) __tailcall
    
    _Mtx_unlock(arg1 + 0x18)

return sub_1406ae2f0(arg2) __tailcall
