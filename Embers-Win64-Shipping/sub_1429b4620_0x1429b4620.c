// 函数: sub_1429b4620
// 地址: 0x1429b4620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::GenericInputFile::Imf_2_3::DeepScanLineInputFile::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &Imf_2_3::DeepScanLineInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* rax = j_sub_140a82f30(0x1e8)
struct _Mtx_internal_imp_t* arg_10 = rax

if (rax != 0)
    rax = sub_1429b4420(rax, arg2[3].d)

arg1[1] = rax
rax->__offset(0x1e0).b = 0
arg1[1][0x3b] = arg2[5]
int64_t* rcx_3 = *(arg1[1][0x3b] + 0x50)
arg1[1][0x2d].__offset(0x0).b = (*(*rcx_3 + 8))(rcx_3)
arg1[1][0xd].__offset(0x0).d = arg2[4].d
sub_1429b5430(arg1, arg2)
sub_1429a8ba0(&arg1[1][0x1a], &arg2[6])
*(arg1[1] + 0x154) = *(arg2 + 0x1c)
return arg1
