// 函数: sub_1429c38d0
// 地址: 0x1429c38d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rdi = *(arg1 + 0x20)
*(arg1 + 0x20) = 0
int32_t code = _Mtx_lock(*(arg1 + 0x10))

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

*(arg1 + 0x18) = 1
int32_t code_1 = _Cnd_signal(*(arg1 + 8))

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

int32_t code_2 = _Mtx_unlock(*(arg1 + 0x10))

if (code_2 != 0)
    std::_Throw_C_error(code_2)
    noreturn

rdi[1](*rdi)
_Cnd_do_broadcast_at_thread_exit()
return j_sub_140a74f90(rdi)
