// 函数: sub_140b0ae80
// 地址: 0x140b0ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_8 = arg2
int64_t var_38 = 0
int32_t rax = 0
int32_t var_30 = 0
int64_t r15 = 0
int32_t var_2c = 0
int32_t rsi = 0
int64_t rdi = -1
int64_t rbx = -1

do
    rbx += 1
while ((*u"++UE4+Release-4.25")[rbx] != 0)

arg2 = zx.q(rbx.d + 1)

if (arg2.d s> 0)
    sub_1405947f0(&var_38, arg2.d)
    rax = var_2c
    rsi = var_30
    r15 = var_38

rsi += arg2.d

if (rsi s> rax)
    sub_140594770(&var_38)
    r15 = var_38

UnDecorator::getReferenceType(r15, u"++UE4+Release-4.25", arg2.d * 2)
int32_t rbx_2 = sbb.d(arg2.d, arg2.d, sub_1405949a0() != 0) & 0x80000000
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
arg1[2] = 0xdcca1d | rbx_2
*arg1 = 0x190004
arg1[1].w = 4

if (&arg1[4] != &var_38)
    int32_t r8_3 = arg1[7]
    arg1[6] = rsi
    
    if (rsi != 0 || r8_3 != 0)
        sub_1405a4c70(&arg1[4], rsi, r8_3)
        memcpy(*(arg1 + 0x10), r15, rsi * 2)
    else
        arg1[7] = 0

if (r15 != 0)
    sub_140a74f90(r15)

var_38 = 0
int32_t var_30_2 = 0
int32_t rax_3 = 0
int32_t var_2c_1 = 0
int64_t r14 = 0
int32_t rsi_1 = 0

do
    rdi += 1
while ((*u"++UE4+Release-4.25")[rdi] != 0)

if (rdi.d + 1 s> 0)
    sub_1405947f0(&var_38, rdi.d + 1)
    rax_3 = var_2c_1
    rsi_1 = var_30_2
    r14 = var_38

rsi_1 += rdi.d + 1

if (rsi_1 s> rax_3)
    sub_140594770(&var_38)
    r14 = var_38

int16_t rcx_3 = UnDecorator::getReferenceType(r14, u"++UE4+Release-4.25", (rdi.d + 1) * 2)
int32_t rbx_5 = sbb.d(0x42e507e0, 0x42e507e0, sub_1405949a0() != 0) & 0x80000000
char rax_5 = sub_1405949a0()
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
arg1[8] = 0x190004
arg1[0xa] = 0xc89141 | rbx_5
arg1[9].w = sbb.w(rcx_3, rcx_3, rax_5 != 0) & 4

if (&arg1[0xc] != &var_38)
    int32_t r8_8 = arg1[0xf]
    arg1[0xe] = rsi_1
    
    if (rsi_1 != 0 || r8_8 != 0)
        sub_1405a4c70(&arg1[0xc], rsi_1, r8_8)
        memcpy(*(arg1 + 0x30), r14, rsi_1 * 2)
    else
        arg1[0xf] = 0

if (r14 != 0)
    sub_140a74f90(r14)

return arg1
