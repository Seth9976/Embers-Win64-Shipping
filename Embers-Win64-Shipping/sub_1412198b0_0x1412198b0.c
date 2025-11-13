// 函数: sub_1412198b0
// 地址: 0x1412198b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1[1]
uint64_t rbx = zx.q(arg3)
int32_t var_60 = *(r10 + 0x84)
int64_t* rax_1 = *arg1
int128_t var_38
__builtin_memcpy(&var_38, 
    "\xdc\xb3\xdd\x3f\xdc\xb3\xdd\x3f\xdc\xb3\xdd\x3f\xe4\xde\x77\x40\xe4\xde\x77\x40\xc3\x1b\x8f\x40\x"
"e4\xde\x77\x40\xe4\xde\x77\x40", 
    0x20)
uint64_t var_68 = *(r10 + 0x7c)
int32_t rax_2 = rax_1[1].d
uint64_t var_58 = *rax_1
int32_t var_50 = rax_2
float var_48
sub_141214010(&var_48, &var_58, &var_68, *(rbx * 0x38 + r10 + 0xc8))
int128_t* rdx_1 = &var_38
int128_t var_28

if ((rbx.b & 1) != 0)
    rdx_1 = &var_28
float zmm5 = *(arg1[2] + (zx.q(rbx.d) u>> 1 << 2))
float zmm1 = var_48 * 2f - 1f
float var_44
float zmm3 = (var_44 * 2f - 1f) * zmm5 f* *(rdx_1 + 4)
float var_40
*arg2 = (var_40 * 2f - 1f) * zmm5 f* *rdx_1
zmm1 = zmm1 * zmm5 f* *(rdx_1 + 8)
float var_3c
float zmm0_1 = (var_3c * 2f - 1f) * zmm5 f* *(rdx_1 + 0xc)
arg2[1] = zmm3
arg2[2] = zmm1
arg2[3] = zmm0_1
return arg2
