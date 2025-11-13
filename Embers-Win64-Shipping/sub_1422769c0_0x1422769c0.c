// 函数: sub_1422769c0
// 地址: 0x1422769c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg2
int32_t var_20 = arg2[1].d
int128_t zmm0 = var_28.o
var_28.o = zmm0
int64_t var_18
int64_t* rax_3 = (*(*arg1 + 0x30))(zmm0, &var_18)
int16_t* const rbx

if (rax_3[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *rax_3

sub_140a464c0()
char rax_4 = sub_140b27070(&var_28, rbx, &data_14399ea08, 0)
int64_t rcx_1 = var_18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return zx.q(rax_4)
