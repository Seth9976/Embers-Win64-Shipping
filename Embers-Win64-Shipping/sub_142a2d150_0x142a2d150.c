// 函数: sub_142a2d150
// 地址: 0x142a2d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbp = arg5
int64_t rcx = sx.q(*(zx.q(arg1) + arg2))
int32_t rax_3

if (rcx.d s> 0)
    int64_t var_28_1 = rbp
    rax_3 = sub_142a2d150(rcx)
    arg3 = arg_18
else
    rax_3 = *(arg4 - (rcx << 2))

arg5.d = rax_3
int64_t rcx_3 = sx.q(*(zx.q(arg1 + 1) + arg2))
int32_t rax_4

if (rcx_3.d s> 0)
    rax_4 = sub_142a2d150(rcx_3, arg2, arg3, arg4, rbp)
else
    rax_4 = *(arg4 - (rcx_3 << 2))

uint64_t rdi_1 = zx.q(arg1) u>> 1
char r11 = *(rdi_1 + arg_18)
uint64_t rcx_6 = zx.q(arg5.d)
int32_t r10_3 = rax_4 + rcx_6.d

if (r10_3 == 0)
    *(rdi_1 + rbp) = r11
    return zx.q(r10_3)

uint64_t rax_6 = 0x14

if (r10_3 u< 0x14)
    rax_6 = zx.q(r10_3)

int32_t r9_1 = *(&data_143604000 + (rax_6 << 2))
uint32_t temp0 = (divu.dp.q(0:((zx.q(r10_3) u>> 1) + (rcx_6 << 8)), zx.q(r10_3))).d
int32_t rcx_11
rcx_11.b = temp0 == 0
*(rdi_1 + rbp) = ((zx.d(r11) * (0x100 - r9_1)
    + (zx.d(((0xff - temp0) s>> 0x17).b) | zx.d(temp0.b) | rcx_11) * r9_1 + 0x80) s>> 8).b
return zx.q(r10_3)
