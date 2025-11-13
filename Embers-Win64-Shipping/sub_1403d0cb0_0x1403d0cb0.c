// 函数: sub_1403d0cb0
// 地址: 0x1403d0cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t var_8 = __security_cookie ^ &var_38
int32_t var_10
__builtin_strncpy(&var_10, "tRNS", 5)
int64_t result
char var_16

if (arg5 == 0)
    uint32_t rax_2 = zx.d(*(arg3 + 8))
    int64_t rcx_1
    rcx_1.b = *(arg1 + 0x25f)
    
    if (1 << rcx_1.b s<= rax_2)
        result =
            png_warning(arg1, "Ignoring attempt to write tRNS chunk out-of-range for bit_depth")
    else
        var_16 = rax_2:1.b
        char var_15_1 = rax_2.b
        result = png_write_chunk(arg1, &var_10, &var_16, 2)
else if (arg5 == 2)
    uint32_t rax_3 = zx.d(*(arg3 + 2))
    uint16_t r9_2 = (rax_3 u>> 8).w
    var_16 = r9_2.b
    char var_15_2 = rax_3.b
    uint32_t rax_4 = zx.d(*(arg3 + 4))
    uint16_t rdx_4 = (rax_4 u>> 8).w
    char var_14_1 = rdx_4.b
    char var_13_1 = rax_4.b
    uint32_t rcx_2 = zx.d(*(arg3 + 6))
    uint16_t rax_6 = (rcx_2 u>> 8).w
    char var_12_1 = rax_6.b
    char var_11_1 = rcx_2.b
    
    if (*(arg1 + 0x25f) != 8 || (rdx_4 | r9_2 | rax_6) == 0)
        result = png_write_chunk(arg1, &var_10, &var_16, 6)
    else
        result =
            png_warning(arg1, "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8")
else if (arg5 != 3)
    result = png_warning(arg1, "Can't write tRNS with an alpha channel")
else if (arg4 s<= 0 || zx.d(*(arg1 + 0x250)) s< arg4)
    result = png_warning(arg1, "Invalid number of transparent colors specified")
else
    result = png_write_chunk(arg1, &var_10, arg2, sx.q(arg4))
__security_check_cookie(var_8 ^ &var_38)
return result
