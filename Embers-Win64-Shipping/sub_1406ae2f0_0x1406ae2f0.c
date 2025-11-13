// 函数: sub_1406ae2f0
// 地址: 0x1406ae2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = Concurrency::details::platform::GetCurrentThreadId()
bool z

if (0 == arg1[2].d)
    arg1[2].d = rbx
    z = true
else
    arg1[2].d
    z = false

if (z)
    (*(*arg1 + 0x10))(arg1)
    int32_t rax_3 = rbx
    bool z_1
    
    if (rax_3 == arg1[2].d)
        arg1[2].d = 3
        z_1 = true
    else
        rax_3 = arg1[2].d
        z_1 = false
    
    if (not(z_1))
        rbx = rax_3
    
    if (rbx == 2)
        int32_t code = _Mtx_lock(&arg1[0xc])
        
        if (code != 0)
            std::_Throw_C_error(code)
            noreturn
        
        arg1[0x16].b = 1
        _Mtx_unlock(&arg1[0xc])
        _Cnd_broadcast(&arg1[3])

int32_t result = arg1[1].d
arg1[1].d -= 1

if (result != 1)
    return result

return (*(*arg1 + 8))(arg1)
