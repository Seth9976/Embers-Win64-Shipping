// 函数: sub_1417558e0
// 地址: 0x1417558e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a9538)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1, &data_1439a9538)

if (rax_1 s>= 0x19)
    return sub_14152dda0(sub_14152dda0(arg1, arg2, zmm1), arg2 + 0xc, zmm1) __tailcall

void** const var_38 = &data_142fc4870
int32_t var_30 = 0x1010101
int128_t var_28
__builtin_memcpy(&var_28, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
char var_2c = 1
sub_141753370(&var_38, arg1)
int32_t rax_2 = var_28:8.d
*arg2 = var_28.q
arg2[1].d = rax_2
*(arg2 + 0xc) = var_28:0xc.q
int32_t result
*(arg2 + 0x14) = result
return result
