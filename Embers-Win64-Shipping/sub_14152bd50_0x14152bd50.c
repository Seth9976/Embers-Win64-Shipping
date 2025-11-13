// 函数: sub_14152bd50
// 地址: 0x14152bd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
double zmm0 = *(arg2 + 0x18)
arg1[1] = zmm0
double zmm2 = *(arg2 + 0x20)
arg1[2] = zmm2
double zmm1 = *(arg2 + 0x28)
arg1[3] = zmm1
arg1[4] = *(arg2 + 0x30)
arg1[5] = *(arg2 + 0x38)
arg1[6] = *(arg2 + 0x40)
arg1[7].d = arg3
arg1[8].d = arg5
*(arg1 + 0x3c) = arg4
int32_t rcx_1 = arg3 * arg4
*(arg1 + 0x44) = rcx_1
int32_t r8_1 = rcx_1 * arg5
arg1[9].d = r8_1
*(arg1 + 0x4c) = *(arg2 + 0xc8)
arg1[0xa] = *(arg2 + 0xa8)
arg1[0xb] = *(arg2 + 0xb0)
arg1[0xc] = *(arg2 + 0xb8)
arg1[0xd] = zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1
arg1[0xe].d = 0
*(arg1 + 0x74) = ((arg3 + arg4) * arg5 + rcx_1 + 3) * 3
arg1[0xf] = &data_142fbe850
arg1[0x10] = *(arg2 + 0x48)
int64_t rcx_4 = sx.q(r8_1)
int64_t rax_11 = 4 * rcx_4

if (mulu.dp.q(4, rcx_4) u>> 0x40 != zx.o(0))
    rax_11 = -1

int64_t rax_12 = j_sub_140a82f30(rax_11)
int64_t rcx_6 = sx.q(*(arg1 + 0x74))
arg1[0x11] = rax_12
int64_t rax_13 = 4 * rcx_6

if (mulu.dp.q(4, rcx_6) u>> 0x40 != zx.o(0))
    rax_13 = -1

int64_t rax_14 = j_sub_140a82f30(rax_13)
int64_t rcx_8 = sx.q(*(arg1 + 0x74))
int32_t* i = arg1[0x11]
arg1[0x12] = rax_14
arg1[0x13] = rax_14 + (rcx_8 << 2)

if (i u< &i[sx.q(arg1[9].d)])
    do
        *i = 0
        i = &i[1]
    while (i u< arg1[0x11] + (sx.q(arg1[9].d) << 2))

return arg1
