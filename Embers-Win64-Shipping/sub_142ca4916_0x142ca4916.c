// 函数: sub_142ca4916
// 地址: 0x142ca4916
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0x160)
void* rax = *(rbx + 8)

if (rax != 0 && *(rax + 0xd0) == 0)
    struct _Mtx_internal_imp_t* mtx = *(rax + 0xe0)
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)

struct _Mtx_internal_imp_t* rcx_2 = *(rbx + 8)

if (rcx_2 != 0)
    sub_142987f30(rcx_2, 1)

*(rbx + 8) = 0
_CxxThrowException(nullptr, nullptr)
noreturn
