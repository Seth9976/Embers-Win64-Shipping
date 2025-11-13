// 函数: sub_141db7470
// 地址: 0x141db7470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg3 + 0x48))(arg3)
float zmm9[0x4] = arg4
int32_t rax_2 = (*(*arg3 + 0x68))(arg3)
int64_t r9 = *arg3
int32_t rax_3 = (*(r9 + 0x60))(arg3, arg5, arg6, r9)
int64_t rdx = *arg3
int32_t rax_4 = (*(rdx + 0x58))(arg3, rdx)
int64_t rdx_1 = *arg3
(*(rdx_1 + 0x28))(arg3, rdx_1)
int64_t r8 = *arg3
float zmm8[0x4] = arg4
void var_78
int64_t* rax_5 = (*(r8 + 0x50))(arg3, &var_78, r8)
int64_t rdx_3 = *arg3
(*(rdx_3 + 0x40))(arg3, rdx_3)
int64_t rdx_4 = *arg3
float zmm7[0x4] = arg4
(*(rdx_4 + 0x38))(arg3, rdx_4)
int64_t r8_1 = *arg3
float zmm6[0x4] = arg4
void var_6c
int64_t* rax_6 = (*(r8_1 + 0x30))(arg3, &var_6c, r8_1)
arg4 = zx.o(0)
bool cond:0 = zmm8[0] < 0f
*arg1 = *rax_6
arg1[1].d = rax_6[1].d
*(arg1 + 0xc) = *rax_5
*(arg1 + 0x14) = rax_5[1].d
zmm6[0] = zmm6[0] f* *(arg2 + 0x40)
arg1[4].d = zmm7[0]
*(arg1 + 0x1c) = zmm6[0]

if (not(cond:0))
    arg4 = __minss_xmmss_memss(zmm8[0], 0x3f800000)

arg1[5].d = 0
*(arg1 + 0x24) = arg4[0]
*(arg1 + 0x2c) = rax_4
arg1[6].d = rax_3
*(arg1 + 0x34) = rax_2
arg1[3].d = *(arg2 + 0x30)
arg1[7].d = zmm9[0]
*(arg1 + 0x14) = 0
return arg1
