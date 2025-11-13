// 函数: sub_14139c620
// 地址: 0x14139c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x18) - 1
int32_t temp0 = divs.dp.d(sx.q(rax_1 + arg3.d), arg3.d)
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(temp0)
int32_t r9

if (rax_1 == neg.d(arg3.d))
    r9 = 0x20
else
    r9 = 0x1f - temp0_1

uint64_t rflags_1
char temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(temp0 - 1)
char rcx_1

if (temp0 == 1)
    rcx_1 = 0x20
else
    rcx_1 = 0x1f - temp0_2

uint32_t r8 = (arg3 u>> 0x20).d
int32_t rsi = 1
int32_t rax_9 = *(arg1 + 0x1c) - 1
int32_t rbx = 1 << ((0x20 - rcx_1) & (not.d(r9 << 0x1a s>> 0x1f)).b)
int32_t temp0_3 = divs.dp.d(sx.q(rax_9 + r8), r8)
uint64_t rflags_2
int32_t temp0_4
temp0_4, rflags_2 = _bit_scan_reverse(temp0_3)
int32_t rcx_3

if (rax_9 == neg.d(r8))
    rcx_3 = 0x20
else
    rcx_3 = 0x1f - temp0_4

uint64_t rflags_3
char temp0_5
temp0_5, rflags_3 = _bit_scan_reverse(temp0_3 - 1)
char r10

if (temp0_3 == 1)
    r10 = 0x20
else
    r10 = 0x1f - temp0_5

int128_t zmm0 = *(arg1 + 8)
int64_t rcx_8 = zmm0:8.q
int64_t r8_1 = rbx.q
uint32_t r9_5 = (r8_1 u>> 0x20).d
int32_t rcx_10 = 1
int32_t arg_14 = divs.dp.d(sx.q((rcx_8 u>> 0x20).d - 1 + r9_5), r9_5)
int64_t rax_23 = zmm0.q
int32_t arg_8
arg_8.q = rax_23
int32_t arg_c =
    divs.dp.d(sx.q(1 << ((not.d(rcx_3 << 0x1a s>> 0x1f)).b & (0x20 - r10))), (r8_1 u>> 0x20).d)
*arg2 = divs.dp.d(sx.q(rax_23.d), rbx).q
int64_t rax_30 = divs.dp.d(sx.q((rcx_8 - 1).d + rbx), rbx).q
arg2[1] = rax_30

if (rax_30.d s>= 1)
    rcx_10 = rax_30.d

arg2[1].d = rcx_10

if (*(arg2 + 0xc) s>= 1)
    rsi = *(arg2 + 0xc)

*(arg2 + 0xc) = rsi
return arg2
