// 函数: sub_142a6de70
// 地址: 0x142a6de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg4
int64_t* rcx = arg1[0x29]
arg4 = zx.o(0)

if (rcx == 0)
    return zx.o(0)

int64_t* rax_1 = (*(*rcx + 0x10))(rcx)

if (rax_1 == 0)
    return zx.o(0)

int32_t rsi_1 = *(arg3 + 8)
sub_142a67b70(rax_1)
(*(*arg1 + 0x48))(arg1, arg2, rax_1, arg3, __saved_zmm6)

if (*(arg3 + 8) != rsi_1)
    int32_t arg_8 = 0
    arg4 = sub_142a6a540(rax_1, &arg_8)
    
    if (arg_8 s> 0)
        *(arg3 + 8) = rsi_1
        arg4 = zx.o(0)
        *(arg3 + 0xc) = rsi_1

(**rax_1)(rax_1, 1)
return arg4
