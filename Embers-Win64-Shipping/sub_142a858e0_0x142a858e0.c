// 函数: sub_142a858e0
// 地址: 0x142a858e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t* rbx = arg1[1]
struct _Mtx_internal_imp_t* mtx = *arg1

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_18 = rbx
struct _Mtx_internal_imp_t* mtx_1 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int32_t code_1 = _Mtx_unlock(arg2)

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

int32_t code_2 = _Cnd_wait(&arg1[2], mtx)

if (code_2 != 0)
    std::_Throw_C_error(code_2)
    noreturn

int32_t code_3 = _Mtx_unlock(mtx)

if (code_3 != 0)
    std::_Throw_C_error(code_3)
    noreturn

int32_t code_4 = _Mtx_lock(arg2)

if (code_4 != 0)
    std::_Throw_C_error(code_4)
    noreturn

if (rbx != 0)
    code_4 = rbx[1].d
    rbx[1].d -= 1
    
    if (code_4 == 1)
        code_4 = (**rbx)(rbx)
        int32_t rdi = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi == 1)
            return (*(*rbx + 8))(rbx)

return code_4
