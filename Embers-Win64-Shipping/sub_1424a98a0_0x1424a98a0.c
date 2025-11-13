// 函数: sub_1424a98a0
// 地址: 0x1424a98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = arg1[6].b & 3
(*(*arg2 + 0x158))(arg2, &arg_8, 2)
arg1[6].b ^= (arg_8 ^ arg1[6].b) & 3
*arg4 = 1
char rax_3
int64_t r8_1
int512_t zmm1
int512_t zmm3
rax_3, r8_1, zmm1, zmm3 = sub_1424a9b40(arg1, arg2, &arg1[3], *(arg1 + 0x31))
*arg4 &= rax_3
uint32_t rcx_2 = zx.d(*(arg1 + 0x33))

if (rcx_2 == 0)
    sub_140ae04f0(arg1 + 0x24, arg2, r8_1, zmm3)
else if (rcx_2 == 1)
    sub_140ae06f0(arg1 + 0x24, arg2, r8_1, zmm3, zmm1)

char rax_4 = sub_1424a9b40(arg1, arg2, arg1, *(arg1 + 0x32))
*arg4 &= rax_4

if ((arg1[6].b & 2) != 0)
    rax_4 = sub_1424a9b40(arg1, arg2, arg1 + 0xc, *(arg1 + 0x32))
    *arg4 &= rax_4

return 1
