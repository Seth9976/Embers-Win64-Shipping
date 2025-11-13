// 函数: sub_142ca42cd
// 地址: 0x142ca42cd
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rdi = *(arg2 + 0x160)
void* rbx = *(rdi + 8)

if (rbx != 0)
    struct _Mtx_internal_imp_t* mtx = *(rbx + 0xf8)
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)
    
    int64_t* rcx_2 = *(rdi + 8)
    
    if (rcx_2 != 0)
        sub_142986270(rcx_2, 1)

_CxxThrowException(nullptr, nullptr)
noreturn
