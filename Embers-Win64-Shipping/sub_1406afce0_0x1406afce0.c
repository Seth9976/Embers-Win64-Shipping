// 函数: sub_1406afce0
// 地址: 0x1406afce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* mtx = &arg1[8]
int32_t code = _Mtx_lock(&arg1[8])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_10 = 1

if (*(arg1 + 0xe2) == code.b)
    int64_t rax = *arg1
    *(arg1 + 0xe2) = 1
    code = (*(rax + 0x20))(arg1, &mtx)

while (*(arg1 + 0xdc) == 0)
    code = _Cnd_wait(&arg1[0x12], mtx)

if (var_10 == 0)
    return code

return _Mtx_unlock(mtx)
