// 函数: sub_1403e69d0
// 地址: 0x1403e69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40
uint32_t arg_8
sub_1403e7bd0(&arg_8, &var_40, arg2, arg5)
uint32_t var_48
int32_t var_44
sub_1403e7bd0(&var_48, &var_44, arg3, arg5)
int32_t rdx_2 = var_40
int32_t r8_2 = var_44
int32_t r14 = r8_2
int32_t r13 = 1

if (rdx_2 s> r8_2)
    r14 = rdx_2

int32_t r14_1 = r14 + (r14 & 1)
int32_t rax_2 = 1
var_48 s>>= r14_1.b - r8_2.b
int32_t rdx_4 = arg_8 s>> (r14_1.b - rdx_2.b)

if (rdx_4 s> 1)
    rax_2 = rdx_4

arg_8 = rax_2
int32_t rax_3 = sub_1403e8610(arg2, arg3, r14_1.b, arg5)
int32_t rax_4 = sub_1403e0590(rax_3, arg_8, 0xd)
int32_t rbp = 0x4000

if (rax_4 s<= 0x4000)
    rbp = rax_4
    
    if (rax_4 s< 0xffffc000)
        rbp = -0x4000

int32_t rdi_1 = sx.d(rbp.w)
int32_t rbx_4 = ((zx.d(rbp.w) * rdi_1) s>> 0x10) + (rbp s>> 0x10) * rdi_1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx_4)
int32_t rax_11 = (temp1 ^ temp0) - temp0

if (arg6 s> rax_11)
    rax_11 = arg6

char r14_2 = (r14_1 s>> 1).b
int32_t rsi_1 = sx.d(rax_11.w)
int16_t rax_14 = (sub_1403e49b0(arg_8) << r14_2).w - (*arg4).w
int32_t r10 = *arg4
int32_t rax_15 = sub_1403e49b0(arg_8)
uint32_t r8_4 = arg_8
*arg4 = (((rax_15 << r14_2) - r10) s>> 0x10) * rsi_1 + r10 + ((zx.d(rax_14) * rsi_1) s>> 0x10)
int32_t rcx_14 = sx.d(rbx_4.w)
int32_t rcx_18 = ((rcx_14 * (r8_4 s>> 0x10)) << 6) + var_48
    + ((zx.d(r8_4.w) * rcx_14) s>> 0x10 << 6) - ((zx.d(rax_3.w) * rdi_1) s>> 0x10 << 4)
    - (((rax_3 s>> 0x10) * rdi_1) << 4)
var_48 = rcx_18
int32_t rax_26 = sub_1403e49b0(rcx_18)
int32_t r10_1 = arg4[1]
int32_t rcx_23 = r10_1 + (((sub_1403e49b0(var_48) << r14_2) - r10_1) s>> 0x10) * rsi_1
    + ((zx.d((rax_26 << r14_2).w - (arg4[1]).w) * rsi_1) s>> 0x10)

if (*arg4 s> 1)
    r13 = *arg4

arg4[1] = rcx_23
int32_t rax_34 = sub_1403e0590(rcx_23, r13, 0xe)
*arg1 = rax_34

if (rax_34 s<= 0x7fff)
    if (rax_34 s< 0)
        rax_34 = 0
    
    *arg1 = rax_34
else
    *arg1 = 0x7fff

return zx.q(rbp)
