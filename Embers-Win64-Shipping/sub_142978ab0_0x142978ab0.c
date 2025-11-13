// 函数: sub_142978ab0
// 地址: 0x142978ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int32_t i = arg3
struct _Mtx_internal_imp_t* mtx = *(arg1 + 0x10)

if (mtx == 0)
    return sub_142988e90(*(arg1 + 8), arg2, arg3)

struct _Mtx_internal_imp_t* mtx_1 = mtx
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_18_1 = 1
void* rsi_1 = *(arg1 + 0x10)
int32_t i_1 = i

if (i s>= arg2)
    i_1 = arg2

if (i s<= arg2)
    i = arg2

if (*(rsi_1 + 0x74) != 0)
    for (; i s>= i_1; i -= 1)
        sub_1429786c0(rsi_1, i)
else
    for (; i_1 s<= i; i_1 += 1)
        sub_1429786c0(rsi_1, i_1)

int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    return code_1

std::_Throw_C_error(code_1)
noreturn
