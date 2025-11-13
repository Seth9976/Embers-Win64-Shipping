// 函数: sub_1407571d0
// 地址: 0x1407571d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rcx = *r9

if (r8_1 s>= rcx)
    int64_t rax_1 = 0
    
    do
        r8_1 -= rcx
        rax_1 += 1
        rcx = r9[rax_1]
        rdx += 1
    while (r8_1 s>= rcx)

int32_t* r8_2 =
    *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t rdx_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_78 = rdx_4
int32_t rax_6
rax_6.b = rdx_4 != 0x7fff
void* var_68
void var_70

if (rdx_4 == 0x7fff)
    var_68 = &var_70
else
    var_68 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int32_t var_c
int32_t var_c_1 = var_c & 0xfffffff8
int32_t var_48 = 0xffffffff
int128_t var_58 = zx.o(0)
int128_t var_28
__builtin_memset(&var_28, 0, 0x18)
int32_t var_44
__builtin_memset(&var_44, 0, 0x14)
int32_t var_10 = 0xffffffff
sub_14077b510(&var_58, r8_2)
int64_t var_38
int32_t r8_3

if (var_38 == 0)
    r8_3 = 0
else
    r8_3 = *(var_28:8.q + 8)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_6 = var_68
        i += 1
        var_68 = &rdx_6[sx.q(rax_6)]
        *rdx_6 = r8_3
    while (i s< *(arg2 + 0x40))

int64_t result
result.b = 1
return result
