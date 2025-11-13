// 函数: sub_142801500
// 地址: 0x142801500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg5
int32_t var_28 = 0xbf800000
int32_t var_24 = 0
int32_t var_38 = 0
int64_t var_30 = 0
int64_t zmm1 = rdi[1].q
int128_t var_68 = *rdi
int64_t var_48 = 0
int32_t var_40 = 1
int16_t var_20 = 0
int64_t var_58 = zmm1
sub_142804800(&var_68, arg3, &var_48, arg4, arg6)
int64_t arg_10 = 0
sub_142806320(arg3, "samples", &arg_10, &var_38, &arg5, arg4)
int64_t* rcx_2 = *rdi
int64_t var_30_1 = arg_10
int64_t rbx_1 = **(rdi + 8)
int64_t rax_4 = (*(*rcx_2 + 0x138))(rcx_2)
int64_t rax_5 = (*(rbx_1 + 0x60))(*(rdi + 8), &var_48, rax_4)
arg2[1] = rax_5
arg2[2] = rax_5
*arg2 = "PxHeightField"
return arg2
