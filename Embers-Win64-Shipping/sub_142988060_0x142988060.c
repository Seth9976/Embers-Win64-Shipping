// 函数: sub_142988060
// 地址: 0x142988060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &Imf_2_3::InputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* rcx = arg1[1]
struct _Mtx_internal_imp_t* rax = rcx

if (rcx->__offset(0xe8).b != 0)
    int64_t* r8_1 = *(rcx->__offset(0xe0).q + 0x50)
    rax = rcx
    
    if (r8_1 != 0)
        (**r8_1)(r8_1, 1)
        rax = arg1[1]
        rcx = rax

if (rax->__offset(0xc4).d == 0xffffffff)
    struct _Mtx_internal_imp_t* mtx = rax->__offset(0xe0).q
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)
        rcx = arg1[1]

if (rcx != 0)
    sub_142987f30(rcx, 1)

*arg1 = &Imf_2_3::GenericInputFile::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
