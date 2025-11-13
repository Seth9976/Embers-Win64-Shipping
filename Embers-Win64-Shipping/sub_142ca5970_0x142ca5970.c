// 函数: sub_142ca5970
// 地址: 0x142ca5970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0x60)
struct _Mtx_internal_imp_t* rcx = *(rbx + 8)

if (rcx != 0)
    Concurrency::details::UMSSchedulerProxy::`scalar deleting destructor'(rcx, 1)

*(rbx + 8) = 0
_CxxThrowException(nullptr, nullptr)
noreturn
