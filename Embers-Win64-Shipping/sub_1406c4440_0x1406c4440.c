// 函数: sub_1406c4440
// 地址: 0x1406c4440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* mtx = &arg1[4]
char var_10 = 0
int32_t code = _Mtx_lock(&arg1[4])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_10_1 = 1

if (*(arg1 + 0xc2) == code.b)
    *(arg1 + 0xc2) = 1
    code = (*(*arg1 + 0x20))(arg1, &mtx)

while (*(arg1 + 0xbc) == 0)
    code = _Cnd_wait(&arg1[0xe], mtx)

if (var_10_1 == 0)
    return code

return _Mtx_unlock(mtx)
