// 函数: sub_1406b7840
// 地址: 0x1406b7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0xc1) == 0
*arg1 = &data_142d8d7c0

if (not(cond:0) && *(arg1 + 0xbc) == 0)
    _Cnd_unregister_at_thread_exit(&arg1[4])

_Cnd_destroy_in_situ(&arg1[0xe])
_Mtx_destroy_in_situ(&arg1[4])
__ExceptionPtrDestroy(&arg1[2])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
