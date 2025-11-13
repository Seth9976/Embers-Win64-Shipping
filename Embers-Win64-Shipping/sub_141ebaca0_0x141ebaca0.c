// 函数: sub_141ebaca0
// 地址: 0x141ebaca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450
wchar16* rdi

if (arg2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

int64_t var_24 = 0
_wtof(rdi)
int32_t var_28 = fconvert.s(arg4)
wchar16* rax
double zmm0
rax, zmm0 = wcsstr(rdi, U",")

if (rax != 0)
    _wtof(&rax[1])
    var_24.d = fconvert.s(zmm0)
    wchar16* rax_1
    rax_1, zmm0 = wcsstr(&rax[1], U",")
    
    if (rax_1 != 0)
        _wtof(&rax_1[1])
        var_24:4.d = fconvert.s(zmm0)

if (arg3[1].d != 0)
    rbx = *arg3

int64_t var_34 = 0
_wtof(rbx)
int32_t var_38 = fconvert.s(zmm0)
wchar16* rax_2
double zmm0_1
rax_2, zmm0_1 = wcsstr(rbx, U",")

if (rax_2 != 0)
    _wtof(&rax_2[1])
    var_34.d = fconvert.s(zmm0_1)
    wchar16* rax_3
    rax_3, zmm0_1 = wcsstr(&rax_2[1], U",")
    
    if (rax_3 != 0)
        _wtof(&rax_3[1])
        var_34:4.d = fconvert.s(zmm0_1)

int32_t var_10 = var_34:4.d
var_34:4.d = var_24:4.d
int64_t rax_6 = *arg1
double var_18 = var_38.q
var_38.q = var_28.q
return (*(rax_6 + 0x3d8))(arg1, &var_38, &var_18)
