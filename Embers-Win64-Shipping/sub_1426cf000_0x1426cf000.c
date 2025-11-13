// 函数: sub_1426cf000
// 地址: 0x1426cf000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg2 + 0x28)
uint64_t rbp = 0
uint64_t var_50 = 0
int64_t rsi = 0
int32_t var_44 = 0
uint64_t r15 = 0
int32_t r12 = arg3
int64_t rbx = *(r13 + 0x40)

if (&var_50 != arg4)
    rsi = sx.q(arg4[1].d)
    int64_t rdi_1 = *arg4
    int32_t var_48_1 = rsi.d
    
    if (rsi.d != 0)
        sub_1405c4a00(&var_50, rsi.d, 0)
        rbp = var_50
        memcpy(rbp, rdi_1, (rsi << 3).d)
        r15 = rbp
        r12 = arg3
        rsi = zx.q(var_48_1)

int64_t rdi_2 = sx.q(*(arg5 + 0x118))
int32_t rax = (rdi_2 + 1).d
*(arg5 + 0x118) = rax

if (rax s> *(arg5 + 0x11c))
    sub_1405c4f50(arg5 + 0x110)

void** rdi_5 = rdi_2 * 0x30 + *(arg5 + 0x110)
*rdi_5 = r13
rdi_5[1] = 0
rdi_5[2].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&rdi_5[1], rsi.d, 0)
    memcpy(rdi_5[1], r15, rsi.d << 3)
else
    *(rdi_5 + 0x14) = 0

rdi_5[5].d &= 0xfffffffe
int32_t var_30
int32_t result = var_30 & 1
rdi_5[3].d = r12
rdi_5[5].d |= result
rdi_5[4] = rbx

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
