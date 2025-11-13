// 函数: sub_1411e0f70
// 地址: 0x1411e0f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
void* arg_8 = arg1
int64_t rax = *arg8
int64_t rsi
rsi.b = rax == 0

if (rax == 0)
    int16_t var_64_1 = rax.w
    int16_t var_50_1 = rax.w
    wchar16 const* const var_48_1 = u"UnknownTexture"
    int128_t var_a4_1 = zx.o(0)
    int32_t var_70_1 = arg3:4.d
    int32_t var_68_1 = 1
    int16_t var_60_1 = 1
    int16_t var_40_1 = 1
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    int32_t var_74_1 = arg3.d
    int16_t r9
    int16_t var_62_1 = r9
    int32_t var_6c_1 = 0
    char var_3e_1 = 0
    int128_t var_88 = 1.o
    int32_t var_78_1 = temp0_1
    int64_t var_5c_1 = 0x25
    int32_t var_54_1 = 0x10009
    void*** rax_2 = sub_141188e50(arg1, &var_88, u"FollicleMask", 0)
    arg1 = arg_8
    arg2 = arg_10
    *arg8 = rax_2

void* i = *arg7
int64_t result = sx.q(arg7[1].d)

for (void* rdi_1 = result * 0x70 + i; i != rdi_1; i += 0x70)
    result = sub_1411d0910(arg1, arg2, rsi.b, arg4, arg5, arg6, i, *arg8)
    arg1 = arg_8
    rsi.b = 0
    arg2 = arg_10

return result
