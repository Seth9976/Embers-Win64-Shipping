// 函数: sub_140d74720
// 地址: 0x140d74720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void* rax_2 = *arg1
void* rdx_1 = *(rax_2 + 0x18)
int64_t* rcx_2 = *(rax_2 + 0x10)
int64_t* var_48 = rcx_2
void* var_40_1 = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 8) += 1

int64_t* rax_4 = (*(*rcx_2 + 0xa8))()
int64_t r8_1 = *rax_4
int64_t var_38
int64_t* rax_5 = (*(r8_1 + 0x28))(rax_4, &var_38, r8_1)
wchar16* _String

if (rax_5[1].d == 0)
    _String = &data_142d40450
else
    _String = *rax_5

_wtof(_String)
int512_t zmm1
zmm1.o = zx.o(0)
zmm1.d = fconvert.s(arg2)
zmm1.o = _mm_cvtps_pd(zmm1.q)
void var_28
int512_t zmm1_1 = sub_140d6eea0(&var_28, zmm1)
int64_t rcx_5 = var_38

if (rcx_5 != 0)
    zmm1_1 = sub_140a74f90(rcx_5)

sub_140597060(&var_48)
**arg1[2] = sub_140d6fea0(&var_28, zmm1_1)
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

*arg1[1] = 0
