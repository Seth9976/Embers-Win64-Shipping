// 函数: sub_141ec68e0
// 地址: 0x141ec68e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
int512_t zmm1 = sub_142259c00(&var_38)
sub_142277d10(&var_38, 2)
uint32_t arg_18
void* arg_28
uint8_t rbx

if (sub_141ec41c0(arg_28, &arg_18, &var_38, zmm1, arg5) != 0)
    rbx = arg_18.b
else
    rbx = 0
    int128_t zmm1_1 = data_143f3a670
    var_38 = data_143f3a660
    int128_t var_28_1 = zmm1_1

int32_t rdi = data_143f3a5c8
sub_140b34200("RaycastMultiple", rdi)
int32_t var_50 = arg4[1].d
int32_t var_40 = arg3[1].d
int64_t var_58 = *arg4
int64_t var_48 = *arg3
char rax_4 =
    sub_141eb2a30(arg1, arg2, &arg_28, &var_48, &var_58, rbx, arg6, &var_38, &data_143f3a680)
sub_140b38680("RaycastMultiple", rdi)
return zx.q(rax_4)
