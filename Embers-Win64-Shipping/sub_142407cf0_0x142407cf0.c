// 函数: sub_142407cf0
// 地址: 0x142407cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142420370(arg1)
int32_t var_48 = var_48 & 0xfffffffe
char var_58 = 1
int128_t var_44
__builtin_memset(&var_44, 0, 0x20)
int64_t* result
int128_t zmm6
result, zmm6 = sub_14240fbe0(arg2, 0, nullptr, 0, 0x2e, &var_48, 1)
void* rcx_1 = *(arg2 + 0x68)
int64_t* result_1 = result
int32_t rsi

if (rcx_1 == 0)
    rsi = -1
else
    rsi = *(rcx_1 + 0x18)

int32_t rcx_2 = *(arg1 + 0x50)
int32_t r10 = 0

if (rcx_2 s> 0)
    int128_t var_18_1 = zmm6
    zmm6 = zx.o(0)
    int32_t rbx_1
    
    do
        int64_t r9_1 = *(arg1 + 0x48)
        rbx_1 = r10 + 1
        var_58.d = zmm6.d
        int32_t* var_60
        var_60.d = *(arg1 + 0x40)
        result, zmm6 = sub_141e92fc0(result_1, r9_1 + sx.q(r10) * 0xc, 
            r9_1 + sx.q(mods.dp.d(sx.q(rbx_1), rcx_2)) * 0xc, arg1 + 0x28, rsi, var_60.d, 1, 0)
        rcx_2 = *(arg1 + 0x50)
        r10 = rbx_1
    while (rbx_1 s< rcx_2)

return result
