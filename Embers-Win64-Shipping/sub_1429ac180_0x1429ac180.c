// 函数: sub_1429ac180
// 地址: 0x1429ac180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::GenericInputFile::Imf_2_3::TiledInputFile::VTable** arg_8 = arg1
int64_t var_28 = -2
*arg1 = &Imf_2_3::TiledInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* mtx_3 = j_sub_140a82f30(0x168)
struct _Mtx_internal_imp_t* mtx_1 = mtx_3

if (mtx_3 != 0)
    mtx_3 = sub_1429ac030(mtx_3, arg5)

arg1[1] = mtx_3
mtx_3->__offset(0x160).b = 0
struct _Mtx_internal_imp_t* mtx = j_sub_140a82f30(0x60)
struct _Mtx_internal_imp_t* mtx_2 = mtx
mtx_1 = mtx

if (mtx == 0)
    mtx_2 = nullptr
else
    _Mtx_init_in_situ(mtx, 2)
    mtx_2->__offset(0x50).q = 0
    mtx_2->__offset(0x58).q = 0

arg1[1][0x2b] = mtx_2
*(arg1[1][0x2b] + 0x50) = arg3
sub_14297d930(&arg1[1][0xa], arg2)
arg1[1][0xf].__offset(0x0).d = arg4
sub_1429accd0(arg1)
void* rcx_6 = arg1[1]
sub_1429be9d0(rcx_6 + 0xc0, *(*(rcx_6 + 0x158) + 0x50), rcx_6 + 0xe8, 0, 0)
arg1[1][0x2a].__offset(0x0).b = (*(*arg3 + 8))(arg3)
int64_t* rcx_11 = *(arg1[1][0x2b] + 0x50)
*(arg1[1][0x2b] + 0x58) = (*(*rcx_11 + 0x20))(rcx_11)
return arg1
