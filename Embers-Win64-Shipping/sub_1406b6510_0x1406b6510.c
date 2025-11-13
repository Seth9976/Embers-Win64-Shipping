// 函数: sub_1406b6510
// 地址: 0x1406b6510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x21]

if (rcx != 0)
    int64_t rdx
    rdx.b = rcx != &arg1[0x1a]
    (*(*rcx + 0x20))(rcx, rdx)
    arg1[0x21] = 0

bool cond:0 = *(arg1 + 0xc1) == 0
*arg1 = &data_142d8d7c0

if (not(cond:0) && *(arg1 + 0xbc) == 0)
    _Cnd_unregister_at_thread_exit(&arg1[4])

_Cnd_destroy_in_situ(&arg1[0xe])
_Mtx_destroy_in_situ(&arg1[4])
return __ExceptionPtrDestroy(&arg1[2]) __tailcall
