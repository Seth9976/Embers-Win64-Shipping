// 函数: sub_1406af170
// 地址: 0x1406af170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* mtx = *arg2

if (mtx != 0 && arg2[1].b != 0)
    _Mtx_unlock(mtx)
    arg2[1].b = 0
    sub_1406aa9e0(arg1)
    struct _Mtx_internal_imp_t* mtx_1 = *arg2
    
    if (mtx_1 != 0)
        if (arg2[1].b != 0)
            sub_14058ed50(0x24)
            noreturn
        
        int32_t code = _Mtx_lock(mtx_1)
        
        if (code != 0)
            std::_Throw_C_error(code)
            noreturn
        
        arg2[1].b = 1
        return code

sub_14058ed50(1)
noreturn
