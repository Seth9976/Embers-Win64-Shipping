// 函数: sub_142988e90
// 地址: 0x142988e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct _Mtx_internal_imp_t* mtx = *(arg1 + 8)
void* rcx = mtx->__offset(0xb0).q

if (rcx != 0)
    return sub_1429b3410(rcx, arg2, arg3)

if (mtx->__offset(0x6c).b == 0)
    return sub_1429ab140(mtx->__offset(0x78).q, arg2, arg3)

struct _Mtx_internal_imp_t* mtx_1 = mtx
int32_t code_1 = _Mtx_lock(mtx)

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

char var_18_1 = 1
sub_142988130(*(arg1 + 8), arg2, arg3)
int32_t code = _Mtx_unlock(mtx)

if (code == 0)
    return code

std::_Throw_C_error(code)
noreturn
