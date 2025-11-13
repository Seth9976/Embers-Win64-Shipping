// 函数: sub_142ca04d0
// 地址: 0x142ca04d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rbx = *(arg2 + 0x40)

if (rbx[2] == 0)
    __ExceptionPtrCreate(arg2 + 0x20)
    __ExceptionPtrCurrentException(arg2 + 0x20)
    sub_1406c3220(rbx, arg2 + 0x20)
    __ExceptionPtrDestroy(arg2 + 0x20)

return 0
