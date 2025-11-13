// 函数: sub_142813f40
// 地址: 0x142813f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg3

if (r8 == 0xffffffff)
    return 

int64_t var_40_1 = *(arg1 + 0x20)
int32_t var_48_1 = r8
sub_142817350(*arg2, 1, "\n Adding %d padding bytes at offset %d in class %s.\n", zx.q(*arg4))
uint64_t rcx_1 = zx.q(*(arg1 + 0x48))
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
char const* const var_38 = "paddingByte"
char const* const var_30_1 = "auto-generated padding"
var_28.d = *arg3
int32_t rax_3 = *arg4
var_28:4.d = rax_3
int64_t var_20
var_20.d = rax_3
int64_t var_18
var_18.d = 0x200

if ((*(arg1 + 0x4c) & 0x7fffffff) u> rcx_1.d)
    int128_t* rdx_1 = *(arg1 + 0x40) + rcx_1 * 0x28
    
    if (rdx_1 != 0)
        int128_t zmm1 = var_28.o
        *rdx_1 = var_38.o
        rdx_1[1] = zmm1
        rdx_1[2].q = var_18
    
    *(arg1 + 0x48) += 1
else
    sub_142816070(arg1 + 0x40, &var_38)

*arg3 = 0xffffffff
