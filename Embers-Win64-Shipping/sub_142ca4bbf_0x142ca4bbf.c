// 函数: sub_142ca4bbf
// 地址: 0x142ca4bbf
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rcx = *(arg2 + 0x178)

if (rcx != 0)
    (**rcx)(rcx, 1)

void* rdi = *(arg2 + 0x160)
void* rax_2 = *(rdi + 8)

if (rax_2 != 0 && *(rax_2 + 0xd0) == 0)
    struct _Mtx_internal_imp_t* mtx = *(rax_2 + 0xe0)
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)

struct _Mtx_internal_imp_t* rcx_3 = *(rdi + 8)

if (rcx_3 != 0)
    sub_142987f30(rcx_3, 1)

_CxxThrowException(nullptr, nullptr)
noreturn
