// 函数: sub_1429b4d60
// 地址: 0x1429b4d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* rbx = arg1[1]
*arg1 = &Imf_2_3::DeepScanLineInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* r8 = rbx

if (rbx->__offset(0x1e0).b != 0)
    int64_t* rcx = *(rbx->__offset(0x1d8).q + 0x50)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
        r8 = arg1[1]
        rbx = r8

if (r8 != 0)
    if (r8->__offset(0x168).b == 0)
        int64_t i = 0
        
        if ((r8->__offset(0x140).q - r8->__offset(0x138).q) s>> 3 != 0)
            do
                j_sub_140a74f90(*(*(arg1[1][0x27] + (i << 3)) + 8))
                r8 = arg1[1]
                i += 1
                rbx = r8
            while (i u< (r8->__offset(0x140).q - r8->__offset(0x138).q) s>> 3)
    
    if (r8->__offset(0x154).d == 0xffffffff)
        struct _Mtx_internal_imp_t* mtx = r8->__offset(0x1d8).q
        
        if (mtx != 0)
            _Mtx_destroy_in_situ(mtx)
            j_sub_140a74f90(mtx)
            rbx = arg1[1]
    
    if (rbx != 0)
        sub_1429b4810(rbx)
        j_sub_140a74f90(rbx)

*arg1 = &Imf_2_3::GenericInputFile::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
