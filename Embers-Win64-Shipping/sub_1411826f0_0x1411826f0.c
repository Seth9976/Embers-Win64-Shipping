// 函数: sub_1411826f0
// 地址: 0x1411826f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = data_1439b5f70
int32_t r15 = data_1439b5f74
int32_t r13 = data_1439b5f78
int32_t* var_c8 = 1
wchar16 const* const var_88 = u"UnknownTexture"
int64_t var_c0 = 0
int32_t var_b8 = 0
int32_t var_a8 = 1
int32_t var_a4 = 0x10000
int16_t var_a0 = 1
int16_t var_90 = 0
int16_t var_80 = 1
char var_7e = 0
int32_t var_b4 = rbx
int32_t var_b0 = r15
int32_t var_ac = r13
int32_t var_9c = 0xa
int32_t var_98 = 8
int32_t var_94 = 0x10008
void*** result = sub_141188e50(arg1, &var_c8, u"HairLUT", 0)
int32_t* rax = sub_14081d830(0x30, *(arg1 + 8), 1, 0)
int32_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *(rax + 0x20) = 0

__builtin_memset(rdi, 0, 0x30)
int16_t var_d0 = 0
void*** rax_1
int512_t zmm6
rax_1, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_1 != 0)
    rax_1[1] = result[1]
    *rax_1 = &data_142f285c0
    rax_1[2] = 0
    *(rax_1 + 0x18) = result.o

*(rdi + 0x20) = rax_1
rdi[2] = rbx
rdi[1] = r15
*rdi = r13
rdi[3] = data_1439b5f7c
rdi[4] = rbx
rdi[5] = r15
rdi[6] = r13
int128_t var_68
char rcx_3 = sub_1419a2ec0(*(arg2 + 0x5150), &var_68, &data_143e6d200, arg3)
int128_t zmm7 = var_68
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx + 7)
zmm6.o = zx.o(0)
void*** var_d8
var_d8.d = (temp1 + (temp0 & 7)) s>> 3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r15 + 7)
var_d8:4.d = (temp3 + (temp2 & 7)) s>> 3
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r13 + 7)
int128_t var_78 = sub_14118e8c0(rcx_3)
sub_141998c50(zmm7.q, &data_143e74280, rdi)
int64_t* rdx_10 = *(arg1 + 8)
var_c8 = rdi
var_c0.o = zmm7
var_b0.q = var_d8
void*** rax_13
char rcx_5
rax_13, rcx_5 = sub_14081d830(0x60, rdx_10, 1, 0)
void*** rbx_3 = rax_13

if (rax_13 == 0)
    rbx_3 = nullptr
else
    sub_14118e8c0(rcx_5)
    var_d0.q = &data_143e742b0
    var_78 = rdi.o
    void arg_18
    sub_141992bd0(rbx_3, &arg_18, &var_78, 2)
    uint128_t zmm0_4 = var_c8.o
    *rbx_3 = &data_142f2ca98
    *(rbx_3 + 0x38) = zmm0_4
    *(rbx_3 + 0x48) = var_b8.o
    rbx_3[0xb] = (((temp4 & 7) + temp5) s>> 3).q

sub_1419968d0(arg1, rbx_3)
return result
