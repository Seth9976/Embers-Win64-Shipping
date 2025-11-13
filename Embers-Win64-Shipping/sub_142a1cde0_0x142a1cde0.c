// 函数: sub_142a1cde0
// 地址: 0x142a1cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
int32_t r11 = arg3

if (arg1 == 0)
    return 0xfffffffe

int32_t r14_1 = (arg2 + 0xf) & 0xfffffff0
int32_t r15_1 = (arg3 + 0xf) & 0xfffffff0
int32_t rax = (rdi * 2).d
int32_t rcx_1 = r15_1 s>> 1
int32_t rsi_2 = (r14_1 + 0x1f + rax) & 0xffffffe0
int32_t r12_1 = rsi_2 s>> 1
int32_t r13_1 = (rax + r15_1) * rsi_2
uint64_t r8_1 = zx.q((rcx_1 + rdi.d) * r12_1)
int32_t rbp_1 = (r8_1 << 1).d + r13_1

if (*(arg1 + 0x58) == 0)
    r8_1 = zx.q(r8_1.d)
    r11 = arg3
    *(arg1 + 0x58) = sub_1429ddec0(0x20, sx.q(rbp_1))
    arg1[0x18] = rbp_1

int64_t r9 = *(arg1 + 0x58)

if (r9 == 0 || arg1[0x18] s< rbp_1)
    return 0xffffffff

if ((rdi.b & 0x1f) != 0)
    return 0xfffffffd

arg1[6] = rcx_1
arg1[2] = arg2
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2 + 1)
arg1[4] = rsi_2
arg1[7] = (temp1_1 - temp0_1) s>> 1
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(r11 + 1)
arg1[5] = r14_1 s>> 1
arg1[8] = (temp3_1 - temp2_1) s>> 1
int32_t temp4_1
int32_t temp5_1
temp4_1:temp5_1 = sx.q(rdi.d)
arg1[3] = r11
int32_t rax_14 = (temp5_1 - temp4_1) s>> 1
*arg1 = r14_1
*(arg1 + 0x38) = sx.q(rsi_2 * rdi.d) + r9 + rdi
arg1[1] = r15_1
arg1[9] = r12_1
*(arg1 + 0x28) = 0
arg1[0xc] = 0
int64_t rdx_6 = sx.q(rax_14 * r12_1) + r9 + sx.q(rax_14)
arg1[0x19] = rdi.d
int64_t rcx_8 = sx.q(r13_1)
arg1[0x1a] = rbp_1
*(arg1 + 0x50) = 0
arg1[0x22] = 0
*(arg1 + 0x40) = rdx_6 + rcx_8
*(arg1 + 0x48) = sx.q(r8_1.d) + rdx_6 + rcx_8
return 0
