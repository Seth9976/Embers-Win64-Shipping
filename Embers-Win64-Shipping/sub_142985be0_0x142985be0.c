// 函数: sub_142985be0
// 地址: 0x142985be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
struct Imf_2_3::GenericOutputFile::Imf_2_3::OutputFile::VTable** arg_8 = arg1
int64_t var_130 = -2
int32_t var_138 = 0
*arg1 = &Imf_2_3::OutputFile::`vftable'{for `Imf_2_3::GenericOutputFile'}
int64_t* rax = j_sub_140a82f30(0x108)
var_138.q = rax

if (rax != 0)
    rax = sub_142985900(rax, arg4)

arg1[1] = rax
struct _Mtx_internal_imp_t* mtx = j_sub_140a82f30(0x60)
struct _Mtx_internal_imp_t* mtx_1 = mtx
var_138.q = mtx

if (mtx == 0)
    mtx_1 = nullptr
else
    _Mtx_init_in_situ(mtx, 2)
    mtx_1->__offset(0x50).q = 0
    mtx_1->__offset(0x58).q = 0

arg1[1][0x1f] = mtx_1
arg1[1][0x20].__offset(0x0).b = 0
sub_142982460(arg3, 0, 0)
*(arg1[1][0x1f] + 0x50) = arg2
arg1[1][3].__offset(0x0).b = 0
sub_142986ac0(arg1, arg3)
int64_t* rcx_6 = *(arg1[1][0x1f] + 0x50)
*(arg1[1][0x1f] + 0x58) = (*(*rcx_6 + 0x10))(rcx_6)
int64_t* r8 = arg1[1]
sub_1429a3700(arg1, *(r8[0x1f] + 0x50), r8)
int64_t* rcx_9 = arg1[1]
arg1[1][4] = sub_142983d30(rcx_9, *(rcx_9[0x1f] + 0x50))
void* rcx_11 = arg1[1]
arg1[1][0x18] = sub_142987270(*(*(rcx_11 + 0xf8) + 0x50), rcx_11 + 0x58)
return arg1
