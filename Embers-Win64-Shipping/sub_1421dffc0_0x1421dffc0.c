// 函数: sub_1421dffc0
// 地址: 0x1421dffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *(arg1 + 0x18)
int16_t* var_28
int128_t zmm1 = sub_140b63b70(&arg_10, &var_28)
int32_t var_20
int32_t rcx_2
int16_t* rdx_1

if (var_20 == 0)
    rdx_1 = &data_142d40450
    rcx_2 = 0
else
    rdx_1 = var_28
    rcx_2 = var_20 - 1

int32_t rax_1 = sub_1405969c0(rcx_2, rdx_1)
bool cond:0 = var_28 == 0
int32_t arg_8 = rax_1
int32_t arg_c = rax_1

if (not(cond:0))
    zmm1 = sub_140a74f90(var_28)

int32_t* var_40 = &arg_8
int64_t* rax_2
int512_t zmm1_1
rax_2, zmm1_1 = sub_141fe56b0(arg1 + 0x30, &var_28, zx.o(0), zmm1, 0, nullptr)
zmm1_1.o = zx.o(0)
int64_t var_38 = *rax_2
int32_t var_30 = rax_2[1].d
int32_t zmm0_1 = sub_141fe5610(arg1 + 0x78, zmm1_1, 0, &arg_8)
sub_141fe97b0(arg2 + 0x88, &var_38)
return sub_141fe9790(arg2 + 0xa8, zmm0_1)
