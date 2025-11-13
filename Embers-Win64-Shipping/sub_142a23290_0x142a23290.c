// 函数: sub_142a23290
// 地址: 0x142a23290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 && arg2 == 0)
    return zx.q((arg2 + 1).d)

arg1[2] = arg2 + arg3
int32_t rsi = 0
arg1[5] = arg5
arg1[3] = arg2
*arg1 = 0
*(arg1 + 0xc) = 0xfffffff8
arg1[1].d = 0xff
arg1[4] = arg4
sub_142a23140(arg1)
uint32_t rdi_3 = (arg1[1].d + 1) << 7 u>> 8

if (*(arg1 + 0xc) s< 0)
    sub_142a23140(arg1)

int64_t r8 = *arg1
uint64_t rcx_2 = zx.q(rdi_3) << 0x38

if (r8 u>= rcx_2)
    rsi = 1
    rdi_3 = arg1[1].d - rdi_3
    r8 -= rcx_2

uint32_t rdx = zx.d(*(zx.q(rdi_3) + &data_143603f00))
*(arg1 + 0xc) -= rdx
arg1[1].d = rdi_3 << rdx.b
*arg1 = r8 << rdx.b
return zx.q(rsi)
