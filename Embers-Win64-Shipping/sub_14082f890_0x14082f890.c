// 函数: sub_14082f890
// 地址: 0x14082f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450

if (arg2[1].d != 0)
    *arg2

int64_t* var_58
int64_t** rax
int128_t zmm6
rax, zmm6 = sub_14082fa30(*(arg1 + 0x28), &var_58)
int64_t* r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int16_t* var_68
sub_140a2e390(&var_68, u"%s%s", r8)
int64_t* rcx_2 = var_58

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int128_t var_18 = zmm6
int32_t var_60

if (var_60 != 0)
    rbx = var_68

int64_t arg_8
sub_140b58260(&arg_8, rbx, 1)
int64_t var_48 = arg_8
int64_t var_40 = data_14396f088
int16_t var_38 = data_14396f090
int64_t var_30 = 0
int64_t var_28 = 0
int32_t var_36 = 0xffffffff
int32_t* rax_5 = (*(*(arg1 + 0x40) + 0x30))(arg1 + 0x40, &var_48)
int64_t rax_6

if (rax_5 != 0)
    rax_6 = sx.q(*rax_5)

int128_t zmm6_1

if (rax_5 == 0 || rax_6.d == 0xffffffff)
    zmm6_1 = zx.o(0)
else
    zmm6_1 = *(rax_6 + *(arg1 + 0x60))

if (var_30 != 0)
    sub_140a74f90(var_30)

int16_t* rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int512_t result
result.o = zmm6_1
return result
