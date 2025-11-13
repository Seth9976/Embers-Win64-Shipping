// 函数: sub_1429a8e00
// 地址: 0x1429a8e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* rbx = arg1[1]
struct _Mtx_internal_imp_t* r8 = rbx
*arg1 = &Imf_2_3::ScanLineInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}

if (rbx->__offset(0x12c).b == 0)
    int64_t i = 0
    
    if ((rbx->__offset(0x108).q - rbx->__offset(0x100).q) s>> 3 != 0)
        do
            _aligned_free(*(*(arg1[1][0x20] + (i << 3)) + 8))
            r8 = arg1[1]
            i += 1
            rbx = r8
        while (i u< (r8->__offset(0x108).q - r8->__offset(0x100).q) s>> 3)

if (r8->__offset(0x128).d == 0xffffffff)
    struct _Mtx_internal_imp_t* mtx = arg1[2]
    
    if (mtx != 0)
        _Mtx_destroy_in_situ(mtx)
        j_sub_140a74f90(mtx)
        rbx = arg1[1]

if (rbx != 0)
    sub_1429a88e0(rbx)
    j_sub_140a74f90(rbx)

*arg1 = &Imf_2_3::GenericInputFile::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
