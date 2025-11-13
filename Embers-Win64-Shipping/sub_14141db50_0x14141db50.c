// 函数: sub_14141db50
// 地址: 0x14141db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*(arg3 + 0x5c0) + 0x20)
float var_58
(*(*rcx + 0x10))(rcx, &var_58)
void*** r8_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &r8_2[3]

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    r8_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &r8_2[3]

*(arg1 + 0x30) = rax_2
int64_t* rax_3 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_3 = r8_2
*(arg1 + 8) = &r8_2[1]
r8_2[1] = 0
*r8_2 = &data_142f7e230
r8_2[2] = arg5
void* r14_1 = *arg4
sub_141080be0(r14_1, arg1, *(arg1 + 0x188), *(arg2 + 0x10))
float var_54
float zmm1 = var_54 f+ *(arg2 + 0x604)
int64_t rax_5 = *(arg1 + 0x188)
float var_48 = var_58 f+ *(arg2 + 0x600)
float var_50
float zmm0 = var_50 f+ *(arg2 + 0x608)
float var_44 = zmm1
float var_4c
float var_3c = var_4c * 1.03527617f
int64_t arg_8 = rax_5
float var_40 = zmm0
sub_1405d0e10(arg1, &arg_8, r14_1 + 0x118, &var_48, 0)
arg_8 = *(arg1 + 0x188)
int128_t var_38 = zx.o(0)
sub_1405d0e10(arg1, &arg_8, r14_1 + 0x11e, &var_38, 0)
void* rcx_5 = data_143f5b298

if (rcx_5 != 0)
    int64_t* rcx_6 = *(rcx_5 + 0xaf8)
    
    if (rcx_6 != 0)
        arg_8.d = (*(*rcx_6 + 0x30))(rcx_6, zx.q(*(arg2 + 0xad0)))
        int64_t arg_10 = *(arg1 + 0x188)
        sub_1405eb490(arg1, &arg_10, r14_1 + 0x130, &arg_8, 0)

sub_141224040(arg1)
void*** rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_11[3]

if (rax_10 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_11[3]

*(arg1 + 0x30) = rax_10
int64_t* rax_11 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_11 = rcx_11
*(arg1 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142f284f8
rcx_11[2] = arg5
return &data_142f284f8
