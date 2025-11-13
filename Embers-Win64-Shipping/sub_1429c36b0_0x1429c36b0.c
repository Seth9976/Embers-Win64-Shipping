// 函数: sub_1429c36b0
// 地址: 0x1429c36b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t rcx = *(arg1 + 0x20)

if (rcx != 0)
    j_sub_140a74f90(rcx)

struct _Cnd_internal_imp_t* cond = *(arg1 + 8)
struct _Mtx_internal_imp_t* mtx = *(arg1 + 0x10)
int32_t code = _Mtx_unlock(mtx)

if (code == 0)
    _Mtx_destroy(mtx)
    return _Cnd_destroy(cond)

std::_Throw_C_error(code)
noreturn
