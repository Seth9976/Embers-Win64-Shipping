// 函数: sub_1406afdf0
// 地址: 0x1406afdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) != 0)
    sub_1406afd90(arg1 + 0x88)
else
    int32_t code = _Mtx_lock(arg1 + 0xd0)
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    while ((arg1 + 0x88)->__offset(0xb0).d s< 2)
        _Cnd_wait(arg1 + 0x88, arg1 + 0xd0)
    
    _Mtx_unlock(arg1 + 0xd0)
    
    if (*(arg1 + 0xd) != 0)
        sub_1406afd90(arg1 + 0x88)

if (*(arg1 + 0x10) != 0)
    sub_1406aeff0(sub_140687ad0(arg1 + 0x10))
    noreturn

int32_t rax_1
rax_1.b = *(arg1 + 8) == 4
return zx.q(rax_1 + 1)
