// 函数: sub_1411cf5d0
// 地址: 0x1411cf5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = 0
int64_t var_b8 = 1
int32_t var_a8 = 0
int32_t var_98 = 1
int32_t var_94 = 0x10000
int16_t var_90 = 1
int16_t var_80 = 0
wchar16 const* const var_78 = u"UnknownTexture"
int16_t var_70 = 1
int32_t temp0 = _mm_sqrt_ss(0, float.s(zx.q(arg3)))
char var_6e = 0
int32_t var_9c = 0
int64_t var_8c = 0xa
int32_t var_84 = 0x10009
int32_t rbx_2 = neg.d(int.d(-0.5f f- (temp0 f+ temp0)) s>> 1)
int32_t var_a0 = rbx_2
void*** result = sub_141188e50(arg1, &var_b8, u"HairLightSample", 0)
int32_t* rax_1 = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
int32_t* rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    sub_14117af20(&rax_1[4])

memset(&rdi[4], 0, 0x90)
*rdi = rbx_2
rdi[1] = rbx_2
*(rdi + 8) = arg4
int128_t var_c8
sub_1419a2ec0(*(arg2 + 0x5150), &var_c8, &data_143e77180, 0)
int128_t zmm6 = var_c8
sub_1419a2ec0(*(arg2 + 0x5150), &var_c8, &data_143e77280, 0)
int128_t zmm1_1 = var_c8
var_c8.q = result
var_c8:8.w = 0
var_c8:0xa.b = 0
var_c8:0xc.d = 0xffffffff
*(rdi + 0x10) = var_c8
int128_t var_60 = zmm6
int64_t var_40 = rbx_2.q
void*** rax_3
char rcx_4
rax_3, rcx_4 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
void*** rbx_3 = rax_3

if (rax_3 == 0)
    rbx_3 = nullptr
else
    var_c8.q = rdi
    sub_1411e2710(rcx_4)
    var_c8:8.q = &data_143e7bdb0
    var_c8 = var_c8
    void arg_18
    sub_141992bd0(rbx_3, &arg_18, &var_c8, 1)
    *rbx_3 = &data_142f38928
    *(rbx_3 + 0x38) = rdi.o
    int128_t var_58
    *(rbx_3 + 0x48) = var_58
    *(rbx_3 + 0x58) = zmm1_1

sub_1419968d0(arg1, rbx_3)
return result
