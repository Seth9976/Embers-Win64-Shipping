// 函数: sub_1406c4ad0
// 地址: 0x1406c4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = arg1.b
void* rdi = *(arg1 + 8)
int32_t code = _Mtx_lock(rdi + 0x20)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

if (*(rdi + 8) != 2)
    *(rdi + 8) = 1
    _Mtx_unlock(rdi + 0x20)
    sub_1406c4020(arg1)
    return Concurrency::details::_TaskEventLogger::_LogTaskExecutionCompleted(*(arg1 + 8) + 0x160)
        __tailcall

_Mtx_unlock(rdi + 0x20)
int64_t* rcx_2 = *(arg1 + 8)
int64_t rdx
rdx.b = 1
return (*(*rcx_2 + 8))(rcx_2, rdx, 0, 0, &rcx_2[2])
