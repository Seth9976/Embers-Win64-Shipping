// 函数: sub_1429b46f0
// 地址: 0x1429b46f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** arg_8 = arg1
int64_t var_28 = -2
*arg1 = &Imf_2_3::DeepScanLineInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* mtx_3 = j_sub_140a82f30(0x1e8)
struct _Mtx_internal_imp_t* mtx_1 = mtx_3

if (mtx_3 != 0)
    mtx_3 = sub_1429b4420(mtx_3, arg5)

arg1[1] = mtx_3
struct _Mtx_internal_imp_t* mtx = j_sub_140a82f30(0x60)
struct _Mtx_internal_imp_t* mtx_2 = mtx
mtx_1 = mtx

if (mtx == 0)
    mtx_2 = nullptr
else
    _Mtx_init_in_situ(mtx, 2)
    mtx_2->__offset(0x50).q = 0
    mtx_2->__offset(0x58).q = 0

arg1[1][0x3b] = mtx_2
arg1[1][0x3c].__offset(0x0).b = 0
*(arg1[1][0x3b] + 0x50) = arg3
arg1[1][0x2d].__offset(0x0).b = (*(*arg3 + 8))(arg3)
arg1[1][0xd].__offset(0x0).d = arg4
sub_1429b5430(arg1, arg2)
void* rax_6 = arg1[1]
sub_1429b5b60(*(*(rax_6 + 0x1d8) + 0x50), *(rax_6 + 0xb8), rax_6 + 0xd0, rax_6 + 0xe8)
return arg1
