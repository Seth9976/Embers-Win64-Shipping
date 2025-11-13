// 函数: sub_141d79ec0
// 地址: 0x141d79ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (arg1[9] == 0)
    int64_t arg_8 = 0
    arg2.b = 2
    sub_140d23f50(u"Capture protocol is not currently set up to generate filenames.", arg2.b)
    *result = 0
    result[1] = 0
    return result

uint32_t rcx = zx.d(arg1[0x1b].b)
wchar16 const* const r9 = u".ext"

if (rcx == 0)
    r9 = u".png"
else if (rcx == 1)
    r9 = u".jpg"
else if (rcx == 2)
    r9 = u".bmp"
else if (rcx == 3)
    r9 = u".exr"

int64_t rax_1 = *arg1
arg1[0x1a] = arg4
int64_t var_18
(*(rax_1 + 0x2d0))(arg1, &var_18, arg1 + 0x6c, r9, 0)
sub_141d782c0(arg1, &var_18)
int64_t rax_2 = var_18
arg1[0x1a] = 0
*result = rax_2
int32_t var_10
result[1].d = var_10
int32_t var_c
*(result + 0xc) = var_c
return result
