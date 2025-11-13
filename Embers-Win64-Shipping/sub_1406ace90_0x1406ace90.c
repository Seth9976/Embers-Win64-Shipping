// 函数: sub_1406ace90
// 地址: 0x1406ace90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe1) = 1

if (arg3 == 0)
    *(arg1 + 0xdc) = 1
    return _Cnd_broadcast(arg1 + 0x90) __tailcall

struct _Mtx_internal_imp_t* rdx = *arg2
*arg2 = nullptr
arg2[1].b = 0
return _Cnd_register_at_thread_exit(arg1 + 0x90, rdx, arg1 + 0xdc) __tailcall
