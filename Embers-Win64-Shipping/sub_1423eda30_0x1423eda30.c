// 函数: sub_1423eda30
// 地址: 0x1423eda30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int128_t zmm1 = data_142d3f5a0
bool cond:0 = *(arg3 + 0x38) u> 1
void* var_178 = arg3
bool var_5f = cond:0
int32_t var_a0 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
int16_t var_164 = 0x900
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
void var_160
memset(&var_160, 0, 0xa8)
int64_t rdi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_2 = rdi_2 + 0x36

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rdi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_2 = rdi_2 + 0x36

wchar16 const* const rcx_2 = u"RenderTexture_RenderThread"
*(arg2 + 0x30) = rax_2
wchar16 const i

do
    i = *rcx_2
    *(rdi_2 - u"RenderTexture_RenderThread" + rcx_2) = i
    rcx_2 = &rcx_2[1]
while (i != 0)
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_5[0x27]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_5[0x27]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_5
*(arg2 + 8) = &rcx_5[1]
sub_1405d11b0(rcx_5, &var_178, rdi_2)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_178)
int64_t var_68
*(arg2 + 0x178) = var_68:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t zmm6 = float.s(zx.q(*(arg3 + 0x64)))
int128_t zmm7
zmm7.d = float.s(zx.q(*(arg3 + 0x60)))
void* rax_9 = &rcx_13[5]

if (rax_9 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_13[5]

*(arg2 + 0x30) = rax_9
void**** rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142d54998
*(rcx_13 + 0x1c) = zmm7.d
rcx_13[4].d = zmm6
rcx_13[2] = 0
rcx_13[3].d = 0
*(rcx_13 + 0x24) = 0x3f800000
int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_198)
return result
